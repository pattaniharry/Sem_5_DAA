#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int target) {
  int low = 0;
  int high = size - 1;

  while (low <= high) {
    int mid = (low + high) / 2;

    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return - 1;
}

int main() {
int arr[]  = {1,3,4,65,76,86,99,100,2112};
int size = sizeof(arr)/sizeof(int);
int element = 99;

int result = BinarySearch(arr, size, element);
if(result!=1){
  cout<<"index no " <<result;
  
}

  else{
    cout<<"not found";
  }
  
return 0;
}
