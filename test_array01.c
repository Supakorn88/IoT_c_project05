#include <stdio.h>

void main(){
    int scoreA;
    int scoreB[5];

    float salaryiotA;
    float salaryiotB[100];

    char nameA;
    char nameB[50];

    scoreA = 100;
    printf("%d\n" , scoreA);
    scoreB[1] = 200;
    scoreB[4] = 400;

    printf("%d\n" , scoreB[1]);
    printf("%d\n" , scoreB[4]);

    salaryiotB[29] = 10000.25;
    

    salaryiotB[99] = scoreB[1] + salaryiotB[29];
    printf("%2f\n" , salaryiotB[99]);











}