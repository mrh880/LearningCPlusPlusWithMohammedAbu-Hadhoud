#include <iostream>

using namespace std;

enum enQuestionLevel {Easy = 1, Med, Hard, Mix};
enum enOperationType {Add = 1, Sub, Mul, Div, _Mix};
char OperationsCharacter[4] = {'+', '-', '*', '/'};
string QuestionLevels[4] = {"Easy", "Med", "Hard", "Mix"};

struct stGameInfo
{
    short NumberOfQuestions = 0;
    enQuestionLevel QuestionsLevel = enQuestionLevel::Easy;
    enOperationType OperationType = enOperationType::Add;
    short NumberOfRightAnswers = 0;
    short NumberOfWrongAnswers = 0;
    
};

struct stQuestionInfo
{
    short FirstNumber = 0; 
    short SecondNumber = 0;
    char Operation = '+';
    short Result = 0;

};

bool isNumberInRange(short Number, short From, short To)
{
    return(Number >= From && Number <= To);
}

void PrintTextOnScreen(const string &Text)
{
    cout << Text;
}

void PrintSymbolOnScreen(const char &Character)
{
    cout << Character;
}

void PrintSequenceOfCharacters(const char &Character, short NumberOfRepeating)
{
    for(short TimesToRepeat = 1; TimesToRepeat <= NumberOfRepeating; TimesToRepeat++)
        PrintSymbolOnScreen(Character);
}

short ReadShortNumber(const string &Message)
{
    PrintTextOnScreen(Message);
    short Number = 0;
    cin >> Number;
    return Number;
}

string ReadTextFromScreen(const string &Text)
{
    PrintTextOnScreen(Text);
    string String = "";
    cin >> String;
    return String;
}

void PrintNumberOnScreen(short &Number)
{
    cout << Number;
}

void PrintLines(short NumberOfLines = 1)
{
    for(short Lines = 1; Lines <= NumberOfLines; Lines++)
        cout << endl;
}

void PrintTabs(short NumberOfTabs)
{
    for(short Tabs = 0; Tabs < NumberOfTabs; Tabs++)
    {
        PrintSymbolOnScreen('\t');
    }
}

void ResetScreen()
{
    system("cls");
}

short ReadNumberQuestions()
{
    short NumberOfQuestions = ReadShortNumber("How many questions do you want to answer: ");
    return NumberOfQuestions;
}

enQuestionLevel ReadQuestionLevel()
{
    short QuestionLevel = 0;
    do 
    {
         QuestionLevel = ReadShortNumber("Enter Questions level Easy[1], Med[2], Hard[3], Mix[4]: ");
    }while (!isNumberInRange(QuestionLevel, 1, 4));
    return (enQuestionLevel) QuestionLevel;
}

enOperationType ReadOperationType()
{
    short OperationType = 0;
    do
    {
        OperationType = ReadShortNumber("Enter Operation Type Add[1], Sub[2], Mul[3], Div[4], Mix[5]: ");
    }while(!isNumberInRange(OperationType, 1, 5));
    return (enOperationType) OperationType;
}

short RandomNumber(short From, short To)
{
    short Random = rand() % (To - From + 1) + From;
    return Random;
}

string ConvertQuestionLevelIntoText(enQuestionLevel QuestionLevel)
{
    switch(QuestionLevel)
    {
        case enQuestionLevel::Easy:
            return "Easy";
        case enQuestionLevel::Med:
            return "Med";
        case enQuestionLevel::Hard:
            return "Hard";
        case enQuestionLevel::Mix:
            return "Mix";
        default:
            return "Easy";
    }
}

string ConvertOperationTypeIntoText(enOperationType OperationType)
{
    switch(OperationType)
    {
        case enOperationType::Add:
            return "Add";
        case enOperationType::Sub:
            return "Sub";
        case enOperationType::Mul:
            return "Mul";
        case enOperationType::Div:
            return "Div";
        case enOperationType::_Mix:
            return "Mix";
        default:
            return "Add";
    }
}

