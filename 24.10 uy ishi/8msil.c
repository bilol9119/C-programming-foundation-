#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int arif(int *a, int *b){
    
    float box = (float) (*a + *b) / 2;
    
    printf("%f ", box);

}

int main(){

    system("cls");
    int n, m;
    printf("2 ta son kiriting: ");
    scanf("%d%d", &n, &m);
    
    arif(&n, &m);

    
    return 0;
}