#include <stdio.h>
int main (){
    int i,n, sum=0; n=10;

    for (i=0; i<=10; i++){
        sum=sum+i;
    }
    printf ("The value of sum (1 to 10): %d", sum);
    return 0;
}