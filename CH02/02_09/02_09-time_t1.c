#include <stdio.h>
#include <time.h>

// typdef float radius;

int main(void)
{
	time_t now;  // clock tick value; number of seconds elapsed since a certain date. 

	time(&now);
	printf("%s",ctime(&now)); //prints out the current time to the console. 

	return(0);
}
