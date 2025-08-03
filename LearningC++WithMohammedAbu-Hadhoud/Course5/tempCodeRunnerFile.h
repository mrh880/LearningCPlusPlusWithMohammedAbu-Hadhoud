void SumOfTwoArrays(int FirstArray[100], int SecondArray[100], int ThirdArray[100], int SizeOfAllArrays)
{

    for (short loop = 0; loop < SizeOfAllArrays; loop++)
        ThirdArray[loop] = FirstArray[loop] + SecondArray[loop];
}