#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    system("cls");
    int n = 13;
    int *ptr = &n;

    printf("%p\n", &n);
    printf("%p", ptr);



    return 0;
}