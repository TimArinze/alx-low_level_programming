dynamic libraries
1. gcc -c *.c -fpic for .o(object files)
2. gcc *.o -shared -o libdynamic.so
3. gcc -c main.c -o main.o
4. gcc -o main main.o -L. -libdynamic ""for  linkng""
5. ./main
6. Either sudo cp lib_calc.so /usr/lib
7. or pwd then that present working directory
copy the path
export LD_LIBRARY_PATH=:/home/ubuntu/programs/dynamic_library
