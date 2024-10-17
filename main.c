#include <stdio.h>

int main(void) {
   int temperature;
    int temperaturaIniziale = 5;
    int aumento = 0;
    int diminuzione = 0;
    printf("inserisci le temperature per 10 dieci giorni:\n");
    for (temperature = 0; temperature < 10; temperature++) {
        printf("giorno %d: ", temperature + 1);
        scanf("%d", &temperature);
    }
    for (temperature = 0; temperature < 10; temperature++) {
        if (temperature > temperaturaIniziale) {
            aumento++;
        } else if (temperature < temperaturaIniziale) {
            diminuzione++;
        }
        temperaturaIniziale = temperature;
    }
    printf("\nla temperatura è aumentata %d volte\n", aumento);
    printf("la temperatura è diminuita %d volte\n", diminuzione);

    return 0;
}
