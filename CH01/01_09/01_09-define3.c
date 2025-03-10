#include <stdio.h>

#define charout(a) putc(a,stdout) //created a macro from the directive

int main(void)
{
	charout('H');
	charout('i');
	charout('!');
	charout('\n');
	return 0;
}
