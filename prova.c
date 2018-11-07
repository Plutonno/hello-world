#include <stdio.h>
#define N 10
int main(){
  int a[N][N];
  //scan della matrice
  for(int i=0;i<N;i++)
    for(int j=0;j<N;j++){
      printf("elemento (%d,%d):",i+1,j+1);
      scanf("%d",&a[i][j]);
    }
  //stampa della matrice
  for(int i=0;i<N;i++){
    printf("\n| ");
    for(int j=0;j<N;j++){
      printf("%d ",);
    }
    printf("|");
  }
  return 0;
}
