// Game of Stone, Paper, Scissor

#include <iostream>
#include <cstdlib>

using namespace std;

enum enItems {Stone = 1, Paper = 2, Scissor = 3};
enum enPlayers {Player = 1, Computer = 2, Draw = 3};

struct stPlayersInfo
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

string ReadString(const string &Message)
{
    cout << Message;

    string Input = "";

    cin >> Input;

    return Input;
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

void ChangeScreenColorToPurple()
{
    system("color 0D");
}

void ChangeScreenColorToGreen()
{
    system("color 0A");
}

void ChangeScreenColorToRed()
{
    system("color 4F");
}

void ChangeScreenColorToYellow()
{
    system("color 6F");
}

short NumbersOfRounds()
{
    short NumbersOfRounds = ReadShortPositiveNumberBetweenTwoRange("Enter how many Rounds you want to play (CHOOSE FROM 1, 10): ", 1, 10);
    return NumbersOfRounds;
}

enItems GetPlayerChoice()
{
    PrintSequenceOfCharacter('*', 100);
    short PlayerChoice = ReadShortPositiveNumberBetweenTwoRange("choose one of the following (Stone, Paper, Scissor) (1 = Stone, 2 = Paper, 3 = Scissor): ", 1, 3);
    PrintSequenceOfCharacter('*', 100                                                   );
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

    else if(PlayerChoice == enItems::Scissor && ComputerChoice == enItems::Stone)
        return enPlayers::Computer;
    else 
        return enPlayers::Draw;
};

void GetPointToPlayer(enPlayers Winner, stPlayersInfo &Player)
{  
    if(Winner == enPlayers::Player)
        Player.ScoreOfPlayer++;
    else 
    {
        if(Winner == enPlayers::Computer)
            Player.ScoreOfComputer++;
    }
}

string ConvertChoiceToString(enItems PlayerChoice)
{
    if(PlayerChoice == enItems::Stone)
        return "Stone";
    else if(PlayerChoice == enItems::Paper)
        return "Paper";
    else 
        return "Scissor";
}

string ConvertWhoWonInRoundToString(enPlayers Players)
{
    if(Players == enPlayers::Player)
        return "Player";
    else if(Players == enPlayers::Computer)
        return "Computer";
    else 
        return "Draw";
}

string FinalWinnerAllRound(stPlayersInfo &playersInfo)
{
    if(playersInfo.ScoreOfPlayer > playersInfo.ScoreOfComputer)
        return "Player";
    else if(playersInfo.ScoreOfComputer > playersInfo.ScoreOfPlayer)
        return "Computer";
    else 
        return "Draw";
}

void ChangeScreenColorDependingOnTheWinner(string TheWinner)
{
    if(TheWinner == "Player")
        ChangeScreenColorToGreen();
    else if(TheWinner == "Computer")
        ChangeScreenColorToRed();
    else 
        ChangeScreenColorToYellow();
}

void PrintSummaryOfRound(enItems PlayerChoice, enItems ComputerChoice, short NumberOfRound, string Winner)
{
    ChangeScreenColorDependingOnTheWinner(Winner);
    PrintSequenceOfCharacter('*', 40);
    cout << "Round [" << NumberOfRound + 1 << "]\n";
    cout << "player Choice: " << ConvertChoiceToString(PlayerChoice) << endl;
    cout << "Computer Choice: " << ConvertChoiceToString(ComputerChoice) << endl;
    cout << "Winner in this round: " << Winner << endl;
    PrintSequenceOfCharacter('*', 40);
}

void PrintTheFinalWinner(string FinalWinner)
{
    PrintSequenceOfCharacter('-', 40);
    cout << "Final Winner =>>>>>> " << FinalWinner << endl;
    PrintSequenceOfCharacter('-', 40);
}

void StartRound(short NumberOfRounds)
{
     stPlayersInfo Players;
    for(short loop = 0; loop < NumberOfRounds; loop++)
    {
        enItems PlayerChoice = GetPlayerChoice();
        enItems ComputerChoice = GetComputerChoice();
        enPlayers TheWinner = CheckWhoWonInRound(PlayerChoice, ComputerChoice);
        GetPointToPlayer(TheWinner, Players);
        PrintSummaryOfRound(PlayerChoice, ComputerChoice, loop, ConvertWhoWonInRoundToString(TheWinner));
    }
    PrintTheFinalWinner(FinalWinnerAllRound(Players));
}

bool PlayAgain(string Answer)
{
    if(Answer == "Yes" || Answer == "yes" || Answer == "Y" || Answer == "y")
        return true;
    else 
        return false;
}

<?php
function MyTest

void StartGame()
{
    StartRound(ReadShortPositiveNumberBetweenTwoRange("Enter how many rounds do you want to play (Choose from 1 to 10): ", 1, 10));   
}

int main()
{
    srand((unsigned)time(NULL));
    string Answer = "";
    do
    {
        ClearScreen();
        ChangeScreenColorToPurple();
        ClearScreen();
        DescribeGame();
        StartGame();
        Answer = ReadString("Do you want to play again: ");
    } while (PlayAgain(Answer));
    return 0;
}