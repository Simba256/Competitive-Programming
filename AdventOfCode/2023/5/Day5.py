def apply_mapping(value, mapping):
    for dest_start, source_start, length in mapping:
        if source_start <= value < source_start + length:
            return dest_start + (value - source_start)
    return value  # Return the original value if not in any mapping range

def get_location_from_seeds(seeds):
    soil = apply_mapping(seeds, seed_to_soil_map)
    fertilizer = apply_mapping(soil, soil_to_fertilizer_map)
    water = apply_mapping(fertilizer, fertilizer_to_water_map)
    light = apply_mapping(water, water_to_light_map)
    temperature = apply_mapping(light, light_to_temperature_map)
    humidity = apply_mapping(temperature, temperature_to_humidity_map)
    location = apply_mapping(humidity, humidity_to_location_map)
    return location

# ... (rest of the code remains unchanged)


# ... (rest of the code remains unchanged)

with open('day5.txt', 'r') as file:
    lines = file.readlines()

# Given mappings
seed_to_soil_map_lines = [line.strip().split() for line in lines[2:29]]
soil_to_fertilizer_map_lines = [line.strip().split() for line in lines[30:50]]
fertilizer_to_water_map_lines = [line.strip().split() for line in lines[51:99]]
water_to_light_map_lines = [line.strip().split() for line in lines[100:142]]
light_to_temperature_map_lines = [line.strip().split() for line in lines[143:167]]
temperature_to_humidity_map_lines = [line.strip().split() for line in lines[168:193]]
humidity_to_location_map_lines = [line.strip().split() for line in lines[194:232]]

# Convert to tuples
seed_to_soil_map = [(int(start), int(end), int(length)) for start, end, length in seed_to_soil_map_lines]
soil_to_fertilizer_map = [(int(start), int(end), int(length)) for start, end, length in soil_to_fertilizer_map_lines]
fertilizer_to_water_map = [(int(start), int(end), int(length)) for start, end, length in fertilizer_to_water_map_lines]
water_to_light_map = [(int(start), int(end), int(length)) for start, end, length in water_to_light_map_lines]
light_to_temperature_map = [(int(start), int(end), int(length)) for start, end, length in light_to_temperature_map_lines]
temperature_to_humidity_map = [(int(start), int(end), int(length)) for start, end, length in temperature_to_humidity_map_lines]
humidity_to_location_map = [(int(start), int(end), int(length)) for start, end, length in humidity_to_location_map_lines]

# Seeds
seedsp = list(map(int, lines[0].strip('\n').split()))
seeds = []
for i in range(0, len(seedsp), 2):
    # Extracting two numbers at a time
    num1 = seedsp[i]
    num2 = seedsp[i + 1]
    for j in range(num1,num1+num2):
        seeds.append(j)
    print(2*(i+1)," down")
    
# Get locations from seeds
locations = [get_location_from_seeds(seed) for seed in seeds]

# Display results
# for i, location in enumerate(locations):
#     print(f"Seed {seeds[i]} corresponds to location: {location}")
print(min(locations))