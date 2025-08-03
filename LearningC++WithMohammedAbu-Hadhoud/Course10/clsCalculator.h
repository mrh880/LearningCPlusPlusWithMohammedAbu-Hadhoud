#pragma once

#include <string>

class clsCalculator
{
private:
    float _Result = 0;
    float _LastNumber = 0;
    std::string _LastOperation = "Clear";    
    float _PerviousResult = 0;

    bool CheckIfNumberIs0(int Number);

public:
    void Add(int Number);

    void Subtract(int Number);

    void Multiply(int Number);

    void Divide(int Number);

    void Clear();

    void CancelLastOPeration();

    float GetfinalResult();

    void PrintResult();
};