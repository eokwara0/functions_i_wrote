# pig latin function
words = input().split(' ');s = ""
for word in words: #for loop to ilterate over values in list and convert to strings
    s = s + str(word[1:]) + str(word[0]) + "ay "
print(s)
