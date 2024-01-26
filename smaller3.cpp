/*
Author: Zuhayer Tashin
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1B

Write a program smaller3.cpp that asks the user to input three integer numbers, and prints out the smallest of the three.
*/


#include <iostream>
using namespace std;

int main(){
    int num_1;  // Declares the first number variable
    cout << "Enter the first Number: ";
    cin >> num_1; // user input for first number variable

    int num_2; // Declares the second number variable
    cout << "Enter the second Number: ";
    cin >> num_2; // user input for second number variable

    int num_3; // Declares the third number variable
    cout << "Enter the third Number: ";
    cin >> num_3; // user input for third number variable

    cout << "The smaller of the three is " << min(min(num_1, num_2), num_3) << endl; // prints out the smaller of the three numbers

    return 0;
}