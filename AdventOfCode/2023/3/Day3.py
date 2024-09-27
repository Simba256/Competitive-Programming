def is_valid_coordinate(row, col, rows, cols):
    return 0 <= row < rows and 0 <= col < cols

def find_adjacent_sum_and_store(matrix, output_file):
    rows = len(matrix)
    cols = len(matrix[0])
    total_sum = 0

    with open(output_file, 'w') as output:
        i = 0
        while i < rows:
            j = 0
            while j < cols:
                if matrix[i][j].isdigit():
                    current_number = int(matrix[i][j])

                    # Continue to the right until the number ends
                    current_col = j + 1
                    while current_col < cols and matrix[i][current_col].isdigit():
                        current_number = current_number * 10 + int(matrix[i][current_col])
                        current_col += 1

                    # Check surroundings for symbols other than '.'
                    for x in range(i - 1, i + 2):
                        for y in range(j - 1, current_col + 1):
                            if (
                                is_valid_coordinate(x, y, rows, cols)
                                and matrix[x][y] != '.'
                                and not matrix[x][y].isdigit()
                            ):
                                total_sum += current_number
                                output.write(f'Number: {current_number}, Symbol: {matrix[x][y]}, Coordinates: ({x}, {y})\n')
                                j = current_col
                                break

                j += 1

            i += 1

    return total_sum

def read_matrix_from_file(file_path):
    with open(file_path, 'r') as file:
        matrix = [list(line.strip()) for line in file]
    return matrix

# Specify the file paths
input_file_path = 'day3.txt'  # Replace with the actual file path
output_file_path = 'output.txt'  # Replace with the desired output file path

# Read the 2D character array from the input file
input_array = read_matrix_from_file(input_file_path)

# Find the sum of numbers adjacent to symbols other than '.' and store in the output file
result_sum = find_adjacent_sum_and_store(input_array, output_file_path)

# Print the result
print(f'The sum of numbers adjacent to symbols other than \'.\' is: {result_sum}')
