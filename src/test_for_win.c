#include "ttt.h"

int test_for_win(int x,int y, int matrix[][3])
{
   if((matrix[y][0] == matrix[y][1]) && (matrix[y][1] == matrix[y][2]) && (matrix[y][0] != 0)) return 1;
   if((matrix[0][x] == matrix[1][x]) && (matrix[1][x] == matrix[2][x]) && (matrix[0][x] != 0)) return 1;
   if(((matrix[0][0] == matrix[1][1]) && (matrix[1][1] == matrix[2][2]) && (matrix[0][0] != 0) || ((matrix[0][2] == matrix[1][1]) && (matrix[1][1] == matrix[2][0]) && matrix[0][2] != 0))) return 1;
   return 0;
}
