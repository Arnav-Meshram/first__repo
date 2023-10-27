string=input(" please enter your string ")
temp=""
for i in string:
    if i in "aeiouAEIOU":
        print(temp)
        temp=""
    if i not in "aeiouAEIOU":
        temp=temp+i
print(temp) 
#pythonliseasy
        
