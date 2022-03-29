#include "include/console.h"

void kernel_early(void) {
}

int main(void) {
  char* str1 = "HELLO";
  char* str2 = "WORLD";
  char* str3 = "TODAY";
  print_string(str1);
  print_line(str2);
  print_string(str3);  
}
