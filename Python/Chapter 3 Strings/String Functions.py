story = "Once upon a time there was a Youtuber named Harry who uploaded python course with notes"
print(story[0:6])
print(len(story))               # 87 : returns length of the string
print(story.endswith("notes"))  # returns true or false if its ending with that specific string
print(story.count("O"))         # 1 as there is only 1 O
print(story.count("a"))         # 6 as there are 6 a's
print(story.count("wa"))        # 1 as theres only 1 wa
print(story.capitalize())       # capitalizes 1st letter as capital and rest all small
print(story.find("harry"))      # -1 means its not exists and always gives first occurance
print(story.find("Once"))       # 0 means first element
print(story.find("upon"))       # 5 means fifth element
print(story.replace("Harry","Hrithik")) # Once upon a time there was a Youtuber named Hrithik who uploaded python
# course with notes
# replaces all occurances
