"""
Create an empty dict.
allow 4 friends to enter thier fav lang as values and use keys as their names
assume that the names are  unique
IF names of 2 friends are same; what will happen?
If languages if two friends are smae what will happen?
"""

# favLang = {}
# a = input("enter ur fav lang Shubham: \n")
# b = input("enter ur fav lang Ankit: \n")
# c = input("enter ur fav lang Sonali: \n")
# d = input("enter ur fav lang Harshitha: \n")
# favLang['Shubham'] = a
# favLang['Ankit'] = b
# favLang['Sonali'] =c
# favLang['Harshitha'] =d
#
# print(favLang)


# qsn what if condition
favLang = {}
a = input("enter ur fav lang Shubham: \n")
b = input("enter ur fav lang Ankit: \n")
c = input("enter ur fav lang Shubham: \n")
d = input("enter ur fav lang Harshitha: \n")
favLang['Shubham'] = a
favLang['Ankit'] = b
favLang['Shubham'] =c
favLang['Harshitha'] =d
print(favLang)
# if Key value is present 2 times, then latest occurrence will be the updated on
