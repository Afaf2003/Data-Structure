// An example program to demonstrate working
// of enum in C
#include<stdio.h>

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

int main()
{
	enum week i;
    // enum week day;
	// day = Wed;
	// printf("%d",day);
    for (i=Mon; i<=Sun; i++)     
      printf("%d ", i);
	return 0;
}
