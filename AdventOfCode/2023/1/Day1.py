def text_to_number(text):
    number_dict = {
        'zero': 0,
        'one': 1,
        'two': 2,
        'three': 3,
        'four': 4,
        'five': 5,
        'six': 6,
        'seven': 7,
        'eight': 8,
        'nine': 9
    }

    # Convert text to lowercase for case-insensitivity
    lower_text = text.lower()

    # Check if the input text is a valid number
    if lower_text in number_dict:
        return number_dict[lower_text]
    else:
        return "Invalid input. Please enter a valid text representation of a number from zero to nine."

def find_number_at_index(input_string, start_index):
    number_dict = {
        'zero': 0,
        'one': 1,
        'two': 2,
        'three': 3,
        'four': 4,
        'five': 5,
        'six': 6,
        'seven': 7,
        'eight': 8,
        'nine': 9
    }

    # Iterate over the number_dict to check if any number starts at the given index
    for word, value in number_dict.items():
        if input_string.lower().startswith(word, start_index):
            return value

    # If no number is found, return None
    return None

# # Example usage:
# input_str = "thisisaone"
# start_index = 7
# result = find_number_at_index(input_str, start_index)

# if result is not None:
#     print(f'Number found at index {start_index}: {result}')
# else:
#     print(f'No number found starting at index {start_index}.')


# # Example usage:
# text_number = "three"
# result = text_to_number(text_number)
# print(f'Text: {text_number}, Integer: {result}')


file_path = 'day1.txt'  # Replace 'your_file.txt' with the actual path to your file

ans = 0
with open(file_path, 'r') as file:
    for line in file:
        num1 = '?'
        num2 = '?'
        n = len(line)
        for i in range(n):
            if (line[i]>='0' and line[i]<='9') or (find_number_at_index(line,i) is not None):
                if num1 == '?':
                    if (find_number_at_index(line,i) is not None):
                        num1 = find_number_at_index(line,i)
                    else:
                        num1 = line[i]
                if (find_number_at_index(line,i) is not None):
                        num2 = find_number_at_index(line,i)
                else:
                    num2 = line[i]
        ans += int(num1)*10 + int(num2)
        print(ans)
        # print(num1,num2,sep='')
        # Process each line as needed
        # print(line.strip())  # This example prints each line after removing leading and trailing whitespaces

print(ans)