short GenerateNumberForTheQuestionAccordingToTheLevel(enQuestionLevel QuestionLevel)
{
    switch(QuestionLevel)
    {
        case enQuestionLevel::Easy:
            return RandomNumber(1, 10);
        case enQuestionLevel::Med:
            return RandomNumber(20, 40);
        case enQuestionLevel::Hard:
            return RandomNumber(40, 80);
        case enQuestionLevel::Mix:
            return RandomNumber(1, 100);
        default: // no need cuz we will force the user to choose from (Easy, Med, Hard, or Mix)
            return RandomNumber(4, 8);
    }

}

char GameInof(enOperationType OperationType)
{
    switch(OperationType)
    {
        case enOperationType::Add:
            return '+';
        case enOperationType::Sub:
            return '-';
        case enOperationType::Mul:
            return '*';
        case enOperationType::Div:
            return '/';
        case enOperationType::_Mix:
            return OperationsCharacter[RandomNumber(0, 3)];
        default:
            return '+';
    }
}

short GetResultAccordingToTheOperation(char Operation, short TheFirstNumber, short TheSecondNumber)
{
    switch(Operation)
    {
        case '+':
            return TheFirstNumber + TheSecondNumber;
        case '-':
            return TheFirstNumber - TheSecondNumber;
        case '*':
            return TheFirstNumber * TheSecondNumber;
        case '/':
            return TheFirstNumber / TheSecondNumber;
        default:
            return TheFirstNumber + TheSecondNumber;
    }
}

void FillSomeGameInfo(stGameInfo &GameInfo, short NumberOfQuestions, enQuestionLevel QuestionLevel, enOperationType OperationType)
{
    GameInfo.NumberOfQuestions = NumberOfQuestions;
    GameInfo.QuestionsLevel = QuestionLevel;
    GameInfo.OperationType = OperationType;
}

void FillQuestionInfo(stQuestionInfo &QuestionInfo, char OperationType, short TheFirstNumber, short TheSecondNumber)
{
    QuestionInfo.FirstNumber = TheFirstNumber;
    QuestionInfo.SecondNumber = TheSecondNumber;
    QuestionInfo.Operation = OperationType;
    QuestionInfo.Result = GetResultAccordingToTheOperation(QuestionInfo.Operation, QuestionInfo.FirstNumber, QuestionInfo.SecondNumber);
}

short ReadTheUserAnswer()
{
    short Number = ReadShortNumber("");
    return Number;
} 

bool isUserAnswerRight(short TheRightAnswer, short TheUserAnswer)
{
    return (TheRightAnswer == TheUserAnswer);
}

void PrintHappy()
{
    PrintTextOnScreen(":)");
}

void PrintSadFace()
{
    PrintTextOnScreen(":(");
}

void ChangeScreenColorToGreen()
{
    system("color 0A");
}

void ChangeScreenColorToRed()
{


}

void ChangeScreenColorToPurple()
{
    system("color 0D");
}

void WhatToDoIfTheUserAnswerIsRight(stGameInfo &GameInof)
{
    ChangeScreenColorToGreen(); 
    GameInof.NumberOfRightAnswers++;
    PrintTextOnScreen("Your answer is right ");
    PrintHappy();
    PrintLines(2);
}

void WhatToDoIfTheAnswerIsWrong(stGameInfo &GameInfo, short TheRightAnswer)
{
    ChangeScreenColorToRed();
    GameInfo.NumberOfWrongAnswers++;
    PrintTextOnScreen("The answer is wrong ");
    PrintSadFace();
    PrintLines();
    PrintTextOnScreen("the right answer is ==> ");
    PrintNumberOnScreen(TheRightAnswer);
    PrintLines(2);
}

void PrintQuestionInfo(stQuestionInfo &QuestionInfo)
{
    PrintNumberOnScreen(QuestionInfo.FirstNumber);
    PrintLines();
    PrintNumberOnScreen(QuestionInfo.SecondNumber);
    PrintSymbolOnScreen(' ');
    PrintSymbolOnScreen(QuestionInfo.Operation);
    PrintLines();
    PrintSequenceOfCharacters('-', 8);
    PrintLines();
}

