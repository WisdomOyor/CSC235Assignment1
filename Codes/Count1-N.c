#include <stdio.h>
#include <string.h>

int main()
{
	int i, n;

	//Get the max count
	printf("Enter number to count to: \n");
	scanf("%d", &n);

	//Print the count from 1-N
	printf("Counting to ");
	printf("%d: \n", n);
	for(i=1; i<=n; i++) {
		//Print each number
		printf("%d\n", i);
	}

	//Return to the system
	return 0;
}
