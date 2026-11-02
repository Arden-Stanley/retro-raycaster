#include "map.h"

int main() {
	Map* map = map_create(20, 20);
	map_print(map);

	map_destroy(map);
	return 0;
}