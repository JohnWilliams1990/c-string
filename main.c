//  John Williams
//  105201054
//  Date: Sat. Mar. 2, 2019
//  Program: main.c

#include<stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{

  char item[30] = "this is Sparta!";
  if ( argc > 1) {  
  char test[10] = "          ";
    printf("%s\n", item);
    printf("Item being tested is: %s\n", argv[1]);
    printf("\n\n%s\n\n", "~~~~~~~~~~~~~~~~~~~");

  // strncpy(test, argv[1], 10);

  for(int i = 0; i < 10; i++){
    printf("\n%s", "~~~~~~~~~~~~~~~~~~~");
    test[i] = tolower(argv[i]);
     printf("%c\n", test[i]);
  }

    printf("%s\n",test);
    //if(strstr(item, tolower(test) != NULL)) {
    //  printf("\n\n%s\n\n", "yep");
    //}
  }
  return 0; 
}

