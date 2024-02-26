/* 
#include <stdio.h>

void square(int num) {
	num = num * num;
}

int main() {
	int x = 4;
	square(x);
	printf("%d\n", x);
	return 0;
}

Take a look at the above code. In lecture, I pointed out that function variables are passed by value, not reference. So this program will currently print out 4. Compile the code to confirm this.

Use pointers and addresses to modify the code so x is passed by reference instead and is squared. This will involve changes to the square function that does not involve changing void to int and giving square a return statement. Make sure your code compiles with -Wall flag without warnings.

*/


#include <stdio.h>

void square(int *num) {
	(*num) = (*num) * (*num);
}

int main() {
	int x = 4;
	square(&x);
	printf("%d\n", x);
	return 0;
}
