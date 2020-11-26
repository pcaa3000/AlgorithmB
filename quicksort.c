#include<stdio.h>

void swap(int* val1, int* val2){
    int temp=*val1;
    *val1=*val2;
    *val2=temp;
}

int partition(int arr[], int low, int high){
    int pivot=arr[high];
    int i=low-1;
    for (int j = low; j < high; j++)
    {
        if (arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }        
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quicksort(int arr[], int low, int high){
    if (low<high){
        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}

int main(int argc, char const *argv[])
{
    int arr[]={1992, 1990, 10, 5, 6, 100, 0, 1, -10};
    int n= sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
