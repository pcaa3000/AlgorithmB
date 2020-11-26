//Divide : Divide the n-element array into two n/2-element subarrays.
//Conquer : Sort the two subarrays recursively using merge sort
//Combine : Merge the two sorted subsequences to form the sorted array

#include<stdio.h>

int merge(int arr[],int l,int m,int h)
{
  int temp[h-l+1];
  int i=l,j=m+1, k=0;
  while (i<=m && j<=h)
  {
      if (arr[i]<=arr[j]) {
          temp[k]=arr[i];
          k++; i++;
      }
      else {
          temp[k]=arr[j];
          k++; j++;
      }
  }
  while (i<=m)
  {
      temp[k]=arr[i];
      k++; i++;
  }
  while (j<=h)
  {
      temp[k]=arr[j];
      k++; j++;
  }
  for (i = l; i <=h ; i++)
  {
      arr[i]=temp[i-l];
  }                             
  
  return 0;
}

int merge_sort(int arr[],int low,int high)
{
  int mid;
  if(low<high)
  {
    mid=(low+high)/2;
   // Divide and Conquer
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
   // Combine
    merge(arr,low,mid,high);
  }
  
  return 0;
}

int main()
{
  int n,i;
  /*
  printf("Enter the size of array,");  // input the elements
  scanf("%d",&n);
  int arr[n];       // array to be sorted
  printf("Enter the elements:");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  */
  int arr[]={3,94,86,82,90,10,87,36,61,8,17,15,22,10,23,78,25,2,30,45,98,43,98,59,53,57,2,64,1,41,32,58,19,99,60,74,48,80,44,25,68,1,89,77,60,25,99,30,76,32,57,82,52,44,72,87,34,87,65,30,54,6,31,33,44,44,42,82,90,17,9,98,28,86,69,3,17,8,45,98,12,47,95,43,72,39,41,82,74,56,65,79,50,26,67,100,24,67,38,57
  };
  n=sizeof(arr)/sizeof(arr[0]);
  merge_sort(arr,0,n-1);  // sort the array
  
  printf("Sorted array:");  // print sorted array
  for(i=0;i<n;i++)
    printf("%d, ",arr[i]);
  
  return 0;
}
