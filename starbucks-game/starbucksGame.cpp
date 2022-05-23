#include <iostream>
#include <unistd.h>

#define MAX_LEVEL 5

// Function declaration for ascii art
void Entrance();
void Win();
void Lose();

//void RandomNumbers(){}

int Fst = rand() % 7, Scnd = rand() % 7, Trd = rand() % 7;
int Product = Fst * Scnd * Trd;
int Sum = Fst + Scnd + Trd;

void Greetings(int Level){

    std::cout << "- damn, I want to pee,\n";
    std::cout << "thought Andrew.";
    std::cout << std::endl; 
    std::cout << "\"I need to guess the pin to this Starbucks restroom\"" << std::endl;
    
    std::cout << "\n****Explanations of the guessing****" << std::endl;
    std::cout << "\t+There're 3 numbers\n";
    std::cout << "\t+The product of 3 numbers is " << Product << std::endl;
    std::cout << "\t+The sum of 3 numbers is "<< Sum << std::endl;
    std::cout << "\n\t* Level " << Level << std::endl;

    Entrance();
    sleep(1);

}

// Function definition
bool Game(int Level){

    Greetings(Level);
      
    sleep (1);
    std::cout << "\n\n";
    std::cout << "Now, guess:\n";

    //storing the user's guess
    int UserGuess1 = 0, UserGuess2 = 0, UserGuess3 = 0;

    //getting the user's input
    std::cin >> UserGuess1 >> UserGuess2 >> UserGuess3;

    //calculations
    int UserSumGuess = UserGuess1 + UserGuess2 + UserGuess3;
    int UserProductGuess = UserGuess1 * UserGuess2 * UserGuess3;

    //printing the user's input
    std::cout << "you entered:" << "\n\n";
    std::cout << UserGuess1 <<" "<< UserGuess2 <<" " << UserGuess3 <<"\n";

    std::cout << "the product and sum respectively:\n";
    std::cout << UserProductGuess<<" " << UserSumGuess << std::endl;

    //control flow (same thing as in C language); check if guess is right
    if (UserSumGuess == Sum && UserProductGuess == Product){
        std::cout << "\n\n";
        std::cout << "* * * * *Congrats, you guessed! See you at the next level!* * * * *" << std::endl;
        std::cout << "\n";
        return 1;
    }
    else{
    std::cout << "\n\n";
        std::cout << "* * * * *What a bummer! Wrong guess!* * * * *" << std::endl;
        std::cout << "\n";
        Lose();
        return 0;
    }

} 


int main(){
    int GameDifficulty = 1;

    while (true){
        bool bLevelComplete = Game(GameDifficulty);

        //FIXING A wrong user's data type input
        std::cin.clear(); 
        std::cin.ignore(); 

            if (bLevelComplete){
            ++GameDifficulty;
            }

        if (GameDifficulty == MAX_LEVEL){
            Win();
            sleep(1);
            std::cout << "\n\n* * * * Ugh... Finally... * * * *" << std::endl;
            break;
        }
    }

    return 0;
}

//ascii art
void Entrance(){
std::cout <<"  ____________________________________________\n";
std::cout <<"|____________________________________________|\n";
std::cout <<"|__||  ||___||  |_|___|___|__|  ||___||  ||__|\n";
std::cout <<"||__|  |__|__|  |___|___|___||  |__|__|  |__||\n";
std::cout <<"|__||  ||___||  |_|___WC__|__|  ||___||  ||__|\n";
std::cout <<"||__|  |__|__|  |    || |    |  |__|__|  |__||\n";
std::cout <<"|__||  ||___||  | Boy|| |Girl|  ||___||  ||__|\n";
std::cout <<"||__|  |__|__|  |    || |    |  |__|__|  |__||\n";
std::cout <<"|__||  ||___||  |    || |    |  ||___||  ||__|\n";
std::cout <<"||__|  |__|__|  |    || |    |  |__|__|  |__||\n";
std::cout <<"|__||  ||___||  |   O|| |O   |  ||___||  ||__|\n";
std::cout <<"||__|  |__|__|  |    || |    |  |__|__|  |__||\n";
std::cout <<"|__||  ||___||  |    || |    |  ||___||  ||__|\n";
std::cout <<"||__|  |__|__|__|____||_|____|  |__|__|  |__||\n";
std::cout <<"|LLL|  |LLLLL|______________||  |LLLLL|  |LLL|\n";
std::cout <<"|LLL|  |LLL|______________|  |  |LLLLL|  |LLL|\n";
std::cout <<"|LLL|__|L|______________|____|__|LLLLL|__|LLL|\n";

}

