// What will the following line produce in C program.
#include <stdio.h>
int main (){
    int a=3;
    printf ("%d %d %d\n", a, ++a, a++); //right to left precedence
    return 0;
}