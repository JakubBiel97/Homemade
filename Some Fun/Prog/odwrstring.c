#include<stdio.h>

int string_length(char*);
void reverse(char*);

int main()
{
   char s[100];

   printf("Wpisz string: ");
   gets(s);

   reverse(s);

   printf("Odwrotnosc stringu to: \"%s\".\n", s);

   return 0;
}

void reverse(char *s)
{
   int length, c;
   char *pocz, *kon, temp;

   length = string_length(s);
   pocz  = s;
   kon    = s;

   for (c = 0; c < length - 1; c++)
      kon++;

   for (c = 0; c < length/2; c++)
   {
      temp   = *kon;
      *kon   = *pocz;
      *pocz = temp;

      pocz++;
      kon--;
   }
}

int string_length(char *s)
{
   int c = 0;

   while( *(s + c) != '\0' )
      c++;

   return c;
}
