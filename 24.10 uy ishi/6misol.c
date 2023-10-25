#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int max(int *a, int *b){
    
    if(*a > *b){
        *b = *a;
    }else if (*b > *a) *a = *b;

    printf("%d  %d ", *a, *b);

}

int main(){

    system("cls");
    int n, m;
    printf("2 ta son kiriting: ");
    scanf("%d%d", &n, &m);
    
    max(&n, &m);

    
    return 0;
}