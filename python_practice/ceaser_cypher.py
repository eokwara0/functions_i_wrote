                #++++++++++++++++++++++++++++++++++++++#
                #++++++++++++++++  CYPHER +++++++++++++#
                #++++++++++ By -> Emokwara ++++++++++++#

                   #$$$$$$$$$$$$$ Rotate characters in a string by a key or number
                   #$$$$$$$$$$$$$
                   #$$$$$$$$$$$$$ THANK YOU



# initilization of ascii  values
as_a = 0
as_z = ord('z')

# user input
str_ = input('\n')
key = int(input('\n'))
string = ''


# rotchar rotates the characters by key

def rotchar_(char,num_key):
    num = num_key%26
    num_a= (ord(char) + num)
    if num_a > 122:  # more maths
        num_a-=26
    num_e = as_z - num_a # more maths

    indexofel = as_z - num_e #
    if indexofel > 0:
        actual_l = as_a + indexofel
        return chr(actual_l) # returns rotated character


# rotchar for uppercase letters
def rotchara_(char,num_key):
    # gets the key
    num = num_key%26
    num_a= (ord(char) + num)
    if num_a > 90:
        num_a-=26
    num_e = ord('Z') - num_a

    indexofel = ord('Z') - num_e
    if indexofel > 0:
        actual_l = as_a + indexofel
        return chr(actual_l) #returns

# NUMBER ROTATION

def num_rot(num,num_k):
    ascii_val = ord(num) +(num_k%10)

    if ascii_val > 57: #
        ascii_val = ascii_val - 10
        return(chr(ascii_val))
    else:
        return chr(ascii_val)


for x in str_:
    if ord(x) >= ord('a') and ord(x) <= ord('z'):
        x = rotchar_(x,key)
        string += x

    elif ord(x) >= ord('0') and ord(x) <= ord('9'):
        x = num_rot(x,key)
        string += x
    elif ord(x) >= ord('A') and ord(x) <= ord('Z'):
        x = rotchara_(x,key)
        string += x
    else:
        string +=x
print(string) # prints


""" 
    Eg input: All-convoYs-1-bee:Alert1
            : 4
            
    OUTPUT -> Epp-gsrzsCw-5-fii:Epivx5
    
    
    TO DECRYPT : INPUT ENCRYPTED TEXT WITH
                -4

"""
