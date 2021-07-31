def duplicate(arr,n):
    for i in range(0,n):
        index = arr[i] % n
        arr[index] += n
    for i in range(0,n):
        if(arr[i]/n) >= 2:
            print(i, end =" ")

arr = [1,2,2,3,4,5,5,6,6]
n = len(arr)
duplicate(arr,n)
