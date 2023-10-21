# include <stdio.h>
# include <time.h>
# include <math.h>
# include <stdlib.h>

void fill_array(float arr[], int len);
void buble_sort(float arr[], int len);

int main(){
    srand(time(NULL));
    system("cls");

    int n;
    printf("N indeksni kiriting: ");
    scanf("%d", &n);
    float arr[n];
        fill_array(arr, n);
        buble_sort(arr, n);
    printf("Max + min = %f + %f = %f", arr[n-1], arr[0], arr[n-1] + arr[0]);

    return 0;
}

void fill_array(float arr[], int len){
    for(int i = 0; i < len; i++){
        arr[i] = -152 + rand() % (250 - (-152) + 1);
    }
    for(int i = 0; i < len; i++){
        printf("%f  ", arr[i]);
    }
    puts("");
}

void buble_sort(float arr[], int len){
    for(int i = 0; i < len; i++){
        for(int j = i+1; j < len; j++){
            if(arr[i] > arr[j]){
                float box = arr[i];
                arr[i] = arr[j];
                arr[j] = box;
            }
        }
    }
    for(int i = 0; i < len; i++){
        printf("%f ", arr[i]);
    }
    puts("");
}