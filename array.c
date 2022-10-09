#include <stdio.h>

int n=3;
int m=3;

int lower_mat(int mat[n][m]){
   int i, j;
   for ( i = 0; i < n; i++){
      for ( j = 0; j < m; j++){
         if( i < j )
            printf("0\t");
         else
            printf("%d\t", mat[i][j]);
      }
      printf("\n");
   }
}
int main(int argc, char const *argv[]){
   int mat[n][m] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
   };
   lower_mat(mat);
   return 0;
}