include<stdio.h>
void main()
{
  int n,m,i,j,p,o,k,a[10][10],b[10][10],sum,c[10][10];
  printf("enter the size of the matrix 1");
  scanf("%d%d",&n,&m);
  printf("enter the size of the matrix 2");
  scanf("%d%d",&o,&p);
  if(m!=o)
  printf("the matrix not found");
  
  printf("enter the elements A");
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf(" %d",&a[i][j]);
  printf("enter the elements B");
  for(i=0;i<o;i++)
    for(j=0;j<p;j++)
      scanf(" %d",&b[i][j]);
  
  printf("the matrix is B\n");
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
        printf(" %d",a[i][j]);
      }printf(" \n");
    }
    printf("the matrix is B\n");
    for(i=0;i<o;i++){
      for(j=0;j<p;j++){
        printf(" %d",b[i][j]);
      }printf(" \n");
      
    }
    for(i=0;i<m;i++)
    {
      for(j=0;j<p;j++)
      {
          c[i][j]=0;
        for(k=0;k<n;k++)     
          c[i][j]=c[i][j]+a[i][k]*b[k][j];
          
      }
    }
    printf("the matrix is c\n");
    for(i=0;i<m;i++){
      for(j=0;j<p;j++){
        printf(" %d",c[i][j]);
      }printf(" \n");
     }  
     }
