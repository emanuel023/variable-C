#include<stdio.h>
int main()
{
int length,width,perimeter;
printf("enter the length of the rectangle:");
scanf("%d",length);
 printf("enter the width of the rectangle");
 scanf("%d",&width);

perimeter=2*(length+width);
printf("perimeter of the rectangle=%f units",perimeter);
	return 0;
}
