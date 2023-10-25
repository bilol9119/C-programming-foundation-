#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void buble_sort(int arr[], int len);

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
    buble_sort(arr, n);
    int *Max = &arr[n-1];
    printf("Max %d   ", *Max);

    return 0;
}

void buble_sort(int arr[], int len){

    for(int i = 0; i < len; i++){
        for(int j = i + 1; j < len; j++){
            if(arr[i] > arr[j]){
                int box = arr[i];
                arr[i] = arr[j];
                arr[j] = box;
            }
        }
    }
    puts("");


}


