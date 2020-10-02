#include <stdio.h>
#include <stdlib.h>
#define giorni 1000
int main()
 {
     float contagiati[giorni];
     int N,i;
     float R;
     float sommacontagiati=0.0;
     float contagiatioggi=0.0;
     float contagiatiprecedente=0.0;
     printf("Inserisci il numero di contagiati al giorno /n");
     scanf("%f", &R);
     printf("Inserisci il numero di alunni /n");
     scanf("%d", &N);

     for(i=0; i<giorni; i++){
        i=i*R;
        printf("i contagiati giornalieri sono: ");
        scanf("%f/n", i);
        giorni +1;
        }
      printf("i giorni per contagiare tutti sono: ");
      scanf("%f", giorni);
      return 0;




 }
