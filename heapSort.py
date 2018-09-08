def swap(a, i, j):
    t = a[i]
    a[i] = a[j]
    a[j] = t

def maxHeapify(a, i, heapSize):
    left = 2 * i + 1
    right = 2 * i + 2
    if left < heapSize and a[i]<a[left]:
        maxloc = left
    else:
        maxloc = i

    if right < heapSize and a[maxloc]<a[right]:
        maxloc = right

    if maxloc != i:
        swap(a, i, maxloc)
        maxHeapify(a, maxloc, heapSize)

def buildHeap(a):
    n = len(a)
    for i in range(n/2, -1, -1):
        maxHeapify(a, i, n)

def heapSort(a):
    buildHeap(a)
    n = len(a)
    heapSize = n
    #print (a)
    for i in range(n-1, 0, -1):
        swap(a, 0, i)
        heapSize = heapSize-1
        maxHeapify(a, 0, heapSize)

A = [6, 5, 3, 1, 8, 7, 2, 4]
print (A)
heapSort(A)
print (A)
