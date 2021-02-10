#include <linux/input-event-codes.h>

//#define STRINGIFY(x) #x

// CODE must be an KEY_<X>
// All keys definds in <linux/input-event-codes.h>
char getCharByCode(int code) {
    /*            it doesn't work correctly :(
    char* key = STRINGIFY(code);
    return key;
    */
    char symbol;
    switch (code) {
    case KEY_1:
        symbol = '1';
        break;
    case KEY_2:
        symbol = '2';
        break;
    case KEY_3:
        symbol = '3';
        break;
    case KEY_4:
        symbol = '4';
        break;
    case KEY_5:
        symbol = '5';
        break;
    case KEY_6:
        symbol = '6';
        break;
    case KEY_7:
        symbol = '7';
        break;
    case KEY_8:
        symbol = '8';
        break;
    case KEY_9:
        symbol = '9';
        break;
    case KEY_0:
        symbol = '0';
        break;
    case KEY_A:
        symbol = 'a';
        break;
    case KEY_B:
        symbol = 'b';
        break;
    case KEY_C:
        symbol = 'c';
        break;
    case KEY_D:
        symbol = 'd';
        break;
    case KEY_E:
        symbol = 'e';
        break;
    case KEY_F:
        symbol = 'f';
        break;
    case KEY_G:
        symbol = 'g';
        break;
    case KEY_H:
        symbol = 'h';
        break;
    case KEY_I:
        symbol = 'i';
        break;
    case KEY_J:
        symbol = 'j';
        break;
    case KEY_K:
        symbol = 'k';
        break;
    case KEY_L:
        symbol = 'l';
        break;
    case KEY_M:
        symbol = 'm';
        break;
    case KEY_N:
        symbol = 'n';
        break;
    case KEY_O:
        symbol = 'o';
        break;
    case KEY_P:
        symbol = 'p';
        break;
    case KEY_Q:
        symbol = 'q';
        break;
    case KEY_R:
        symbol = 'r';
        break;
    case KEY_S:
        symbol = 's';
        break;
    case KEY_T:
        symbol = 't';
        break;
    case KEY_U:
        symbol = 'u';
        break;
    case KEY_V:
        symbol = 'v';
        break;
    case KEY_W:
        symbol = 'w';
        break;
    case KEY_X:
        symbol = 'x';
        break;
    case KEY_Y:
        symbol = 'y';
        break;
    case KEY_Z:
        symbol = 'z';
        break;
    case KEY_DOT:
        symbol = '.';
        break;
    case KEY_COMMA:
        symbol = ',';
        break;
    case KEY_QUESTION:
        symbol = '?';
        break;
    case KEY_SPACE:
        symbol = ' ';
        break;
    default:
        symbol = '\0';
        break;
    }
    return symbol;
}

// returns keyCode for pressing.
// CH must be a [a-z] or [0-9]
// LETTERS MUST BE LOWER CASE!!!
int getCodeByChar(char ch) {
    int code;
    switch (ch) {
    case '1':
        code = KEY_1;
        break;
    case '2':
        code = KEY_2;
        break;
    case '3':
        code = KEY_3;
        break;
    case '4':
        code = KEY_4;
        break;
    case '5':
        code = KEY_5;
        break;
    case '6':
        code = KEY_6;
        break;
    case '7':
        code = KEY_7;
        break;
    case '8':
        code = KEY_8;
        break;
    case '9':
        code = KEY_9;
        break;
    case '0':
        code = KEY_0;
        break;
    case 'a':
        code = KEY_A;
        break;
    case 'b':
        code = KEY_B;
        break;
    case 'c':
        code = KEY_C;
        break;
    case 'd':
        code = KEY_D;
        break;
    case 'e':
        code = KEY_E;
        break;
    case 'f':
        code = KEY_F;
        break;
    case 'g':
        code = KEY_G;
        break;
    case 'h':
        code = KEY_H;
        break;
    case 'i':
        code = KEY_I;
        break;
    case 'j':
        code = KEY_J;
        break;
    case 'k':
        code = KEY_K;
        break;
    case 'l':
        code = KEY_L;
        break;
    case 'm':
        code = KEY_M;
        break;
    case 'n':
        code = KEY_N;
        break;
    case 'o':
        code = KEY_O;
        break;
    case 'p':
        code = KEY_P;
        break;
    case 'q':
        code = KEY_Q;
        break;
    case 'r':
        code = KEY_R;
        break;
    case 's':
        code = KEY_S;
        break;
    case 't':
        code = KEY_T;
        break;
    case 'u':
        code = KEY_U;
        break;
    case 'v':
        code = KEY_V;
        break;
    case 'w':
        code = KEY_W;
        break;
    case 'x':
        code = KEY_X;
        break;
    case 'y':
        code = KEY_Y;
        break;
    case 'z':
        code = KEY_Z;
        break;
    default:
        code = -1;
        break;
    }
    return code;
}