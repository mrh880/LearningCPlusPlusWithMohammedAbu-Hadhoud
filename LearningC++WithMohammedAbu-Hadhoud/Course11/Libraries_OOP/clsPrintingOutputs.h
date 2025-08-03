#pragma once

#include <string>

class clsPrintingOutputs
{
private:
    long double _Number = 0;
    char _Character = '*';
    std::string _Text;

public:
    class clsPrintingText
    {
    private:
        short _Number = 0;
        std::string _Text = "";
        char _Character = '*';

    public:
        clsPrintingText();
        clsPrintingText(short Number, char Character, const std::string &Text);

        void SetNumber(short Number);
        void SetText(const std::string &Text);
        void SetCharacter(char Character);

        short Number();
        std::string Text();
        
        char Charater();

        // These are the static function, it is used if we want to use them without creating and object from the class
        // ---------------------------------------------------------------------------------------------------------------
        static void StaticPrintTextOnScreen(const std::string &Text);
        static void StaticPrintLines(short NumberofLines = 1);
        static void StaticPrintTabs(short NumberOfTabs = 1);
        static void StaticPrintSpaces(short NumberOfSpaces = 1);
        static void StaticPrintSequenceOfCharacters(char Character, short TimeToRepeat);
        static void StaticPrintCharacters(char Character);
        static void StaticPrintHeader(short NumberOfCharacters, const std::string &Title);
        // ---------------------------------------------------------------------------------------------------------------

        // Thse are the not static function, to use them we must creat an object from the class
        // ------------------------------------------------------------------------------------
        void PrintTextOnScreen();
        void PrintLines();
        void PrintTabs();
        void PrintSpaces();
        void PrintSequenceOfCharacters();
        void PrintCharacters();
        void PrintHeader();
        // ------------------------------------------------------------------------------------
    };

    clsPrintingText PrintingText;

    class clsPrintingNumbers
    {
    private:
        long double _Number;    

    public:

        clsPrintingNumbers();
        clsPrintingNumbers(long double Number);

        void SetNumber(long double Number);

        long double Number();

        // Static Method 
        // --------------------------------------------------------------------------------
        static void StaticPrintShortNumber(short Number);

        static void StaticPrintIntegerNumber(int Number);

        static void StaticPrintFloatNumber(float Number);

        static void StaticPrintDoubleNumber(double Number);

        static void StaticPrintLongDoubleNumber(long double Number);
        // --------------------------------------------------------------------------------


        
        // Non Static Method 
        // --------------------------------------------------------------------------------
        void PrintShortNumber();

        void PrintIntegerNumber();

        void PrintFloatNumber();

        void PrintDoubleNumber();

        void PrintLongDoubleNumber();
        // --------------------------------------------------------------------------------

    };

    clsPrintingNumbers PrintingNumbers;
    

    void SetNumber(long double Number);
    
    void SetCharacter(char Character);

    void SetText(const std::string& Text);

    long double Number();

    char Character();

    std::string Text();


    clsPrintingOutputs();
    clsPrintingOutputs(long double Number, char Character, const std::string &Text);
};