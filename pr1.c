#include <stdio.h>

    int sum (int, int);
    int main (void)
    {
        int total;
		printf("\n\n Function : a simple structure of function :\n");
		printf("------------------------------------------------\n");
        total = sum (5, 6);
        printf ("The total is :  %d\n", total);
        return 0;
    }

    int sum (int a, int b)
    {
	    int s;
		s=a+b;
        return s;
    }
