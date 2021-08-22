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
l1 = [1, 4, 45, 2, 45, 1, 3, 6]
print(l1)

# list.sort()
l1.sort()
print("sorted: ", l1)
l2 = l1
print(l2)

# list.reverse()
l2.reverse()
print("Reveresed: ", l2)

# list.append(element)
l2.append(45)
print(l2)
l2.append(5775)
print(l2)

# list.insert(index, Element)
l2.insert(3, 8210350320)  # inserts at 3 a new number 8
print(l2)

# list.pop(index)
l2.pop(3)
print(l2)  # removed previously inserted element at index 3


# see all python list functions in "python docs" on google
