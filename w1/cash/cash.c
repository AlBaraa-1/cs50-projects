#include <cs50.h>
#include <stdio.h>

int get_cents(int);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int cents = get_cents();

    int quarters = calculate_quarters(cents);
    cents %= 25;

    int dimes = calculate_dimes(cents);
    cents %= 10;

    int nickels = calculate_nickels(cents);
    cents %= 5;

    int pennies = calculate_pennies(cents);

    int totalCoins = quarters + dimes + nickels + pennies;

    printf("Quarters: %d\n", quarters);
    printf("Dimes: %d\n", dimes);
    printf("Nickels: %d\n", nickels);
    printf("Pennies: %d\n", pennies);
    printf("Total coins: %d\n", totalCoins);

    return 0;
}

int get_cents(int)
{
    int cents;
    do
    {
        cents = get_int("Enter the number of cents: ");
    }
    while (cents < 0);

    return cents;
}

int calculate_quarters(int cents)
{
    return cents / 25;
}

int calculate_dimes(int cents)
{
    return cents / 10;
}

int calculate_nickels(int cents)
{
    return cents / 5;
}

int calculate_pennies(int cents)
{
    return cents;
}
