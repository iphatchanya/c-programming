// c0007
// by @Pangeiei
// status: waiting for approval

#include <stdio.h>

int main()
{
	int b1,b2,a,b,aa=0,bb=0;
	printf("Enter Member of B1: ");
	scanf("%d",&b1);
	printf("Enter Member of B2: ");
	scanf("%d",&b2);
	printf("\n");
	printf("Enter amount A: ");
	scanf("%d",&a);
	printf("Enter amount B: ");
	scanf("%d",&b);
	while (1)
	{
		if((b1==0 && a>0) && (b2>0 && b==0) )
		{
			printf("Unable to finish order.");
			break;
		}
		if((b1<0 && a==0) && (b2==0 && b>0))
		{
			printf("Unable to finish order.");
			break;
		}
		if((b1>=0 || b2>=0) && (a==0&&b==0))
		{
			printf("Unable to finish order.");
			break;
		}
		if((b1==0 || b2==0) && (a>=0&&b>=0))
		{
			printf("Unable to finish order.");
			break;
		}
		aa=a/b1;
		bb=b/b2;
		a=a/b1;
		b=b/b2;
		a=a%6;
		b=b%10;
		if(a!=0)
		{
			aa=aa/6+1;

		}
		if(b!=0)
		{
			bb=bb/10+1;

		}
		else if(a==0 )
		{
			aa=aa/6;
		}
		else if (b==0)
		{
			bb=bb/10;
		}
		if(bb>=aa)
		{
			printf("Receive in %d days.",bb);
		}
		else if(aa>=bb)
		{
			printf("Receive in %d days.",aa);
		}
	break;
	}
}
