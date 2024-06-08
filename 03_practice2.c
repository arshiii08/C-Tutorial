#include <stdio.h>
int main (){
    int physics, chemistry, maths;
    int total_percentage;

    printf ("Enter physics marks\n");
    scanf ("%d",  &physics);

    printf ("Enter chemistry marks\n");
    scanf ("%d",  &chemistry);

    printf ("Enter maths marks\n");
    scanf ("%d",  &maths);

    total_percentage= (physics+chemistry+maths)/3;

    if ((total_percentage<40) || physics<33 || chemistry<33 || maths<33){
        printf ("Your total percentage is %d and you have failed\n", total_percentage);
    }
    else {
        printf ("Your total percentage is %d and you have passed\n", total_percentage);
    }
    return 0;
}