#include <stdio.h>

int sum (int x[], int y){
    int sum=0;
    for (int i=0; i<y; i++){
        sum+=x[i];
    }
    return sum;
}

int large (int arr[], int n){
    int max= arr[0];
    for (int i=0; i<n; i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return 1;
}

int main (){

    int arr[100];
    int n, i;
    
    printf ("Enter size of array:");
    scanf ("%d", &n);
    printf ("Enter elements:");
    for (int i=0; i<n; i++){
        scanf ("%d", &arr[i]);
    }
    int lar= large (arr,n);
    printf ("Largest number is %d", lar);
    return 0;
}