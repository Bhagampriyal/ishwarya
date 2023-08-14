#include<stdio.h>
#include<conio.h>
void main()
{
int h,m,s;
int i;
clrscr();
printf("Enter the time in this format HH:MM:SS");
scanf("%d%d%d",&h,&m,&s);
start:  ;
for(h;h<24;h++)
{
 for(m;m<60;m++)
 {
  for(s;s<60;s++)
  {
  clrscr();
  textcolor(RED);
   cprintf("\n\n\n      %d:%d:%d",h,m,s);
   for(i=1;i<4900000;i++)
   {

   }
  }s=0;
 }m=0;
}h=0;
goto start;
getch();
}