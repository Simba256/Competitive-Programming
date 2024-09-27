import os

def clean_input(input_data):
    grids = input_data.strip().split('\n\n')  # Split by empty lines
    num_grids = len(grids)
    cleaned_data = [str(num_grids)]

    for grid in grids:
        lines = grid.strip().split('\n')
        rows = len(lines)
        cols = len(lines[0])
        dimensions = f"{rows} {cols}"
        cleaned_data.extend([dimensions, grid])

    return '\n'.join(cleaned_data)

input_file_name = 'day13.txt'
input_file_path = os.path.join(os.path.dirname(__file__), input_file_name)

with open(input_file_path, 'r') as file:
    input_data = file.read()

# Process and clean the input data
cleaned_data = clean_input(input_data)

# Write the result to a file
output_file_path = 'c13.txt'
with open(output_file_path, 'w') as file:
    file.write(cleaned_data)

print("Cleaning and writing to file completed.")
