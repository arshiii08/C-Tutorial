// WAP to create an array of 10 integers and store the multiplication table of 5 in it 
#include <stdio.h>
int main (){
    int mul[11];
    for (int i=1; i<=10; i++){
        mul[i]=5*i;
        printf ("5 X %d = %d\n", i, mul[i]);
    }
    return 0;
}