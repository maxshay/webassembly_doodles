// limit 512mb

#define WIDTH 600
#define HEIGHT 600
unsigned int BUFFER[WIDTH * HEIGHT];

void go() {
  unsigned int screen[600][600];
  unsigned int x;
  for (x=0; x<600; x++) {
    unsigned int y;
    for (y=0; y<600; y++) {
      unsigned int color = 0xffc2614f;
      screen[x][y] = color;
      BUFFER[WIDTH * x + y] = screen[x][y];
    }
  }
}