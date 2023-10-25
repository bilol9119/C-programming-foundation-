#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int teskari(int *ptr){
    
    *ptr = (*ptr % 10)*10 + *ptr / 10;

    return *ptr;
}

int main(){

    system("cls");
    int n;
    printf("2 xonali son kiriting: ");
    scanf("%d", &n);
    int *ptr = &n;

    printf("%d  ", teskari(&n));

    return 0;
}