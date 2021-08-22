## 1
# # displaying user entered name followed after good afternoon using input
# a = input()
# print("Good Afternoon "+ a)

#
# # 2
# # WAP to fill in letter template given below with name and date
# # leter = ''' Dear <|name|> ,
# #               you are Selected!
# #               <|Date|> '''
#
# name = input("Enter name: ")
# date = input("Enter Date: ")
# letter = "Dear " + name + ", \n You are Selected! \n "+date
# print(letter)

# # 3
# # WAP to detect double Spaces in a string
# str = "This is a string with double  spaces"
# doubleSpace = str.find("  ")
# print(doubleSpace)
# newsinglespace =str.replace("  "," ")
# print(newsinglespace)

# 5
# WAP to format the following letter using espace sequence characters
letter = "Dear Harry, This Python course is nice. Thanks!"
print(letter)
formatted = "Dear Harry,\n \tThis Python course is nice. \n Thanks!"
print(formatted)
