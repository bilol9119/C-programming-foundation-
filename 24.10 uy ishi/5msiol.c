#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int teskari(float *ptr){
    
    return *ptr;
}

int main(){

    system("cls");
    float n;
    printf("float tipida  son kiriting: ");
    scanf("%f", &n);
    float *ptr = &n;

    printf("%d  ", teskari(&n));

    return 0;
}