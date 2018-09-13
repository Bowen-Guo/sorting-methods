#include <iostream>
using namespace std;


void merge(int *A, int n, int left, int mid, int right){
  int c = 0;
  int i = left;
  int j = mid+1;

  int * A_op = new int[right-left+1];
  memcpy(A_op, &A[left], (right-left+1)*sizeof(int));

  while ((i<=mid) and (j<=right)){
    if (A[i]<A[j]){
      A_op[c] = A[i];
      i++;
    }
    else{
      A_op[c] = A[j];
      j++;
    }
    c++;
  }

  while (i<=mid){
    A_op[c] = A[i];
    c++; i++;
  }

  while (j<=right){
    A_op[c] = A[j];
    c++; j++;
  }
  memcpy(&A[left], A_op, (right-left+1)*sizeof(int));
  delete [] A_op;
}

void recursion(int *A, int n, int left, int right){
  if (left>=right){
    return;
  }
  int mid = (left+right)/2;
  recursion(A, n, left, mid);
  recursion(A, n, mid+1, right);
  merge(A, n, left, mid, right);
}


void mergeSort_recursion(int *A, int n){
  int left =  0;
  int right = n-1;
  recursion(A, n, left, right);
}

void mergeSort_iteration(int * A, int n){
  for (int i=1;i<n;i*=2){
    // i is the length of the sub-array
    int left = 0;

    while (left+i-1<n){
      int mid = left+i-1;
      int right;
      if (mid+i<n)
        right = mid+i;
      else
        right = n-1;
      merge(A, n, left, mid, right);
      left = right+1;
    }
  }
}

int main()
{
  int A[10] = {1,2,9,4,5,10,7,6,8,3};
  int n = 10;
  for (int i=0; i<n; i++){
    cout << A[i] << endl;
  }

  mergeSort_iteration(A, n);

  for (int i=0; i<n; i++){
    cout << A[i] << endl;
  }
}
