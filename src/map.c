#include "map.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

Map *map_create(uint8_t width, uint8_t height) {
	Map* map = malloc(sizeof(Map));
	map->grid = calloc(width * height, sizeof(uint8_t));
	map->columns = width;
	map->rows = height;
	return map;
}


Map* map_create_from_data(uint8_t width, uint8_t height, uint8_t data[]) {
	Map* map = malloc(sizeof(Map));
	map->grid = malloc(sizeof(uint8_t) * width * height);
	memcpy(map->grid, data, sizeof(data));
	map->columns = width;
	map->rows = height;
	return map;
}


void map_destroy(Map* map) {
	free(map->grid);
	free(map);
}

uint8_t map_get_val(Map *map, uint8_t i, uint8_t j) {
	return map->grid[i * map->columns, j];
}

void map_print(Map* map) {
	for (int i = 0; i < map->rows; i++) {
		for (int j = 0; j < map->columns; j++) {
			printf(" %i ", map_get_val(map, j, i));
		}
		printf("\n");
	}
}
