#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int kvadrati(int *ptr){
    *ptr = *ptr * *ptr;
    return *ptr;
}

int main(){

    system("cls");
    int n;
    printf("Son kiriting: ");
    scanf("%d", &n);
    int *ptr = &n;

    printf("%d ", kvadrati(&n));



    return 0;
}