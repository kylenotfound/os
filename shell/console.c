#include "../include/console.h"

int terminal_font_color = GRAY; //default to gray

void set_terminal_font_color(enum Color color) {
  terminal_font_color = color;	
}

void print_character(char c) {
  VGA_MEMORY[Terminal_Position] = c; 
  VGA_MEMORY[Terminal_Position + 1] = terminal_font_color;
  Terminal_Position = Terminal_Position + 2; //increment curernt cursor position to next address  
}

void print_character_with_color(char c, enum Color color) {
  terminal_font_color = color;
  print_character(c);
}

void print_string(char* str) {

  unsigned int i = 0;
  while	(str[i] != '\0') {
    print_character(str[i]);
    i++;
  }

}

void print_string_with_color(char* str, enum Color color) {
  terminal_font_color = color;
  print_string(str);
}

void print_line(char* str) {
  print_string(str);
  Terminal_Position = (Terminal_Position - (Terminal_Position % SCREEN_BYTES_WIDTH)); 
  Terminal_Position += SCREEN_BYTES_WIDTH; 
}

void print_line_with_color(char* str, enum Color color) {
  terminal_font_color = color;
  print_line(str);  
}

// Shift all lines up the terminal screen.
void shift_terminal_up() {
  for (int i = 0; i < TOTAL_SCREEN_DISPLAY; i++) {
    VGA_MEMORY[i] = VGA_MEMORY[i + (2 * VGA_WIDTH)];
  }
  for (int i = TOTAL_SCREEN_DISPLAY; i >= TOTAL_SCREEN_DISPLAY - 160; i--) {
    VGA_MEMORY[i] = '\0';
  }  
}
