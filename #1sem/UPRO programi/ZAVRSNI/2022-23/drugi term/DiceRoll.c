#include <stdio.h>
#include <stdlib.h>

int playRollTheDice(int noOfDiceSides, int diceStartNumber, int noOfRolls){
    int sum1=0;
    for (int i=0; i < noOfRolls; i++){
        sum1 +=  (rand()%(noOfDiceSides)+1)*diceStartNumber;
    }

    int sum2=0;
    for (int i=0; i < noOfRolls; i++){
        sum2 +=  (rand()%(noOfDiceSides)+1)*diceStartNumber;
    }

    if (sum1 > sum2){
        return 1;
    }else if (sum2 >sum1){
        return 2;
    }else{
        return 0;
    }
}

int main(void){
    int seed, noOfDiceSides, diceStartNumber, noOfRolls;
    printf("Upisi redom: sjeme, broj stranica na kockici, pocetni broj na kockici i broj bacanja > ");
    scanf("%d %d %d %d", &seed, &noOfDiceSides, &diceStartNumber, &noOfRolls);

    srand(seed);
    printf("Pobjednik je: %d ",  playRollTheDice(noOfDiceSides, diceStartNumber, noOfRolls));
    
    return 0;
}