def insertionSort(a):
    n = len(a)
    for i in range(1,n):
        j = i-1
        insert = a[i]
        # 插入位置为I，那么a[I]>insert and a[I-1]<=insert
        while j>=0 and a[j]>insert:
            a[j+1] = a[j]
            j=j-1
        a[j+1] = insert


A = [6, 5, 3, 1, 8, 7, 2, 4]
print (A)
insertionSort(A)
print (A)
