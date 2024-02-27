//
// Created by Minh Khanh Nguyen on 27.02.2024.
//
#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS 5
#define INCREMENT_AMOUNT 200

int main(void) {
    double rate = 0.0;
    double result;

    printf("Enter a conversation rate (1.00 BTC -> CHF): ");
    scanf("%lf", &rate);

    int maxAmount = INCREMENT_AMOUNT * NUM_ROWS;

    for(int swissFranc = INCREMENT_AMOUNT; swissFranc <= maxAmount; swissFranc = swissFranc + 200) {
        result = swissFranc / rate;
        printf("%i CHF \t<--->\t %.5f BTC\n", swissFranc, result);
    }

    return EXIT_SUCCESS;
}