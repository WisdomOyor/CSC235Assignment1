#include <stdio.h>
#include <string.h>

int main()
{
	//Declare Variables
	char string[10][30]; //2D array for storing strings
	int n = 10;
	int i;

	//Read the string from user
	printf("Enter names one by one: \n");
	for(i=0; i< n ; i++) {
		scanf("%s",string[i]);
	}

	//Print all the names
	printf("The names are: \n");
	for(i=0; i< n ; i++) {
		//Print the string at current index
		printf("%s \n", string[i]);
	}

	//Return to the system
	return 0;
}
