#include <iostream>
using namespace std;

void swap(int *A, int i, int j){
  int t = A[i];
  A[i] = A[j];
  A[j] = t;
};

void bubbleSort(int *A, int n){
  for (int i=0;i<n;i++){
    for (int j=0;j<n-i;j++){
      if (A[j]>A[j+1])
        swap(A, j, j+1);
    }
  }
};


int main()
{
  int A[10] = {1,2,9,4,5,10,7,6,8,3};
  int n = 10;
  for (int i=0; i<n; i++){
    cout << A[i] << endl;
  }

  bubbleSort(A, n);

  for (int i=0; i<n; i++){
    cout << A[i] << endl;
  }
}
