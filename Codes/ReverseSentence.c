#include <stdio.h>
int main()
{
   char sentence[1000], reverse[1000];
   int begin, end, count = 0;

   printf("Input a string\n");
   gets(sentence);

   // Calculating string length
   while (sentence[count] != '\0')
      count++;
      
   end = count - 1;

   for (begin = 0; begin < count; begin++) {
      reverse[begin] = sentence[end];
      end--;
   }

   reverse[begin] = '\0';
   printf("%s\n", reverse);

   return 0;
}
