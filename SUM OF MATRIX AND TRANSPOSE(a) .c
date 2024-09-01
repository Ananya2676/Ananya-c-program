 #include<stdio.h>
void main()
{
  int n,m,i,j,p,q,a[10][10],b[10][10],c[10][10];
  printf("enter the size of the matrix 1");
  scanf("%d%d",&n,&m);
  printf("enter the size of the matrix 1");
  scanf("%d%d",&p,&q);

  printf("enter the elements");
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf(" %d",&a[i][j]);
  printf("enter the elements");
  for(i=0;i<p;i++)
    for(j=0;j<q;j++)
      scanf(" %d",&b[i][j]);

  printf("the matrix is\n");
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
        printf(" %d",a[i][j]);
      }printf(" \n");
    }
  printf("the matrix is\n");
  for(i=0;i<p;i++){
    for(j=0;j<q;j++){
      printf(" %d",b[i][j]);
    }printf(" \n");
  }
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
       c[i][j]=a[i][j]+b[i][j];
      }
  }
  printf("the sum of the matrix is \n");
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      printf(" %d",c[i][j]);
    }
      printf(" \n");
    }

 printf("the transpose of matix\n");    
   for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      printf(" %d",c[j][i]);
    }
      printf(" \n");
    }
   }