void Win(){
std::cout <<" _______________________________________________________________________________ \n";
std::cout <<"|% % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % %|\n"; 
std::cout <<"| % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % |\n"; 
std::cout <<"|% % % % % %_____________________________ % % % % % % % % % % % % % % % % % % % |\n"; 
std::cout <<"| % % % % %|  _________________________  | % % % % % % % % % % % % % % % % % % %|\n"; 
std::cout <<"|% % _ % % |O|                         |O|% % % % % % % % % % _ % % % % % % % % |\n"; 
std::cout <<"| % /_\\ % %| | //                      | | % % % % % % % % % /_\\ % % % % % % % %|\n"; 
std::cout <<"|%  =|=  % |O|                         |O|% % % % % % % % %  =|=  % % % % % % % |\n"; 
std::cout <<"| % % % % %| |    //                   | | % % % % % % % % % % % % % % % % % % %|\n"; 
std::cout <<"|% % % % % |O|                         |O|% % % % % % % % % % % % % % % % % % % |\n"; 
std::cout <<"|==========| |                         | |======================================|\n"; 
std::cout <<"| SHOWERS  |O|                         |O|                                      |\n"; 
std::cout <<"| <=====   | | //                      | |              ________________        |\n"; 
std::cout <<"|          |O|_________________________|O|             |________________|       |\n"; 
std::cout <<"|          |_____________________________|               |            |    _    |\n"; 
std::cout <<"|           ______________/;____________                 |~           |  =)_)=  |\n"; 
std::cout <<"|         /`        .--T--|--T--.       `\\       ____    |            |   (_(   |\n"; 
std::cout <<"|        /_________'------'------'________\\     /PUSH\\   |__%______%__|   )_)   |\n"; 
std::cout <<"|         |  _____   ____   ____   _____ |     /______\\   .`        `.          |\n"; 
std::cout <<"|         | |__~__| |    | |    | |__~__||     |      |   :          :          |\n"; 
std::cout <<"|         |         |    | |    |        |     |      |    '.      .'           |\n"; 
std::cout <<"lc________|         |   {| |}   |        |_____|      |______\\`'-'`/____________|\n"; 
std::cout <<"          |         |    | |    |        |     |______|       |   |              \n";
std::cout <<"          |_________|____|_|____|________|                    |___|              \n";
}

void Lose(){
std::cout <<" _______________________________________________________\n"; 
std::cout <<"/                                                       \\\n"; 
std::cout <<"|                 Ha ha, you're dead                    |\n"; 
std::cout <<"\\_________              _______________________________/ \n"; 
std::cout <<"          \\_         __/    ___---------__               \n"; 
std::cout <<"            \\      _/      /              \\_             \n"; 
std::cout <<"             \\    /       /                 \\            \n"; 
std::cout <<"              |  /       | _    _ \\          \\           \n"; 
std::cout <<"              | |       / / \\  / \\ |          \\          \n"; 
std::cout <<"              | |       ||   ||   ||           |         \n"; 
std::cout <<"              | |       | \\_//\\_/ |           |         \n"; 
std::cout <<"              | |       |_| (||)   |_______|   |         \n"; 
std::cout <<"              | |         |  ||     | _  / /   |         \n"; 
std::cout <<"               \\ \\        |_________|| \\/ /   /          \n"; 
std::cout <<"                \\ \\_       |_|_|_|_|/|  _/___/           \n"; 
std::cout <<"                 \\__>       _ _/_ _ /  |                 \n"; 
std::cout <<"                          .|_|_|_|_|   |                 \n"; 
std::cout <<"                          |           /                  \n"; 
std::cout <<"                          |__________/                   \n"; 


}
