#include <stdio.h>


int main(void)
{
	void foo(void)
{
    int a = 0;
    while(a <= 99)
    {
        if(a < 10)
        {
            putchar((char)a/10 + '0');
            putchar((char)a%10 + '0');
            putchar('\n');
        }
        a++;
    }
}	

	foo();

	return (0);
}
