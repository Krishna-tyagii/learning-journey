#Ques-1 - Print reverse of a number.


# cheetah=121
# ori=121
# rev=0
# while ori>0:
#     digit = ori%10
    
#     rev = (rev*10)+digit
#     ori=ori//10
# print(rev)

# if rev==cheetah:
#     print("true")
# else:
#     print("false")


# import numpy as np
# a=np.array([[1,2,3,4,5,6,7],
#             [1,2,3,4,4,5,6]])
# print(a)

# import numpy as np
# a=np.arange(2,10,3)
# print(a)

# import numpy as np

# a = np.array([1, 2, 3])
# b = np.array([4, 5, 6])

# c = np.hstack((a, b))


# print(c)


import numpy as np
# print(np.arange(1,10,1))
# print(np.linspace(0,10,2))
# print(np.eye(3))

# arr = np.array([1, 2, 3, 4, 5, 6]).reshape(2, 3)
# print(arr)
# a=np.array([1,2,3,4])
# b=np.array([2,23,4,5])
# # print(np.concatenate((a,b)))
# # print(np.vstack((a,b)))
# # print(np.split(a,2))
# print(np.append(a,[1,2,3,4,5,6,6,7]))
# Dice roll (10 throws)



# print(np.random.randint(0, 100, (3, 3)))

np.random.choice(['H', 'T'], size=5, p=[0.7, 0.3])

# # Choice without repetition (like a lottery)
# np.random.choice(np.arange(1, 50), 6, replace=False)

# # Random array, then mean and std
# x = np.random.normal(100, 15, 1000)
# print(x.mean(), x.std())
print(np.random.choice(['H', 'T'], size=5, p=[0.7, 0.3]))