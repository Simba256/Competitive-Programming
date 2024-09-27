# Input data


# Thresholds for red, green, and blue counts
red_threshold = 12
green_threshold = 13
blue_threshold = 14

# Function to check if conditions are met for a game
def check_conditions(game_data):
    r,g,b = 0,0,0
    for turn in game_data.split(":")[1].split(";"):
        for item in turn.split(","):
            quantity, color = item.strip().split()
            quantity = int(quantity)
            if (color == "red"):
                r = max(r,quantity)
            if (color == "green"):
                g = max(g,quantity)
            if (color == "blue"):
                b = max(b,quantity)
    return r*g*b

# Read input data from a file
file_path = "day2.txt"  # Replace with the actual file path
with open(file_path, "r") as file:
    games_data = file.readlines()

# Calculate and print the sum of game IDs
sum_of_ids = 0
for game_data in games_data: 
    sum_of_ids += (check_conditions(game_data)) 
print(f"Sum of IDs: {sum_of_ids}")