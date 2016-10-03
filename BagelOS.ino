#include <TVout.h>
#include <fontALL.h>
TVout TV;
void setup() {
  TV.begin(NTSC);
  pinMode(13, INPUT);
  TV.select_font(font4x6);
}
void loop() {
  TV.clear_screen();
  TV.println("Booting...");
  TV.delay_frame(240);
  TV.clear_screen();
  TV.delay_frame(5);
  TV.println("BagelOS v1.0");
  TV.delay_frame(5);
  TV.println("Programmed by Fred Cashoon");
  TV.delay_frame(5);
  TV.println("Current dir: 0");
  TV.delay_frame(5);
  TV.println("Contents of current dir:");
  TV.delay_frame(5);
  TV.println("HELP");
  TV.delay_frame(5);
  TV.println("GAMES");
  TV.delay_frame(5);
  TV.println("GUI");
  TV.delay_frame(5);
  TV.println("CALCULATOR  ");
  TV.delay_frame(5);
  while(digitalRead(13) == HIGH) {
    TV.set_cursor(0, 48);
    TV.print("] @");
    TV.delay_frame(15);
    TV.set_cursor(0, 48);
    TV.print("]  ");
    TV.delay_frame(15);
  }
}
