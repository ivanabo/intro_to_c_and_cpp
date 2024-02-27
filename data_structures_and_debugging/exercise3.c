#include <stdio.h>

struct X
{
    short s; 
    int i; 
    char c;
};

struct Y
{
    int i;
    char c;
    short s;
};

struct Z
{
    int   i;
    short s;
    char  c;
};

int main()
{
	printf("Sizes of:\n char: %ld\n int: %ld\n short: %ld\n", sizeof(char), sizeof(int), sizeof(short));
	struct X theFirst;
	printf("Size of X is: %ld\n", sizeof(theFirst));
	struct Y theSecond;
	printf("Size of Y is: %ld\n", sizeof(theSecond));
	struct Z theThird;
	printf("Size of X is: %ld\n", sizeof(theThird));
}
