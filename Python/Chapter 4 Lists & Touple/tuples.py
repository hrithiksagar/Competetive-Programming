# creating tuple
t = (1, 2, 4, 5, 1, 1, 1, 1, 1, 312454, 2, 3525, 245, 24, 3, 3, 3)

# printing ele of tuple
print(t[0])  # TypeError: 'tuple' object does not support item assignment
print(t[3])  # TypeError: 'tuple' object does not support item assignment

# cant update ele of tuple with new elements

# t[0] = 32
# print(t) # TypeError: 'tuple' object does not support item assignment

# tuple with 1 ele:
tone = (1,)  # Right way tuple with single ele
tonee = (1)  # wrong way to have single ele tuple
print(tone)
toneError = (1)
print(toneError)
t1 = ()  # empty tuple
print(t1)

# tuple methods
# count = returns occurance of values
print(t.count(1))  # total 6 ones

print(t.index(5)) # index num = 3
# see python.org for more tuple methods

