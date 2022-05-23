#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int userInput=0, i=3, t=0;

int main()
{

time_t t;
srand((unsigned) time (&t));
int randomNumber  = rand()%21;

    printf("hello and welcome. This is a guessing game. I got a random number ranging from 0 to 20; I want you to guess it");
    printf("\n\nYou have %d tries. Also, Imma tell you if ur guessed numba is above or under mine. Have fun, B",i+1);

//    printf("%d\n", randomNumber);

            for (;i>-1;i--)
            {
                printf("\nPut your guessed number here: ");
                scanf("\n%d", &userInput); //! PUT white space before %d, otherwise, scanf will be skipped!

                    if (userInput<0 || userInput>20){ //! if one is true, nothing else from if statements will be executed. because else is exlusive
                        printf("I said it has to be between 0 and 20. %d tr%s left",i, i==1 ? "y" : "ies");
                    }
                    else if (userInput>randomNumber){
                        printf("\nWrong!You have %d tr%s left. Your number is above mine",i, i==1 ? "y" : "ies"); //!if i==1 print try, else print trie
                    }
                    else if (userInput<randomNumber){
                        printf("\nWrong!You have %d tr%s left. Your number is below mine",i, i==1 ? "y" : "ies");
                    }

                    else if (userInput==randomNumber){
                        printf("\n\tYou've guessed it! My number is %d indeed\n", randomNumber);
                        break;//! i dont need since they r all if else satements
                    }
                    if(i==0){
                    printf("\n\n\tYou have ran out all tries, loser. my numba was %d. try next time!\n", randomNumber);
                    break;//! i dont need since they r all if else satements
                    }
            }

    return 0;
}
