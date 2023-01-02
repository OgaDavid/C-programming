#include <stdio.h>

int main(void)

{

    long card;

    do
    {
        printf("Card no: ");
        scanf("%ld", &card);
    }
    while (card < 0);
    //card must be greater than zero.

    int card1, card2, card3, card4, card5, card6, card7, card8;

    // select each alternate numbers starting from the second to the last digit and multiply by two
    card1 = ((card % 100) / 10) * 2;
    card2 = ((card % 10000) / 1000) * 2;
    card3 = ((card % 1000000) / 100000) * 2;
    card4 = ((card % 100000000) / 10000000) * 2;
    card5 = ((card % 10000000000) / 1000000000) * 2;
    card6 = ((card % 1000000000000) / 100000000000) * 2;
    card7 = ((card % 100000000000000) / 10000000000000) * 2;
    card8 = ((card % 10000000000000000) / 1000000000000000) * 2;

    // to get each individual digit and add them together.
    card1 = (card1 % 100 / 10) + (card1 % 10);
    card2 = (card2 % 100 / 10) + (card2 % 10);
    card3 = (card3 % 100 / 10) + (card3 % 10);
    card4 = (card4 % 100 / 10) + (card4 % 10);
    card5 = (card5 % 100 / 10) + (card5 % 10);
    card6 = (card6 % 100 / 10) + (card6 % 10);
    card7 = (card7 % 100 / 10) + (card7 % 10);
    card8 = (card8 % 100 / 10) + (card8 % 10);

    int sum1 = card1 + card2 + card3 + card4 + card5 + card6 + card7 + card8;

    // get digits not multiplied
    int card9, card10, card11, card12, card13, card14, card15, card16;

    card9 = (card % 10);
    card10 = ((card % 1000) / 100);
    card11 = ((card % 100000) / 10000);
    card12 = ((card % 10000000) / 1000000);
    card13 = ((card % 1000000000) / 100000000);
    card14 = ((card % 100000000000) / 10000000000);
    card15 = ((card % 10000000000000) / 1000000000000);
    card16 = ((card % 1000000000000000) / 100000000000000);

    int sum2 = card9 + card10 + card11 + card12 + card13 + card14 + card15 + card16;
    int sum = sum1 + sum2;

    int length = 0;
    long visa = card;
    long amex = card;
    long mastercard = card;

    if ((sum % 10) != 0)
    {
        printf("%s\n", "INVALID");
        return 0;
    }

    // Get if card number is VISA, AMEX or MASTERCARD

    while (card > 0)
    {
        card = card / 10;
        length++;
    }

    // to identify if card is visa

    while (visa >= 10)
    {
        visa /= 10;
    }

    // condition to check if card length is 13 or 16 and if it starts with 4
    if (visa == 4 && (length == 13 || length == 16))
    {
        printf("%s\n", "VISA");
        return 0;
    }

    // to identify if card is amex

    while (amex >= 10000000000000)
    {
        amex /= 10000000000000;
    }

    // condition to check if the card length is 15 and if the card starts with either 34 or 37
    if (length == 15 && (amex == 34 || amex == 37))
    {
        printf("%s\n", "AMEX");
        return 0;
    }

    // to check if card is mastercard

    while (mastercard >= 100000000000000)
    {
        mastercard /= 100000000000000;
    }

    // condition to check if card length is 16 and starts with either 51, 52, 53, 54 or 55
    if (length == 16 && (mastercard == 51 || mastercard == 52 || mastercard == 53 || mastercard == 54 || mastercard == 55))
    {
        printf("%s\n", "MASTERCARD");
        return 0;
    }
    else
    {
        printf("%s\n", "INVALID");
    }
}
