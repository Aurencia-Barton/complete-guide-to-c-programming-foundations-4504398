#include <stdio.h>
#include <time.h>

int main()
{
	time_t now;  // clock tick value

	time(&now);
	printf("%s",ctime(&now));

	return(0);
}
