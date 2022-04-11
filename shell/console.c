#include "../include/console.h"

void print_character(char c) {
  VGA_MEMORY[Terminal_Position] = c; 
  VGA_MEMORY[Terminal_Position + 1] = 0x07; //Default to Gray color
  Terminal_Position = Terminal_Position + 2; //increment curernt cursor position to next address  
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
  Terminal_Position = (Terminal_Position - (Terminal_Position % SCREEN_BYTES_WIDTH)); 
  Terminal_Position += SCREEN_BYTES_WIDTH; 
}
