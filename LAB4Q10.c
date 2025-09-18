#include <stdio.h>

int main()
{
    int quantity,time, receival;
    float total;
    char crust, cheese, stID;
    
    printf("How many pizzas do you want (1, 2, or 3)? ");
    scanf("%d", &quantity);
    printf("Choose crust type:\nR - Regular\nT - Thin\nS - Stuffed\nEnter your choice: ");
    scanf(" %c", &crust); 
    printf("Do you want extra cheese (Y/N)?");
	scanf(" %c", &cheese);
	printf("What is the current time(0-23)?") ;
	scanf("%d", &time);
	printf("Do you have a student ID (Y/N)?");
	scanf(" %c", &stID);
 	if (quantity == 1)
    {
        if (crust == 'R')
        {
            total = 8;
		}
        else if (crust == 'T')
        {
            total = 8 + 1;
		}
        else
        {
            total = 8 + 2;
		}
    }
    else if (quantity == 2)
    {
        if (crust == 'R')
        {
            total = 15;
		}
		else if (crust == 'T')
		{
            total = 15 + 1;
		}
        else
        {
            total = 15 + 2;
		}
    }
    else
    {
        if (crust == 'R')
        {
        	total = 21;
		}
        else if (crust == 'T')
        {
        	total = 21 + 1;
		}
		else
		{
            total = 21 + 2;
		}
    }
	if(cheese == 'Y')
	{
		total = total + 1.5;
	}
    if(time>10 && time<15)
    {
    	total = total - (total*0.1);
	}
	if (stID == 'Y')
	{
		total = total - 2;
	}
	printf("How do you want to receive your order?(1.Pickup or 2.Delivery)");
	scanf("%d", &receival);
	if(receival == 2)
	{
		total = total + 3;
	}
	printf("RECEIPT:\nYour total is $%f\n", total);
	if (quantity == 3 && crust == 'S')
    {
    	printf("You get free garlic bread!\n");
	}
    return 0;
}
