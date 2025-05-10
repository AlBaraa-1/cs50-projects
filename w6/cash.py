from cs50 import get_float

dollars = -1
while dollars <= 0:
    dollars = get_float("Change: ")

cents = round(dollars * 100)

quarters = 0
while cents >= 25:
    quarters = quarters + 1
    cents = cents - 25

dimes = 0
while cents >= 10:
    dimes = dimes + 1
    cents = cents - 10

nickels = 0
while cents >= 5:
    nickels = nickels + 1
    cents = cents - 5

totalCoins = quarters + dimes + nickels + cents

print(totalCoins)
