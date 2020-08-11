#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* heads = "Queen Head!";
char* tails = "Amount of Money:";

int main(){
    int value;
    srand(time(NULL));
    value = rand();
    if (value % 2==0){
        //this is even
        printf("%s",heads);
    } else {
        //this is odd
        printf("%s %d pence",tails,value);
    }
    printf("\n");
    return 0;
}