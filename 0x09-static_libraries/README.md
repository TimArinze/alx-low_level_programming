0x09. C - Static libraries
Tasks
0. A static library libmy.a containing all the functions listed below
1. A script called create_static_lib.sh that creates a static library called liball.a from all the .c file that are in the current directory
then use 
gcc -c *.c
ar -rc *.o
