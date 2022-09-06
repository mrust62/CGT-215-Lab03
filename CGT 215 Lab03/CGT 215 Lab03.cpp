// CGT 215 Lab03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// function that will display the choices available
void startMenu(int& choice)
{
    cout << "welcome which operation would you like to use?" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    // prompts user for their choice of operation and recieves it
    cout << "\nYour Selection: ";
    cin >> choice;
}

//gets the values for the operation selected
void getValues(float& value1, float& value2)
{
    cout << "enter the first value: ";
    cin >> value1;
    cout << "enter the second value: ";
    cin >> value2;
}

// A function that adds value 1 and value 2 together
void addition(float value1, float value2)
{
    cout << value1 << " + " << value2 << " = " << value1 + value2;
}

// A function that subtracts value 2 from value 1
void subtraction(float value1, float value2)
{
    cout << value1 << " - " << value2 << " = " << value1 - value2;
}

// A function that mulitplies value 1 by value 2
void multiplication(float value1, float value2)
{
    cout << value1 << " * " << value2 << " = " << value1 * value2;
}

// A function that divides value 1 by value 2
void division(float value1, float value2)
{
    cout << value1 << " / " << value2 << " = " << value1 / value2;
}

int main()
{
    int choice;
    float value1;
    float value2;

    startMenu(choice);
    getValues(value1, value2);
    
    //if statements are to determine which operaction was choesen and runs the propper function

    //runs addition
    if (choice == 1)
    {
        addition(value1, value2);
    }
    //runs subtraction
    if (choice == 2)
    {
        subtraction(value1, value2);
    }
    //runs multiplication
    if (choice == 3)
    {
        multiplication(value1, value2);
    }
    //runs division
    if (choice == 4)
    {
        division(value1, value2);
    }

    return 0;
}


