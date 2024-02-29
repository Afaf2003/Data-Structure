#include <stdio.h>
#include <stdlib.h>
int main()
{
    //1. Assigning a string literal without size
    char str[] = "GeeksforGeeks";
    // 2. Assigning a string literal with a predefined size
    char str2[50] = "GeeksforGeeks";
    // 3. Assigning character by character with size
    char str3[14] = { 'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};
    // 4. Assigning character by character without size
    char str4[] = { 'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};

    printf("%s\n",str);
    printf("%s\n",str4);
    printf("%s\n",str2);
    printf("%s\n",str3);


    return 0;
}
