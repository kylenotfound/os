static char* const VGA_MEMORY = (char*) 0xb8000;
static const int VGA_WIDTH = 80;
static const int VGA_HEIGHT = 25;
static int CURR = 0;

void print_character(char);
void print_string(char*);
void print_line(char*);

