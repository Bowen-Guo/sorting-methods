def insertSort_dichotomy(a):
    n = len(a)
    for i in range(1,n):
        insert = a[i]
        left = 0
        right = i-1
        while left <= right:
            mid = (left + right)/2
            if a[mid]<insert:
                left = mid + 1
            else:
                right = mid - 1

        for j in range(i-1, left-1, -1):
            a[j+1] = a[j]
        a[left] = insert

A = [6, 5, 3, 1, 8, 7, 2, 4]
print (A)
insertSort_dichotomy(A)
print (A)
