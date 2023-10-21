# include <stdio.h>
# include <time.h>
# include <math.h>
# include <stdlib.h>

void fill_array(int arr[], int len);
void find_out(int arr[], int len);
int main(){
    srand(time(NULL));
    system("cls");

    int n;
    printf("N indeksni kiriting: ");
    scanf("%d", &n);
    int arr[n];
        fill_array(arr, n);
        find_out(arr, n);

    return 0;
}

void fill_array(int arr[], int len){
    for(int i = 0; i < len; i++){
        arr[i] = -100 + rand() % (100 - (-100) + 1);
    }
    for(int i = 0; i < len; i++){
        printf("%d  ", arr[i]);
    }
    puts("");
}

void find_out (int arr[], int len){
    int count = 0;
    for(int i = 0; i < len; i++){
        if (arr[i] >=0)
        {
            printf("%d ", arr[i]);
            count++;
        }
    }

    for(int i = 0; i < len; i++){
        if(arr[i] < 0){
            printf("%d ", arr[i]);
        }
    }
    puts("");
    printf("Musbat sonlar %d ta ", count);
}

