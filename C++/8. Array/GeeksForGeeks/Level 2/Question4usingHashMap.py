def duplicate(arr, n):
    arr_output = []
    hashmap = {}
    for ele in arr:
        indexcount = hashmap.get(ele)
        if indexCount:
            hashmap[ele] = indexcount+1
        else:
           hashmap[ele] = 1
    for key, value in hashmap.items():
      if(value>1):
         arr_output.append(key)
    if len(arr_output) == 0:
        arr_output.append(-1)
    else:
        arr_output.sort()
    
    return arr_output

t = int(input())
for i in range(t):
n = int(input())
arr = list(map(int, input().strip().split()))
res = duplicate(arr, n)
for i in res:
    print(i,end=" ")
    print()