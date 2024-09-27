import random
import time

def generate_random_numbers(count, num_dict):
    for i in range(count):
        num = random.randint(1, 500) # generate random number between 1 and 500
        # print(num, end=' ')
        num_dict[num] = num_dict.get(num, 0) + 1 # add number to dictionary or increment count if already present
    # print()
    # time.sleep(1) # wait for 1 second before calling again

# create an empty dictionary to store the numbers generated so far
num_dict = {}
count = 0
av = 0
mi = 10000
mix = 0
# call the function 5 times
for j in range(460,500):
    av = 0
    count = 0
    for i in range(100):
        num_dict = {}
        while(len(num_dict)<j):
            generate_random_numbers(17, num_dict)
            count += 1
            av += 1
    av = av/100
    if(av+(500-j)<mi+(500-mix)):
        mi = av
        mix = j

# print the dictionary of numbers and their counts
print(count)
print("av:",av/1000)
print("mi:",mi)
print("min:",mix)
