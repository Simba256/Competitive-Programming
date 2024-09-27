def find_alternating_sum_first_column(sequence):
    n = len(sequence)

    # Create the differences triangle
    triangle = [sequence]
    for i in range(n - 1):
        next_row = [triangle[i][j + 1] - triangle[i][j] for j in range(len(triangle[i]) - 1)]
        triangle.append(next_row)

    # Find the alternating sum of the first column
    first_column = [triangle[j][0] if j % 2 == 0 else -triangle[j][0] for j in range(n)]
    alternating_sum = sum(first_column)

    return alternating_sum


# Example usage:
# sequence = [0, 3, 6, 9, 12, 15]
# result = find_next_term_differences_triangle(sequence)
# print("Next term in the sequence:", result)

def read_sequences_from_file(file_path):
    all_sequences = []
    with open(file_path, 'r') as file:
        for line in file:
            # Check if the line is not empty
            if line.strip():
                sequence = [int(num) for num in line.strip().split()]
                all_sequences.append(sequence)

    return all_sequences

# Example usage:
file_path = 'day9.txt'  # Replace with the path to your file
sequences_from_file = read_sequences_from_file(file_path)
ans = 0
if sequences_from_file:
    for idx, sequence in enumerate(sequences_from_file, start=1):
        result = find_alternating_sum_first_column(sequence)
        ans += result
        # print(f"Sequence {idx}: Next term in the sequence: {result}")
else:
    print("Error reading sequences from the file.")
print(ans)
