def swap(a, i, j):
    t = a[i]
    a[i] = a[j]
    a[j] = t

def partition(a, left, right):
    pivot = a[right]
    p_index = left
    for i in range(left, right):
        if a[i] < pivot:
            swap(a, i, p_index)
            p_index = p_index + 1
    swap(a, p_index, right)
    return p_index

def quickSort(a, left, right):
    if left>=right:
        return
    p_index = partition(a, left, right)
    quickSort(a, left, p_index-1)
    quickSort(a, p_index+1, right)

A = [6, 5, 3, 1, 8, 7, 2, 4]
print (A)
quickSort(A,0,len(A)-1)
print (A)
