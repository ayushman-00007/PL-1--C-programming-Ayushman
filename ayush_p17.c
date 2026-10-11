#include <stdio.h>

int main()
{
    int var[5];
    float var2[5];
    char var3[5];

    var[0] = 10;
    var[1] = 20;
    var[2] = 30;
    var[3] = 40;
    var[4] = 50;

    printf("\nThe value of var of index 0 is %d", var[0]);
    printf("\nAnd address is %p", (void *)&var[0]);
    printf("\nThe value of var of index 1 is %d", var[1]);
    printf("\nAnd address is %p", (void *)&var[1]);
    printf("\nThe value of var of index 2 is %d", var[2]);
    printf("\nAnd address is %p", (void *)&var[2]);
    printf("\nThe value of var of index 3 is %d", var[3]);
    printf("\nAnd address is %p", (void *)&var[3]);
    printf("\nThe value of var of index 4 is %d", var[4]);
    printf("\nAnd address is %p", (void *)&var[4]);

    var2[0] = 1.1;
    var2[1] = 2.2;
    var2[2] = 3.3;
    var2[3] = 4.4;
    var2[4] = 5.5;

    printf("\n\nThe value of var2 of index 0 is %f", var2[0]);
    printf("\nAnd address is %p", (void *)&var2[0]);
    printf("\nThe value of var2 of index 1 is %f", var2[1]);
    printf("\nAnd address is %p", (void *)&var2[1]);
    printf("\nThe value of var2 of index 2 is %f", var2[2]);
    printf("\nAnd address is %p", (void *)&var2[2]);
    printf("\nThe value of var2 of index 3 is %f", var2[3]);
    printf("\nAnd address is %p", (void *)&var2[3]);
    printf("\nThe value of var2 of index 4 is %f", var2[4]);
    printf("\nAnd address is %p", (void *)&var2[4]);

    var3[0] = 'A';
    var3[1] = 'B';
    var3[2] = 'C';
    var3[3] = 'D';
    var3[4] = 'E';

    printf("\n\nThe value of var3 of index 0 is %c", var3[0]);
    printf("\nAnd address is %p", (void *)&var3[0]);
    printf("\nThe value of var3 of index 1 is %c", var3[1]);
    printf("\nAnd address is %p", (void *)&var3[1]);
    printf("\nThe value of var3 of index 2 is %c", var3[2]);
    printf("\nAnd address is %p", (void *)&var3[2]);
    printf("\nThe value of var3 of index 3 is %c", var3[3]);
    printf("\nAnd address is %p", (void *)&var3[3]);
    printf("\nThe value of var3 of index 4 is %c", var3[4]);
    printf("\nAnd address is %p", (void *)&var3[4]);

    return 0;
}
