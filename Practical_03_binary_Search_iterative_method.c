#include <stdio.h>

int binarySearch(int arr[],int start_index,int end_index,int element){

  while(start_index <= end_index){
    int mid = start_index + (end_index - start_index)/2;

    if(arr[mid] == element){
      return mid;
    }else if (arr[mid] < element){
      start_index = mid + 1;
    }else{
      end_index = mid - 1;
    }
  }
  return -1;
}

int main(void) {
  int arr[] = {32,56,68,77,88,93};
  int element = 100;
  int n = 6;
  int index = binarySearch(arr,0,n-1,element);

  if(index == -1){
      printf("Searching element %d is not found",element);
  }else{
      printf("Searching element %d is found at index :- %d ",element,index);
  }

  return 0;
}
