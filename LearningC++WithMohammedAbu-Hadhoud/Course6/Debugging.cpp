// #include <iostream>

// using namespace std;

// void PritnNumber(short Number)
// {
//     int n;
//     cout << Number;
// }

// short _Power(short Base, short power)
// {
//     short Result = 1;
//     for(short Loop = 0; Loop < power; Loop++)
//         Result *= Base;
//     return Result;
// }

// string RaedStringFromScreen(const string &Message)
// {
//     cout << Message;
//     string String = "";
//     cin >> String;
//     return String;
// }

// void PirntStringOnscreen(const string &String)
// {
//     cout << String;
// }

// void PrintStringOnScrren(const string &String)
// {
//     PirntStringOnscreen(String);
// }

// int main()
// {
// short arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// short s, sum;
// for(short loop = 0; loop < 10; loop++)
//     sum += arr[loop];
//     cout << sum;
// string YourName = "Null";
// YourName = RaedStringFromScreen("Enter you name please: ");

// int a;
// int b;

//     mrh:
//     int a = 0, b = 0;
//     cout << "Enter two numbers: ";
//     cin >> a, b;

//     int sum = a + b;
//     cout << "The sum is: " << sum << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void printMessage(short result) {
//     cout << "Hello, the sum is: " << result << endl;
// }

// int main() {
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     int result = num1 + num2;
//     printMessage(result);

//     return 0;
// }

// void printMessage(int result) {
//     cout << "Hello, the sum is: " << result << endl;
// }

// int main() {
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     result = num1 + num2;  // Assign value to global variable
//     printMessage();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void printEvenSum(int num1, int num2) {
//     int sum = 0;
//     for (int i = num1; i <= num2; i++) {
//         if (i % 2 == 0)
//             sum = sum + i;
//     }
//     cout << "The sum of even numbers is: " << sum << endl;
// }

// int main() {
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     if (num1 > num2)
//         cout << "Error: num1 should be less than num2." << endl;
//     else if(num1 == num2)
//         cout << "Error num1 must not equal num2." << endl;
//     else
//         printEvenSum(num1, num2);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int multiply(int a, int b) {
//     return a * b;
// }

// int main() {
//     int num1, num2;
//     cout << "Enter two numbers to multiply: ";
//     cin >> num1, num2;

//     int result = multiply(num1, num2);
//     cout << "The result is: " << result << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool isOneOfTwoNumbersAreZero(short TheFirstNumber, short TheSecondNumber)
// {
//     return (TheFirstNumber == 0 || TheFirstNumber == 0);
// }

// string WhichNumberIs0(short &TheFirstNumber, short &TheSecondNumber)
// {
//     if(TheFirstNumber == 0)
//         return "The first number";
//     else
//         return "The second number";
// }

// void Printfor0Number(short &TheFirstNumber, short &TheSecondNumber)
// {
//     cout << "You enter 0 and it was " << WhichNumberIs0(TheFirstNumber, TheFirstNumber) << endl;
// }

// float divide(short TheFirstNumber, short TheSecondNumber)
// {
//     if(isOneOfTwoNumbersAreZero(TheFirstNumber, TheFirstNumber))
//     {
//         Printfor0Number(TheFirstNumber, TheSecondNumber);
//     }
//     else
//         return (float) TheFirstNumber / TheSecondNumber;
// }

// short ReadShortNumber(const string &Message)
// {
//     cout << Message;
//     short Number = 0;
//     cin >> Number;
//     return Number;
// }

// void PrintNumberOnScreen(short &Number)
// {
//     cout << Number;
// }

