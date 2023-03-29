#include <stdio.h>

void printArr(int *arr, int size){
    for(int i=0;i<size;i++){
        printf("%d,",arr[i]);
    }
}

int *inSort(int *arr, int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

int main(){
    int nums[10] = {12,9,0,34,43,123,56,234,67,1};
    printArr(inSort(nums,10), 10);
    return 0;
}
