static char* const VGA_MEMORY = (char*) 0xb8000;
static const int VGA_WIDTH = 80;
static const int VGA_HEIGHT = 25;
static const int SCREEN_BYTES_WIDTH = VGA_WIDTH * 2;
static const int TOTAL_SCREEN_DISPLAY = (VGA_HEIGHT * VGA_WIDTH) * 2;
static int Terminal_Position = 0;

enum Color {
  BLACK = 0,
  BLUE,
  GREEN,
  CYAN,
  RED,
  PURPLE,
  BROWN,
  GRAY,
  DARK_GRAY,
  LIGHT_BLUE,
  LIGHT_GREEN,
  LIGHT_CYAN,
  LIGHT_RED,
  LIGHT_PURPLE,
  YELLOW,
  WHITE
};

// Method headers

void print_character(char);
void print_string(char*);
void print_line(char*);

void set_terminal_font_color(enum Color);
void print_character_with_color(char, enum Color);
void print_string_with_color(char*, enum Color);
void print_line_with_color(char*, enum Color);
void shift_terminal_up();

