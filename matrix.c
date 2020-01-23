#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  int m,n,p,q,i,j,a[10][10],b[10][10],c[10][10],k;
  printf("enter the dimensions of matrix a with each value separate by spaces = ");
  scanf("%d %d",&m,&n);
  printf("enter dimensions of matrix b with each value separate by spaces = ");
  scanf("%d%d",&p,&q);
  if(n!=p){
    printf("matrix multiplication not possible");
    exit(5);
  }
  printf("enter elements of matrix a\n");
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
      }
  printf("enter elements of matrix b\n");
  for (  j = 0; j < q; j++) {
    for (  i = 0; i < p ; i++) {
      scanf("%d",&b[i][j]);
    }

  }

  printf("matrix a is \n");
  for (  i = 0; i < m; i++) {
    for (  j = 0; j < n; j++) {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }

  printf("matrix b is \n");
  for (  i = 0; i < p; i++) {
    for (  j = 0; j < q; j++) {
      printf("%d\t",b[i][j]);
    }
    printf("\n");
  }

  for (  i = 0; i < m; i++) {
    for (  j = 0; j < q; j++) {
      c[i][j]=0;
      for (  k = 0; k < n; k++) {
        c[i][j]+=a[i][k]*b[k][j];
      }
    }
  }

  printf("resultant matrix is\n");
  for (  i = 0; i < m; i++) {
    for (  j = 0; j < q; j++) {
      printf("%d\t",c[i][j]);
    }
    printf("\n");
  }
  printf("prgramme done");
  return 0;
}
