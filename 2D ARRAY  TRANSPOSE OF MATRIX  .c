#include<stdio.h>
void main()
{
  int n,m,i,j,p,q,a[10][10],b[10][10],sum,c[10][10];
  printf("enter the size of the matrix 1");
  scanf("%d%d",&n,&m);

  printf("enter the elements");
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf(" %d",&a[i][j]);

  printf("the matrix is\n");
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
        printf(" %d",a[i][j]);
      }printf(" \n");
    }
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
       b[i][j]=a[j][i];
      }
  }
    printf("the transpose of matix");    
   for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      printf(" %d",b[i][j]);
    }
      printf(" \n");
    }
