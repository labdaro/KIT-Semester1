#include <stdio.h>
int main()
{
    int age;
    printf("Enter age");
    scanf("%d", &age);
    (age > 18) ? printf("eligible to vote\n") : printf("not eligible to vote\n");
    return 0;
}
