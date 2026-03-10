//Jose Ayestas 
// 03/10/2026
/*This program will read a sequence of integers inputed by the user with valid inputs from 1 through 10 and the value 0 is used to
stop the input and the program will display the count, minimum, and maximum averages of the numbers entered*/


#include <iostream>
#include <iomanip>
using namespace std;

//The main function will collect the inputs and display the final values
int main()
{
    cout << "This program reads integers from 1 to 10 and calculates the count, minimum, maximum, and average. Enter 0 to quit." << endl << endl;
    //Name variabales 
    int num;
    int count = 0;
    int min = 11;
    int max = 0;
    int sum = 0;

    //asks the user to enter an integer
    cout << "Enter an integer (0 to quit): ";
    cin >> num;

    //Continues the loop until the user inputs a 0
    while (num != 0)
    {
        while (num < 0 || num > 10)
        {
            cout << "Invalid input. Enter a number from 0 to 10: ";
            cin >> num;
        }

        //Update the values 
        count++;
        sum += num;

        if (num < min)
            min = num;

        if (num > max)
            max = num;

        //Ask the user for another input 
        cout << "Enter another integer (0 to quit): ";
        cin >> num;
    }

    double average = 0;

    //Calculates the average if at least one number was entered  
    if (count > 0)
        average = (double)sum / count;

    cout << endl;
    cout << "Count Min Max Average" << endl;
    cout << count << "     " << min << "   " << max << "   ";
    cout << fixed << setprecision(2) << average << endl;

    return 0;
}