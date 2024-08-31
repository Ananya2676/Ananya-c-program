#include <stdio.h>
void main()
{
int n1,n2,ch;
float res;
printf("Enter two numbers:\n");
scanf("%d%d",&n1,&n2);
printf("1-Add\n2-sub\n3-multi\n4-div\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
 case 1:res=n1+n2;
 printf("Add=%0.0f",res);
Break;
case 2:res=n1-n2;
printf("Sub=%0.0f",res);
Break;
case 3:res=n1*n2;
printf("Multi=%0.0f",res);
break;
case 4:if(n2==0)
{
printf("division by zero error");
}
else 
{
res=n1/n2;
printf("Div=%0.2f",res);
Break;
Default:
printf("Invalid choice");
}
}
}
