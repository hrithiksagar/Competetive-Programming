"""
Can we have a set with 18 (int) and "18" (Str) As a values in it?
"""
s = {18, "18", 18.1}
print(len(s))
print(s)
# set accepts all data types int,str, boolean, float
z = set()
z.add(20)
z.add(20.0)
z.add("20")
print(len(z))
print(z)
# 20.0 in set assumes its 20 not 20.0
x = {}
print(type(x))  # <class 'dict'>
y = set()
print(type(y)) #<class 'set'>

