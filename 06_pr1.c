#include <stdio.h>
int main (){
    int a=6;
    printf ("The address of a is %u\n", &a);
    printf ("The value of a is %u\n", *(&a));
 
   return 0;
}