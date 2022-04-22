#include "include/console.h"
#include "include/io.h"

void kernel_early(void) {
}

int main(void) {
  unsigned char byte;
  char* str1= "Kyle Terminal V0.1";
  print_line_with_color(str1, BLUE);

  while(1) {
    while(byte = scan()) {
      print_character(charmap[byte]);
    }
  }  
}
