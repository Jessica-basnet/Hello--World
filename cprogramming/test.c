#include<stdio.h>
#include<conio.h>
int main ()
{
printf("Arithmetic Operators\n");
int z=10; 
int y=5;
int x=8;
int w=20;
int sum,sub,div,mul,rem;
sum=z+y;
printf("The addition of z and y =%d",sum);

sub=w-x;
printf("\nThe difference between w and x =%d",sub);

mul=x*y;
printf("\nThe multiplication of x and y=%d",mul);

div=w/y;
printf("\nThe division of w and y =%d",div);

rem=x%y;
printf("\nThe remainder of x/y =%d",rem);
 
getch ();	
	
}
