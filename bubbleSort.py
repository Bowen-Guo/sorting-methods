def swap(a, i, j):
    t = a[i]
    a[i] = a[j]
    a[j] = t

def bubbleSort(a):
    n = len(a)
    for i in range(n-1):
        for j in range(n-1-i):
            if a[j]>a[j+1]:
                swap(a,j,j+1)

A = [6, 5, 3, 1, 8, 7, 2, 4]
print (A)
#mergeRecursive(A, 0, 9)
bubbleSort(A)
print (A)
