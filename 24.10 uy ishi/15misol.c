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
    
    int box = 1;
    for(int i = 0; i < n; i++){
        box *=arr[i];
    }
    int *BOX = &box;
    printf("BOX = %d ", *BOX);

    return 0;
}




