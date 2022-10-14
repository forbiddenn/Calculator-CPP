#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float number1, number2, result;
    string select;

    system("clear");

    cout << "┌──────────────────────────────────────┐" << endl;
    cout << "│        [0]. Exit                     │" << endl;
    cout << "│        [1]. Plus                     │" << endl;
    cout << "│        [2]. Minus                    │" << endl;
    cout << "│        [3]. Multiplication           │" << endl;
    cout << "│        [4]. Divided                  │" << endl;
    cout << "│        [5]. To the power of          │" << endl;
    cout << "│        [6]. Remainder of division    │" << endl;
    cout << "└──────────────────────────────────────┘" << endl
         << endl;

    cout << "┌───── SELECT OPTIONS" << endl;
    cout << "└───> ";
    cin >> select;

    if (select == "0")
    {
        system("clear");
        cout << "Thank you for using my program." << endl;
        exit(true);
    }
    else if (select == "1")
    {
        system("clear");

        cout << "┌───── INPUT NUMBERS" << endl;
        cout << "└[1]──> ";
        cin >> number1;

        system("clear");

        cout << "┌───── INPUT NUMBERS" << endl;
        cout << "└[2]──> ";
        cin >> number2;

        result = number1 + number2;

        system("clear");

        cout << "┌───── RESULTS" << endl;
        cout << "└──> " << result << endl;
    }
    else if (select == "2")
    {
        system("clear");

        cout << "┌───── INPUT NUMBERS" << endl;
        cout << "└[1]──> ";
        cin >> number1;

        system("clear");

        cout << "┌───── INPUT NUMBERS" << endl;
        cout << "└[2]──> ";
        cin >> number2;

        result = number1 - number2;

        system("clear");

        cout << "┌───── RESULTS" << endl;
        cout << "└──> " << result << endl;
    }
    else if (select == "3")
    {
        system("clear");

        cout << "┌───── INPUT NUMBERS" << endl;
        cout << "└[1]──> ";
        cin >> number1;

        system("clear");

        cout << "┌───── INPUT NUMBERS" << endl;
        cout << "└[2]──> ";
        cin >> number2;

        result = number1 * number2;

        system("clear");

        cout << "┌───── RESULTS" << endl;
        cout << "└──> " << result << endl;
    }
    else if (select == "4")
    {
        system("clear");

        cout << "┌───── INPUT NUMBERS" << endl;
        cout << "└[1]──> ";
        cin >> number1;

        system("clear");

        cout << "┌───── INPUT NUMBERS" << endl;
        cout << "└[2]──> ";
        cin >> number2;

        result = number1 / number2;

        system("clear");

        cout << "┌───── RESULTS" << endl;
        cout << "└──> " << result << endl;
    }
    else if (select == "5")
    {
        system("clear");

        cout << "┌───── INPUT NUMBERS" << endl;
        cout << "└[1]──> ";
        cin >> number1;

        system("clear");

        cout << "┌───── INPUT NUMBERS" << endl;
        cout << "└[2]──> ";
        cin >> number2;

        result = pow(number1, number2);

        system("clear");

        cout << "┌───── RESULTS" << endl;
        cout << "└──> " << result << endl;
    }
    else if (select == "6")
    {
        system("clear");

        cout << "┌───── INPUT NUMBERS" << endl;
        cout << "└[1]──> ";
        cin >> number1;

        system("clear");

        cout << "┌───── INPUT NUMBERS" << endl;
        cout << "└[2]──> ";
        cin >> number2;

        result = (int)number1 % (int)number2;

        system("clear");

        cout << "┌───── RESULTS" << endl;
        cout << "└──> " << result << endl;
    }
    else
    {
        system("clear");
        cout << "Please enter the options correctly!" << endl;
    }
}
