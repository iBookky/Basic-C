#include <stdio.h>
int arr[] = {5,12,18,20,39,40,100,120};
int cnt = sizeof(arr)/sizeof(arr[0]);

int binarySearchFunction(int target) {
  int found = 0;
  int start = 0;
  int last = cnt-1;
  while (start <= last) {
    int mid = (start + last)/2;
    if (arr[mid] == target){
      found = 1;
      break;
    }else if (arr[mid] < target){
      start = mid + 1;
    }else{
      last = mid - 1;
    }
  }
  return found;
}

void printfData(){
  for(int i = 0;i < cnt;i++){
    printf("%d\t",arr[i]);
  }
  printf("\n");
}

int main(void){
  int target;
  printfData();
  printf("Number >> ");
  scanf("%d",&target);

  int found = binarySearchFunction(target);

  if(found != 0){
    printf("Found %d in this array\n", target);
  }else{
    printf("Not found !!!\n");
  }
  return 0;
}
