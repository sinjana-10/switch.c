#include<stdio.h>
int main()
{
	int a;
	printf("please enter a number between 1 and 5:");
	scanf("%d",a);
	switch(a)
	{
		case 1:
			printf("Food item - Pizza\n Rs.239");
			break;
		case 2:
			printf("Food item - Burger\n Rs.129");
			break;
		case 3:
			printf("Food item - Pasta\n Rs.179");
			break;
		case 4:
			printf("Food item - French Fries\n Rs.99");
			break;
		case 5:
			printf("Food item - Sandwich\n Rs.149");
			break;
			default:
				printf("Invalid Choice");
				break;
	}
	return 0;
}
