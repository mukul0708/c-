#include <stdio.h>
int main()
{
  int c = 0, count = 0;
  char a[100];
  printf("Input a string\n");
  gets(a);

  while (a[c] != '\0') {
    if (a[c] == 'a' || a[c] == 'A' || a[c] == 'e' || a[c] == 'E' || a[c] == 'i' || a[c] == 'I' || a[c] =='o' || a[c]=='O' || a[c] == 'u' || a[c] == 'U'){
      count++;
    }
    c++;
  }

  printf("Number of vowels in the string: %d", count);

  return 0;
} 
