#include <iostream>
#include <stdio.h>
 int is_little_endian(void){
     int x =2;
     char byte=*(char *) &x;
     return byte;
 }

int main() {
    printf("is little endian:%d\n", is_little_endian());
    return 0;
}