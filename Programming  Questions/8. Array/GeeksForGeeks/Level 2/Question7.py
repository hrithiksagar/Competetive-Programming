"""
finding first repeating element in array of integers
basically given:
list of integers
task: find ele that occurs more than once and whose index of first
occurence is smallest
i.e. lets understand by example
Input:  
arr[] = {10, 5, 3, 4, 3, 5, 6}
Output: 
5 [5 is the first element that repeats]

Input:  
arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10}
Output: 
6 [6 is the first element that repeats]
1st sol:
using nested loops
time complexity = O(n2)
2nd Solution:
time complexity : O(nLogn)
this is:
using sorting algorithm
1. copy given array to auxiliary array temp[]
2. sort array using any O(nLogN) time complx algorithm
3. scan array from left to right.
    count its occurence in temp[]
    using binary search.
    once we find ele taht occurs more than once
    return that element
    hence, this can be done in O(nLogn) time

3rd Sol:
using hashing
time: O(n) : Average
method: traverse from right to left
        and update minimum index whenever we find an element that has been visited on right side
"""


# implimentation of method 3:
# hashing
# def FirstRepeating(arr, n):
#     min = -1  # initializing index of first repeating element
#     myset = dict()  # creating empty hashset
#     for i in range(n - 1, -1, -1):  # traversing array form right to left range(start, stop, step) so here
#         # range(n-1, -1,-1) n-1 = from end i.e. right most ele
#         #                    -1 = stop ele i.e left most ele
#         #                    -1 = go backwards each ele i.e 10 9 8 7 6 5 4 3 2 1.... (example)
#         if arr[i] in myset.keys():  # if ele is already in hashset:  update min
#             min = i  # updating min
#         else:  # this is what we need:
#             myset[arr[i]] = 1  # update this with true if element is not presrnt
#     if min != -1:
#         print("first repeating ele = ", arr[min])
#     else:
#         print("No repeating ele")


# Solving qs 7 without additional data structures
# only by using only arrays
def FirstRepeating(arr, n):
    k = 0  # this will set k = 1 if any repeated elements found
    maximum = n  # maximum from all the elements
    for i in range(n):
        if maximum < arr[i]:
            maximum = arr[i]
    # array a is for sorting, 1st time occurance of elem
    # initialized by 0
    a = [0 for i in range(maximum + 1)]
    # store 1 in array b if ele is duplicate initialized by 0
    b = [0 for i in range(maximum + 1)]
    for i in range(n):  # if duplicate ele found
        if (a[arr[i]]):
            b[arr[i]] = 1
            k = 1
            continue
        else:
            a[arr[i]] = i  # sorting 1st occurance of arr[i]
    if k == 0:
        print("No repeating")
    else:
        min = maximum + 1
        for i in range(maximum + 1):
            if a[i] and (min > (a[i])) and b[i]:
                min = a[i]
        print(arr[min])


# other approach using python inbuilt
def repeating(a, n):
    for i in range(len(a)):
        if a.count(a[i]) > 1:
            return a[i]
    return "No repetation"


arr = [10, 7, 4, 4, 3, 5, 6]
n = len(arr)
FirstRepeating(arr, n)
print(repeating(arr, n))
