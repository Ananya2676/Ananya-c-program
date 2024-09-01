 #include<stdio.h>
void main()
{
  char str1[20],str2[20],result;
  printf("enter the string 1:");
  scanf("%s",str1);
  printf("enter the string 2:");
  scanf("%s",str2);
  result = strcmp(str1,str2);
  if(result==0)
  {
    printf("the string are equal\n");
  }
  else if(result<0)
  {
    printf("%s comes before %s lexicographically.\n",str1,str2);
  }
  else
  {
    printf("%s comes after %s lexicographically.\n",str1,str2);
  }
}
