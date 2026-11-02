#include "map.h"
#include "window.h"
#include <stdio.h>

int main() {
  Map *map = map_create(20, 20);
  // map_print(map);
  Window *window = window_create("Meow", 800, 800);
  while (window->running) {
    window_update(window);
  }

  window_destroy(window);
  map_destroy(map);
  return 0;
}
