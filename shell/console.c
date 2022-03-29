#include "../include/console.h"

static unsigned int remaining_bytes = 160;

void print_character(char c) {
  VGA_MEMORY[CURR] = c; 
  VGA_MEMORY[CURR + 1] = 0x07; //Default to Gray color
  CURR = CURR + 2; //increment curernt cursor position to next address
  remaining_bytes = remaining_bytes - 2;  
}

void print_string(char* str) {

  unsigned int i = 0;
  while	(str[i] != '\0') {
    print_character(str[i]);
    i++;
  }


}

void print_line(char* str) {
  print_string(str);
  CURR = CURR + remaining_bytes;
}
