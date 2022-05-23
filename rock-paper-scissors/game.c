#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

#include "graphics.h"
int main()
{

        time_t t;
        loop:
        srand((unsigned) time (&t));
        int randomNumber  = rand()%4;
        if (randomNumber == 0)
        goto loop;
        int answer;

//!printf("\n%d\n",randomNumber);
            printf("Hello. This is a rock paper scissors game.\n");
            sleep(2);
            printf("\nWhat weapon do you choose? \n\n(number 1)");
            rock();
                printf("\n\n(number 2)");
            paper();
                printf("\n\n(number 3)");
            scissors();

            printf("\nPress '1' for rock, '2' for paper, '3' for scissors\n");
            scanf("%i", &answer);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"); //! новий рядок

                        //!1for ( ; answer!=1 && answer !=2;)

                        while ( answer!=1 && answer !=2 &&answer !=3) //! without ;
                        {
                        printf("\nYou have to chose between 1, 2, and 3\n");
                        sleep(2);
                            printf("\nWhat weapon do you choose? \n\n(number 1)");
                            rock();
                                printf("\n\n(number 2)");
                            paper();
                                printf("\n\n(number 3)");
                            scissors();

                        scanf("\n\n%d", &answer);
                        }
                            if (answer == randomNumber)
                            {
                                if (answer == ROCK && randomNumber == ROCK){

                                route();

                                    rock();
                                    printf("\t\n VS");
                                    rock();

                                    printf("\nYou chose ROCK, I chose ROCK too!\n");

                            }
                            else if (answer == PAPER && randomNumber == PAPER ){
                                    route ();

                                        paper ();
                                        printf("\t\n VS");
                                        paper ();

                                printf("\nYou chose PAPER, I chose PAPER too!\n");
                                }
                            else if (answer == SCISSORS && randomNumber == SCISSORS){
                                    route ();

                                    scissors();
                                    printf("\t\n VS");
                                    scissors();

                                    printf("\nYou chose SCISSORS, I chose SCISSORS too!\n");


                                }
                                    sleep (2);
                                    draw();
                                }
                                //WHEN A USER WINS
                                //! I can substitude ROCK PAPER SCISSORS words with numbers they represent in the #define. The output will be the same
                            else if (answer == ROCK && randomNumber == SCISSORS)

                                {
                                    route ();
                
                                    rock ();
                                    printf("\t\n VS");
                                    scissors();
                                    
                                    printf("\nYou chose ROCK, I chose SCISSORS\n");
                                        sleep(3);
                                        win ();
                                }

                            else if (answer==PAPER && randomNumber == ROCK)
                                {
                                    route ();

                                    paper();
                                    printf("\t\n VS");
                                    rock();
                                    
                                    printf("\nYou chose PAPER, I chose ROCK\n");

                                    sleep(3);
                                    win ();                            
                                }
                            else if (answer==SCISSORS && randomNumber == PAPER)
                            {
                                route ();

                                scissors();
                                printf("\t\n VS");
                                paper();
                                
                                printf("\nYou chose SCISSORS, I chose PAPER\n");

                                sleep(3);
                                win ();
                            }


                                //WHEN A USER LOSES
                            else if (answer == SCISSORS && randomNumber == ROCK)
                                {

                                route ();
                                
                                scissors();
                                printf("\t\n VS");
                                rock ();
                                
                                printf("\nYou chose SCISSORS, I chose ROCK\n");

                                sleep(3);
                                lose();
                                }
                            else if (answer == PAPER && randomNumber == SCISSORS)
                                {

                                route ();
                                
                                paper();
                                printf("\t\n VS");
                                scissors();
                                
                                printf("\nYou chose PAPER, I chose SCISSORS\n");

                                sleep(3);
                                lose();
                                            }
                            else if (answer == ROCK && randomNumber == PAPER)
                                {
                                route ();
                                
                                rock();
                                printf("\t\n VS");
                                paper();

                                printf("\nYou chose ROCK, I chose PAPER\n");

                                sleep(3);
                                
                                lose();
                                }
                            
                            art();
return 0;
}

