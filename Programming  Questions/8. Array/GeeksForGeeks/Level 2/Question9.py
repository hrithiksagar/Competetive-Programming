"""
Program to find largest element in an array
Difficulty Level : Basic
Given an array, find the largest element in it.
Example:
Input : arr[] = {10, 20, 4}
Output : 20

Input : arr[] = {20, 10, 20, 4, 100}
Output : 100
"""
def largest(arr, n):
    return max(arr)


arr = [10, 324, 45, 90, 9808]
n = len(arr)
print(largest(arr, n))
