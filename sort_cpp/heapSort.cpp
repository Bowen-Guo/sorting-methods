#include <iostream>
using namespace std;

void swap(int *A, int i, int j){
  int t = A[i];
  A[i] = A[j];
  A[j] = t;
};

void maxHeapify(int *A, int i, int heapSize){
  int left = 2*i+1; int right = 2*i+2;
  int maxloc;
  if ((left<heapSize) and (A[i]<A[left])){
    maxloc = left;
  }
  else{
    maxloc = i;
  }
  if ((right<heapSize) and (A[maxloc]<A[right])){
    maxloc = right;
  }
  if (maxloc!=i){
    swap(A, i, maxloc);
    maxHeapify(A, maxloc, heapSize);
  }
};

void buildMaxHeap(int *A, int n){
  for (int i=n/2; i>=0; i--){
    maxHeapify(A, i, n);
  }
};

void heapSort(int *A, int n){
  buildMaxHeap(A, n);
  int heapSize = n;
  for (int i=n-1;i>=0;i--){
    swap(A, 0, i);
    heapSize --;
    maxHeapify(A, 0, heapSize);
  }
};

int main()
{
  int A[10] = {1,2,9,4,5,10,7,6,8,3};
  int n = 10;
  for (int i=0; i<n; i++){
    cout << A[i] << endl;
  }

  heapSort(A, n);

  for (int i=0; i<n; i++){
    cout << A[i] << endl;
  }
}
