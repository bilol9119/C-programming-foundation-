# include <stdio.h>
# include <time.h>
# include <math.h>
# include <stdlib.h>

void fill_array(int arr[], int len);
void buble_sort(int arr[], int len);
void check_out(int arr[], int len);

int main(){
    srand(time(NULL));
    system("cls");

    int n;
    printf("N indeksni kiriting: ");
    scanf("%d", &n);
    int arr[n];
        fill_array(arr, n);
        buble_sort(arr, n);
        check_out(arr, n);

    return 0;
}

void fill_array(int arr[], int len){
    for(int i = 0; i < len; i++){
        printf("Arrayning %d qiymatiga son kiritng: ", i);
        scanf("%d", &arr[i]);
    }
    puts("");
}

void buble_sort(int arr[], int len){
    for(int i = 0; i < len; i++){
        for(int j = i+1; j < len; j++){
            if(arr[i] < arr[j]){
                int box = arr[i];
                arr[i] = arr[j];
                arr[j] = box;
            }
        }
    }
    for(int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }
    puts("");
}
void check_out(int arr[], int len){
    int count = 0;
    if(len % 2 == 0){
        for(int i = 0; i < len; i+=2){
            if(arr[i] % 2 == 0){
                count++;
            }
        }
        if(count == len/2){
            for(int i = 1; i < len; i+=2){
                if(arr[i] % 2 != 0){
                    count++;
                }
            }
            if(count == len){
            printf("True");
        }else printf("False");
        }else printf("False");
    }
    else {
        for(int i = 0; i < len; i+=2){
            if(arr[i] % 2 != 0){
                count++;
            }
        }
        if(count == len/2 + 1){
            for(int i = 1; i < len; i+=2){
                if(arr[i] % 2 == 0){
                    count++;
                }
            }
        if(count == len){
            printf("True");
        }else printf("False");
        }else printf("False");
    }       
}