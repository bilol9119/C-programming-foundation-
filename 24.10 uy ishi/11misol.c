#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



int main(){

    system("cls");
    int n ;
    printf("Indeksga qiymat kiriting: ");
    scanf("%d", &n);
    int arr[n];
    

    for(int i = 0; i < n; i++){
        printf("Arrayning %d korsatkichiga qiymat bering: ", i);
        scanf("%d", &arr[i]);
    }
    int *a = &arr[n-1];
    printf("%d \n", *a);

    return 0;
}