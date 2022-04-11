static char* const VGA_MEMORY = (char*) 0xb8000;
static const int VGA_WIDTH = 80;
static const int VGA_HEIGHT = 25;
static const int SCREEN_BYTES_WIDTH = VGA_WIDTH * 2;
static int Terminal_Position = 0;

void print_character(char);
void print_string(char*);
void print_line(char*);

