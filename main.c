#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    const int min = 0;
    const int max = 2;
    int mossaC, mossaG;
    int vitC = 0, vitG = 0; //vitC vittoria computer vitG vittoria giocatore
    srand(time(NULL));
    mossaC = rand() % (max - min + 1) + min;
    switch (mossaC) {
        case 1:
            mossaC = 2;
        //carta
            break;
        case 2:
            mossaC = 5;
        //forbici
            break;
        default:
            mossaC = 0;
        // sasso
    }
    printf("%d\n", mossaC);
    // 0 sasso /1/ 2 carta /2/ 5 forbici
    do {
        /*srand(time(NULL));
        mossaC = rand() % (max - min + 1) + min;
        switch(mossaC){
            case 1:
                mossaC = 2;
                carta
            break;
            case 2:
                mossaC = 5;
                forbici
            break;
            default:
                mossaC = 0;
                sasso
        }
        printf("%d\n", mossaC);*/
        //in caso voglia random anche la mossa del computer
        printf("scegli la mossa |0|sasso |1|carta |2|forbici :  \n");
        scanf("%d", &mossaG);
        if (mossaG == -1) {
            break;
        }
        if (mossaG < min || mossaG > max) {
            printf("la mossa inserita non esiste riprova \n");
        }
        if (mossaG == 0 && mossaC == 5) {
            printf("hai vinto! \n");
            vitG++;
        } else if (mossaG == 2 && mossaC == 2) {
            printf("hai vinto! \n");
            vitG++;
        } else if (mossaG == 1 && mossaC == 0) {
            printf("hai vinto! \n");
            vitG++;
        } else {
            printf("hai perso! \n");
            vitC++;
        }
    } while (mossaG != -1);
    printf("il giocatore ha vinto %d volte\n", vitG);
    printf("il computer ha vinto %d volte\n", vitC);
}
