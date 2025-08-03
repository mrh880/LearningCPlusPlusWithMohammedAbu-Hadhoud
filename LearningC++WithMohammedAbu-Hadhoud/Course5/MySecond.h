#include <iostream>
#include <string>

using namespace std;

enum enQuestionsLevel {Easy = 1, Med, Hard, Mix};
enum enOperationType {Add = 1, Sub, Mul, Div, _Mix};
char Operations[4] = {'+', '-', '*', '/'};
string QuestionsLevel[4] = {"Easy", "Med", "Hard", "Mix"};
string OperationsType[5] = {"Add", "Sub", "Mul", "Div", "Mix"};

struct stGameInfo
{
    short NumberOfQuestions = 0;
    enQuestionsLevel QuestionsLevel = enQuestionsLevel::Easy;
    enOperationType OperationType = enOperationType::Add;
    short NumberOfRightAnswers = 0;
    short NumberOfWrongAnswers = 0;
};

int RandomNumber(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;
}

bool isNumberInRange(short Number, short From, short To)
{
    return (Number >= From && Number <= To);
}

void PrintMessageOnTheScreen(const string &Message)
{
    cout << Message;   
}

void PrintNumberOnTheScreen(short &Number)
{
    cout << Number;
}

short ReadShortNumber()
{
    short Number = 0;
    cin >> Number;
    return Number;
}

string ReadString(const string &Message)
{
    cout << Message;
    string String = "";
    cin >> String;
    return String;
}

void ClearScreen()
{
    system("cls");
}

void PrintNewLine()
{
    cout << endl;
}

void PrintSequenceOfCharacters(const char &TheCharacter, short TheNumberOfRepeating)
{
    for(short TimesToRepeatTheCharacter = 1; TimesToRepeatTheCharacter <= TheNumberOfRepeating; TimesToRepeatTheCharacter++)
        cout << TheCharacter << " ";
    cout << endl;
}

short ReadHowManyQuestions()
{
    PrintMessageOnTheScreen("How many questions do you want to answer: ");
    short NumberOfQuestions = ReadShortNumber();
    return NumberOfQuestions;
}

enQuestionsLevel ReadQuestionsLevel()
{
    short QuestionsLevel = 0;
    do 
    {
        PrintMessageOnTheScreen("Enter Questions level Easy[1], Med[2], Hard[3], Mix[4]: ");
        QuestionsLevel = ReadShortNumber();
    } while(!isNumberInRange(QuestionsLevel, 1, 4));
    return (enQuestionsLevel) QuestionsLevel;
}

enOperationType ReadOperationType()
{
    short OperationType = 0;
    do
    {
        PrintMessageOnTheScreen("Enter Operation Type Add[1], Sub[2], Mul[3], Div[4], Mix[5]: ");
        OperationType = ReadShortNumber();
    }while(!isNumberInRange(OperationType, 1, 5));
    return (enOperationType) OperationType;
}

char ConvertOperationTypeToCharacter(enOperationType OperationType)
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
            return Operations[RandomNumber(0, 3)];
        default:
            return '+';
    }
}

short GetQuestionLevel(enQuestionsLevel QuestionLevel)
{
    switch (QuestionLevel) // to generate numbers for the
    {
    case enQuestionsLevel::Easy:
        return RandomNumber(1, 10);
    case enQuestionsLevel::Med:
        return RandomNumber(20, 40);
    case enQuestionsLevel::Hard:
        return RandomNumber(40, 80);
    case enQuestionsLevel::Mix:
        return RandomNumber(1, 100);
    default: // no need for default because i forced the user to enter from the level that i put (easy, med, hard, mix)
        return RandomNumber(4, 8);
    }
}

short GetResult(char OperationType, short TheFirstNumber, short TheSecondNumber)
{
    switch (OperationType)
    {
    case '+':
        return TheFirstNumber + TheSecondNumber;
    case '-':
        return TheFirstNumber - TheSecondNumber;
    case '*':
        return TheFirstNumber * TheSecondNumber;
    case '/':
        return TheFirstNumber / TheSecondNumber;
    default: // no need
        return TheFirstNumber + TheSecondNumber;
    }
}

void PrintTheQuestion(short &TheFirstNumber, short &TheSecondNumber, char &TheOperation)
{
    cout << TheFirstNumber << endl << TheSecondNumber << " " << TheOperation << endl; 
    PrintSequenceOfCharacters('-', 10);
}

bool CheckIfTheUserResultIsCorrect(short &TheResult, short &TheUserResult)
{
    return (TheResult == TheUserResult);
}

void PrintHappyFace()
{
    cout << ":)";
}

void PrintSadFace()
{
    cout << ":(";
}

void IncreasePointsByOneIfTheAnswerIsCorrect(stGameInfo &GameInfo)
{
    GameInfo.NumberOfRightAnswers++;
}

void IncreasePointsByOneIfTheAnswerIsNotCorrect(stGameInfo &GameInfo)
{
    GameInfo.NumberOfWrongAnswers++;
}

void WhatToPrintIfTheAnswerIsCorrect(stGameInfo &GameInof)
{
    PrintMessageOnTheScreen("Your answer is correct ");
    PrintHappyFace();
    PrintNewLine();
    GameInof.NumberOfRightAnswers++;
}

void WhatToPrintIfTheAnswerIsNotCorrect(short &TheCorrectResult, stGameInfo &GameInfo)
{
    PrintMessageOnTheScreen("You answer is not correct ");
    PrintSadFace();
    PrintNewLine();
    PrintMessageOnTheScreen("The correct answer is ");
    PrintNumberOnTheScreen(TheCorrectResult);
    PrintNewLine();
    GameInfo.NumberOfWrongAnswers++;
}

