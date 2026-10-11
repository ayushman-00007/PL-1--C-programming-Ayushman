int main()
{
    int var1[5];
    float var2[5];
    char var3[5];
    int i, j, k;

    // Integer array using for loop
    for(i = 0; i < 5; i++)
    {
        printf("Enter your integer value: ");
        scanf("%d", &var1[i]);
    }

    for(i = 0; i < 5; i++)
    {
        printf("At index %d:\n", i);
        printf("The value of var1 of index %d is %d and address is %p\n",
               i, var1[i], (void *)&var1[i]);
    }

    printf("\n\n");

    // Float array using while loop
    j = 0;
    while(j < 5)
    {
        printf("Enter your float/decimal value: ");
        scanf("%f", &var2[j]);
        j++;
    }

    j = 0;
    while(j < 5)
    {
        printf("At index %d:\n", j);
        printf("The value of var2 of index %d is %f and address is %p\n",
               j, var2[j], (void *)&var2[j]);
        j++;
    }

    printf("\n\n");

    // Character array using do-while loop
    k = 0;
    do
    {
        printf("Enter your character value: ");
        scanf(" %c", &var3[k]);
        k++;
    }
    while(k < 5);

    k = 0;
    do
    {
        printf("At index %d:\n", k);
        printf("The value of var3 of index %d is %c and address is %p\n",
               k, var3[k], (void *)&var3[k]);
        k++;
    }
    while(k < 5);

    return 0;
}
