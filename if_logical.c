#include <stdio.h>
int main (){
    int age;
    int vipPass=0;
    

    printf("Enter your age\n");
    scanf ("%d", &age);

    if ((age<=70 && age>=18) || vipPass==1)
    {
        printf ("You are above 18 and less than 70, you can drive\n");
    }

    else {
        printf ("You cannot drive\n");
    }
return 0;
}