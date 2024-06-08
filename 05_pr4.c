// Write a program using recursion to calculate nth element of fibonacci series.
#include <stdio.h>
int fib (int n);

int main (){
    int n;
    printf ("Enter the value of n\n");
    scanf ("%d", &n);
    for (int i=0; i<n; i++){
        printf ("%d\n", fib(i));
    }
    return 0;
}

int fib (int n){
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else {
        return fib(n-1)+fib(n-2);
    }
    }
