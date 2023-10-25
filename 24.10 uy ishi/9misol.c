#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int middle(int *a, int *b, int *c){
    int box = *b;
    if(*a > *b && *a < *c){
        *b = *a;
        *a = box;
    }else if (*c > *a && *c < *b) {
        *b = *c;
        *c = box;
    }   
    printf("%d  %d  %d", *a, *b, *c);

}

int main(){

    system("cls");
    int n, m, l ;
    printf("3 ta son kiriting: ");
    scanf("%d%d%d", &n, &m, &l);
    
    middle(&n, &m, &l);

    return 0;
}