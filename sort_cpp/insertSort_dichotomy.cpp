#include <iostream>
using namespace std;

void insertSort_dichotomy(int *A, int n){
  for (int i=1;i<n;i++){
    int left = 0, right=i;
    int mid = (left+right)/2;
    int target = A[i];
    while (left<=right){
      if (A[i] < A[mid])
        right = mid - 1;
      else
        left = mid + 1;
    }
    for (int j=right;j<=left;j--){
      A[j+1] = A[j];
    }
    A[left] = target;
  }
};

int main()
{
  int A[10] = {1,2,9,4,5,10,7,6,8,3};
  int n = 10;
  for (int i=0; i<n; i++){
    cout << A[i] << endl;
  }

  insertSort_dichotomy(A, n);

  for (int i=0; i<n; i++){
    cout << A[i] << endl;
  }
}
