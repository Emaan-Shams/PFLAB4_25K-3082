#include<stdio.h>

int main()
{
	int size;
	printf("Choose Pizza Size: \n");
	printf("1. Small, 2. Medium, 3. Large.");
	scanf("%d",&size);
	switch(size)
	{
		case 1:
			printf("Small");
			break;
		case 2:
			printf("Medium");
			break;
		case 3:
			printf("Large");
			break;
			default:
				printf("Invalid size");
	}
	return 0;
}
