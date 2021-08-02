# /**
#  * @file ZerosOnesAndTwosSegrigation.cpp
#  * ! Burte Force
#  *lets divide it into 3 parts : Lower/ mid/ upper
#  * todo: 0s: 1 - (lower-1)   : red   : if its out of this range, swap to lower range, thus shrinking unkown range
#  * todo: 1s: lower - (mid-1) : white : follow same here also
#  * todo: unknown mid - hi    :       :
#  * todo: 2s: (hi+1) - n      : Blue  : if its 2 then swap to high range
#  * ! Approach: 
#  * * Initializing: 
#  * low  = 1
#  * mid  = 1
#  * high = n
#  * has 4 ranges:
#  * 1. 1 - low
#  * 2. low to mid
#  * 3. mid to high
#  * 4. high to n
#  * if ele = 0; update it with: low += 1; and mid += 1;
#  * if ele = 1; update it with: mid += 1;
#  * if ele = 2; then, swap element with ele at highest index and update high; high -= 1 and i -= 1 as swapped ele is not processed
#  * print output array
#  * * Dry Run:
#  * ! Case 1: 
#  * a[mid] is White, mid++
#  * ! Case 2:  
#  * a[mid] = blue, swap a[mid] and a[high] then high++
#  * continue until Mid > high
#  * 
#  */

def sort012(a, n):
    low = 0
    mid = 0
    high = n-1
    while mid<= high:
        if a[mid] == 0:
            a[low], a[mid] = a[mid], a[low]
            low += 1
            mid += 1
        elif a[mid] == 1:
            mid += 1
        else:
            a[mid], a[high] = a[high], a[mid]
            high -= 1
    return a

# function to print array
def printArray(a):
    for k in a:
        print(k)

arr = [0,1,1,0,1,2,1,2,0,0,0,1]
n = len(arr)
arr = sort012(arr, n)
print("Array after segrigating:") 
printArray(arr)