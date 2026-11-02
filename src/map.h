#ifndef MAP_H
#define MAP_H
#include <stdint.h>


typedef struct Map {
	uint8_t* grid;
	uint8_t columns;
	uint8_t rows;
} Map;

Map *map_create(uint8_t width, uint8_t height);
Map *map_create_from_data(uint8_t width, uint8_t height, uint8_t data[]);
void map_destroy(Map* map);
uint8_t map_get_val(Map *map, uint8_t i, uint8_t j);
void map_print(Map* map);

#endif