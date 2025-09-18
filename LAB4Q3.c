#include<stdio.h>
int main()
{
	int quantity;
	printf("How many pizzas do you want,1,2,or 3?");
	scanf("%d",&quantity);
	if (quantity == 1)
	{
		printf("your total for 1 pizza is $8");		
	}
	else if(quantity == 2)
	{
		printf("Your total for 2 pizzas is $15");
	}
	else
	{
		printf("Your total for 3 pizzas is $21");
	}
	
}
