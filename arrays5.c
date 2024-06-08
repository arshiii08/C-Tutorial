// WAP containing a function which reverses the array passed to it 
#include <stdio.h>
void reverse (int arr[], int n);
int main (){
    int arr[]={1,2,3,4,5,6,7};
    reverse (arr, 7);
    for (int i=0; i<7; i++){
    printf ("Reversed array is %d\n", arr[i]);
    }
    return 0;
}

void reverse (int arr[], int n){
    int temp;
    for (int i=0; i<7/2; i++){
        temp=arr[i];
        arr[i]=arr [7-i-1];
        arr[7-i-1]=temp;

    }

}