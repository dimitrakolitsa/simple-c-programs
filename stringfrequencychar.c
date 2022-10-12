#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100  // Maximum string size
#define MAX_CHARS 255 // Maximum characters allowed

int main()
{
  char str[MAX_SIZE];
  int freq[MAX_CHARS]; // Store frequency of each character
  int i = 0, max;

  printf("give a string: ");
  fgets(str, MAX_SIZE, stdin);

  /* Initialize frequency of all characters to 0 */
  for(i=0; i<MAX_CHARS; i++)
    {
      freq[i] = 0;
    }

  /* Find the frequency of each characters */
  i = 0;
  while (str[i]!='\0')// || i<MAX_SIZE)
    {
      ++freq[(int)str[i]];
      i++;
    }

  /* Find maximum frequency */
  max = 0;
  for(i=0; i<MAX_CHARS; i++)
    {
      if(freq[i] > freq[max])
        max = i;
    }

  printf("mostly used character is '%c'\n"
         "and it is used %d times.\n", max, freq[max]);

  return 0;
}
