#include <stdio.h>
int arr[] = {3,2,6,1,7};
int cnt;
void printArr(){
  for(int i = 0;i < cnt;i++){
      printf("%d\t",arr[i]);
  }
  printf("\n");
}
int main(){
    int j,temp;
    cnt = sizeof(arr)/sizeof(arr[0]);
    printArr();
    for(int i = 1;i <= cnt-1;i++){
        temp = arr[i];
        j = i-1;
        while((temp < arr[j])&&(j >= 0)){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = temp;
        printArr();
    }
    return 0;
}
