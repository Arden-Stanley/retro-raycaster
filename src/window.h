#ifndef WINDOW_H
#define WINDOW_H
#include <SDL3/SDL.h>

typedef struct Window {
  SDL_Window *handle;
  uint16_t width;
  uint16_t height;
  bool running;
} Window;

Window *window_create(const char *title, uint16_t width, uint16_t height);
void window_destroy(Window *window);
void window_update(Window *window);

#endif
