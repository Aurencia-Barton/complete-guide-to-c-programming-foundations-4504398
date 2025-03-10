#include <stdio.h>	//header files, angle brackets force it to look in the director for the pre-processor directive.
#include <stdlib.h>
#include <time.h>

#define COUNT 10  //define constance values and you only need to change it where you see it.

int main()
{
	int a;

	srand( (unsigned)time(NULL) );
	for(a=0;a<COUNT;a++)
		printf("%3d ",rand()%100+1);
	putchar('\n');

	return 0;
}
