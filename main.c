//  John Williams
//  105201054
//  Date: Sat. Mar. 2, 2019
//  Program: main.c

#include<stdio.h>
#include <string.h>
#define _GNU_SOURCE         /* See feature_test_macros(7) */

// Program demonstaes using two string to do string comparisons. 
// this will take two string and see if the first is a substring of the second

int main(int argc, char *argv[])
{
  if ( argc > 2) {  
    // get string size
    if((int)strcasestr(argv[1], argv[2]) != NULL) {
      printf("the string \"%s\" contains the substring \"%s\"\n", argv[1], argv[2]);
    } 
  }
  return 0; 
}

