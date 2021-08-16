from collections import Counter
arr = list(map(int, input().split()))
print(Counter(arr).most_common(3))
