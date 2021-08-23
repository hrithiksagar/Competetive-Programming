# doesnt shows repetitive elements
# set is collections of non repetitive elements
# sets unordered, unindexed, no way tio change itenms inside in sets, cant contain duplicate elemnents
a = {1, 3, 4, 5, 1, 1, 3, 5, 6, 1}
print(a)  # prints only unique elements
print(type(a))  # <class 'set'>

# empty set
b = {}
print(type(b))  # <class 'dict'>
# this will make empty dict not empty set
# to make empty set use this below syntax
c = set()
print(type(c))  # <class 'set'>

# methods:

# set.add(element that we want to add)
c.add(4)
c.add(1)
c.add(5)
c.add(5) # adding a value repetedly doesnt change set
c.add(6)
# c.add([7,8]) # gives error as cant add list into set
c.add((1,2,3))
# c.add({4:5}) # cant add dict also its not hashable # TypeError: unhashable type: 'dict'
print(c)
print(len(c)) # prints length of the set
c.remove(5) # removes 5 from set c
# c.remove(15) # throws error as 15 is not in the set
print(c)
print(len(c))
c.pop() # removes random value from the set
print(c)
c.clear()
c.union()
c.intersection()