// int main()
// {
//     short FirstNumber = 0;
//     short SecondNumber = 0;
//     FirstNumber = ReadShortNumber("Enter a number for the first number: ");
//     SecondNumber = ReadShortNumber("Enter a number for the second number: ");
//     cout << divide(FirstNumber, SecondNumber);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int factorial(int n) {
//     if (n == 0)
//         return 1;
//     else
//         return n * factorial(n - 1);
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     cout << "Factorial of " << num << " is: " << factorial(num) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void swapNumbers(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     swapNumbers(num1, num2);

//     cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void printArray(int arr[]) {
//     for (int i = 0; i <= 5; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int numbers[5] = {1, 2, 3, 4, 5};

//     printArray(numbers);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void reverseString(string str) {
//     for (int i = str.length() - 1; i >= 0; i--) {
//         cout << str[i];
//     }
//     cout << endl;
// }

// int main() {
//     string input;
//     cout << "Enter a string: ";
//     cin >> input;

//     reverseString(input);

//     return 0;
//     }

// #include <iostream>
// using namespace std;

// void printMultiplesOf3(int num) {
//     for (int i = 0; i < num; i = i + 3) {
//         cout << i << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int limit;
//     cout << "Enter the limit: ";
//     cin >> limit;

//     printMultiplesOf3(limit);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void findLargestNumber(int num1, int num2, int num3) {
//     int largest = num1;

//     if (num2 > largest)
//         largest = num2;

//     if (num3 > largest)
//         largest = num3;

//     cout << "The largest number is: " << largest << endl;
// }

// int main() {
//     int a, b, c;
//     cout << "Enter three numbers: ";
//     cin >> a >> b >> c;

//     findLargestNumber(a, b, c);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int sumArray(int arr[], int size) {
//     int sum = 0;
//     for (int i = 0; i <= size; i++) {  // Loop goes out of bounds
//         sum += arr[i];
//     }
//     return sum;
// }

// int main() {
//     int numbers[5] = {1, 2, 3, 4, 5};
//     cout << "The sum of the array is: " << sumArray(numbers, 5) << endl;
//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (n % 2 == 0) {  // Error 1
//         cout << "The number is even" << endl;
//     } else {
//         cout << "The number is odd" << endl;
//     }

//     for (int i = 0; i < n; i++){  // Error 2
//         cout << i << " ";
//     }

//     int arr[5];
//     arr[5] = 10;  // Error 3

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main() {
//     int n, sum = 0;
//     cout << "Enter a number: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         if (i % 2 == 0) {  // Logic error here
//             sum += i;
//         }
//     }

//     cout << "Sum of even numbers from 1 to " << n << " is: " << sum << endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     int factorial = 0;  // Logic error here

//     for (int i = 1; i <= n; i++) {
//         factorial *= i;  // Logic error here
//     }

//     cout << "Factorial of " << n << " is: " << factorial << endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     int sum = 0;
//     for (int i = 1; i <= 5; i++)
//     {
//         sum = +i; // Logic error here!
//     }
//     cout << "Sum: " << sum << endl;
//     return 0;
// }

// #include <iostream>
// #include <string>

// int main() {
//     std::string result = ""; // Initialization of result as an empty string
//     for (int i = 0; i < 5; i++) {
//         result = i;  // Mistake: Here, we are not appending, just overwriting.
//     }
//     std::cout << result << std::endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str;
//     cout << "Enter a string: ";
//     getline(cin, str);  // Get input string

//     int length = str.length();

//     for (int i = 0; i < length / 2; i++) {  // Error 1: Loop condition
//         swap(str[i], str[length - i - 1]);  // Error 2: Swapping wrong indices
//     }

//     cout << "Reversed string: " << str << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// void printSum(const vector<int>& numbers) {
//     int sum = 0;
//     // Number size = 6
//     short Size = numbers.size();
//     for (int i = 0; i < Size; i++) {
//         sum += numbers[i];
//     }
//     cout << "Sum: " << sum << endl;
// }

// int main() {
//     vector<int> numbers = {1, 2, 3, 4, 5, 6};
//     printSum(numbers);

//     // Now we remove an element from the vector
//     numbers.pop_back();
//     numbers.pop_back();

//     // After removing 2 elements, printing the sum again
//     printSum(numbers);

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// void printSum(const vector<int>& numbers) {
//     int sum = 0;
//     for (int i = 0; i < numbers.size(); i++) {
//         sum += numbers[i];
//     }
//     cout << "Sum: " << sum << endl;
// }

// int main() {
//     vector<int> numbers = {1, 2, 3, 4, 5, 6};
//     printSum(numbers);

//     // Now we remove an element from the vector
//     numbers.pop_back();
//     numbers.pop_back();

//     // After removing 2 elements, printing the sum again
//     printSum(numbers);
//         string a = "";
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void printNumbers(int n) {
//     if (n == 0)
//         return;
//     else
//         {
//             cout << n << " ";
//             printNumbers(n - 1);
//         }
//     // cout << n << " "; // Error?
// }

// int main() {
//     printNumbers(5);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void printNumbers(int n) {
//     if (n == 0)
//         return;
//     cout << n << " ";
//     printNumbers(n - 1);
//     cout << n << " "; // Error?
// }

// int main() {
//     printNumbers(5);
//     return 0;
// }

// void PrintNumbers(short N)
// {
//     if(N == 0)
//         return;
//     else
//     {
//         cout << N <<
//     }
// }

// #include <iostream>

// using namespace std;

// void PrintNumber(short &Number)
// {
//     cout << Number;
// }

// void PrintNumbers(short Number)
// {
//     if(Number == 0)
//         return;
//     else
//         {
//             PrintNumber(Number);
//             cout << " ";
//             PrintNumbers(Number - 1);
//         }
// }

// int main()
// {
//     PrintNumbers(5);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int findMax(int arr[], int size) {
//     int max = arr[0]; // Error?
//     for (int i = 0; i < size; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }
//     return max;
// }

// int main() {
//     int numbers[] = {-3, -1, -7, -5};
//     int size = sizeof(numbers) / sizeof(numbers[0]);
//     cout << "Max number: " << findMax(numbers, size) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int countVowels(string str)
// {
//     int count = 0;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//             count++;
//     }
//     return count;
// }

// int main()
// {
//     string text = "Hello, World!";
//     cout << "Number of vowels: " << countVowels(text) << endl;
//     return 0;
// }

// #include <iostream>

// using namespace std;

// int findMax(int arr[], int size) {
//     int max = 0; // Error here?

//     for (int i = 0; i < size; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }

//     return max;
// }

// int main() {
//     int numbers[] = {3, 7, 2, 8, 5};
//     int size = sizeof(numbers) / sizeof(numbers[0]);

//     cout << "Maximum number: " << findMax(numbers, size) << endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int countEvenNumbers(int arr[], int size) {
//     int count = 0;
//     for (int i = 0; i <= size; i++) {  // Possible error here 🤔
//         if (arr[i] % 2 == 0) {
//             count++;
//         }
//     }
//     return count;
// }

// int main() {
//     int numbers[] = {2, 5, 8, 3, 6, 7};
//     int size = sizeof(numbers) / sizeof(numbers[0]);

//     cout << "Count of even numbers: " << countEvenNumbers(numbers, size) << endl;

//     return 0;
// }

// #include <iostream>
// #include <cmath>

// using namespace std;

// double calculateSquareRoot(double number)
// {
//     if (number < 0)
//     {
//         cout << "Cannot calculate square root of negative number!" << endl;
//         return -1;
//     }
//     return sqrt(number);
// }

// double calculateExpression(double a, double b)
// {
//     double result;
//     result = pow(a, 2) + pow(b, 2);
//     result = sqrt(result);

//     return result;
// }

// int main()
// {
//     double a = 3;
//     double b = -4;

//     double result = calculateExpression(a, b);
//     cout << "Result: " << result << endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// short FindMaxNumberInAnArray(short Array[100], short Size)
// {
//     short Max = Array[0];
//     for(short loop = 0; loop < Size; loop++)
//     {
//         if(Max < Array[loop])
//             Max = Array[loop];
//     }
//     return Max;
// }

// short GetSumOfArray(short Array[100], short Size)
// {
//     short Sum = 0;
//     for(short loop = 0; loop < Size; loop++)
//         Sum += Array[loop];
//     return Sum;
// }

// short GetSumOfNumber(short Number)
// {
//     short Sum = 0;
//     for(short loop = 1; loop <= Number; loop++)
//         Sum += loop;
//     return Sum;
// }

// short FindMissingElementInAnArray(short Array[100], short Size)
// {
//     short ArraySum = GetSumOfArray(Array, Size);
//     short SumOfSize = GetSumOfNumber(Size + 1);
//     return SumOfSize - ArraySum;
// }

// int main()
// {
//     short Array[2] = {2, 3};
//     short Size = sizeof(Array) / sizeof(Array[0]);
//     cout << FindMissingElementInAnArray(Array, Size);
//     // cout << FindMaxNumberInAnArray(Array, Size);
// }

// #include <iostream>

// using namespace std;

// void printSquares(int n) {
//     for (int i = 1; i < n; i++) {
//         cout << i * i << " ";
//     }
// }

// int main() {
//     printSquares(5);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void PrintFactorials(int n) {
//     for (int i = 1; i <= n; i++) {
//         int fact = 1;
//         for (int j = 1; j <= i; j++) {
//             fact *= j;
//         }
//         cout << fact << " ";
//     }
// }

// int main() {
//     PrintFactorials(5);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int SumEvenNumbers(int n) {
//     int sum = 0;
//     for (int i = 1; i <= n; i++) {
//         if (i % 2 == 0) {
//             sum += i;
//         }
//     }
//     return sum;
// }

// int main() {
//     cout << SumEvenNumbers(10);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void PrintOddNumbers(int n) {
//     for (int i = 1; i <= n; i++) {
//         if (i % 2 != 0) {
//             cout << i << " ";
//         }
//     }
// }

// int main() {
//     PrintOddNumbers(10);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void PrintNumbers(int n) {
//     for (int i = 1; i < n; i++) {
//         cout << i << " ";
//     }
// }

// int main() {
//     PrintNumbers(5);
//     return 0;
// }

// #include <iostream>

// using namespace std;

// void PrintEvenNumbers(int num) {
//     for (int i = 0; i <= num; i++) {
//         if (i % 2 == 0) {  // Mistake here
//             cout << i << " ";
//         }
//     }
// }

// int main() {
//     int num;
//     cin >> num;
//     PrintEvenNumbers(num);
//     return 0;
// }

// #include <iostream>

// using namespace std;

// void PrintEvenNumbers(int num) {
//     int sum = 0;
//     for (int i = 0; i <= num; i++)
//     {  // Loop condition might be wrong
//         if (i % 2 == 0)
//         {  // Correct the logic here if needed
//             sum += i;
//             if (sum > 100)
//             {  // Check if sum exceeds 100
//                 cout << "Sum Exceeds 100" << endl;
//                 break;  // Break the loop if sum exceeds 100
//             }
//             cout << i << " ";
//         }
//     }
//     cout << "\nTotal Sum: " << sum << endl;  // Print the sum at the end
// }

// int main() {
//     int num;
//     cin >> num;
//     PrintEvenNumbers(num);
//     return 0;
// }

// #include <iostream>

// using namespace std;

// void SumOddNumbers(int arr[], int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//         if (arr[i] % 2 == 1) {  // Mistake in condition: assignment operator (=) instead of equality (==)
//             sum += arr[i];
//             if (sum > 100) {
//                 cout << "Warning: Sum of odd numbers exceeded 100!" << endl;
//                 return;  // Exit the function early
//             }
//         }
//     }
//     cout << "Sum of Odd Numbers: " << sum << endl;
// }

// int main() {
//     int arr[] = {3, 5, 7, 8, 10, 13, 21};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     SumOddNumbers(arr, size);  // Function call to test the solution
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     for (int i = 0; i <= n; i++) {
//         if (i % 2 == 0) {
//             cout << "Even: " << i << endl;
//         }
//         else {
//             cout << "Odd: " << i << endl;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     int evenSum = 0;
//     int oddSum = 0;
//     int product = 1;

//     for (int i = 0; i <= n; i++) {
//         if (i % 2 == 0) {  // Error 1: Assignment instead of comparison
//             evenSum += i;
//         }
//         else {
//             oddSum += i;
//         }
//         if (i % 2 == 0) {
//             product *= i;
//         }
//     }

//     cout << "Sum of even numbers: " << evenSum << endl;
//     cout << "Sum of odd numbers: " << oddSum << endl;
//     cout << "Product of all numbers: " << product << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int FindFactorial(int n) {
//     int fact = 1;
//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (num < 0) {
//         cout << "Factorial is not defined for negative numbers." << endl;
//         return 0;
//     }

//     int factorial = FindFactorial(num);
//     cout << "The factorial of " << num << " is: " << factorial << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int result = num1 * num2;
//     if(result > 0)
//         cout << "Positive result";
//     else
//         cout << "Negative result";
//         return 0;
// }

// #include <iostream>

// using namespace std;

// void reverseArray(int arr[], int size) {
//     int start = 0;
//     int end = size - 1;

//     while (start < end) {
//         arr[start] = arr[start] + arr[end]; // Mistake 1
//         arr[end] = arr[start] - arr[end];   // Mistake 2
//         arr[start] = arr[start] - arr[end];  // Mistake 3

//         start++;
//         end--;
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     reverseArray(arr, size);

//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

#include <iostream>

using namespace std;

struct emp
{
    string Name = "";
    short Salary = 0;
};

// void PrintNumber(short &Number)
// {
//     cout << Number;
// }

// void PrintCharacter(short &NumberOfCharacter)
// {
//     for(short Characters = 0; Characters < NumberOfCharacter; Characters++)
//         cout << NumberOfCharacter;
// }

// void PrintSpaces(short NumberOfSpaces)
// {
//     for(short Spaces = 0; Spaces < NumberOfSpaces; Spaces++)
// }

// void PrintNumbersInRange(const short &Number)
// {
//     short Loop = 0;
//     do
//     {
//         cout << "Loop now equals =>> " << Loop << endl;
//         Loop++;
//     } while(Loop < Number);
// }

// bool CheckPassword(string TheStoredPassword, string UserPassword)
// {
//     return (TheStoredPassword == UserPassword);
// }

// string ReadUserPassword(const string &Message)
// {
//     cout << Message;
//     string UserPassword = "";
//     cin >> UserPassword;
//     return UserPassword;
// }

// void PrintUserPassword()
// {
//     string ThePassword = "Abc";
//     string YourPassword = "";
//     bool isPasswordCorrect = false;
//     short Tries = 3;
//     do
//     {
//         YourPassword = ReadUserPassword("Enter your password: ");
//         isPasswordCorrect = CheckPassword(ThePassword, YourPassword);
//         if(isPasswordCorrect)
//         {
//             cout << "Your password is correct :) \n";
//             break;
//         }
//         cout << "You still have " << Tries << "Tires" << endl;
//         Tries--;
//     }while(isPasswordCorrect || Tries < 4);
// }

// int main()
// {
//     // PrintNumbersInRange(5);
//     PrintUserPassword();
//     return 0;
// }

// #include <iostream>

// int main() {
//     int i = 1;
//     while (i <= 10) {
//         std::cout << i << " ";
//         i++;
//     }
//     return 0;
// }

// #include <iostream>

// int main() {
//     int sum = 0;
//     for (int i = 1; i <= 5; i++)
//         sum =+ i;

//     std::cout << "Sum: " << sum << std::endl;

//     for(short loop = 0; loop < 2; loop++)
//         cout << "loop =  loop" << " ";
//     return 0;
// }

// #include <iostream>

// int main() {
//     int num = 0;
//     std::cout << "Enter a number: ";
//     cin >> num;
//     std::cout << "The number is " << (num % 2 == 0 ? "Even" : "Odd") << std::endl;
//     return 0;
// }

// #include <iostream>

// void allocateMemory() {
//     int* ptr = new int(10);  // Dynamically allocated memory
// }

// int main() {
//     allocateMemory();
//     return 0;
// }

// #include <iostream>

// int main() {
//     int i = 2;

//     while (i <= 20) {  // Condition for stopping is wrong
//         std::cout << i << " ";
//         i += 2;
//     }

//     return 0;
// }

// #include <iostream>

// int main() {
//     int num = 5;
//     int factorial = 1;

//     for (int i = 1; i <= num; i++) {
//         factorial *= i;  // Mistake in the loop
//     }

//     std::cout << "Factorial of " << num << " is " << factorial << std::endl;

//     return 0;
// }

// #include <iostream>
// #include <string>

// int main() {
//     std::string str = "racecar";  // Test with other strings too
//     bool isPalindrome = true;

//     for (int i = 0; i < str.length(); i++) {
//         if (str[i] != str[str.length() - i - 1]) {  // Error here
//             isPalindrome = false;
//             break;
//         }
//     }

//     if (isPalindrome) {
//         std::cout << str << " is a palindrome." << std::endl;
//     } else {
//         std::cout << str << " is not a palindrome." << std::endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <cmath>

// int main() {
//     int arr[] = {1, 2, 3, 4};  // Example array
//     int size = sizeof(arr) / sizeof(arr[0]);  // Get the size of the array

//     int result = 0;

//     for (int i = 0; i < size; i++) {
//         result = result * 10 + arr[i];  // Shift digits and add current number
//     }

//     std::cout << "Combined number: " << result << std::endl;

//     return 0;
// }

// #include <iostream>

// int main() {
//     int arr[] = {1, 2, 3, 4};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int sum = 0;

//     for (int i = 0; i <= size; i++) {
//         sum += arr[i];
//     }

//     double average = sum / size;  // Division by zero?
//     std::cout << "Average: " << average << std::endl;

//     return 0;
// }

// #include <iostream>

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < size; i++) {
//         if (arr[i] % 2 == 0)
//             std::cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>

// int main() {
//     int x;
//     std::cout << "Enter a number: ";

//     if (x > 0) {
//         std::cout << "Positive number!" << std::endl;
//     } else {
//         std::cout << "Non-positive number!" << std::endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include "..\Libraries\ClearingScreenFunctions.h"
// #include "..\Libraries\ReadInputs.h"
// #include "..\Libraries\PrintDifferentTypesOfOutput.h"
// #include "..\Libraries\PrintingDifferentTypesOfOutput.h"

// void  PrintText(const string Text)
// {
//     cout << "The text you entered is " << Text << endl;
// }

// int main()
// {
// short Number = 4;
// Number = ReadNumbers::ReadShortNumber("Enter a number please: ");
// PrintTextOnScreen::PrintTextONScreen("The number you entered is =>> ");
// PrintNumbersOnScreen::PrintShortNumber(1);
// PrintNumber(4);
// PrintNumber(Number);
// string MyString = "How are you :)";
// PrintText("How are you :)");
// PrintNumbersOnScreen::PrintShortNumber(4);

// ClearScreen::ClearScreen();
// cout << "hi how are you :)\n";
// ClearScreen::ClearScreen();
// int Number =  ReadNumbers::ReadIntegerNumber("Entr a number: ");
// PrintTextOnScreen::PrintTextONScreen("THis is my first function from the libray of PrintDifferentTypesOfOutput :)");

//     PrintTextOnScreen::PrintRandomKeys(4);
//     return 0;
// }

#include <iostream>
#include <cmath>
// #include "Homeworks\Homework2.h"
// #include "Homeworks/HomeWork1.h"
#include "..\Libraries\CheckDataTypes.h"  // great :)
#include "..\Libraries\Enums.h"           // great :)
#include "..\Libraries\MathOperations.h"  // great :)
#include "..\Libraries\PrintingOutputs.h" // great :)
#include "..\Libraries\ReadingInputs.h"   // great :)
#include "..\Libraries\Structures.h"      // great :)
#include "..\Libraries\validingData.h"    // great
// #include "..\GenerateRandomDataTypes.h"
#include "..\Libraries\GenerateRandomDataTypes.h"
// #include "..\Libraries\validingData.h"
#include "..\Libraries\TextFormat.h"
#include "..\Libraries\ArraysOperations.h"
// #include "Homeworks\Homework1.h"
// #include "Homeworks\Homework2.h"
// #include "Practice\Prac1.h"
// #include "Practice\Prac2.h"
// #include "Practice\Prac3.h"
// #include "Practice\Prac4.h"
// #include "Practice\Prac5.h"
// #include "Homeworks\Homework3.h"
// #include "Homeworks\Homework4.h"
// #include "Homeworks\Homework5.h"
// #include "Homeworks\Homework6.h"
#include "Homeworks\Homework7.h"
#include <iomanip>
#include <fstream>
#include <cctype>
#include "..\Libraries\FilesOperations.h"
#include <ctime>
// #include <vector>






using namespace std;

int main()
{
    boolalpha;
    // printEnums::PrintPrimeOrNotPrime(ReadEnums::ReadNumberType(ReadNumbers::ReadingShortNumber("Enter a number: ")));
    // printEnums::PrintNumberIsPrimeOrNot(ReadNumbers::ReadingShortNumber("Enter a number to check if it is prime or not: "));
    // PrintNumbers::PrintIntegerNumber(MathOperations::GetPower(2, 10));
    // PrintNumbers::printShortNumber(MathOperations::MaxOfTwoNumbers(ReadNumbers::ReadingShortNumber("Enter a the first number: "), ReadNumbers::ReadingShortNumber("Enter the Second Number: ")));
    // PrintingText::PrintTextOnScreen("Swapping two number: ");
    // PrintingText::PrintLines();
    // int FirstNumber = ReadNumbers::ReadingShortNumber("Enter the first Number: ");
    // int SecondNumber = ReadNumbers::ReadingShortNumber("Enter the second Number: ");
    // PrintNumbers::DisplayBeforSwapping(FirstNumber, SecondNumber);
    // MathOperations::SwapTowNumbers(FirstNumber, SecondNumber);
    // PrintNumbers::DisplayAfterSwapping(FirstNumber, SecondNumber);
    // PrintingText::PrintCharacters(';');
    // PrintingText::PrintLines();
    // PrintingText::PrintTextOnScreen("hi hwo are you :)");
    // PrintingText::PrintLines();
    // PrintingText::PrintSequenceOfCharacters('*', 4);
    // PrintNumbers::printShortNumber(4);
    // PrintingText::PrintLines();
    // PrintNumbers::PrintIntegerNumber(4);
    // PrintingText::PrintLines();
    // PrintNumbers::PrintFloatNumber(10.8);
    // PrintingText::PrintLines();
    // PrintNumbers::PrintDoubleNumber(10.4598);
    // PrintingText::PrintLines();
    // printNumbersInRange::PrintNumbersFrom1ToN(10);
    // PrintingText::PrintLines();
    // printNumbersInRange::PrintNumbersFromNTo1(10);
    // PrintingText::PrintLines();
    // printEnums::printNumberIsEvenOrOdd((enNumberType) 2);
    // printEnums::PrintDayOfTheWeek((enDaysOfWeek) ReadNumbers::ReadingShortNumber("Enter a Number: "));
    // printEnums::GetMonthOfTheYear((enMonthsOfTheYear) ReadNumbers::ReadingShortNumber("Enter a day to know which month is your month: "));
    // printEnums::printNumberIsEvenOrOdd((enNumberType) ReadNumbers::ReadingShortNumber("Enter a Number To Get if it is even or odd: "));
    // PrintingText::PrintLines();
    // PrintNumbers::PrintMultiplicationBody();
    // PrintingText::PrintLines();
    // PrintNumbers::PrintNumberIsPrimeOrNot(ReadNumbers::ReadingIntegerNumber("Enter a number: "));
    // PrintingText::PrintLines();
    // printEnums::PrintNumberIsPrimeOrNot(6);
    // printEnums::PrintPrimeNumbersFrom1ToN(100);
    // PrintingText::PrintLines();
    // PrintingText::PrintTextOnScreen(MathOperations::IsNumberPrimeOrNotPrime(26));
    // printEnums::PrintNumberIsPerfectOrNotPerfect(6);
    // printEnums::PrintPerfectNumbersFrom1ToN(100000);
    // PrintNumbers::PrintDigitsOfNumberInReverseOrder(1234);
    // PrintNumbers::printShortNumber(MathOperations::SumDigitsOfNumber(ReadNumbers::ReadingShortNumber("Enter a number to give how much the sum of its all digits: ")));
    // PrintNumbers::printShortNumber(MathOperations::ReverseNumber(1142));
    // PrintNumbers::printShortNumber(MathOperations::FrequentDigitInNumber(8386886, 8));
    // PrintNumbers::PrintHowManyTimeEveryDigitAppearedInNumber(11444552);
    // PrintNumbers::PrintIntegerNumber(MathOperations::GetNumberInReverseWay(11444552));
    // Print();
    // PrintNumbers::printShortNumber(MathOperations::ReverseNumber(433));
    // PrintNumbers::PrintNumberInInvertedPatternDown(100);
    // PrintNumbers::PrintNumberInInvertedPatternUp(100);
    // PrintNumbers::PrintLetterInInvertedPatternDown(100);
    // PrintNumbers::PrintLetterInInvertedPatternUp(100);
    // PrintingText::PrintLettersFormAAAToZZZ();
    // PrintingText::PrintLettersFormAAAToZZZ();
    // PrintingText::PrintLetterFromAToZ();
    // PrintingText::PrintPasswordOrder("HIS");
    // PrintingText::PrintCharacters(CheckEnums::GetRandomType((enRandomSutf) ReadNumbers::ReadingShortNumber("Enter a number to get random character or digit: ")));
    // PrintingText::PrintCharacters(CheckEnums::GetRandomType((enRandomSutf) 1));
    srand((unsigned)time(NULL));
    // PrintingText::PrintCharacters(GetRandomCharacter::GetRandomCharacter((enCharacterType) ReadNumbers::ReadingShortNumber("Enter a number to Get random character or digit: ")));
    // PrintingText::PrintTextOnScreen(GetRandomCharacter::GenerateWord((enCharacterType) 1, 8));
    // PrintingText::PrintTextOnScreen(GetRandomCharacter::GenerateKey(8, 8));
    // PrintingText::PrintKeys(100, 5, 5);
    // int MyArray[100], Size = 10;
    // ReadArrayData(MyArray, Size);
    // PrintingText::PrintLines();
    // PrintArray(MyArray, Size);
    // PrintingText::PrintLines();
    // short Element = ReadNumbers::ReadingShortNumber("Enter the element that you want to see how many times it hass appeared in your array: ");
    // PrintNumbers::printShortNumber(Element);
    // PrintingText:PrintingText::PrintTextOnScreen(" has appeared ");
    // PrintNumbers::printShortNumber(TimesNumberAppearsInArray(MyArray, 10, Element));
    // PrintingText::PrintTextOnScreen(" times");
    // PrintingText::PrintLines();
    // int MyArray[100], Size = 10;
    // ArrayOperations::FillArrayWithRandomNumbers(MyArray, Size);
    // ArrayOperations::PrintArrayData(MyArray, Size);
    // PrintingText::PrintTextOnScreen("The max element in your array is =>> ");
    // PrintNumbers::printShortNumber(ArrayOperations::MaximumElementInArray(MyArray, Size));
    // PrintingText::PrintLines();
    // PrintingText::PrintTextOnScreen("The min element in your array =>> ");
    // PrintNumbers::printShortNumber(ArrayOperations::MiniumElementInArray(MyArray, 10));
    // PrintingText::PrintLines();
    // PrintingText::PrintTextOnScreen("The sum of your array =>> ");
    // PrintNumbers::printShortNumber(ArrayOperations::SumOfArray(MyArray, Size));
    // PrintingText::PrintLines();
    // PrintingText::PrintTextOnScreen("The average of your array =>> ");
    // PrintNumbers::PrintFloatNumber(ArrayOperations::AvarageOfArray(MyArray, Size));
    // ArrayOperations::FillArrayWithRandomNumbers(OriginalArray, SizeOfOriginalArray);
    // ArrayOperations::PrintArrayData(OriginalArray, SizeOfOriginalArray);
    // ArrayOperations::CopyPrimeNumbersInArray(OriginalArray, CopyArray, SizeOfOriginalArray, SizeofCopyArray);
    // ArrayOperations::PrintArrayData(CopyArray, SizeofCopyArray);
    // ArrayOperations::CopyArray(OriginalArray, CopyArray, SizeOfOriginalArray);
    // ArrayOperations::PrintArrayData(CopyArray, SizeOfOriginalArray);
    // int OriginalArray[100];
    // int CopyArray[100];
    // int SumArray[100];
    // int Size = 10;
    // ArrayOperations::FillArrayWithRandomNumbers(OriginalArray, Size);
    // ArrayOperations::FillArrayWithRandomNumbers(CopyArray, Size);
    // ArrayOperations::SumOfTwoArrays(OriginalArray, CopyArray, SumArray, Size);
    // ArrayOperations::PrintArrayData(OriginalArray, Size);
    // ArrayOperations::PrintArrayData(CopyArray, Size);
    // ArrayOperations::PrintArrayData(SumArray, Size);

    // int MyArray[100], SizeOfMyArray = 10;
    // MyArray[0] = 1;
    // MyArray[1] = 2;
    // MyArray[2] = 3;
    // MyArray[3] = 4;
    // MyArray[4] = 5;
    // MyArray[5] = 6;
    // MyArray[6] = 7;
    // MyArray[7] = 8;
    // MyArray[8] = 9;
    // MyArray[9] = 10;
    // ArrayOperations::FillArrayWithOrderNumbers(MyArray, SizeOfMyArray);
    // ArrayOperations::PrintArrayData(MyArray, SizeOfMyArray);
    // PrintingText::PrintTextOnScreen("The sum of your array before  shuffling array =>> ");
    // PrintNumbers::printShortNumber(ArrayOperations::SumOfArray(MyArray, SizeOfMyArray));

    // PrintingText::PrintLines(2);

    // ArrayOperations::ShuffleArray(MyArray, SizeOfMyArray);
    // ArrayOperations::PrintArrayData(MyArray, SizeOfMyArray);
    // PrintingText::PrintTextOnScreen("The sum of your array after shuffling array =>> ");
    // PrintNumbers::printShortNumber(ArrayOperations::SumOfArray(MyArray, SizeOfMyArray));

    // int MyArray[100];
    // int SizeOfMyArray = 10;
    // int CopyArray[100], SizeOfCopyArray = 0;
    // ArrayOperations::FillArrayWithRandomNumbers(MyArray, SizeOfMyArray);
    // ArrayOperations::PrintArrayData(MyArray, SizeOfMyArray);
    // ArrayOperations::FillArrayInReverseOrder(MyArray, CopyArray, SizeOfMyArray);
    // ArrayOperations::PrintArrayData(CopyArray, SizeOfMyArray);
    // ArrayOperations::FillArrayWithOrderNumbers(MyArray, SizeOfMyArray);
    // PrintNumbers::printShortNumber(ArrayOperations::IsElementInArray(MyArray, SizeOfMyArray, 1));
    // ArrayOperations::PrintArraysOfKeys(MyArray, SizeOfMyArray);
    // ArrayOperations::ReadDynamicArray(MyArray, SizeOfMyArray);

    // ArrayOperations::PrintArrayData(MyArray, SizeOfMyArray);

    // ArrayOperations::FillArrayWithOrderNumbers(MyArray, SizeOfMyArray);
    // ArrayOperations::PrintArrayData(MyArray, SizeOfMyArray);

    // ArrayOperations::CopyArrayDataUsingAddArrayElement(MyArray, SizeOfMyArray, CopyArray, SizeOfCopyArray);

    // ArrayOperations::PrintArrayData(CopyArray, SizeOfCopyArray);

    // int OriginalArray[100], SizeOfOriginalArray = 10;
    // OriginalArray[0] =  10;
    // OriginalArray[1] = 10;
    // OriginalArray[2] = 10;
    // OriginalArray[3] = 50;
    // OriginalArray[4] = 50;
    // OriginalArray[5] = 70;
    // OriginalArray[6] = 70;
    // OriginalArray[7] = 70;
    // OriginalArray[8] = 70;
    // OriginalArray[9] = 90;
    // ArrayOperations::PrintArrayData(OriginalArray, SizeOfOriginalArray);

    // int CopyArray[100], SizeofCopyArray = 0;
    // ArrayOperations::CopyDistinctArray(OriginalArray, SizeOfOriginalArray, CopyArray, SizeofCopyArray);
    // ArrayOperations::PrintArrayData(CopyArray, SizeofCopyArray);

    // ArrayOperations::ReadArrayData(OriginalArray, SizeOfOriginalArray);
    // if(ArrayOperations::IsArrayPalindrome(OriginalArray, SizeOfOriginalArray))
    //     PrintingText::PrintTextOnScreen("Your array is palindrome :)");
    // else
    //     PrintingText::PrintTextOnScreen("Your array is not palindrome :(");

    // // ArrayOperations::FillArrayWithRandomNumbers(OriginalArray, SizeOfOriginalArray);
    // // ArrayOperations::PrintArrayData(OriginalArray, SizeOfOriginalArray);
    // PrintNumbers::printShortNumber(ArrayOperations::CountOffOddNumbersInArray(OriginalArray, SizeOfOriginalArray));

    // ArrayOperations::FillArrayWithRandomNumbers(OriginalArray, SizeOfOriginalArray);
    // ArrayOperations::PrintArrayData(OriginalArray, SizeOfOriginalArray);
    // PrintNumbers::printShortNumber(ArrayOperations::CountOfEvenNumbersInArray(OriginalArray, SizeOfOriginalArray));
    // 10 20 20 30 30 40 40 50 50 10
    // cout << SizeofCopyArray;
    // int OriginalArray[100], SizeOfOriginalArray = 10;

    // ArrayOperations::FillArrayWithOrderNumbers(OriginalArray, SizeOfOriginalArray);
    // ArrayOperations::PrintArrayData(OriginalArray, SizeOfOriginalArray);
    // PrintNumbers::printShortNumber(ArrayOperations::CountOfPositiveNumbersInArray(OriginalArray, SizeOfOriginalArray));

    // ArrayOperations::FillArrayWithOrderNumbers(OriginalArray, SizeOfOriginalArray);
    // ArrayOperations::PrintArrayData(OriginalArray, SizeOfOriginalArray);
    // PrintNumbers::printShortNumber(ArrayOperations::CountOfNegativeNumbersInArray(OriginalArray, SizeOfOriginalArray));
    // PrintingText::PrintTextOnScreen("C++ Abs =>> ");
    // PrintNumbers::printShortNumber(abs(5));

    // PrintingText::PrintLines();
    // PrintingText::PrintTextOnScreen("My Abs =>> ");
    // PrintNumbers::printShortNumber(MathOperations::MyAbs(5));

    // PrintingText::PrintTextOnScreen("C++ round =>> ");
    // PrintNumbers::printShortNumber(round(-10.7));

    // PrintingText::PrintLines();
    // PrintingText::PrintTextOnScreen("My Abs =>> ");
    // PrintNumbers::printShortNumber(MathOperations::MyRound(-10.7));

    // PrintingText::PrintTextOnScreen("C++ floor =>> ");
    // PrintNumbers::printShortNumber(floor(10.7));

    // PrintingText::PrintLines();
    // PrintingText::PrintTextOnScreen("My floor =>> ");
    // PrintNumbers::printShortNumber(MathOperations::MyFloor(10.7));

    // PrintingText::PrintTextOnScreen("C++ sqrt =>> ");
    // PrintNumbers::printShortNumber(sqrt(25));

    // PrintingText::PrintLines();
    // PrintingText::PrintTextOnScreen("My sqrt =>> ");
    // PrintNumbers::printShortNumber(MathOperations::MySqrt(25));

    // string StudentsNames[5] = {};

    // short NumberOfStudents = ReadNumbers::ReadingShortNumber("Enter how many students do you have: ");
    // cin.ignore();
    // for(short loop = 0; loop < NumberOfStudents; loop++)
    // {
    //     PrintingText::PrintTextOnScreen("Enter the name of student number (");
    //     PrintNumbers::printShortNumber(loop);
    //     PrintingText::PrintTextOnScreen("): ");
    //     StudentsNames[loop] = ReadText::ReadTextOnScreen("");
    // }

    // PrintingText::PrintTextOnScreen("Your students: ");
    // for(string Student : StudentsNames)
    // {
    //     PrintingText::PrintTextOnScreen(Student);
    //     PrintingText::PrintLines();

    // string Digits = "a1b2c3";
    // short Counter = 0;
    // for(char Digit : Digits)
    //     if(Digit >= '0' && Digit <= '9' || Digit)
    //         Counter++;
    // PrintingText::PrintTextOnScreen("Sum of digit: ");
    // PrintNumbers::printShortNumber(Counter);

    // string Digits = "a1b2c3d4";
    // short EvenCont = 0;
    // short OddCount = 0;
    // short SumEven = 0;
    // short SumOdd = 0;
    // for(char Digit : Digits)
    // {
    //     if(Digit >= '1' && Digit <= '9')
    //     {
    //         if((Digit - '0') % 2 != 1)
    //         {
    //             EvenCont++;
    //             SumEven += (Digit - '0');
    //         }
    //         else
    //         {
    //             OddCount++;
    //             SumOdd += (Digit - '0');
    //         }
    //     }
    // }

    // PrintingText::PrintTextOnScreen("Cont of even digit: ");
    // PrintNumbers::printShortNumber(EvenCont);
    // PrintingText::PrintLines();
    // PrintingText::PrintTextOnScreen("Sum of even digit: ");
    // PrintNumbers::printShortNumber(SumEven);
    // PrintingText::PrintLines();

    // PrintingText::PrintTextOnScreen("Cont of odd digit: ");
    // PrintNumbers::printShortNumber(OddCount);
    // PrintingText::PrintLines();
    // PrintingText::PrintTextOnScreen("Sum of odd digit: ");
    // PrintNumbers::printShortNumber(SumOdd);
    // PrintingText::PrintLines();

    // char MinDigit = '9';
    // char MaxDigit = '0';
    // string Digits = "a1b2c3d4";
    // for(char &Digit : Digits)
    // {
    //     if(Digit >= '0' && Digit <= '9')
    //     {
    //         if(Digit < MinDigit)
    //             MinDigit = Digit;
    //         if(Digit > MaxDigit)
    //             MaxDigit = Digit;
    //     }
    // }

    // PrintingText::PrintTextOnScreen("Min digit: ");
    // PrintingText::PrintCharacters(MinDigit);
    // PrintingText::PrintLines();

    // PrintingText::PrintTextOnScreen("Max digit: ");
    // PrintingText::PrintCharacters(MaxDigit);
    // PrintingText::PrintLines();

    // string Digits = "a1b2c3d4";
    // short LengthOfDigits = Digits.length();
    // short SumOfEvenIndexes = 0;
    // short SumOfOddIndexes = 0;
    // for (short loop = 0; loop < LengthOfDigits; loop++)
    // {
    //     if (Digits[loop] >= '0' && Digits[loop] <= '9')
    //     {
    //         if (loop % 2 == 0)
    //             SumOfEvenIndexes++;
    //         else
    //             SumOfOddIndexes++;
    //     }
    // }
    // PrintingText::PrintTextOnScreen("Sum of even indexes: ");
    // PrintNumbers::printShortNumber(SumOfEvenIndexes);
    // PrintingText::PrintLines();
    // PrintingText::PrintTextOnScreen("Sum of odd indexes: ");
    // PrintNumbers::printShortNumber(SumOfOddIndexes);
    // PrintingText::PrintLines();

    // PrintNumbers::printShortNumber(12 | 25);
    // PrintingText::PrintLines();

    // Print();
    // short Number = ReadNumbers::ReadingShortNumber("Enter a number: ");
    // PrintingText::PrintTextOnScreen("Your number: ");
    // PrintNumbers::printShortNumber(Number);

    // Print();
    // int PhoneNumber = 736535350;
    // // printf("Your phone number = %d \n", PhoneNumber);
    // // printf("Your phone number order is %d of %d \n", PhoneNumber, 739999999);
    // printf("Your number = %0*d ", 5, PhoneNumber);
    // for(short loop = 0; loop <= 10000; loop++)
    //     printf("loop = %0*d \n", 5, loop);

    //     short FirstNumber = ReadNumbers::ReadingShortNumber("Enter the first number: ");
    //     short SecondNumber = ReadNumbers::ReadingShortNumber("Enter the second number: ");
    //     printf("%d + %d = %d \n", FirstNumber, SecondNumber, FirstNumber + SecondNumber);

    
        // for(int PhoneNumbers = 770000000; PhoneNumbers < 779999999; PhoneNumbers++)
        //     printf("+%d %d \n", 967, PhoneNumbers);  
        // float Number = 1.3623;
        // printf("Your number: %.*f \n", 1, Number); 
        // printf("Your number: %.*f \n", 2, Number); 
        // printf("Your number: %.*f \n", 3, Number); 
        // printf("Your number: %.*f \n", 4, Number); 
        // printf("Your number: %.*f \n", 5, Number); 
        // printf("Your number: %.*f \n", 6, Number); 

        // float TheFirstNumber = ReadNumbers::ReadFloatingPointNumber("Enter the first number: ");
        // float TheSecondNumber = ReadNumbers::ReadFloatingPointNumber("Enter the second number: ");
        // (TheSecondNumber == 0 ) ?  printf("Can not divide by zero because the second number = 0 (%.3f)", TheSecondNumber) : printf("%.3f / %.3f = %.3f", TheFirstNumber, TheSecondNumber, TheFirstNumber / TheSecondNumber);
        

        // char MyName[] = "mrh ";
        // printf("Hi %s, how are you :)\n", MyName);

        // char Character = 'M';
        // printf("Letter: %*c\n", 1, Character);
        // printf("Letter: %*c\n", 2, Character);
        // printf("Letter: %*c\n", 3, Character);
        // printf("Letter: %*c\n", 4, Character);
        // printf("Letter: %*c\n", 5, Character);
        // short Counter = 1;
        // for(char loop = 'A'; loop <= 'Z'; loop++)
        // {
        //     printf("%*c\n", Counter, loop);
        //     Counter++;
        // }

        // Print();
        // PrintingText::PrintTextOnScreen("------------------------------------------");
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("Name", 10); PrintingText::PrintTextOnScreen("Math", 10); PrintingText::PrintTextOnScreen("Science", 10); PrintingText::PrintTextOnScreen("English", 10); 
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("------------------------------------------");
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("Alice", 10); PrintingText::PrintTextOnScreen("90", 10); PrintingText::PrintTextOnScreen("85", 10); PrintingText::PrintTextOnScreen("88", 10);
        // PrintingText::PrintLines(4);

        // cout << "------------------------------------------" << endl;
    
    // Column headers
    // cout << left << setw(10) << "Name"
    //      << setw(10) << "Math"
    //      << setw(10) << "Science"
    //      << setw(10) << "English" << endl;
    
    // cout << "------------------------------------------" << endl;

    // // Student data
    // cout << left << setw(10) << "Alice"
    //      << setw(10) << 90
    //      << setw(10) << 85
    //      << setw(10) << 88 << endl;

    // cout << left << setw(10) << "Bob"
    //      << setw(10) << 78
    //      << setw(10) << 92
    //      << setw(10) << 80 << endl;

    // cout << "------------------------------------------" << endl;
    // cout << setw(10) << "Name" << setw(10) << "Math" << setw(10) << "Science" << setw(10) << "English" << endl;
    // cout << setw(10) << "Alice" << setw(10) << "90" << setw(10) << "85" << setw(10) << "88" << endl;    
    // cout << "------------------------------------------" << endl;

    // Print();

    // vector<short>MyVector;
    // MyVector.push_back(1);
    // MyVector.push_back(2);
    // MyVector.push_back(3);
    // MyVector.push_back(4);
    // // MyVector.clear();
    // // MyVector.front();   
    // cout << MyVector.front();
    // cout << MyVector.back();
    // for(short &Number : MyVector)
    //     cout << Number << " ";
    // MyVector.clear();
    // cout << MyVector.empty();

    // short Number = 0;
    // short *Pointer = &Number;
    // *Pointer = 20;
    // cout << "Number value = " << Number << endl;
    // cout << "Number address = " << *Pointer << endl;
    // short Number = 0;
    // short &Address = Number;

    // cout << &Number << endl;
    // cout << &Address << endl;

    // Address = 1;
    // Number = 2;

    // cout << Number << endl;
    // cout << Address << endl;

    // short Number = 0;
    // short *Pointer = &Number;

    // cout << &Number << endl;
    // cout << Pointer << endl;

    // cout << Number << endl;
    // cout << *Pointer << endl;

    // *Pointer = 1;

    // cout << Number << endl;
    // cout << *Pointer << endl;

    // Number = 2; 

    // cout << Number << endl;
    // cout << *Pointer << endl;   

    // short Number = 0;
    // short &MyNumber = Number;

    // MyNumber = 1;



    // short *Pointer = &Number;
    // Pointer = &MyNumber;
    // cout << Pointer << endl;
    // cout << &MyNumber << endl;
    // cout << &Number << endl;

    // short Numbers[4] = {1, 2, 3, 4};
    // short *Pointer = Numbers;

    // for(short Loop = 0; Loop < 4; Loop++)
    // {
    //     PrintingText::PrintLines();
    //     PrintNumbers::printShortNumber(*(Pointer + Loop));
    // }

    
    // vector<int>v;
    // cout << "hi";



    // emp Employee;
    // Employee.Name = "mrh";
    // Employee.Salary = 100;

    // emp *Pointer = &Employee;

    // cout << &Employee << endl;
    // cout << Pointer << endl;
    // cout << Pointer->Name << endl;
    // cout << Pointer->Salary << endl;

    // void *Pointer;

    // int ShortNumber = 0;
    // float FloatNumber = 0;

    // Pointer = &ShortNumber;
    // Pointer = &FloatNumber;

    // cout << *(static_cast<float*>(Pointer)) << endl;

    // short *Number;
    // Number = new short;
    // *Number = 1;
    // cout << *Number << endl;
    // delete Number; 
    
    // short Number = 0;
    // cout << "How many numbers do you have: ";
    // cin >> Number;
    // short *YourArray;
    // YourArray = new short [Number];

    // for(short loop = 0; loop < Number; loop++)
    // {
    //     cout << "Enter element [" << (loop + 1) << "]: ";
    //     cin >> *(YourArray + loop);
    // }

    // cout << "\n\n";

    
    // for(short loop = 0; loop < Number; loop++)
    //     cout << "Index [" << (loop) << "] = " << *(YourArray + loop) << endl;   

    // vector<short>MyVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // short SizeOfMyVector = MyVector.size();
    // cout << "Your vector elements :";
    // cout << '[';
    // for(short loop = 0; loop < SizeOfMyVector; loop++)
    // {
    //     if(loop != (SizeOfMyVector - 1)) // make sure we are not at the last element, so that we do not need to make a space 
    //         cout << MyVector.at(loop) << " ";
    //     else 
    //         cout << MyVector.at(loop);
    // }
    // cout << ']';

    // vector<short>MyVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // vector<short>::iterator MyIt;
    // short SizeOfMyVector = MyVector.size();
    // cout << "Your vector elements :";
    // cout << '[';
    // for(MyIt = MyVector.begin(); MyIt != MyVector.end(); MyIt++)
    // {
    //     if(MyIt + 1 != MyVector.end()) // make sure we are not at the last element, so that we do not need to make a space 
    //         cout << *MyIt << " ";
    //     else 
    //         cout << *MyIt;
    // }
    // cout << ']';

    // short MyArrayOfNumbers[4] = {1, 2, 3, 4};
    // vector<short>MyNumbers = {1, 2, 3, 4};
    // try
    // {
    //     cout << MyNumbers.at(5);
    // }
    // catch(const std::exception& e)
    // {
    //     cout << "out of range\n";
    // }

    // string MyString = "mrh :)";
    // MyString.push_back(' ');
    // MyString.push_back(':');
    // MyString.push_back(')')

    // char MyCharacter = 'A';

    // cout << boolalpha;

    // cout << isdigit('A') << endl;
    // cout << isupper('A') << endl;
    // cout << islower('A') << endl;
    // cout << ispunct('A') << endl;

    // cout << true;

    // fstream MyFile;
    // MyFile.open("..\\Files\\Gread.txt", ios::out);
    // if(MyFile.is_open())
    // {
    //     short Number = ReadNumbers::ReadingShortNumber("how many numbers do you want to store: ");
    //     short *ArrayOfNumbers = new short[Number];
    //     for(short loop = 0; loop < Number; loop++)
    //     {
    //         cout << "Enter a number: ";
    //         cin >> *(ArrayOfNumbers + loop);
    //         MyFile << *(ArrayOfNumbers + loop) << endl;
    //     }
    //     delete [] ArrayOfNumbers;
    //     MyFile.close();
    // }

    
    // fstream MyFile;
    // MyFile.open("..\\Files\\Gread.txt", ios::in);
    // if(MyFile.is_open())
    // {
    //     string   Line = "";
    //     while(getline(MyFile, Line))
    //         cout << Line << endl;

    //     cout << endl << endl;
        
    //     cout << "*******************************\n";
    //     cout << "FILE HAS PRINTED SUCCESSFULLY !\n";
    //     cout << "*******************************\n";
    //     MyFile.close();
    // }

    
    // fstream MyFile;
    // vector<string>MyVector;
    
    // MyFile.open("..\\Files\\Gread.txt", ios::in);
    // if(MyFile.is_open())
    // {
    //     string Linecontent = "";
    //     while(getline(MyFile, Linecontent))
    //         MyVector.push_back(Linecontent);
    //     MyFile.close();
    // }

    // for(string &Line : MyVector)
    //     cout << Line << endl;
    // cout << "*******************************\n";
    // cout << "FILE HAS PRINTED SUCCESSFULLY !\n";
    // cout << "*******************************\n";
    // string FileName = "..\\Files\\Gread.txt\\.. ";
    // FilesOperations::PrintFileData(FileName);
    // cout << FileName;

    // vector<string>vFileContent;
    // FilesOperations::LoadDataFileToVector("Gread.txt", vFileContent);
    // for(string &Line : vFileContent)
    //     cout << Line << endl;   

    vector<string> MyVector;
    // MyVector.push_back("hi");
    // // MyVector.push_back("how");
    // // MyVector.push_back("are");
    // // MyVector.push_back("you");
    // // MyVector.push_back("my");
    // MyVector.push_back("friend");
    // MyVector.push_back("This is a new line");
    // FilesOperations::SaveVectorToFile(MyVector, "file.txt");
    // FilesOperations::PrintFileData("file.txt");
    // vector<string>MyVector;  
    // FilesOperations::LoadDataFromFileToVector("file.txt", MyVector);    
    // for(string &Line : MyVector)
    // //     cout << Line << endl;
    // MyVector.push_back("line 1");
    // MyVector.push_back("line 2");
    // MyVector.push_back("line 3");
    // MyVector.push_back("line 4");
    // FilesOperations::SaveVectorToFile(MyVector, "MyFile.txt");
    // FilesOperations::PrintFileContent("MyFile.txt");
    // FilesOperations::DeleteRecordFormFile("MyFile.txt", "mrh");
    // FilesOperations::UpdateRecordInFile("MyFile.txt", "mrn", "mrb");
    // time_t MyTime = time(0);
    // char* TimeAndDate = ctime(&MyTime);
    // cout << "Local time and date: " << TimeAndDate << endl;

    // tm* _TimeAndDate = gmtime(&MyTime);
    // TimeAndDate = asctime(_TimeAndDate);
    // cout << "Global time and date: " << TimeAndDate << endl;

    time_t TimeAndDate = time(0);
    tm* CurrentTimeAndDate = localtime(&TimeAndDate);
    cout << "Year: " << (CurrentTimeAndDate->tm_year + 1900 ) << endl;
    cout << "Month: " << CurrentTimeAndDate->tm_mon + 1 << endl;
    cout << "Day: " << CurrentTimeAndDate->tm_mday << endl;
    cout << "Hour: " << CurrentTimeAndDate->tm_hour << endl;
    cout << "Min: " << CurrentTimeAndDate->tm_min << endl;
    cout << "Sec: " << CurrentTimeAndDate->tm_sec << endl;
    cout << "Week Day (Days since sunday): " << CurrentTimeAndDate->tm_wday << endl;
    cout << "Year Day (Days since Jan 1st): " << CurrentTimeAndDate->tm_yday << endl;
    cout << "Hours daylight savings time: " << CurrentTimeAndDate->tm_isdst << endl;
    // FilesOperations::PrintFileContent("file.txt"); 


        // MyString.pop_back();
        // MyString.pop_back();
        // MyString.pop_back();
        // short Number = MyString.size();
        // for(short loop = 0; loop < Number; loop++)
        //     MyString.pop_back();
        // cout << MyString;
        // if(MyString.empty())
        //     cout << "Your string is empty :(\n";

    // if(MyString.find("mrh") == MyString.npos)
    //     cout << "your sting was not found :(";
    // else 
    //     cout << MyString.find("rh");
    
    
    



    // /*
    /*

   6 5
   5 4
   4 3
   3 2
   2 1
   1 0

   3 2
   2 1
   1 0

   8 7
   7 6 Practice
   6 5
   5 4
   4 3
   3 2
   2 1
   1 0
   */
    return 0;
}