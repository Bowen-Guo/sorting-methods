def swap(a, i, j):
    t = a[i]
    a[i] = a[j]
    a[j] = t

def selectionSort(a):
    n = len(a)
    for i in range(n-1):
        minloc = i
        for j in range(i+1,n):
            if a[j]<a[minloc]:
                minloc = j
        swap(a, i, minloc)

A = [6, 5, 3, 1, 8, 7, 2, 4]
print (A)
selectionSort(A)
print (A)
