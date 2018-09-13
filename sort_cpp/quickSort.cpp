#include <iostream>
using namespace std;

void swap(int *A, int n, int i, int j){
  int t = A[i];
  A[i] = A[j];
  A[j] = t;
};

int partition(int *A, int n, int left, int right){
  int target = A[right];
  int tail = left;
  for (int i=left;i<right;i++){
    if (A[i]<=target){
      swap(A, n, i, tail);
      tail ++;
    }
  }
  swap(A, n, tail, right);
  return tail;
};

void recursion(int *A, int n, int left, int right){
  if (left >=right)
    return;

  int index = partition(A, n, left, right);

  recursion(A, n, left, index-1);
  recursion(A, n, index+1, right);
};

void quickSort(int *A, int n){
  int left = 0; int right = n-1;
  recursion(A, n, left, right);
};

int main()
{
  int A[10] = {1,2,9,4,5,10,7,6,8,3};
  int n = 10;
  for (int i=0; i<n; i++){
    cout << A[i] << endl;
  }

  quickSort(A, n);

  for (int i=0; i<n; i++){
    cout << A[i] << endl;
  }
}
