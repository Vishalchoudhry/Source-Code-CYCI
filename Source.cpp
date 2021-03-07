#include <iostream>
#include<ctime>
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
    std::cout << "\nYou Are A Secret Agent Breaking Into NASA Security in a Level: " << Difficulty;
    std::cout << "\n";
    std::cout << "Enter Correct Code To Break Security....";
};

int main()
{
    srand(time(NULL));
    int LevelDifficulty{1};
    int MaxDifficulty{3};

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
        }
        else
        {
            std::cout << "\n**You Failed To Crack NASA Agent Try Again!.**";
        };
    };

    return 0;
};
