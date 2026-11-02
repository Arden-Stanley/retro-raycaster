#include "window.h"
#include <stdlib.h>

Window *window_create(const char *title, uint16_t width, uint16_t height) {
  SDL_Init(SDL_INIT_VIDEO);
  Window *window = malloc(sizeof(Window));
  window->handle = SDL_CreateWindow(title, width, height, 0);
  window->width = width;
  window->height = height;
  window->running = true;
  return window;
}

void window_destroy(Window *window) {
  SDL_DestroyWindow(window->handle);
  free(window);
  SDL_Quit();
}

void window_update(Window *window) {
  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    if (event.type == SDL_EVENT_QUIT) {
      window->running = false;
    }
  }
}
