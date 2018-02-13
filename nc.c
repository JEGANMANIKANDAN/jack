#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,low,up,temp,a,arm=0;
clrscr();
printf("Enter the Tow numers:\n");
scanf("%d %d \n",low,up);
for(i=low;i<up;i++)
{
temp=i;
for(j=0;temp!=0;j++)
{
a=temp/10;
arm=arm+(a*a*a);
temp=%10;
}
}
if(i==arm)
{
printf("%d \n",arm);
arm=0;

}
getch();
}
