#include<stdio.h>
void main()
{
	float u,tb,ans;
	printf("enter the value:");
	scanf("%f",&u);
	if(u<=50)
	{
		ans=(0.5*u);
		printf("bill=%f",ans);
	}
	else if(u>=51 && u<=150)
	{
		ans=(50*0.5)+((u-50)*0.75);
		printf("bill=%f",ans);
	}
	else if(u>=151 && u<=250)
	{
		ans=(50*0.5)+(100*0.75)+((u-150)*1.20);
		printf("bill=%f",ans);
	}
	else if(u>=251)
	{
		ans=(50*0.5)+(100*0.75)+(100*1.20)+((u-250)*1.50);
		printf("bill=%f",ans);
	}
	else
	{
		printf("invalid");
	}
	tb=ans*0.20;
	printf("tb=%f",tb);
}
