#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#define key 0x16

void main()
{
char far *ptr;
char *text,c;
int val,op;
do	{
	clrscr();
	ptr=(char far*)0x417;
	printf("operations");
	printf("\n1.CAPS LOCK\n2.NUM LOCK\n3.SCROLL LOCK\n4.EXIT\n\nENTER OP : ");
	scanf("%d",&op);
	if(op==1)
	  {
	    if((*ptr)&0x40)
		printf("\nCAPS ON");
	    else
		printf("\nCAPS OFF");
	  }
	else 	if(op==2)
	  {
	    if((*ptr)&0x20)
		printf("\nNUM LOCK ON");
	    else
		printf("\nNUM LOCK OFF");
	  }
	else 	if(op==3)
	  {
	    if((*ptr)&0x10)
		printf("\nSCROLL ON");
	    else
		printf("\nSCROLL OFF");
	  }  getch();
	}while(op!=4);
}