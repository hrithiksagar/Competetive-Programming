# def countTriplets(arr, n, m):
#     count = 0
#
#     # Consider all triplets and count if
#     # their product is equal to m
#     for i in range(n - 2):
#         for j in range(i + 1, n - 1):
#             for k in range(j + 1, n):
#                 if (arr[i] * arr[j] * arr[k] == m):
#                     count += 1
#     return count
#
#
# # Driver code
# # if __name__ == "__main__":
# # arr = [1, 4, 6, 2, 3, 8]
# # m = 24
#
#
# n = int(input())
# arr = list(map(int, input().split()))
# m = int(input())
# print(countTriplets(arr, n, m))
def countTriplets(arr, n, m):
    count = 0

    # Consider all triplets and count if
    # their product is equal to m
    for i in range(n - 2):
        for j in range(i + 1, n - 1):
            for k in range(j + 1, n):
                if arr[i] * arr[j] * arr[k] == m:
                    count += 1
    return count


# n= int(input())
# arr = input()
# arr=list(map(int,arr.split(" ")))
n = input()
arr = []
for i in range(int(n)):
    arr.append(int(input()))

print(countTriplets(arr, len(arr), n))