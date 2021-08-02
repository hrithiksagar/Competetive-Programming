"""
Question 10:
Find the largest three distinct elements in an array
Given an array with all distinct elements, find the largest three elements.
Expected time complexity is O(n) and extra space is O(1)
Input: arr[] = {10, 4, 3, 50, 23, 90}
Output: 90, 50, 23
Method 1:
1. Initialize largest 3 element with minus infinite
    fst = snd = trd = -infinite
2. Iterate through all elements of array
    a. let current ele be x
    b. if x> fst
           trd = snc
           snd = fst
           fst = x
       else: if x> second
           trd = snd
           snd = x
       else if: x> third
           trd = x
3. print fst, snd, trd.
"""
import sys


def ThreeLargestnumbers(a, m):
    if n < 3:
        print("Invalid")
        return
    third = first = second = -sys.maxsize
    for i in range(0, n):
        if a[i] > first:  # current ele is greater than first
            third = second
            second = first
            first = a[i]
        elif a[i] > second:  # if ele is in btw first and second then update scond
            third = second
            second = a[i]
        elif a[i] > third:
            third = a[i]
    print(first, second, third)

# method 2: an efficient way to solve this using 0(nlogn)
# Simply returning last 3 largest ele
def threelargestnumbers(ar,nm):
    ar = sorted(ar) # this uses tuned quicksort with avg case time nlogn
    check = 0
    count = 1
    for i in range(1, n+1):
        if count < 4:
            if check!=ar[n-i]:
                print(ar[n-i], end = " ")
                check = ar[n-i]
                count+=1
            else:
                break


arr = [12, 13, 1, 10, 34, 1]
n = len(arr)
print("Method 1")
ThreeLargestnumbers(arr, n)
print("Method 2")
threelargestnumbers(arr,n)
