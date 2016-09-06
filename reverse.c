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
