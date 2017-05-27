#include <stdio.h>

int main(void)
{
  int ch;
  char temp[20] = {0};
  int index = 0;
  FILE *fp = fopen("test.txt","r");
  while ((ch = getc(fp) != EOF))
  {
     putchar(ch);
     temp[index++] = ch;
  }

  temp[index] = '0';
  printf("%s", temp);
  return 0;

}

