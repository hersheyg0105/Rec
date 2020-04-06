#include <stdio.h>

int subset (int arr[], int n, int k, int v){


    if (v != 0 && k == 0){
        return 0;
    }

    if (v == 0 && k == 0){
        return 1;
    }

    if (n == 0){
        return 0;
    }

    int one = 0;

    if (v >= arr[0]){
        one = subset(arr+1, n-1, k-1, v-arr[0]);
    }

    int two = subset(arr+1, n-1, k, v);

    return one + two > 0;
}


int main(void) {
    int arr[5] = {1, 8, 6, 4, 3};

    if (subset(arr, 5, 3, 9)){
        printf("TRUE");
    }else{
        printf("FALSE");
    }

    if (subset(arr, 5, 2, 9)){
        printf("TRUE");
    }else{
        printf("FALSE");
    }

    return 0;
}
