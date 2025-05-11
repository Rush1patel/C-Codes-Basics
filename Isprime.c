#include <stdio.h>
int isprime(int a);
int main()
{
    int num;
    printf("Type a number to check if its Prime or Not:\t");
    scanf("%d", &num);
    isprime(num);
    return 0;
}
int isprime(int a)
{
    int isprime = 1;
    if (a <= 1)
    {
        printf("Not a prime Number\n");
    }
    else
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime == 0)
        {
            printf("Typed number is not prime\n");
        }
        else
        {
            printf("Typed number is Prime");
        }
    }
}