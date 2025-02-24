// we can check the size of the data type using sizeof() operator.
#include <stdio.h>
int main(void)
{
    int a = 1;
    float b = 2.5f;
    double c = 3.789046;
    printf("Size of int : %d\n", sizeof(a));        //4
    printf("Size of float: %d\n", sizeof(b));       //4
    printf("Size of double: %d\n", sizeof(c));      //8
    return 0;
}




