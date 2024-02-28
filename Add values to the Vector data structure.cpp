#include <iostream>
#include <vector>

using namespace std;

int ReadPositiveNumber(string message) {

    int EnteredNumber = 0;

    do {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid Number" << endl;
        }
        cout << message << endl;
        cin >> EnteredNumber;
    } while (EnteredNumber < 0 || cin.fail());

    return EnteredNumber;
}

bool RepeatProgrom(string message) {

    char EnteredValue = ' ';

    cout << message << endl;
    cin >> EnteredValue;

    return EnteredValue == 'Y' || EnteredValue == 'y';

}

void AddNumberToVector(vector <int>& vNumberList) {

    do
    {
        int Number = ReadPositiveNumber("Please enter a number\n");
        vNumberList.push_back(Number);

    } while (RepeatProgrom("Do you want to add more Numbers?\n y or n"));

}

void PrintVectorNumbers(vector <int>& vNumberList) {

    for (int& Number : vNumberList)
    {
        cout << Number << "  ";
    }
}

int main()
{
    vector <int> vNumberList = {};

    AddNumberToVector(vNumberList);
    PrintVectorNumbers(vNumberList);

    return 0;
}
