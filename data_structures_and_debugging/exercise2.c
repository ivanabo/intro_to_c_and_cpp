#include <stdio.h>

union Mixed 
{
  int c;
  unsigned char  b[4];
};

int main()
{
  int i;
  union Mixed m;
  scanf("%d", &m.c); //m.c = 65535;
  printf("int: %d.\n", m.c);
  for (i=0; i<4; i++)
  {
    printf("byte[%d]: %d\n",i, m.b[i]);
  }
}
