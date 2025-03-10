#include <stdio.h>
#include <time.h>

int main()
{
	time_t now;  // clock tick value

	time(&now);
	printf("%s",ctime(&now)); //prints out the current time to the console. 

	return(0);
}
