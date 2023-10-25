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
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum +=arr[i];
    }
    int *SUM = &sum;
    printf("SUM = %d ", *SUM);

    return 0;
}




