#include <stdio.h>

int main()
{
   int x, y, z;
   x = 512;
   y = 1024;
   z = 2048;

   printf("address: %p and content: %d\n", &x, x);
   printf("address: %p and content: %d\n", &y, y);
   printf("address: %p and content: %d\n", &z, z);

   return (0);
}
