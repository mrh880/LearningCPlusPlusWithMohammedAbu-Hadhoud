#pragma once

#include "ReadingInputs.h"
#include "PrintingOutputs.h"
#include "MathOperations.h"
#include "CheckDataTypes.h"
#include <iomanip>

    namespace ArrayOperations
    {
        void ReadArrayData(int Array[100], int &Size)
        {
            PrintingText::PrintTextOnScreen("GREETING ARRAY INFO !");
            PrintingText::PrintLines();
            PrintingText::PrintSequenceOfCharacters('*', 40);
            for (short loop = 0; loop < Size; loop++)
            {
                PrintingText::PrintTextOnScreen("Enter element [");
                PrintNumbers::printShortNumber(loop + 1);
                PrintingText::PrintTextOnScreen("]: ");
                Array[loop] = ReadNumbers::ReadingShortNumber();
            }
            PrintingText::PrintSequenceOfCharacters('*', 40);
        }

        short TimesNumberAppearsInArray(int Array[100], int Size, int Element)
        {
            int Counter = 0;
            for (short loop = 0; loop < Size; loop++)
            {
                if (Array[loop] == Element)
                    Counter++;
            }
            return Counter;
        }

        void PrintArrayData(int Array[100], int Length)
        {
            PrintingText::PrintSequenceOfCharacters('*', 40);
            cout << "Your Array\n";
            PrintingText::PrintSequenceOfCharacters('*', 40);

            PrintingText::PrintSequenceOfCharacters('*', 40);
            PrintingText::PrintCharacters('[');
            for (int loop = 0; loop < Length; loop++)
            {
                PrintNumbers::printShortNumber(Array[loop]);
                PrintingText::PrintCharacters(' ');
            }
            PrintingText::PrintCharacters(']');
            PrintingText::PrintLines();
            PrintingText::PrintSequenceOfCharacters('*', 40);
        }

        void FillArrayWithRandomNumbers(int Array[100], int Size)
        {
            for (short loop = 0; loop < Size; loop++)
                Array[loop] = MathOperations::RandomNumber(1, 100);
        }

        int MaximumElementInArray(int Array[100], int Size)
        {
            int MaxElement = Array[0];

            for (int loop = 0; loop < Size; loop++)
                if (Array[loop] > MaxElement)
                    MaxElement = Array[loop];

            return MaxElement;
        }

        int MiniumElementInArray(int Array[100], int Size)
        {
            int MaxElement = Array[0];

            for (int loop = 0; loop < Size; loop++)
                if (Array[loop] < MaxElement)
                    MaxElement = Array[loop];

            return MaxElement;
        }

        int SumOfArray(int Array[100], int Size)
        {
            int Sum = 0;
            for (int loop = 0; loop < Size; loop++)
                Sum += Array[loop];
            return Sum;
        }

        float AvarageOfArray(int Array[100], int Size)
        {
            return (float)SumOfArray(Array, Size) / Size;
        }

        void CopyArray(int SourceArray[100], int CopyArray[100], int Size)
        {
            for (short loop = 0; loop < Size; loop++)
                CopyArray[loop] = SourceArray[loop];
        }

        void CopyPrimeNumbersInArray(int OriginalArray[100], int CopyArray[100], int SizeOfOriginalArray, int &SizeOfCopyArray)
        {
            int Counter = 0;
            for (int loop = 0; loop < SizeOfOriginalArray; loop++)
            {
                if (CheckEnums::CheckPrime(OriginalArray[loop]) == enPrimeOrNotPrime::Prime)
                {
                    CopyArray[Counter] = OriginalArray[loop];
                    Counter++;
                }
            }
            SizeOfCopyArray = Counter;
        }

        void SumOfTwoArrays(int FirstArray[100], int SecondArray[100], int ThirdArray[100], int SizeOfAllArrays)
        {
            for (short loop = 0; loop < SizeOfAllArrays; loop++)
                ThirdArray[loop] = FirstArray[loop] + SecondArray[loop];
        }

        void FillArrayWithOrderNumbers(int Array[100], int Size)
        {
            for (short loop = 0; loop < Size; loop++)
                Array[loop] = loop + 1;
        }

        void ShuffleArray(int Array[100], int Size)
        {

            for (short loop = 0; loop < Size; loop++)
            {
                MathOperations::SwapTowNumbers(Array[MathOperations::RandomNumber(0, Size - 1)], Array[MathOperations::RandomNumber(0, Size - 1)]);
            }
        }

        void FillArrayInReverseOrder(int OriginalArray[100], int CopyArray[100], int Size)
        {
            for (short loop = 0; loop < Size; loop++)
                CopyArray[loop] = OriginalArray[Size - loop - 1];
        }

        void FillArrayWithRandomKeys(string Array[100], int SizeOfArray, int LengthOfWord, int LengthOfKey)
        {
            for (int loop = 0; loop < SizeOfArray; loop++)
                Array[loop] = GetRandomCharacter::GenerateKey(LengthOfKey, LengthOfWord);
        }

        void PrintArraysOfKeys(string Array[100], int SizeOfArray)
        {
            for (int loop = 0; loop < SizeOfArray; loop++)
            {
                PrintingText::PrintTextOnScreen("Key[");
                PrintNumbers::printShortNumber(loop + 1);
                PrintingText::PrintTextOnScreen("] = ");
                PrintingText::PrintTextOnScreen(Array[loop]);
                PrintingText::PrintLines();
            }
        }

        bool IsElementInArray(int Array[100], int SizeOfArrray, int Element)
        {
            for (short loop = 0; loop < SizeOfArrray; loop++)
                if (Array[loop] == Element)
                    return true;
            return false;
        }

        int FindNumberPositionInArray(int Array[100], int SizeOfArrray, int Element)
        {
            for (short loop = 0; loop < SizeOfArrray; loop++)
                if (Array[loop] == Element)
                    return loop;
            return -1;
        }

        bool IsNumberInArray(int Array[100], int SizeOfArray, int Element)
        {
            return (FindNumberPositionInArray(Array, SizeOfArray, Element) != -1);
        }

        void AddArrayElement(int Array[100], int &SizeOfArray, int Element)
        {
            Array[SizeOfArray] = Element;
            SizeOfArray++;
        }

        void ReadDynamicArray(int Array[100], int &SizeOfArray)
        {
            bool Answer = 0;

            PrintingText::PrintSequenceOfCharacters('*', 50);
            do
            {
                AddArrayElement(Array, SizeOfArray, ReadNumbers::ReadingIntegerNumber("Enter a number to add it to your  array: "));
                Answer = ReadBooleanExertions::ReadBooleanExertion("Do you want do add more elements to your array (0 FOR NO), AND (1 FOR YES): ");

                cout << endl;
            } while (Answer);
            PrintingText::PrintSequenceOfCharacters('*', 50);
        }

        void CopyArrayDataUsingAddArrayElement(int OriginalArray[100], int SizeOfOriginalArray, int CopyArray[100], int &SizeOfCopyArray)
        {
            for (int loop = 0; loop < SizeOfOriginalArray; loop++)
                AddArrayElement(CopyArray, SizeOfCopyArray, OriginalArray[loop]);
        }

        void CopyOddNumbers(int OriginalArray[100], int SizeOfOriginalArray, int CopyArray[100], int &SizeOfCopyArray)
        {
            for (int loop = 0; loop < SizeOfOriginalArray; loop++)
            {
                if (OriginalArray[loop] % 2 != 0)
                    AddArrayElement(CopyArray, SizeOfCopyArray, OriginalArray[loop]);
            }
        }

        void CopyArrayWithPrimeNumbers(int OriginalArray[100], int SizeOfOriginalArray, int CopyArray[100], int &SizeOfCopyArray)
        {
            for (int loop = 0; loop < SizeOfOriginalArray; loop++)
            {
                if ((CheckEnums::CheckPrime(OriginalArray[loop])) == enPrimeOrNotPrime::Prime)
                    AddArrayElement(CopyArray, SizeOfCopyArray, OriginalArray[loop]);
            }
        }

        void CopyDistinctArray(int OriginalArray[100], int SizeOfOriginalArray, int CopyArray[100], int &SizeOfCopyArray)
        {
            for (int loop = 0; loop < SizeOfOriginalArray; loop++)
            {
                if (!IsNumberInArray(CopyArray, SizeOfCopyArray, OriginalArray[loop]))
                    AddArrayElement(CopyArray, SizeOfCopyArray, OriginalArray[loop]);
            }
        }

        bool IsArrayPalindrome(int Array[100], int SizeOfArray)
        {
            for (int loop = 0; loop < SizeOfArray; loop++)
                if (Array[loop] != Array[SizeOfArray - loop - 1])
                    return false;

            return true;
        }

        bool IsNumberOdd(int Number)
        {
            return (Number % 2 != 0);
        }

        short CountOffOddNumbersInArray(int Array[100], int SizeOfArray)
        {
            short Counter = 0;

            for (int loop = 0; loop < SizeOfArray; loop++)
                if (IsNumberOdd(Array[loop]))
                    Counter++;

            return Counter;
        }

        bool IsNumberEven(int Number)
        {
            return (Number % 2 != 1);
        }

        short CountOfEvenNumbersInArray(int Array[100], int SizeOfArray)
        {
            short CountEvenNumbers = 0;

            for (int loop = 0; loop < SizeOfArray; loop++)
                if (IsNumberEven(Array[loop]))
                    CountEvenNumbers++;

            return CountEvenNumbers;
        }

        bool IsNumberPositiveNumber(int Number)
        {
            return Number > 0;
        }

        short CountOfPositiveNumbersInArray(int Array[100], int SizeOfArray)
        {
            short CountOfPositiveNumbers = 0;

            for (int loop = 0; loop < SizeOfArray; loop++)
                if (IsNumberPositiveNumber(Array[loop]))
                    CountOfPositiveNumbers++;

            return CountOfPositiveNumbers;
        }

        bool IsNumberNegative(int Number)
        {
            return Number < 0;
        }

        short CountOfNegativeNumbersInArray(int Array[100], int SizeOfArray)
        {
            short CountOfNegativeNumbers = 0;

            for (int loop = 0; loop < SizeOfArray; loop++)
                if (IsNumberNegative(Array[loop]))
                    CountOfNegativeNumbers++;

            return CountOfNegativeNumbers;
        }

        void FillTwo_D_ArrayWithRandomNumbers(int Array[100][100], int Rows, int Columns)
        {
            for (int _Rows = 0; _Rows < Rows; _Rows++)
            {
                for (int _Columns = 0; _Columns < Columns; _Columns++)
                {
                    Array[_Rows][_Columns] = MathOperations::RandomNumber(1, 100);
                }
            }
        }

        void PrintTwo_D_ArrayData(int Array[100][100], int Rows, int Columns, const string &Message)
        {
            PrintingText::PrintSequenceOfCharacters('*', 20);
            PrintingText::PrintLines();
            PrintingText::PrintTextOnScreen(Message);
            PrintingText::PrintLines();
            PrintingText::PrintSequenceOfCharacters('*', 20);
            PrintingText::PrintLines();

            PrintingText::PrintSequenceOfCharacters('*', 20);
            PrintingText::PrintLines();
            for (int _Rows = 0; _Rows < Rows; _Rows++)
            {
                for (int _Columns = 0; _Columns < Columns; _Columns++)
                    cout << setw(3) << Array[_Rows][_Columns] << " ";
                cout << endl;
            }
            PrintingText::PrintSequenceOfCharacters('*', 20);
            PrintingText::PrintLines();
        }

        void PrintMatrixData(int Array[100][100], int NumberOfRows, int NumberOfColumns, const string &Message, short MaxDigitInEveryArrayIndex)
        {
            PrintingText::PrintSequenceOfCharacters('*', 20);
            PrintingText::PrintLines();
            PrintingText::PrintTextOnScreen(Message);
            PrintingText::PrintLines();
            PrintingText::PrintSequenceOfCharacters('*', 20);
            PrintingText::PrintLines();

            PrintingText::PrintSequenceOfCharacters('*', 20);
            PrintingText::PrintLines();
            for (int Rows = 0; Rows < NumberOfRows; Rows++)
            {
                for (int Columns = 0; Columns < NumberOfColumns; Columns++)
                    printf("%0*d ", MaxDigitInEveryArrayIndex, Array[Rows][Columns]);
                cout << endl;
            }
            PrintingText::PrintSequenceOfCharacters('*', 20);
            PrintingText::PrintLines();
        }

        int GetRowSumIn2_D_Array(int Array[100][100], int NumberOfRow, int NumberOfColumns)
        {
            int Sum = 0;
            for (int Columns = 0; Columns < NumberOfColumns; Columns++)
                Sum += Array[NumberOfRow][Columns];
            return Sum;
        }

        void PrintTheSumOfEachRowInTwo_D_Array(int Array[100][100], int NumberOfRows, int NumberOfColumns)
        {
            PrintingText::PrintSequenceOfCharacters('*', 30);
            PrintingText::PrintLines();
            PrintingText::PrintTextOnScreen("The sum of each row: ");
            PrintingText::PrintLines();
            PrintingText::PrintSequenceOfCharacters('*', 30);
            PrintingText::PrintLines();
            for (int Rows = 0; Rows < NumberOfRows; Rows++)
            {
                PrintingText::PrintSequenceOfCharacters('*', 20);
                PrintingText::PrintLines();
                cout << "Row " << (Rows + 1) << " sum: " << GetRowSumIn2_D_Array(Array, Rows, NumberOfColumns) << endl;
                PrintingText::PrintSequenceOfCharacters('*', 20);
                PrintingText::PrintLines();
            }
        }

        void GetTheSumOfEachRowIn_2D_Array(int Array[100][100], int NumberOfRows, int NumberOfColumns, int ArrayOfSum[100])
        {
            for (int Rows = 0; Rows < NumberOfRows; Rows++)
            {
                ArrayOfSum[Rows] = GetRowSumIn2_D_Array(Array, Rows, NumberOfColumns);
            }
        }

        void PrintTheSumOfEachRowInTwo_D_Row(int Array[100], int SizeOfArray)
        {
            PrintingText::PrintSequenceOfCharacters('*', 30);
            PrintingText::PrintLines();
            PrintingText::PrintTextOnScreen("The sum of each row: ");
            PrintingText::PrintLines();
            PrintingText::PrintSequenceOfCharacters('*', 30);
            PrintingText::PrintLines();
            for (short loop = 0; loop < SizeOfArray; loop++)
            {
                PrintingText::PrintSequenceOfCharacters('*', 20);
                PrintingText::PrintLines();
                cout << "Row " << (loop + 1) << " sum: " << Array[loop];
                PrintingText::PrintSequenceOfCharacters('*', 20);
                PrintingText::PrintLines();
            }
        }

        int GetColumnsSumInTwo_D_Array(int Array[100][100], int NumberOfCurrentColumns, int NumberOfRows)
        {
            int Sum = 0;
            for (int Rows = 0; Rows < NumberOfRows; Rows++)
                Sum += Array[Rows][NumberOfCurrentColumns];
            return Sum;
        }

        void PrintTheSumOfEachColumnsInTwo_D_Array(int Array[100][100], int NumberOfRows, int NumberOfColumns)
        {
            PrintingText::PrintSequenceOfCharacters('*', 30);
            PrintingText::PrintLines();
            PrintingText::PrintTextOnScreen("The sum of each columns: ");
            PrintingText::PrintLines();
            PrintingText::PrintSequenceOfCharacters('*', 30);
            PrintingText::PrintLines();

            for (short columns = 0; columns < NumberOfColumns; columns++)
            {
                PrintingText::PrintSequenceOfCharacters('*', 20);
                PrintingText::PrintLines();
                cout << "Columns " << (columns + 1) << " sum: " << GetColumnsSumInTwo_D_Array(Array, columns, NumberOfRows) << endl;
                PrintingText::PrintSequenceOfCharacters('*', 20);
                PrintingText::PrintLines();
            }
        }

        void FillArrayWithSumOfEachColumnsInTwo_D_Array(int Array[100][100], int NumberOfRows, int NumberOfColumns, int ArrayOfSum[100])
        {
            for (int Columns = 0; Columns < NumberOfColumns; Columns++)
                ArrayOfSum[Columns] = GetColumnsSumInTwo_D_Array(Array, Columns, NumberOfRows);
        }

        void FillMatrixWithRandomNumbers(int Array[100][100], int NumberOfRows, int NumberOfColumns, int From, int To)
        {
            for (int Rows = 0; Rows < NumberOfRows; Rows++)
            {
                for (int Columns = 0; Columns < NumberOfColumns; Columns++)
                    Array[Rows][Columns] = MathOperations::RandomNumber(From, To);
            }
        }
        void PrintEachSumOfColumnsInTwo_D_Array(int Array[100], int SizeOfArray)
        {
            PrintingText::PrintSequenceOfCharacters('*', 30);
            PrintingText::PrintLines();
            PrintingText::PrintTextOnScreen("The sum of each columns: ");
            PrintingText::PrintLines();
            PrintingText::PrintSequenceOfCharacters('*', 30);
            PrintingText::PrintLines();
            for (int loop = 0; loop < SizeOfArray; loop++)
            {
                PrintingText::PrintSequenceOfCharacters('*', 20);
                PrintingText::PrintLines();
                cout << "Columns " << (loop + 1) << " sum: " << Array[loop] << endl;
                PrintingText::PrintSequenceOfCharacters('*', 20);
                PrintingText::PrintLines();
            }
        }

        void FillTwo_D_ArrayWithOrderedNumbers(int Array[100][100], int NumberOfRows, int NumberOfColumns)
        {
            short Counter = 1;
            for (int Rows = 0; Rows < NumberOfRows; Rows++)
            {
                for (int Columns = 0; Columns < NumberOfColumns; Columns++)
                    Array[Rows][Columns] = Counter++;
            }
        }

        void GetTransposeMatrix(int Array[100][100], int NumberOfRows, int NumberOfColumns)
        {
            for (int Rows = 0; Rows < NumberOfRows; Rows++)
            {
                for (short Columns = 0; Columns < NumberOfColumns; Columns++)
                    if (Rows != Columns && Rows < Columns)
                        MathOperations::SwapTowNumbers(Array[Rows][Columns], Array[Columns][Rows]);
            }
        }

        void MultiplayTwoMatrices(int FirstArray[100][100], int SecondArray[100][100], int ThirdArray[100][100], int NumberOfRows, int NumberOfColumns)
        {
            for (int Rows = 0; Rows < NumberOfRows; Rows++)
            {
                for (int Columns = 0; Columns < NumberOfColumns; Columns++)
                    ThirdArray[Rows][Columns] = FirstArray[Rows][Columns] * SecondArray[Rows][Columns];
            }
        }

        void PrintMiddleRowInMatrix(int Array[100][100], int NumberOfRows, int NumberOfColumns, int NumberOfDigits)
        {
            PrintingText::PrintSequenceOfCharacters('*', 20);
            PrintingText::PrintLines();
            PrintingText::PrintTextOnScreen("Your middle row: ");
            PrintingText::PrintLines();
            PrintingText::PrintSequenceOfCharacters('*', 20);
            PrintingText::PrintLines();
            PrintingText::PrintSequenceOfCharacters('*', 20);
            PrintingText::PrintLines();
            int MiddleRow = NumberOfRows / 2;
            for (int Columns = 0; Columns < NumberOfColumns; Columns++)
                printf("%0*d ", NumberOfDigits, Array[MiddleRow][Columns]);
            PrintingText::PrintLines();
            PrintingText::PrintSequenceOfCharacters('*', 20);
            PrintingText::PrintLines();
        }

        void PrintMiddleColumnsINMatrix(int Array[100][100], int NumberOfRows, int NumberOfColumns, int NumberOfDigits)
        {
            PrintingText::PrintSequenceOfCharacters('*', 20);
            PrintingText::PrintLines();
            PrintingText::PrintTextOnScreen("Your middle columns: ");
            PrintingText::PrintLines();
            PrintingText::PrintSequenceOfCharacters('*', 20);
            PrintingText::PrintLines();
            PrintingText::PrintSequenceOfCharacters('*', 20);
            PrintingText::PrintLines();
            int MiddleColumns = NumberOfColumns / 2;
            for (short Rows = 0; Rows < NumberOfRows; Rows++)
                printf("%0*d ", NumberOfDigits, Array[Rows][MiddleColumns]);
            PrintingText::PrintLines();
            PrintingText::PrintSequenceOfCharacters('*', 20);
            PrintingText::PrintLines();
        }

        int SumOfMatrix(int Array[100][100], int NumberOfRows, int NumberOfColumns)
        {
            int Sum = 0;
            for (int Rows = 0; Rows < NumberOfRows; Rows++)
            {
                for (int Columns = 0; Columns < NumberOfColumns; Columns++)
                    Sum += Array[Rows][Columns];
            }
            return Sum;
        }

        bool AreMatricesEqual(int FirstArray[100][100], int NumberOfRowsForTheFirstMatrix, int NumberOfColumnsForTheFirstArray, int SecondArray[100][100], int NumberOfRowsForTheSecondArray, int NumberOfColumnsForTheSecondArray)
        {
            return (SumOfMatrix(FirstArray, NumberOfRowsForTheFirstMatrix, NumberOfColumnsForTheFirstArray) == SumOfMatrix(SecondArray, NumberOfRowsForTheSecondArray, NumberOfColumnsForTheSecondArray));
        }

        bool AreMatricesTypical(int FirstArray[100][100], int NumberOfRowsForTheFirstMatrix, int NumberOfColumnsForTheFirstArray, int SecondArray[100][100], int NumberOfRowsForTheSecondArray, int NumberOfColumnsForTheSecondArray)
        {
            if (NumberOfRowsForTheFirstMatrix != NumberOfRowsForTheSecondArray || NumberOfColumnsForTheFirstArray != NumberOfColumnsForTheSecondArray)
                return false;
            for (int Rows = 0; Rows < NumberOfRowsForTheFirstMatrix; Rows++)
            {
                for (int Columns = 0; Columns < NumberOfColumnsForTheFirstArray; Columns++)
                    if (FirstArray[Rows][Columns] != SecondArray[Rows][Columns])
                        return false;
            }
            return true;
        }

        bool isMatrixIdentity(int Matrix[100][100], int NumberOfRows, int NumberOfColumns)
        {
            if (NumberOfRows != NumberOfColumns)
                return false;
            for (int Rows = 0; Rows < NumberOfRows; Rows++)
            {
                for (int Columns = 0; Columns < NumberOfColumns; Columns++)
                {
                    if ((Rows == Columns && Matrix[Rows][Columns] != 1) || (Rows != Columns && Matrix[Rows][Columns] != 0))
                        return false;
                }
            }
            return true;
        }

        bool isMatrixScalar(int Matrix[100][100], int NumberOfRows, int NumberOfColumns)
        {
            if (NumberOfRows != NumberOfColumns)
                return false;

            int TheFirstNumberInTheDiagonal = Matrix[0][0];
            for (int Rows = 0; Rows < NumberOfRows; Rows++)
            {
                for (int Columns = 0; Columns < NumberOfColumns; Columns++)
                {
                    if ((Rows == Columns && Matrix[Rows][Columns] != TheFirstNumberInTheDiagonal) || (Rows != Columns && Matrix[Rows][Columns] != 0))
                        return false;
                }
            }
            return true;
        }

        int countNumberInMatrix(int Matrix[100][100], int NumberOfRows, int NumberOfColumns, int NumberToSearchFor)
        {
            int Counter = 0;
            for (int Rows = 0; Rows < NumberOfRows; Rows++)
            {
                for (int Columns = 0; Columns < NumberOfColumns; Columns++)
                {
                    if (Matrix[Rows][Columns] == NumberToSearchFor)
                        Counter++;
                }
            }
            return Counter;
        }

        bool isMatrixSparse(int Matrix[100][100], int NumberOfRows, int NumberOfColumns)
        {
            int ZeroCount = countNumberInMatrix(Matrix, NumberOfRows, NumberOfColumns, 0);
            int NonZerCount = (NumberOfRows * NumberOfColumns) - ZeroCount;
            return (ZeroCount > NonZerCount);
        }

        bool DoesNumberExistInMatrix(int Matrix[100][100], int NumberOfRows, int NumberOfColumns, int NumberToLookFor)
        {
            for (int Rows = 0; Rows < NumberOfRows; Rows++)
            {
                for (int Columns = 0; Columns < NumberOfColumns; Columns++)
                {
                    if (Matrix[Rows][Columns] == NumberToLookFor)
                        return true;
                }
            }
            return false;
        }

        void PrintIntersectedNumbersInMatrices(int FirstArray[100][100], int NumberOfRowsForTheFirstMatrix, int NumberOfColumnsForTheFirstArray, int SecondArray[100][100], int NumberOfRowsForTheSecondArray, int NumberOfColumnsForTheSecondArray)
        {
            for (int Rows = 0; Rows < NumberOfRowsForTheFirstMatrix; Rows++)
            {
                for (int Columns = 0; Columns < NumberOfColumnsForTheFirstArray; Columns++)
                {
                    if (DoesNumberExistInMatrix(SecondArray, NumberOfRowsForTheSecondArray, NumberOfColumnsForTheSecondArray, FirstArray[Rows][Columns]))
                    {
                        PrintNumbers::PrintIntegerNumber(FirstArray[Rows][Columns]);
                        PrintingText::PrintCharacters(' ');
                    }
                }
            }
        }

        int MaxNumberInMatrix(int Matrix[100][100], int NumberOfRows, int NumberOfColumns)
        {
            int MaxNumber = Matrix[0][0];
            for (int Rows = 0; Rows < NumberOfRows; Rows++)
            {
                for (int Columns = 0; Columns < NumberOfColumns; Columns++)
                {
                    if (Matrix[Rows][Columns] > MaxNumber)
                        MaxNumber = Matrix[Rows][Columns];
                }
            }
            return MaxNumber;
        }

        int MinNumberInMatrix(int Matrix[100][100], int NumberOfRows, int NumberOfColumns)
        {
            int MinNumber = Matrix[0][0];
            for (int Rows = 0; Rows < NumberOfRows; Rows++)
            {
                for (int Columns = 0; Columns < NumberOfColumns; Columns++)
                {
                    if (Matrix[Rows][Columns] < MinNumber)
                        MinNumber = Matrix[Rows][Columns];
                }
            }
            return MinNumber;
        }

        bool isMatrixPalindrome(int Matrix[100][100], int NumberOfRows, int NumberOfColumns)
        {
            int HalfColumnsCount = NumberOfColumns / 2;
            for (int Rows = 0; Rows < NumberOfRows; Rows++)
            {
                for (int Columns = 0; Columns < HalfColumnsCount; Columns++)
                {
                    if (Matrix[Rows][Columns] != Matrix[Rows][NumberOfColumns - Columns - 1])
                        return false;
                }
            }
            return true;
        }

        void PrintFibonacciUsingLoop(int Limit)
        {
            int Previous2 = 0;
            int Previous1 = 1;
            int CurentNumber = 0;

            cout << "1 ";
            for (int Loop = 2; Loop <= Limit; Loop++)
            {
                CurentNumber = Previous1 + Previous2;
                cout << CurentNumber << " ";
                Previous2 = Previous1;
                Previous1 = CurentNumber;
            }
        }

        void PrintFibonacciUsingRecursion(int Limit, int Previous2, int Previous1)
        {
            cout << "1 ";
            int CurentNumber = 0;
            if(Limit > 0)
            {
                CurentNumber = Previous1 + Previous2;
                cout << CurentNumber;
                Previous2 = Previous1;
                Previous1 = CurentNumber;
                PrintFibonacciUsingRecursion(Limit - 1, Previous2, Previous1);
            }
        }
    }