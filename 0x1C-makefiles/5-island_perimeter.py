#!/usr/bin/python3
"""boi howdy this is a right cow shite"""

def island_perimeter(grid):
	island = []
	perimeter = 0
	x = 0
	i = 0
	while x < len(grid):
		y = 0
		while y < len(grid[x]):
			if grid[x][y] == 1:
				print("yay")
				island.append((x, y))
			y += 1
		x += 1
	while i < len(island):
		if (island[i][0] + 1, island[i][1]) not in island:
			perimeter += 1
		if (island[i][0] - 1, island[i][1]) not in island:
			perimeter += 1
		if (island[i][0], island[i][1] + 1) not in island:
			perimeter += 1
		if (island[i][0], island[i][1] - 1) not in island:
			perimeter += 1
		i += 1
	return perimeter