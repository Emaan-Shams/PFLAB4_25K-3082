#include <stdio.h>

int main()
{
    int quantity,time;
    float total;
    char crust, cheese;
    
    printf("How many pizzas do you want (1, 2, or 3)? ");
    scanf("%d", &quantity);
    printf("Choose crust type:\nR - Regular\nT - Thin\nS - Stuffed\nEnter your choice: ");
    scanf(" %c", &crust); 
    printf("Do you want extra cheese (Y/N)?");
	scanf(" %c", &cheese);
	printf("What is the current time(0-23)?") ;
	scanf("%d", &time);
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
    printf("Your total is $%f\n", total);
    return 0;
}


