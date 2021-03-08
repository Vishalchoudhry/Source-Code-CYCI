#include <iostream>
#include <ctime>
/*
                                        v       v
                                         v       v
                                          v      v
                                           v    v
                                            v  v
                                             v   *
                                               
*/
/*
                                          !i!!i!
                                  Hii I'm Vishal Choudhry.
                        This is My First C++ Simple and Nice Project.
                        To Playing My 3D games Check Out **Norule Gaming Studio**
                                         Thank You...

*/

//Forword Dec. of PrintIntro Function.
void PrintIntro(int Difficulty);

bool PlayGame(int Difficulty)
{
    PrintIntro(Difficulty);

    const int CodeA{rand() % 2 * Difficulty + Difficulty};
    const int CodeB{rand() % 2 * Difficulty + Difficulty};
    const int CodeC{rand() % 2 * Difficulty + Difficulty};
    /*
    !i!  this is multiline comment !i!
    */

    const int CodeSum{CodeA + CodeB + CodeC};
    const int CodeProduct{CodeA * CodeB * CodeC};

    //main hint for the Player
    std::cout << "\n";
    std::cout << "There Are Three Number in The Code"
              << "\n";

    //hint to input and hack Security.
    std::cout << "+ The Codes Add-Up To: " << CodeSum << "\n";
    std::cout << "+ The Codes Multiply To Give:  " << CodeProduct;
    std::cout << "\n";

    //Getting Player Guess Input
    int PlayerGuessA, PlayerGuessB, PlayerGuessC;
    std::cin >> PlayerGuessA >> PlayerGuessB >> PlayerGuessC;

    std::cout << "You Entered: " << PlayerGuessA << " " << PlayerGuessB << " " << PlayerGuessC << "\n";

    int GuessSum = {PlayerGuessA + PlayerGuessB + PlayerGuessC};
    int GuessProduct = {PlayerGuessA * PlayerGuessB * PlayerGuessC};

    //checking Guess is it Equal to  its real Value.
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "Access Granted!";
        return true;
    }
    else
    {
        std::cout << "Access Denied!";
        return false;
    };
};

void PrintIntro(int Difficulty)
{
    //Who Are You ?

    std::cout << "\n*********************************************************************************\n";
    std::cout << "\nYou Are A Secret Agent Breaking Into NASA Security..."
              << "\n You breach Level Difficulty :" << Difficulty;
    std::cout << "\n";
    std::cout << "Enter Correct Code To Break Security....\n";
    std::cout << "\n*********************************************************************************\n";
};

int main()
{
    srand(time(NULL));
    int LevelDifficulty{1};
    int MaxDifficulty{3};
    int Score{0};
    int Session{0};
    int SecurityLevel{1};

    while (LevelDifficulty <= MaxDifficulty) //loop Until All Levels UnComplete
    {

        bool bLevelComplete = {PlayGame(LevelDifficulty)};
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            //increase Difficulty.
            std::cout << "\nCongrates Hacker You Broke Security of Level:" << LevelDifficulty << "\n";

            ++LevelDifficulty;

            if (LevelDifficulty == 3)
            {
                Score = Score + 5;
                LevelDifficulty = 1;
                ++Session;
                ++SecurityLevel;

                std::cout << "\n\nWow! You Are About Hack NASA Security\n";
                std::cout << "___________________________________________\n";
                std::cout << "Security Level :" << SecurityLevel << ".\n";
                std::cout << "Session :" << Session << ".\n";
                std::cout << "Score :" << Score << ".\n";
                std::cout << "______________________________________________\n";
                std::cout << "Starting Session :" << Session + 1 << ".\n";
            };
        }
        else
        {
            std::cout << "\n**You Failed To Crack NASA Security\n Agent Try Again!.**";
        };
    };

    return 0;
};
/*
                                       !i!Intro!i!
                        This is a Simple and Nice Console Game...
                         Which Will Challenge You Math Skill...
                                So Are You Ready...

*/

/*
                                       !i!!i!
                                    Learn From Code
                                        or
                      if You Have Any Suggestion Please Let me know
                                     Thank You...
*/
