// WAP to count the occurences of a given character in a string
#include <stdio.h>

int occurence (char st[], char c){
    int count=0;
    while (*st!='\0'){
        if (*st==c){
            count++;
        }
        st++;
    }
    return count;
}

int main (){
    char st[]= "Harry";
    int count = occurence (st, 'r');
    printf ("Occurence= %d", count);
    return 0;
}