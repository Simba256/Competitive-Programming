# Specify the path to your text file
file_path = "day4.txt"

# Open the file in read mode
res = 0
output_file_path = "outt.txt"
with open(file_path, 'r') as file:
    with open(output_file_path, 'w') as output_file:

    # Read each line one by one
        for line in file:
            # Process each line as needed
              # Stripping '\n' from each line, adjust as necessary
            numbers = [int(num) for num in line.strip().split(':')[1].split('|')[0].split()]
            ans = 0
            for x in line.strip().split(':')[1].split('|')[1].split():
                if int(x) in numbers:
                    ans += 1
            output_file.write(str(ans))
            output_file.write('\n')
            if ans:
                res += pow(2,ans-1)
print(res)