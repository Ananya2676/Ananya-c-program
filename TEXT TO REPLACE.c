#include<stdio.h>
void main()
{
  char STR[50],PAT[15],REP[15],RES[30];
  int i,j,k,l,flag;
  printf("Enter the string\n");
  scanf("%s",STR);
  printf("Enter the pattern\n");
  scanf("%s",PAT);
  printf("Enter the text to replace\n");
  scanf("%s",REP);
  for(i=0,k=0;STR[i]!='\0';i++)
    {
      flag=1;
      for(j=0;PAT[j]!='\0';j++)
        {
          if(STR[i+j]!=PAT[j])
          {
            flag=0;
          }
        }
        l=j;
        if (flag)
        {
          for(j=0;REP[j]!='\0';j++,k++)
          {
            RES[k]=REP[j];
          }
          i+=l-1;
        }
        else
        {
          RES[k++]=STR[i];
        }
    }
  RES[k]='\0';
  printf("%s",RES);
}
