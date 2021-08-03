"""
Rearrange array in alternating positive & negative items with O(1) extra space
Given an array of positive and negative numbers, arrange them in an alternate fashion such that every positive number is followed by negative and vice-versa maintaining the order of appearance.
Number of positive and negative numbers need not be equal. If there are more positive numbers they appear at the end of the array. If there are more negative numbers, they too appear in the end of the array.
Input:
    arr[] = {1, 2, 3, -4, -1, 4}
Output:
    arr[] = {-4, 1, -1, 2, 3, 4}

Input:
    arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}
output:
    arr[] = {-5, 5, -2, 2, -8, 4, 7, 1, 8, 0}
Approach:
    solved using O(n) extra space is allowed.
    idea:
    --> process away from left to right.
    while processing, first the first out of place ele in the remaining unprocessed array.
    --> ele is out of place if -ve ele at odd index (or) Positive ele at even index
    after finding out of place ele, we then find first element after it with opposite sign
    then rotate subarray btw these 2 elements including these 2

"""


def rotate(arr, n, outofplace, cur):
    temp = arr[cur]
    for i in range(cur, outofplace, -1):
        arr[i] = arr[i-1]
    arr[outofplace] = temp
    return arr


def rearrange(arr, n):
    outofplace = -1
    for index in range(n):
        if(outofplace >= 0):
            #if ele at outofplace place in negative and if ele at index
