
# /**
#  * @brief Union and Intersection of two sorted arrays
# https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/
#  * Given two sorted arrays, find their union and intersection.
# Example:
# Input : arr1[] = {1, 3, 4, 5, 7}
#         arr2[] = {2, 3, 5, 6}
# Output : Union : {1, 2, 3, 4, 5, 6, 7}
#          Intersection : {3, 5}
# Input : arr1[] = {2, 5, 6}
#         arr2[] = {4, 6, 8, 10}
# Output : Union : {2, 4, 5, 6, 8, 10}
#          Intersection : {6}

#  */

# def union(arr1, arr2):
#         m = arr1[-1]  # this gives size of the array
#         n = arr2[-1]  # same even this gives size of array
#         ans = 0
#         if m > n:
# 			ans = m
# 		else:
# 			ans = n
# 		# now lets find ele from 1st array, which are non duplicate. 
# 		# and use other array to store union ele of both the arrays
# 		# assuming max elem present in array is no more than 10^7
# 	newtable = [0]*(ans + 1)
# 	print(arr1[0], end = " ")        
#     # Incrementing the First element's count
#     # in it's corresponding index in newtable
#     newtable[arr1[0]] += 1

# 		for i in range(1, len(arr1)):
# 			if arr1 != arr1[i-1]:
# 				print(arr1[i], end = " ")
# 				newtable[arr1[i]] += 1
# 		# Finding only non common
#     	# elements from 2nd array        
#     	for j in range(0, len(arr2)):
         
#         # By checking whether it's already
#         # present in newtable or not
#         	if newtable[arr2[j]] == 0:
         
#         	    print(arr2[j], end = " ")
#         	    newtable[arr2[j]] += 1




# if __name__ == "__main__":
# 	arr1= [1,2,3,4,5,6]
# 	arr2= [4,5,6,7,8,9]
# 	union(arr1,arr2)
def UnionArray(arr1, arr2):
     

    ans = 0
         
    if m > n:
        ans = m
    else:
        ans = n
         
    # Finding elements from 1st array
    # (non duplicates only). Using
    # another array for storing union
    # elements of both arrays
    # Assuming max element present
    # in array is not more than 10 ^ 7
    newtable = [0] * (ans + 1)
         
    # First element is always
    # present in final answer
    print(arr1[0], end = " ")
         
    # Incrementing the First element's count
    # in it's corresponding index in newtable
    newtable[arr1[0]] += 1
         
    # Starting traversing the first
    # array from 1st index till last
    for i in range(1, len(arr1)):
         
        # Checking whether current element
        # is not equal to it's previous element
        if arr1[i] != arr1[i - 1]:
             
            print(arr1[i], end = " ")
            newtable[arr1[i]] += 1
             
    # Finding only non common
    # elements from 2nd array        
    for j in range(0, len(arr2)):
         
        # By checking whether it's already
        # present in newtable or not
        if newtable[arr2[j]] == 0:
             
            print(arr2[j], end = " ")
            newtable[arr2[j]] += 1
def printIntersection(arr1, arr2, m, n):
	i, j = 0, 0
	m = len(arr1)
	n = len(arr2)
    while i < m and j < n:
        if arr1[i] < arr2[j]:
            i += 1
        elif arr2[j] < arr1[i]:
            j+= 1
        else:
            print(arr2[j])
            j += 1
            i += 1
# Driver Code
if __name__ == "__main__":
     
    arr1 = [1, 2, 2, 2, 3]
    arr2 = [2, 3, 4, 5]
	    # Taking max element present in either array
    m = len(arr1)
    n = len(arr2)
    UnionArray(arr1, arr2)
	printIntersection(arr1, arr2, m, n)

# intersection using c;
