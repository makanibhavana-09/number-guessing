#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int random,guess;
    int no_of_guess=0;
    srand(time(NULL));
    printf("WELCOME TO THE WORLD OF GUESSING NUMBERS:");
    random=rand()%100+1;  //generate no b/w 0 to 100
    do{
        printf("\nGuess the number between 1 to 100:");
        scanf("%d",&guess);
        no_of_guess++;
        if(guess>random){
            printf("guess the smaller number");
        }
        else if(guess<random){
            printf("guess the larger number");
        }
        else{
            printf("CONGRATUALTIONS!! , you have guessed the correct number in %d attempts",no_of_guess);
        }
    } while(guess!=random);
    printf("bye bye, thanks for playing game.");

}