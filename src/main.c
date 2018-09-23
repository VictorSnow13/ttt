#include "ttt.h"
 
int main()
{
   int i, j, turn;
   int player;
   print_field();
   for(turn = 0; turn < 9; turn++)
   {
      player = turn % 2;
      s:
      printf("Player %d:", player + 1);
      scanf("%d %d", &i, &j);
      if(matrix[i-1][j-1] != 0) 
      {
        printf("Already set. Retype.\n");
        goto s;
      }
      if(i > 3 || i < 1 || j > 3 || j < 1) 
      {
        printf("Enter correct coordinates\n"); goto s;
      }
      if(turn % 2 == 0) matrix[i-1][j-1] = -1;
      else matrix[i-1][j-1] = 1;
      print_field();
      if (test_for_win(j-1, i-1, matrix))
         break;
   }
   if(turn == 9)
     printf("Draw!\n");
   else
     printf("Player %d win!\n", player + 1);
   return 0;
}
