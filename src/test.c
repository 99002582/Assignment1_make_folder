#include <stdio.h>
#include "mstr.h"
#include "bit_oprtn.h"
#include "num_oprtn.h"
int main ()
{
	printf("\n........................................\n");
	    int a=set1(4,4);
	    int b=reset(2);
	    int c=flip(4);

	    printf("%d %d %d \n",a,b,c);
	    isKthBitSet(3,5);
	    int x,y;
	    int count = 5;

	printf("\n........................................\n");
	 int d=factorial(4);
	 isprime(5);
	 ispalindrome(100);
	 printf(" \nfactorial is %d ",d);

	  x=sum(count, 12, 67, 6, 7, 100);
	  printf("\nsum is %d ",x);


	printf("\n........................................\n");
	char a[20]="Program";
    char b[20]="Hello world";

    int len = my_strlen(a);
    printf("Length is %d\n", len);

    printf("\nCopying strings\n");
    my_strcpy(b, a); 
    printf("First string (a) = %s\n", a);
    printf("Second string (b) = %s\n", b);

    printf("\nConcatenating strings\n");
    my_strcat(a, b);
    printf("First string: %s\n", a);
    printf("Second string: %s\n\n", b);

    printf("Comparing strings");
    printf("\nstrcmp(\"a\", \"b\") = %d\n", my_strcmp("a", "b") );


}
