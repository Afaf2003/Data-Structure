// C Program to demonstrate how to use union
#include <stdio.h>
// The Union is a user-defined data type in C language that can contain elements of the different data types just like structure. But unlike structures, all the members in the C union are stored in the same memory location. Due to this, only one member can store data at the given instance.
// union template or declaration
union un
{
	int member1;
	char member2;
	float member3;
};

// driver code
int main()
{

	// defining a union variable
	union un var1;

	// initializing the union member
	var1.member1 = 15;
	var1.member2 = 'c';
	var1.member3 = 15.4;

	printf("The value stored in member1 = %d\n",
		   var1.member1);
	printf("The value stored in member2 = %c\n",
		   var1.member2);
	printf("The value stored in member3 = %f\n",
		   var1.member3);

	return 0;
}
