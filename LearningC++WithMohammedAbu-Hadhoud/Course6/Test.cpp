#include <iostream>

using namespace std;

struct stDate
{
    short Day = 0;
    short Month = 0;
    short Year = 0;
};

bool isDate1LessThanDate2(stDate &Date1, stDate &Date2)
{
    if(Date1.Year < Date2.Year)
    {
        return true;
    }
    else if(Date1.Year == Date2.Year)
    {
        if(Date1.Month < Date2.Month)
        {
            return true;
        }
        else if(Date1.Month == Date2.Month)
        {
            return (Date1.Day < Date2.Day);
        }
    }
    // return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month == Date2.Month) ? (Date1.Month < Date2.Month) ? true : (Date1.Month == Date2.Month) ? (Date1.Day < Date2.Day) : false); 
    return false;
}

bool isYearLeap(short Year)
{
    return (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0));
}


short NumberOfDaysInMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
    {
        return 0;
    }
    short NumberOfDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return ((Month == 2) ? isYearLeap(Year) ? 29 : 28 : NumberOfDays[Month - 1]);
}


bool isLastDayInMonth(stDate &Date)
{
    return (Date.Day == NumberOfDaysInMonth(Date.Month, Date.Year));
}


bool isLastMonthInYear(short Month)
{
    return (Month == 12);
}



stDate IncreaseDateByOneDay(stDate &Date)
{
    if(isLastDayInMonth(Date))
    {
        if(isLastMonthInYear(Date.Month))
        {
            Date.Month = 1;
            Date.Day = 1;
            Date.Year++;
        }
        else 
        {
            Date.Day = 1;
            Date.Month++;
        }
    }
    else 
    {
        Date.Day++;
    }
    return Date;
}



int GetDifferentBetweenTwoDates(stDate Date1, stDate Date2, bool isEndDayIncluded)
{
    int Days = 0;

    while(isDate1LessThanDate2(Date1, Date2))
    {
        Days++;
        Date1 = IncreaseDateByOneDay(Date1);
    }
    return Days;
}

#include <iostream>

using namespace std;

int main()
{


    stDate Date1;
    Date1.Day = 31;
    Date1.Month = 1;
    Date1.Year = 1950;

    stDate Date2;
    Date2.Day = 1;
    Date2.Month = 1;
    Date2.Year = 2022;

    cout << GetDifferentBetweenTwoDates(Date1, Date2, true);
    // Date1 = IncreaseDateByOneDay(Date1);
    // cout << Date1.Day << "\\" << Date1.Month << "\\" << Date1.Year;
    return 0;
}