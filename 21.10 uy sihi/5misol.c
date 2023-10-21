# include <stdio.h>
# include <time.h>
# include <math.h>
# include <stdlib.h>

void fill_array(float arr[], int len);
void buble_sort(float arr[], int len);
float find_multiply(float arr[], int len);
void output(float arr[], int len, float res);

int main(){
    srand(time(NULL));
    system("cls");

    int n;
    printf("N indeksni kiriting: ");
    scanf("%d", &n);
    float arr[n];
        fill_array(arr, n);
        buble_sort(arr, n);
    float res = find_multiply(arr, n);
    printf("2 chi maksimum va 3 chi minimum ko`paytmasi = %f \n", res);
        output(arr, n, res);

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

float find_multiply(float arr[], int len){
    float second;
    for(arr[len-1]; ; len--){
        if(arr[len-1] > arr[len-2] ){
            second = arr[len-2];
            break;
        }
    }
    float third;
    for(int i = 0; i < len ; i++){
        if(arr[i] < arr[i+1] && arr[i+1] < arr[i + 2]){
            third = arr[i+2];
            break;
        }
    }
    float res = second * third;
    return res;
}

void output(float arr[], int len, float res){
for(int i = 0; i < len; i++){
    if(i == 0){
        printf("%f ", res);
    }else printf("%f ", arr[i]);
}
}