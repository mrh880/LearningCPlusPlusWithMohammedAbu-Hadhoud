// // #include <iostream>

// // using namespace std;

// // short GreatestNumberBetween3NumbersV1(short num1, short num2, short num3);
// // short GreatestNumberBetween3NumbersV2(short num1, short num2, short num3);
// // void SumOfOddNumbers();
// // void Fact();
// // void SecondsToDaysAndHoursAndMinutesAndSeconds();
// // void login();
// // int main()
// // {
// //     // cout << "hi i am mrh :)\n";
// //     // cout << GreatestNumberBetween3NumbersV1(10, 20, 30) << endl;
// //     // cout << GreatestNumberBetween3NumbersV2(10, 20, 30) << endl;
// //     // SumOfOddNumbers();
// //     // Fact();
// //     // SecondsToDaysAndHoursAndMinutesAndSeconds();
// //     login();
// //     return 0;
// // }

// // short GreatestNumberBetween3NumbersV1(short num1, short num2, short num3)
// // {
// //     if (num1 > num2 && num1 > num3)
// //     return num1;

// //     else if(num2 > num1 && num2 > num3)
// //     return num2;

// //     else 
// //     return num1;
// // }


// // short  GreatestNumberBetween3NumbersV2(short num1, short num2, short num3)
// // {
// //     if(num1 > num2)
// //     {
// //         if(num1 > num3)
// //         return num1;

// //         else 
// //         return num3;
// //     }

// //     else
// //     {
// //         if(num2 > num3)
// //         return num2;

// //         else 
// //         return num3;
// //     }
// // }


// // void SumOfOddNumbers()
// // {
// //     short N = 0;
// //     cout << "Enter a number please :";
// //     cin >> N;

// //     int counter = 1;
// //     short sum = 0;

// //     while(counter <= N)
// //     {
// //         if(counter % 2 == 1)
// //         {
// //             sum = sum + counter;
// //             counter++;
// //         }
// //         else 
// //         counter++;
// //     }
// //     cout << "The sum is " << sum;
// // }

// // void Fact()
// // {
// //     short N = 0;

// //     cout << "Enter a number: ";
// //     cin >> N;

// //     while(N < 1 )
// //     {
// //         cout << "Enter a number: ";
// //         cin >> N;
// //     }
    

// //     short counter = 1;
// //     short fac = 1;

// //     while(counter <= N)
// //     {
// //         fac = fac * counter;
// //         counter++;
// //     }
// //     cout << "Fact is " << fac << endl;
// // }

// // void SecondsToDaysAndHoursAndMinutesAndSeconds()
// // {

// //     int SecondsPerDay = 60 * 60 * 24;
// //     int SecondsPerHour = 60 * 60;
// //     int SecondsPerMinutes = 60;

// //     int TotalSeconds = 0;
// //     cout << "Enter The total seconds: ";
// //     cin >> TotalSeconds;

// //     int Days = 0;
// //     int Hours = 0;
// //     int Minutes = 0;
// //     int Seconds = 0;
// //     int Reminder = 0;

// //     Days = TotalSeconds / SecondsPerDay; // 2 
// //     Reminder = TotalSeconds - (Days * SecondsPerDay); // 20,735
// //     //           193535          2          86400    
// //     Hours = Reminder / SecondsPerHour; // 5

// //     Reminder = Reminder - (Hours * SecondsPerHour); // 2,735
// //     //            20,735     5             3600

// //     Minutes = Reminder / SecondsPerMinutes; // 45
// //     //          2,735           
// //     Reminder =  Reminder - (Minutes * SecondsPerMinutes); // 35

// //     Seconds = Reminder;

// //     cout << Days << ":" << Hours << ":" << Minutes << ":" << Seconds << endl;
// // }

// // // void SecondsToDaysAndHoursAndMinutesAndSeconds()
// // // {
// // //     int TotalSeconds = 0;
// // //     cout << "Enter The total seconds: ";
// // //     cin >> TotalSeconds;

// // //     int Days = 0;
// // //     int Hours = 0;
// // //     int Minutes = 0;
// // //     int Seconds = 0;
// // //     int Reminder = 0;

// // //     Days = TotalSeconds / 60 / 60 / 24;
// // //     Reminder = TotalSeconds - (Days * 60 * 60 * 24);
// // //     Hours = Reminder / 60 / 60;
// // //     Reminder = Reminder - (Hours * 60 * 60);
// // //     Minutes = Reminder / 60;
// // //     Reminder =  Reminder - (Minutes * 60);
// // //     Seconds = Reminder * 1;

