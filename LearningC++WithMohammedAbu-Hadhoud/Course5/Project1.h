#include <iostream>
#include <cstdlib>

using namespace std;

enum enItems {Stone = 1, Paper = 2, Scissor = 3};
enum Result {Win = 1, Loose = 2, Draw = 3};
enum enPlayers {Player = 1, Computer = 2};

struct stPlayersPoints 
{
    short ScoreOfPlayer = 0;
    short ScoreOfComputer = 0;
};

int RandomNumber(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;

    return Random;
}

bool IsNumberInRange(short Number, short From, short To)
{
    return (Number >= From && Number <= To);
}

short ReadShortPositiveNumberBetweenTwoRange(const string& Message, short From, short To)
{
    short Number = 0;

    do 
    {
        cout << Message;

        cin >> Number;
    } while(!IsNumberInRange(Number, From, To));
    
    return Number;
}

void PrintSequenceOfCharacter(char Character = '*', short TimesOfRepeatingCharacter = 1)
{
    for(short loop = 0; loop < TimesOfRepeatingCharacter; loop++)
        cout << Character;
    cout << endl;
}

void PrintAllThePossibilitiesOfPaper()
{
    PrintSequenceOfCharacter('#', 80);
    cout << "If you choose PAPER and the computer chose STONE (you win)\n";
    cout << "If you choose PAPER and the computer chose SCISSOR (the computer wins)\n";
    PrintSequenceOfCharacter('#', 80);
}

void PrintAllThePossibilitiesOfStone()
{
    PrintSequenceOfCharacter('#', 80);
    cout << "If you choose STONE and the computer chose SCISSOR (you win)\n";
    cout << "If you choose STONE and the computer chose PAPER (the computer wins)\n";
    PrintSequenceOfCharacter('#', 80);
}

void PrintAllThePossibilitiesOfScissor()
{
    PrintSequenceOfCharacter('#', 80);
    cout << "If you choose SCISSOR and the computer chose PAPER (you win)\n";
    cout << "If you choose SCISSOR and the computer chose STONE (the computer wins)\n";
    PrintSequenceOfCharacter('#', 80);
}

void DescribeGame()
{
    PrintSequenceOfCharacter('=', 120);
    cout << "Welcome to the game of (Stone, Paper, Scissor)\n";
    cout << "Rules ate easy !";
    cout << "Your will choose one form Stone, Paper, Scissor), then the computer wil choose randomly !\n";
    cout << "To tell who the is the winner it deepens on the coming rules, i will tell you what are these rules !!!\n";

    PrintSequenceOfCharacter('*', 70);
    cout << "Rules are easy but i will tell all the possible Possibilities!\n";
    PrintSequenceOfCharacter('*', 70);
    
    PrintSequenceOfCharacter('#', 22);
    cout << "Possibility Number #1\n";
    PrintSequenceOfCharacter('#', 22);
    PrintAllThePossibilitiesOfPaper();

    PrintSequenceOfCharacter('#', 22);
    cout << "Possibility Number #2\n";
    PrintSequenceOfCharacter('#', 22);
    PrintAllThePossibilitiesOfStone();

    PrintSequenceOfCharacter('#', 22);
    cout << "Possibility Number #3\n";
    PrintSequenceOfCharacter('#', 22);
    PrintAllThePossibilitiesOfScissor();

    PrintSequenceOfCharacter('=', 120);
}

void ClearScreen()
{
    system("cls");
}

void ChangeScreenColorToGreen()
{
    system("color 0A");
}

short NumbersOfRounds()
{
    short NumbersOfRounds = ReadShortPositiveNumberBetweenTwoRange("Enter how many Rounds you want to play (CHOOSE FROM 1, 10): ", 1, 10);
    return NumbersOfRounds;
}

enItems GetChoiceOfPlayer()
{
    PrintSequenceOfCharacter('*', 40);
    short PlayerChoice = ReadShortPositiveNumberBetweenTwoRange("choose one of the following (Stone, Paper, Scissor): ", 1, 3);
    return (enItems) PlayerChoice;
}

enItems GetComputerChoice()
{
    return (enItems) RandomNumber(1, 3);
}

enPlayers CheckWhoWonInRound(enItems PlayerChoice, enItems ComputerChoice)
{
    if(PlayerChoice == enItems::Paper && ComputerChoice == enItems::Stone)
        return enPlayers::Player;

    else if(PlayerChoice == enItems::Paper && ComputerChoice == enItems::Scissor)
        return enPlayers::Computer;

    else if(PlayerChoice == enItems::Stone && ComputerChoice == enItems::Scissor)
        return enPlayers::Player;

    else if(PlayerChoice == enItems::Stone && ComputerChoice == enItems::Paper)
        return enPlayers::Computer;

    else if(PlayerChoice == enItems::Scissor &&  ComputerChoice == enItems::Paper)
        return enPlayers::Player;

    else 
        return enPlayers::Computer;
};

stPlayersPoints GetPointToVictoria(enPlayers WhoWon)
{
    stPlayersPoints GetPoints;
    
    if(WhoWon == enPlayers::Player)
        GetPoints.ScoreOfPlayer + 1;
    else 
        GetPoints.ScoreOfComputer + 1;

    return GetPoints;
}

string RoundResult(stPlayersPoints RoundWinner)
{
    stPlayersPoints Round_Winner;
    
    if(Round_Winner.ScoreOfPlayer > Round_Winner.ScoreOfComputer)
        return "Plyer";
    else if(Round_Winner.ScoreOfComputer > Round_Winner.ScoreOfPlayer)
        return "Computer";
    else 
        return "Draw";
}

string ConvertPlayerOrComputerChoiceToString(enItems Choice)
{
    if(Choice == enItems::Paper)
        return "Paper";
    else if(Choice == enItems::Stone)
        return "Stone";
    else 
        return "Scissor";
}

void PrintSummaryAfterEachRound(enItems PlayerChoice, enItems ComputerChoice, short NumberOfRounds, string Result)
{
    cout << "Round [" << NumberOfRounds << "]\n";
    cout << "Player Choice: " << ConvertPlayerOrComputerChoiceToString(PlayerChoice) << endl;
    cout << "Computer Choice: " << ConvertPlayerOrComputerChoiceToString(ComputerChoice) << endl;
    cout << "Round Winner: " << Result << endl;
}

void StartRound(short NumberOfRounds)
{
    for(short loop = 0; loop < NumberOfRounds; loop++)
    {
        stPlayersPoints GetPointToPlayer;
        enItems PlayerChoice = GetChoiceOfPlayer();
        enItems ComputerChoice = GetComputerChoice();
        PrintSummaryAfterEachRound(PlayerChoice, ComputerChoice, loop + 1, RoundResult(GetPointToPlayer));
    }
}

void StartGame()
{
    ClearScreen();
    ChangeScreenColorToGreen();
    DescribeGame();
    StartRound(ReadShortPositiveNumberBetweenTwoRange("Enter how many rounds you want to play: ", 1, 10));
}

void Print()
{
    StartGame();
}