#include<stdio.h>
main()
{
	printf("Enter your mark:");
	int n=0;
	scanf("%d",&n);
	if(n>=85)
	{
		printf("You have scored grade A");
	}
	else
	{
		if(n>=70)
		{
			printf("You have scored grade B");
		}
		else
		{
			if(n>=55)
			{
			printf("You have scored grade C");
			}
			else
			{
				if(n>=40)
				{
				printf("You have scored grade D");
				}
			   else
				{
					if(n<40);
					{
					printf("You have scored grade F");
					}
				}
			}
		}
		
	}
	return 0;
		
}
