def merge(A, left, mid, right):
	 A_op = []
	 i = left
	 j = mid+1
	 while (i<=mid) and (j<=right):
		  if A[i] < A[j]:
				A_op.append(A[i])
				i = i + 1
		  else:
				A_op.append(A[j])
				j = j + 1
 
	 #put the tail in the behind
	 while (i<=mid):
		  A_op.append(A[i])
		  i = i + 1
	 while (j<=right):
		  A_op.append(A[j])
		  j = j + 1

	 for i in range(right-left+1):
		  A[i+left] = A_op[i] 

	 #print (A)
	 

def mergeRecursive(A, left, right):
	 if (left==right):
		  return

	 #print (A)
	 mid = (int) (left+right)/2
	 # merge the left side
	 mergeRecursive(A, left, mid)
	 # merge the right side
	 mergeRecursive(A, mid+1, right) 
	 merge(A, left, mid, right)

def mergeIteration(A):
	 l = len(A)
	 i = 1  # number in the left sequence
	 while (i<=l-1):		  
		  left = 0; right = min(2*i-1, l-1); mid = i-1
		  print (right)
		  while (right <= l-1):
				merge(A, left, mid, right)
				left = left + 2*i 
				right = right + 2*i
				mid = mid + 2*i
		  i = i * 2
		  print (A)


#A = range(10, 0, -1)
A = [6, 5, 3, 1, 8, 7, 2, 4]
print (A)
#mergeRecursive(A, 0, 9)
mergeIteration(A)
#print (A)
