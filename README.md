# Linux KeyLogger
 
 Кейлоггер для линукса. Из зависимостей вам понадобится только ```cmake``` для сборки проекта (сами разберётесь как установить)

 ## Building

 Для того, чтобы вся эта шайтан-машина заработала, вам необходимо сделать следующие шаги:  
 1. С помощью терминала зайти в директорию, в которой находится данный проект (cd <путь>)  
2. mkdir build  
3. cd build  
4. cmake ..  
5. make  

## Running

**Для запуска у вас уже должен быть собран проект!!!**  
В директории "build" вам необходимо прописать ```sudo ./main```
 (без sudo работать не будет)  
Логи клавиш автоматически сохраняются в файл keylog.txt, который находится в той же директории, где вы и запускали файл *main*  
**Для того, чтобы выключить кейлоггер, вам необходимо нажать клавишу Escape**  
*Небольшой ~~баг~~ фича: Caps Lock тоже выключает кейлоггер, хер его знает почему так происходит*


## License

Вы можете свободно использовать/распространять это программное обеспечение без указания автора.