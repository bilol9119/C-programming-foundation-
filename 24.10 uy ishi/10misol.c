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
    int *min = &arr[0];

    printf("%d  \n", *min);
    return 0;
}