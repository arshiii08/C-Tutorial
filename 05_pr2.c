// Write a function to convert celsius temperature into farenheit.
#include <stdio.h>
float temperature (float cel);

int main (){
    float cel;
    printf ("Enter the temperature in celsius\n");
    scanf ("%f", &cel);
    printf ("Temperature in farenheit is %f\n", temperature(cel));
    return 0;
}

float temperature (float cel){
    float far;
    far=(float)(cel*9/5)+32;
    return far;
}