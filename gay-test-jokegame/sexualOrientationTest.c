#include <stdio.h>
#include <stdlib.h>

int main()
{
int answer, x;
    printf("Hello. This is a gay test with 99.9 percent of accuracy.\nPress any number and Enter to continue\n");
    scanf("%i",&x);

    printf("\nDo you like boys? Press 0 for no, 1 for yes\n");
    scanf("%i", &answer);

                //!1for ( ; answer!=0 && answer !=1;)
                while ( answer!=0 && answer !=1) //! without ;
                {
                printf("\nYou have to chose between 0 and 1\n");
                scanf("\n%i", &answer);
                }

                    switch (answer)
                    {
                    case 1:
                        printf("I am sorry. You are a gay");
                    break;

                    default:
                        printf("Congratulations! You are straigh as glass");
                    break;
                    }

    return 0;
}

