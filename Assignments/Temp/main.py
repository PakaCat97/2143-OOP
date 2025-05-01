import json
from rich import print
print ("hello world")

with open("candy_full.json") as f:
    candies = json.load(f)

#print (candies)
for candy in candies:
    print (float(candy["price"][1:]))