// // //     cout << Days << ":" << Hours << ":" << Minutes << ":" << Seconds << endl;
// // // }

// // void login()
// // {
// //         short c = 0;
// //         string pin = "1234";
// //         pin.length();
// //     do
// //     {
// //         cout << "Enter your pin: ";
// //         cin >> pin;
// //         c++;

// //         if(pin == "1234")
// //         {
// //             cout << "correct pin :)\n";
// //             c = 0;
// //             break;
// //         }
// //     } while(c != 3 && pin != "1234");

// //     if(c == 3)
// //     cout << "Your card is locked :(\n";
// // }


// #include <iostream>

// using namespace std;

// int GetTheMostRepeatedElementInAnArray(int array[100], int Size);
// int GetTheMostRepeatedElementInA2DArray(int array[100][100], int Rows, int Column);


// struct stAddress
// {
//     string StreetName = "";
//     string StreetNo = "";
//     string BuildingNo = "";
// };

// struct stContactInfo
// {
//     string PhoneNumber = "";
//     string Email = "";
//     stAddress Address;
// };

// struct stStudent
// {
//     string StudentName = "";
//     string StudentId;
//     stContactInfo ContactInfo;
// };

// int main()
// {
//     // stStudent Student1;

//     // Student1.StudentName = "mrh";
//     // Student1.StudentId = "22445";

//     // Student1.ContactInfo.PhoneNumber = "+33257474";
//     // Student1.ContactInfo.Email =  "mrh@gmail.com";

//     // Student1.ContactInfo.Address.StreetName = "main street";
//     // Student1.ContactInfo.Address.StreetNo = "33";
//     // Student1.ContactInfo.Address.BuildingNo = "204084";

//     // cout << "*****************************\n";
//     // cout << Student1.StudentName << endl;
//     // cout << Student1.StudentId << endl;
//     // cout << "*****************************\n\n";

//     // cout << "*****************************\n";
//     // cout << Student1.ContactInfo.PhoneNumber <<  endl;
//     // cout << Student1.ContactInfo.Email << endl;
//     // cout << "*****************************\n\n";

//     // cout << "*****************************\n";
//     // cout << Student1.ContactInfo.Address.StreetName << endl;
//     // cout << Student1.ContactInfo.Address.StreetNo << endl;
//     // cout << Student1.ContactInfo.Address.BuildingNo << endl;
//     // cout << "*****************************\n\n";

//     // int MyArray[20] = {1, 1, 1, 2, 2, 2, 4, 4, 4, 4, 6,6,6,6,6,6,6,6,};
//     // int TheMostRepeated = GetTheMostRepeatedElementInAnArray(MyArray, 20);
//     // cout << "The most Repeated element is " << TheMostRepeated << endl;

//     int MyArray[100][100] = 
// {
//     {1, 2, 3},
//     {4, 5, 2},
//     {6, 6, 4},
//     {4, 4, 4},
//     {8, 8, 3},
//     {8, 8, 8}
//     };
//     // int TheMostRepeated = GetTheMostRepeatedElementInA2DArray(MyArray, 3, 3);   
//     int TheMostRepeated = GetTheMostRepeatedElementInA2DArray(MyArray, 6, 6);
//     cout << "The most Repeated element is " << TheMostRepeated << endl;
//     return 0;
// }


// int GetTheMostRepeatedElementInAnArray(int array[100], int Size)
// {
//     int MaxCount = 0;
//     int FinalElement = 0;
//     int Counter = 0;

//     for(short OuterLoop = 0; OuterLoop < Size; OuterLoop++)
//     {
//         int Counter = 0;
//         for(int InnerLoop = 0; InnerLoop < Size; InnerLoop++)
//         {
//             if(array[OuterLoop] == array[InnerLoop])
//                 Counter++;
//         }
//         if(Counter > MaxCount)
//         {
//             MaxCount = Counter;
//             FinalElement = array[OuterLoop];
//         }
//     }

//     return FinalElement;
// }

// int GetTheMostRepeatedElementInA2DArray(int array[100][100], int Rows, int Columns)
// {
//     int MaxCount = 0;
//     int FinalElement = 0;

