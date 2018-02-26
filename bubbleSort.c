#include <stdio.h>
int arr[] = {3,2,6,1,7};
int cnt;

// print all data
void printArr(){
  for(int i = 0;i < cnt;i++){
      printf("%d\t",arr[i]);
  }
  printf("\n");
}

int main(){
  int i, j, position, temp;
  cnt = sizeof(arr)/sizeof(arr[0]);
  printArr();
  for (i = 0 ; i < cnt - 1; i++){
    for (j = 0 ; j < cnt - i - 1; j++){
      if (arr[j] > arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
     printArr();
  }
  return 0;
}
