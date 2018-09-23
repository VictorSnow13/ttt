#include "ttt.h"

void print_field()
{
   int i, j;
   system("clear");
   printf("_______\n");
   for(i = 0; i < 3; i++)
   {
      for(j=0; j < 3; j++)
      {
         printf("|");
         if (matrix[i][j] == 1) printf("X");
         else if (matrix[i][j] == -1) printf("0");
         else printf(" ");
      }
      printf("|\n_______\n");
   }
}
