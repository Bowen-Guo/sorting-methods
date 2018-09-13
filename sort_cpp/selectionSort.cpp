#include <iostream>
using namespace std;

void swap(int *A, int i, int j){
  int t = A[i];
  A[i] = A[j];
  A[j] = t;
};

void selectionSort(int *A, int n){
  for (int i=0;i<n;i++){
    int minloc = i;
    for (int j=i+1;j<n;j++){
      if (A[j]<A[minloc])
        minloc = j;
    }
    swap(A, minloc, i);
  }
};

int main()
{
  int A[10] = {1,2,9,4,5,10,7,6,8,3};
  int n = 10;
  for (int i=0; i<n; i++){
    cout << A[i] << endl;
  }

  selectionSort(A, n);

  for (int i=0; i<n; i++){
    cout << A[i] << endl;
  }
}
