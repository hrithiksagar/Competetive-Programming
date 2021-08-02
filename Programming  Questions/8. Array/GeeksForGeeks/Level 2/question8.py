"""
Find the first non-repeating element in a given array of integers.
Examples:
Input : -1 2 -1 3 2
Output : 3
Explanation : The first number that does not
repeat is : 3
Input : 9 4 9 6 7 4
Output : 6
Sol1:
using two loops
outer loop: picks ele one by one
inner loop: checks if the ele is present more than once or not

"""


def FirstNonRepeating(a, m):
    for i in range(n):
        j = 0
        while j < n:
            if i != j and arr[i] == arr[j]:
                break
            j += 1
        if j == n:
            return arr[i]
    return -1


arr = [9, 4, 9, 6, 7, 4]
n = len(arr)
print(FirstNonRepeating(arr, n))
