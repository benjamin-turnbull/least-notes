/* takes an amount and calculates the least amount of currency notes it can be paid with */

#include <stdio.h>

int main(void) {
    int amount, twenty, ten, five, one;

    printf("Enter an amount:\n");
    scanf("%d", &amount);

    twenty = amount / 20.0;
    ten = (amount - twenty * 20) / 10.0;
    five = (amount - (twenty * 20) - (ten * 10)) / 5.0;
    one = (amount - (twenty * 20) - (ten * 10) - (five *5)) / 1.0;

    printf("20 dollar notes: %d\n 10 dollar notes: %d\n 5 dollar notes %d\n 1 dollar notes: %d\n", twenty, ten, five, one);
}
