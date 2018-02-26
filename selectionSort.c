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
   int i, j, position, temp;
   cnt = sizeof(arr)/sizeof(arr[0]);
   printArr();
   for (i = 0 ; i < cnt - 1  ; i++){
      position = i;
      for ( j = i + 1 ; j < cnt ; j++ ){
         if (arr[position] > arr[j])
            position = j;
      }
      if (position != i)  {
         temp = arr[i];
         arr[i] = arr[position];
         arr[position] = temp;
      }
      printArr();
   }
   return 0;
}
