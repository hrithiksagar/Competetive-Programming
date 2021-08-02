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
        elif a[i]> second: # if ele is in btw first and second then update scond
            third = second
            second = a[i]
        elif a[i]> third:
            third = a[i]
    print(first, second, third)


arr = [12, 13, 1, 10, 34, 1]
n = len(arr)
ThreeLargestnumbers(arr, n)
