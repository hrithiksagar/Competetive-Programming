"""
1. WAP to find greatest of four Numbers entered by user:

2. WAp to find out weather a student is pass or fail, iof it requires total 40% and atleast 33%
in each sub, to pass. Assume 3 Sub and take marks as an input from user

3. A spam comment is defined as a text contanising following keywords:
"Make a lot of money", "Buy now","Suscribe this", "Click this",
WAP to detect these spams

4. WAP to find wheater a given udername contains less than 10 characters or not

5. WAP which finds out wheater a given name is present in a list or not



"""

#1 sol
num1 = int(input("Enter Number 1: "))
num2 = int(input("Enter Number 2: "))
num3 = int(input("Enter Number 3: "))
num4 = int(input("Enter Number 4: "))

if num1>num4:
    f1 = num1
else:
    f1 = num4

if num2>num3:
    f2 = num2
else:
    f2= num1

if f1>f2:
    print("Greatest number is: "f1)
else:
    print("Greatest number is: "f2)







