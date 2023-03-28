#include <stdio.h>
#include<string.h>
int main()
{
  int i, vowels = 0;
  char str[100];
  printf("Input a string:\n");
  scanf("%[^\n]",str);

  for(i=0;i< strlen(str);i++) {
    if (str[i] == 'a' ||
                     str[i] == 'A' ||
                     str[i] == 'e' ||
                     str[i] == 'E' ||
                     str[i] == 'i' ||
                     str[i] == 'I' || 
                     str[i] =='o' || 
                     str[i]=='O' || 
                     str[i] == 'u'||
                     str[i] == 'U')
      vowels++;
  }

  printf("Number of vowels in the string: %d", vowels);

  return 0;
}
