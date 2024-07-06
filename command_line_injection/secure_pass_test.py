import os
import re

user_input=input("Enter the password: ")
modified_input = re.sub(r'[&/]', r'\\', user_input)

os.system(f"./password {modified_input}")

print(modified_input)