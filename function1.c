#include <stdio.h>

	int multiply(int a, int b)
{	
	return(a + b);

}

	int div(int a, int b)
{

	return (a / b);

}

int main()
{

	printf("The multiplication of 80 and 900 is = %d\n",multiply(80,900));


	printf("The division of 80 and 900 is = %d\n",div(80,900));
	
	
	return 0;
}
