
/*
 * Created 12 Feb 24 
 * Baptiste BR
 */

#include <unistd.h>
#include "raylib.h"


int start_gui() {
  const int screen_width = 800;
  const int screen_height = 400;

  InitWindow(screen_width, screen_height, "raylib [core] example - My own test");

  SetTargetFPS(75);

  int frame_nb = 0;
  
  while (!WindowShouldClose()) {

    frame_nb += 1;

    BeginDrawing();
    
    ClearBackground(RAYWHITE);

    if (frame_nb < 150) {
      DrawText("Premier Test", 10, 34, 42, LIGHTGRAY);
    } else {
      DrawText("Premier Test PASSÉ", 15, 39, 94, DARKGREEN);
     
    }
    EndDrawing();
  }

  CloseWindow(); 
  
  return (0);
}

int main(int ac, char **av) {

  write(1, "Bonjour raylib\n", 14);


  start_gui();

  return (0);
}
