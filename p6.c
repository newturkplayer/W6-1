// Agregate types: Arrays
#include<stdio.h>

int main()
{
  int a[4];

  a[0] = 1;
  a[1] = 23;
  a[2] = 63;
  a[3] = 4;

  // Lets print the set
  printf(" a = {"); 
  for(int i = 0; i < 4; i++)
    if(i == 0)
      printf("%d", a[i]);
    else
      printf(", %d", a[i]);
  printf("}\n");
}
