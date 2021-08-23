# collection of key value pairs
# dictionary is UNORDERED, MUTABLE, INDEXED, Cant contain dublicate keys
# ime complexity to access : O(logN)
# syntax
myDict = {
    "fast": "In a quick manner",
    "hrithik": "Learning to code",
    "marks": [1, 2, 5],
    "another Dictionary":
        {
            'key': 'this returns value of inside dictionary'
        }
}
print(myDict['fast'])  # prints corresponding value to this key i.e  In a quick manner is returned
print(myDict['hrithik'])  # Learning to code
print(myDict['marks'])  # [1,2,5]
print(myDict['another Dictionary']['key'])  # student # this is another dictionary key's "Value"
# prints:
# another Dictionary = Key of main dic
# key = key of another dictionary
# changing values of marks
myDict['marks'] = [1, 10]
print(myDict)


