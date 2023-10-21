#include <stdio.h>
#include <math.h>
#include <time.h> 


void fill_array(int arr[], int len);
void output_arr(int arr[], int len );
int buble_sort(int arr[], int len);


int main(){
    system("cls");
    srand(time(NULL));
    int n;
    printf("N indeksni kiriting: ");
    scanf("%d", &n);
    int arr[n];
    fill_array(arr, n);
    output_arr(arr,n);
    printf("%d", buble_sort(arr, n));

    return 0;
}
void output_arr(int arr[], int len){
    for(int i = 0; i < len; i++){
        printf("%d  ", arr[i]);
    }
    puts("");
}


void fill_array (int arr[], int len){
    int start, stop;
    printf("Oraliqni kiriting: ");
    scanf("%d%d", &start, &stop);

    for(int i = 1; i < len; i++){
        arr[i] = rand() % (stop - start + 1) + start;
    }

}

int buble_sort( int arr[], int len){
    for(int i = 0; i < len; i++){
        for(int j = i + 1; j < len; j++){
            if(arr[i] > arr[j]) {
                int box = arr[i];
                arr[i] = arr[j];
                arr[j] = box;
            }
        }
    }

    for( arr[len-1]; ; len--){
        if( arr[len-1] > arr[ len - 2 ])
        {
            return arr[len-2];
        }
    }
}
