"""
1
WAP to create a dict of hindi words with values of their eng translations provide user with an option to look it up!
"""
myDict = {
    "panka": "Fan",
    "Dabba": "Box",
    "Vastu": "Item"
}
print("Options are: ", myDict.keys())
a = input("enter hindi word: ")
#print("meaning of ur word is : ", myDict[a])
# to avoid erros
print("meaning of ur word is : ", myDict.get(a))
