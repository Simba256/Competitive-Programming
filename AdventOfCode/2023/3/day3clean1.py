# Specify input and output file names
input_file = 'output1.txt'
output_file = 'output2.txt'

# Read data from the input file
with open(input_file, 'r') as file:
    data = file.read()

# Split the data into lines
lines = data.split('\n')

# Count the occurrences of each coordinate
coordinate_counts = {}
for line in lines:
    if 'Coordinates:' in line:
        coordinates = line.split('Coordinates: ')[1]
        coordinate_counts[coordinates] = coordinate_counts.get(coordinates, 0) + 1

# Filter lines where the coordinate repeats more than once
filtered_lines = [line for line in lines if 'Symbol: *' in line and coordinate_counts[line.split('Coordinates: ')[1]] > 1]

# Join the filtered lines into a string
result = '\n'.join(filtered_lines)

# Write the result to the output file
with open(output_file, 'w') as file:
    file.write(result)

print(f"Filtered and cleaned data has been written to {output_file}.")
