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
        arr[i] = -15 + rand() % (8 - (-15) + 1);
    }
    for(int i = 0; i < len; i++){
        printf("%d  ", arr[i]);
    }
    puts("");
}

void find_out (int arr[], int len){
    int k = 0;
    int j = 0;
    int odd[len];
    int even[len];
    for(int i = 0; i < len; i++){
        if (arr[i] % 2 == 0)
        {
            even[k++] = arr[i];
        }
        else if(arr[i] % 2  != 0) {
            odd[j++] = arr[i];
        }
    }
    printf("Even[] = ");
    for(int i = 0; i < k; i++){
        printf("%d ", even[i]);
    }
    puts("");
    printf("Odd[] = ");
    for(int i = 0; i < j; i++){
        printf("%d ", odd[i]);
    }
}

