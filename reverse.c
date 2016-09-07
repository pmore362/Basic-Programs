/*(Separating Digits) Write program segments that accomplish each of the following:
a) Calculate the integer part of the quotient when integer a is divided by integer b.
b) Calculate the integer remainder when integer a is divided by integer b.
c) Use the program pieces developed in a) and b) to write a function that inputs an integer
between 1 and 32767 and prints it as a series of digits,with two spaces between each digit.
For example, the integer 4562 should be printed as: 4 5 6 2*/
#include<stdio.h>
void rever(int i);
int main(void)

{
	int i;
	scanf("%d",&i);
	rever(i);
	return 0;
}
void rever(int i)
{
	int j, new=0,count=0;
	while(i != 0)
	{
		new = new * 10 + i%10 ;
		i = i/10;
		count++;
	}
	for(j=0; j<count;j++)
	{
		printf("%d\t\t",new%10);
		new = new/10;
	}
}