void CheckTheAnswerAndDoWhatToShouldDo(stGameInfo &GameInfo, stQuestionInfo &QuestionInfo, short TheUserAnswer)
{
    if (isUserAnswerRight(QuestionInfo.Result, TheUserAnswer))
        WhatToDoIfTheUserAnswerIsRight(GameInfo);
    else
        WhatToDoIfTheAnswerIsWrong(GameInfo, QuestionInfo.Result);
}

void PrintGameOverScreen()
{
    ChangeScreenColorToPurple();
    PrintSequenceOfCharacters('*', 24);
    PrintLines();
    PrintTabs(1);
    PrintTextOnScreen("Game Over");
    PrintLines();
    PrintSequenceOfCharacters('*', 24);
    PrintLines();
}

stGameInfo PlayGame()
{
    ResetScreen();
    stGameInfo GameInfo;
    stQuestionInfo QuestionInfo;

    short NumberOfQuestions = ReadNumberQuestions();
    enQuestionLevel QuestionLevel = ReadQuestionLevel();
    enOperationType OperationType = ReadOperationType();

    FillSomeGameInfo(GameInfo, NumberOfQuestions, QuestionLevel, OperationType);


    for(short Questions = 1; Questions <= NumberOfQuestions; Questions++)
    {
        char Operation = GameInof(OperationType);
        short TheFirstNumber = GenerateNumberForTheQuestionAccordingToTheLevel(QuestionLevel);
        short TheSecondNumber = GenerateNumberForTheQuestionAccordingToTheLevel(QuestionLevel);
        short TheUserAnswer = 0;    
        FillQuestionInfo(QuestionInfo, Operation, TheFirstNumber, TheSecondNumber);
        PrintQuestionInfo(QuestionInfo);
        TheUserAnswer = ReadTheUserAnswer();
        CheckTheAnswerAndDoWhatToShouldDo(GameInfo, QuestionInfo, TheUserAnswer);
    }
    return GameInfo;
}

void PrintGameInfo(stGameInfo &GameInfo)
{
    PrintSequenceOfCharacters('*', 40);
    PrintLines();
    PrintTextOnScreen("Game Info");
    PrintLines();
    PrintSequenceOfCharacters('*', 40);
    PrintLines();
    PrintTextOnScreen("Number of Questions: "); PrintNumberOnScreen(GameInfo.NumberOfQuestions); PrintLines();
    PrintTextOnScreen("Questions Level: "); PrintTextOnScreen(ConvertQuestionLevelIntoText(GameInfo.QuestionsLevel)); PrintLines();
    PrintTextOnScreen("Operation type: "); PrintTextOnScreen(ConvertOperationTypeIntoText(GameInfo.OperationType)); PrintLines();
    PrintTextOnScreen("Number of right answers: "); PrintNumberOnScreen(GameInfo.NumberOfRightAnswers); PrintLines();
    PrintTextOnScreen("Number of wrong answers: "); PrintNumberOnScreen(GameInfo.NumberOfWrongAnswers); PrintLines();
    PrintSequenceOfCharacters('*', 20);
    PrintLines();
}

string isPlayerHasWonInTheGame(stGameInfo &GameInfo)
{
    if(GameInfo.NumberOfRightAnswers > GameInfo.NumberOfWrongAnswers)
        return "You win";
    else if(GameInfo.NumberOfWrongAnswers > GameInfo.NumberOfRightAnswers)
        return "You loose";
    else 
        return "You did not win or loose, you got a draw";
}

void PrintTheWinningResultOfThePlayer(string PlayerResultOfWinning)
{
    PrintSequenceOfCharacters('-', 40);
    PrintLines();
    PrintTextOnScreen(PlayerResultOfWinning);
    PrintLines();
    PrintSequenceOfCharacters('-', 40);
}

void StartGame()
{
    srand((unsigned)time(NULL));
    string Answer = "Yes";
    do
    {
        stGameInfo GameInfo = PlayGame();
        PrintGameOverScreen();
        PrintGameInfo(GameInfo);
        PrintTheWinningResultOfThePlayer(isPlayerHasWonInTheGame(GameInfo));
        PrintLines();
        Answer = ReadTextFromScreen("Do you want to play again (Yes/No): ");
    }while(Answer == "Yes" || Answer == "yes" || Answer == "Y" || Answer == "y");
}