//     for(short OuterLoop = 0; OuterLoop < Rows; OuterLoop++)
//     {
//         for(short InnerLoop = 0; InnerLoop < Columns; InnerLoop++)
//         {
//             int Counter = 0;
//             for(short CheckRows = 0; CheckRows < Rows; CheckRows++)
//             {
//                 for(short CheckColumns = 0; CheckColumns < Columns; CheckColumns++)
//                 if(array[OuterLoop][InnerLoop] == array[CheckRows][CheckColumns])
//                 Counter++;
//             }
//             if(Counter > MaxCount)
//             {
//                 MaxCount = Counter;
//                 FinalElement = array[OuterLoop][InnerLoop]; 
//             }
//         }
//     }
//     return FinalElement;
// }



























// // I am mrh :)
// #include <string>
// #include <vector>

// using namespace std;


// enum Characters {UppercaseLetter = 1, lowercaseLetter = 2, Number = 3, SpecialCharacter = 4};


// Characters WhichCharacterIsThis(char Character)
// {
//     if(int(Character) >= 65 && int(Character) <= 90) // if the character is from between A to Z
//         return Characters::UppercaseLetter; 
//     else if(int(Character) >= 97 && int(Character) <= 122) // if the character is from between a to z
//         return Characters::lowercaseLetter;
//     else if(int(Character) >= 48 && int(Character) <= 57) // if the character is betwenn 0 to 9
//         return Characters::Number;
//     else 
//         return Characters::SpecialCharacter; // if the character is none none of the above like . > ' " etc...
// }

// struct TypeOfCharacters
// {
//   short UppercaseLettersCount = 0;
//   short lowercaseLettersCount = 0;
//   short NumbersCount = 0;
//   short SpecialCharactersCount = 0;
// };

// void IncrementTheNumberOfDigit(TypeOfCharacters &type_of_characters, char Character)
// {
//     if (WhichCharacterIsThis(Character) == Characters::UppercaseLetter)
//         type_of_characters.UppercaseLettersCount++;
//     else if (WhichCharacterIsThis(Character) == Characters::lowercaseLetter)
//         type_of_characters.lowercaseLettersCount++;
//     else if (WhichCharacterIsThis(Character) == Characters::Number)
//         type_of_characters.NumbersCount++;
//     else
//         type_of_characters.SpecialCharactersCount++;
// }

// void FillVectorWithNumberDigits(vector<int> &VectorOfDigit, TypeOfCharacters type_of_characters;)
// {
//   NumbersOfCharacters.push_back(type_of_characters.UppercaseLettersCount);
//   NumbersOfCharacters.push_back(type_of_characters.lowercaseLettersCount);
//   NumbersOfCharacters.push_back(type_of_characters.NumbersCount);
//   NumbersOfCharacters.push_back(type_of_characters.SpecialCharactersCount);
// }

// vector<int> solve(string s)
// {
  
//   TypeOfCharacters type_of_characters;
  
//   vector<int> NumbersOfCharacters;
  
//   short LengthOfString = s.length();
  
//   for(short loop = 0; loop < LengthOfString; loop++)
//   {
   
//   }

  
  
//   return NumbersOfCharacters;
// }



// #include <vector>

// using namespace std;

// void FillMultiplicationTable(vector<int> &VectorOfNumbersToFill, short SizeOfTable)
// {
//     for(short Rows = 1; Rows <= SizeOfTable; Rows++)
//     {
//         for(short Columns = 1; Columns <= SizeOfTable; Columns++)
//         VectorOfNumbersToFill.push_back(Rows * Columns);
//     }
// }

// vector<int> multiplication_table(int n)
// {
//     vector<int> _MultiplicationTable;
//     FillMultiplicationTable(_MultiplicationTable, n);
//     return _MultiplicationTable;
// }



// // int GetTheMostRepeatedElementInAnArray(int array[100], int Size)
// // {
// //     int CurrentElement = 0;
// //     int FinalElement = 0;
// //     int Counter = 0;

// //     for(short OuterLoop = 0; OuterLoop < Size; OuterLoop++)
// //     {
// //         int Counter = 0;
// //         for(int InnerLoop = 0; InnerLoop < Size; InnerLoop++)
// //         {
// //             if(array[OuterLoop] == array[InnerLoop])
// //                 Counter++;
// //         }
// //         CurrentElement = array[OuterLoop];  
// //         if (CurrentElement > FinalElement)
// //         FinalElement = array[OuterLoop];
// //     }

// //     return FinalElement;
// // }

#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    cout << "";
    return 0;
}