void FillGameInof(stGameInfo &GameInfo, enQuestionsLevel QuestionLevel, enOperationType OperationType, short NumberOfQuestions)
{
    GameInfo.NumberOfQuestions = NumberOfQuestions;
    GameInfo.QuestionsLevel = QuestionLevel;
    GameInfo.OperationType = OperationType;
}

void GenerateQuestion(enQuestionsLevel QuestionLevel, enOperationType OperationType, short NumberOfQuestions, stGameInfo &GameInfo)
{
    short FirstNumber = GetQuestionLevel(QuestionLevel);
    short SecondNumber = GetQuestionLevel(QuestionLevel);
    short TheUserAnswer = 0;
    short CorrectAnswers = 0;
    short WrongAnswers = 0;

    FillGameInof(GameInfo, QuestionLevel, OperationType, NumberOfQuestions);

    char _OperationType = ConvertOperationTypeToCharacter(OperationType); // no need 

    short TheCorrectResult = GetResult(_OperationType, FirstNumber, SecondNumber);

    PrintTheQuestion(FirstNumber, SecondNumber, _OperationType);

    TheUserAnswer = ReadShortNumber();

    if(CheckIfTheUserResultIsCorrect(TheCorrectResult, TheUserAnswer))
        WhatToPrintIfTheAnswerIsCorrect(GameInfo);
    else 
        WhatToPrintIfTheAnswerIsNotCorrect(TheCorrectResult, GameInfo);
}

void PrintQuestions(short NumberOfQuestions, enQuestionsLevel QuestionsLevel, enOperationType OperationType, stGameInfo &GameInfo)
{
    for(short Questions = 1; Questions <= NumberOfQuestions; Questions++)
    {
        cout << "Question [" << Questions << "/" << NumberOfQuestions << "]\n";
        GenerateQuestion(QuestionsLevel, OperationType, NumberOfQuestions, GameInfo);
        PrintNewLine();
        // cout << "------------------------------------------------------\n";
    }
}

void PrintTabs(short NumberOfTabs)
{
    for(short Tabs = 0; Tabs < NumberOfTabs; Tabs++)
        cout << "\t";
}

void PrintGameOverScreen()
{
    PrintSequenceOfCharacters('*', 14);
    PrintTabs(1);
    PrintMessageOnTheScreen("GAME OVER");
    PrintNewLine();
    PrintSequenceOfCharacters('*', 14);
    PrintNewLine();
}

string PrintQuestionLevelInString(stGameInfo &GameInfo)
{
    return QuestionsLevel[GameInfo.QuestionsLevel - 1];
}

string PrintOperationsTypeInString(stGameInfo &GameInof)
{
    return OperationsType[GameInof.OperationType - 1];
}

bool isThePlayerWon(stGameInfo &GameInfo)
{
    return (GameInfo.NumberOfRightAnswers > GameInfo.NumberOfWrongAnswers ? true : GameInfo.NumberOfWrongAnswers > GameInfo.NumberOfRightAnswers ? false : false);
}

void IfThePlayerWon(stGameInfo &GameInfo)
{
    PrintSequenceOfCharacters('-', 20);
    if (isThePlayerWon(GameInfo))
    {
        PrintMessageOnTheScreen("You won in the game ");
        PrintHappyFace();
        PrintNewLine();
    }
    else
    {
        if (GameInfo.NumberOfWrongAnswers > GameInfo.NumberOfRightAnswers)
        {
            PrintMessageOnTheScreen("You lost in the game ");
            PrintSadFace();
            PrintNewLine();
        }
        else
        {
            PrintMessageOnTheScreen("You did not win or loose, is a draw ");
            PrintHappyFace();
            PrintNewLine();
        }
        PrintSequenceOfCharacters('-', 20);
    }

    PrintSequenceOfCharacters('-', 20);
}

void PrintGameInfo(stGameInfo &GameInfo)
{
    IfThePlayerWon(GameInfo);
    PrintMessageOnTheScreen("Number of questions: "); cout << GameInfo.NumberOfQuestions; PrintNewLine();
    PrintMessageOnTheScreen("Questions level: "); PrintMessageOnTheScreen(PrintQuestionLevelInString(GameInfo)); PrintNewLine();
    PrintMessageOnTheScreen("Operation type: "); PrintMessageOnTheScreen(PrintOperationsTypeInString(GameInfo)); PrintNewLine();
    PrintMessageOnTheScreen("Number of right answers: "); cout << GameInfo.NumberOfRightAnswers; PrintNewLine();
    PrintMessageOnTheScreen("Number of wrong answers: "); cout << GameInfo.NumberOfWrongAnswers; PrintNewLine();
    PrintSequenceOfCharacters('-', 20);
}

void StartGame()
{
    srand((unsigned) time(NULL));
    string  Answer = "";
    do
    {
        stGameInfo GameInfo;
        ClearScreen();
        short NumberOfQuestions = ReadHowManyQuestions(); // store number of questions
        enQuestionsLevel QuestionsLevel = ReadQuestionsLevel(); // store question level
        enOperationType OperationType = ReadOperationType(); // store operation level
        PrintQuestions(NumberOfQuestions, QuestionsLevel, OperationType, GameInfo); 
        PrintGameOverScreen();
        PrintGameInfo(GameInfo);
        Answer = ReadString("Do you want to play again (Yes/No): ");
    } while(Answer == "Yes" || Answer == "yes" || Answer == "Y" || Answer == "y");
}