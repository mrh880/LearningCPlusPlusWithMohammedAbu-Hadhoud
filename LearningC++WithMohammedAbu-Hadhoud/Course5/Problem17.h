#include <iostream>

using namespace std;


    bool PrintLettersFormAAAToZZZ(string Guess )
    {
        string word = "";
        int counter = 0;

        for(short FirstLoop = 65; FirstLoop <= 90; FirstLoop++)
        {
            for(short SecondLoop = 65; SecondLoop <= 90; SecondLoop++)
            {
                for(short ThirdLoop = 65; ThirdLoop <= 90; ThirdLoop++)
                {
                    word += char(FirstLoop);
                    word += char(SecondLoop) ;
                    word += char(ThirdLoop);
                    counter++;

                    cout << "Trial [" << counter << "]: " << word << endl;
                    
                    if(word == Guess)
                    {
                        cout << "***********************\n";
                        cout << "password is " <<  word << endl;
                        cout << "Found after " << counter << " Trial(s)" << endl;
                        cout << "***********************\n";
                        return true;
                    } 
                        word = "";

                }
            }
        }
        return false;
    }

void Print()
{
    system("cls");
    system("color 0A");
    cout << "Enter a staring: ";
    string word = "";
    cin >> word;
    cout << PrintLettersFormAAAToZZZ(word);
}

/*
 word += char(FirstLoop);
                word += char(SecondLoop) ;
                word += char(ThirdLoop);
                counter++;

                cout << "Trial [" << counter << "]: " << word << endl;
                
                if(word == Guess)
                {
                    cout << "***********************\n";
                    cout << "password is " <<  word << endl;
                    cout << "Found after " << counter << " Trial(s)" << endl;
                    cout << "***********************\n";
                    break;
                } 
*/