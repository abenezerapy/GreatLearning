norm_string = input("Enter The String : ")

secret_string = ""

for i in norm_string:
    secret_string += str(ord(i))

print(secret_string, end=" ") 