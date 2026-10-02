#Ques-1 - Print reverse of a number.


cheetah=121
ori=121
rev=0
while ori>0:
    digit = ori%10
    
    rev = (rev*10)+digit
    ori=ori//10
print(rev)

if rev==cheetah:
    print("true")
else:
    print("false")