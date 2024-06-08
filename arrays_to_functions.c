#include <stdio.h>
void printArray(int arr[], int n);

int main (){
    int arr[]= {1,2,3543,34,3,645,23};
    printArray(arr, 7);
    return 0;
}

// void printArray (int *ptr, int n){
//     for (int i=0; i<n; i++){
//         printf ("The value of element %d is %d\n", i+1, *(ptr+i));
//     }

void printArray (int arr[], int n){
    for (int i=0; i<n; i++){
        printf ("The value of element %d is %d\n", i+1, arr[i]);
    }
    arr[2]= 5555; //This value will be changed in main array as well 
}