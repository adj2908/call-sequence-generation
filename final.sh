gcc -finstrument-functions -g -c -o main.o $1
# using -finstrument-functions it will call the profile functions whenever function call is invoked
# profiling functions defined in trace.c
gcc -c -o trace.o trace.c
gcc main.o trace.o -o main
./main
./readtracelog.sh main trace.out