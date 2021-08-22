a = [1, 2, 4, 56, 6]
#    0  1  2  3   4     index
print(a)
print(a[1])
a[0] = 98
print(a)

# we can make lists with items of different numbers
c = [45, "hrithik", False, 6.9]
#    int    str     boolean   float
# can do slicing also
print(c[1])

friends = ["Hrithik", "Aashray", "Tuiba", "Bingi", "Afreen", 420]
print(friends[0:7])
print(friends[-4:])
# print(friends.sort()) # error
l1 = [1,4,45,2,45,1,3,6]
print(l1)
l1.sort()
print("sorted: ",l1)
l2 = l1
print(l2)
l2.reverse()
print("Reveresed: ", l2)

