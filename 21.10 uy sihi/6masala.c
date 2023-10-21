# include <stdio.h>
# include <time.h>
# include <math.h>
# include <stdlib.h>

void fill_array(int arr[], int len);
void sort(int arr[], int len);

int main(){
    srand(time(NULL));
    system("cls");

    int n;
    printf("N indeksni kiriting: ");
    scanf("%d", &n);
    int arr[n];
        fill_array(arr, n);
        sort(arr, n);
        

    return 0;
}

void fill_array(int arr[], int len){
    for(int i = 0; i < len; i++){
        printf("Arrayning %d qiymatiga son kiritng: ", i);
        scanf("%d", &arr[i]);
    }
    puts("");
}

void sort(int arr[], int len){
    int count = 1;
    for(int i = 0; i < len; i++){
        if(arr[i] > arr[i+1]){
            count++;
        }
    }
    if(count == len){
        printf("True");
    }else printf("False");
}
