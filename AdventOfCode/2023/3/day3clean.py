# Specify input and output file names
input_file = 'output.txt'
output_file = 'output1.txt'

# Read data from the input file
with open(input_file, 'r') as file:
    data = file.read()

# Split the data into lines
lines = data.split('\n')

# Filter lines where the symbol is '*'
filtered_lines = [line for line in lines if 'Symbol: *' in line]

# Join the filtered lines into a string
result = '\n'.join(filtered_lines)

# Write the result to the output file
with open(output_file, 'w') as file:
    file.write(result)

print(f"Filtered data has been written to {output_file}.")
