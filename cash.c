#include <cs50.h>
#include <stdio.h>

int calcQuarters(int cents);
int calcDimes(int cents);
int calcNickels(int cents);
int calcPennies(int cents);

int main(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    int quarters = calcQuarters(cents);
    cents = cents - (quarters * 25);

    int dimes = calcDimes(cents);
    cents = cents - (dimes * 10);

    int nickels = calcNickels(cents);
    cents = cents - (nickels * 5);

    int pennies = calcPennies(cents);

    int totalCoins = quarters + dimes + nickels + pennies;

    printf("Quarters: %i\n", quarters);
    printf("Dimes: %i\n", dimes);
    printf("Nickels: %i\n", nickels);
    printf("Pennies: %i\n", pennies);
    printf("Total coins: %i\n", totalCoins);
}

int calcQuarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents -= 25;
    }
    return quarters;
}

int calcDimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents -= 10;
    }
    return dimes;
}

int calcNickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        nickels++;
        cents -= 5;
    }
    return nickels;
}

int calcPennies(int cents)
{
    return cents;
}