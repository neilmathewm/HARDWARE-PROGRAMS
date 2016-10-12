#include<stdio.h>
#include<dos.h>
#include<conio.h>
void main()
 {
 int scan,ascii;
 union REGS in,out; //declaring 2 register files
 do{ 
  printf("PRESS A KEY ");
  int86(key,&in,&out);
  in.h.ah=0x10;
  ascii=out.h.al;
  scan=out.h.ah;
  printf("\nScan Code = %d ",scan);
  printf("\nAscii Code = %d ",ascii);
  if(ascii==88)  // press X to quit
	  break;
  }while(1);
  getch();
 }