a = 34          #int
b = "Hrithik"   #string
print(type(a))  #int
print(type(b))  #string
greeting = "Hello"
name = "Hrithik"
#concatinating 2 strings
c = greeting+" " +name
print(c)
#       0123456
print(name[0])
#print(name[7])#IndexError: string index out of range
# can gon upto 0-len(name)
# cant change string
#name[3] = "t" #TypeError: 'str' object does not support item assignment


#slicing
print(name[0:3])#Hri
print(name[1:3])#ri
print(name[:])#Hrithik
print(name[:4])#Hrit same as name[0:4]
#Negative indexes are:
#-1 is the last character
#-2 is the second last character
#-3 is the third last character.....
#-len(name) is the first character
#-len(name)+1 is the second character
#
print(name[:-1])#hrithi
print(name[-1])#k
print(name[-1:5])#k
          #my name in reverse order  
         
#3 parameteres
print(name[1:4:1])#ri
print(name[::-1])#kihtirh
print(name[::2])#hihk
print(name[::-2])#khih
print(name[::3])#htk

print()