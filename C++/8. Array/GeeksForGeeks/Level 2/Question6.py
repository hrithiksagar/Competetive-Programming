
#  * @file Question6.cpp
#  * Find common elements in three sorted arrays
#  * Given three arrays sorted in non-decreasing order, print all common elements in these arrays.
#  * Basically printing common elements
#  * !Ex:
#  * Input: 
# ar1[] = {1, 5, 10, 20, 40, 80} 
# ar2[] = {6, 7, 20, 80, 100} 
# ar3[] = {3, 4, 15, 20, 30, 70, 80, 120} 
# Output: 20, 80
# ======
# Input: 
# ar1[] = {1, 5, 5} 
# ar2[] = {3, 4, 5, 5, 10} 
# ar3[] = {5, 5, 10, 20} 
# Output: 5, 5

def common(arr1, arr2, arr3,n1,n2,n3):
    i=0
    j=0
    k = 0
    while(i<n1 and j<n2 and k<n3):
        if(arr1[i] == arr2[j] and arr2[j] == arr3[k]):
            print(arr1[i])
            i += 1
            j += 1
            k += 1
        # if x<y
        elif(arr1[i]<arr2[j]):
            i+=1
        elif(arr2[j] < arr3[k]):
            j+= 1
        else:
            k += 1

arr1 = [1, 5, 10, 20, 40, 80]
arr2 = [6, 7, 20, 80, 100]
arr3 = [3, 4, 15, 20, 30, 70, 80, 120]
n1 = len(arr1)
n2 = len(arr2)
n3 = len(arr3)
print("Common elements are")
print(common(arr1, arr2, arr3, n1, n2, n3))