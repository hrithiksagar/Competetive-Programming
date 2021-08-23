myDict = {
    "fast": "In a quick manner",
    "hrithik": "Learning to code",
    "marks": [1, 2, 5],
    "another Dictionary": {'key': 'this returns value of inside dictionary'},
    1: 2
}

print(myDict.keys())  # prints all the keys of this dictionary
print(type(myDict.keys()))  # <class 'dict_keys'>
print(myDict.values())  # dict_values(['In a quick manner', 'Learning to code', [1, 2, 5], {'key': 'this returns value
# of inside dictionary'}, 2])
print(type(myDict.values()))  # <class 'dict_values'>
print(myDict.items())  # prints all (key, Values) of the dictionary
# dict_items([('fast', 'In a quick manner'), ('hrithik', 'Learning to code'), ('marks', [1, 2,
# 5]), ('another Dictionary', {'key': 'this returns value of inside dictionary'}), (1, 2)])

print(myDict)
updateDict = {"Lovish": "Friend"}
myDict.update(updateDict)
print(myDict)
