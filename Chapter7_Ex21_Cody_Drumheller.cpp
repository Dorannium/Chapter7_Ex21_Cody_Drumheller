/*
Title: Chapter 7 Exercise 21 - 2D Operations
File Name: Chapter7_Ex21_Cody_Drumheller
Programmer: Cody Drumheller
Date:20241213
Requirements:
Write a program that creates a two-dimensional array initialized with test data. Use any data type you wish.
*/

#include <iostream>
#include <iomanip>
using namespace std;

const int ROWS = 3;
const int COLS = 4;


int getTotal(const int array[ROWS][COLS]);
double getAverage(const int array[ROWS][COLS]);
int getRowTotal(const int array[ROWS][COLS], int row);
int getColumnTotal(const int array[ROWS][COLS], int col);
int getHighestInRow(const int array[ROWS][COLS], int row);
int getLowestInRow(const int array[ROWS][COLS], int row);

void displayMenu();

int main() {
    int array[ROWS][COLS] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };

    int choice;
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Total of all values: " << getTotal(array) << endl;
            break;
        case 2:
            cout << "Average of all values: " << getAverage(array) << endl;
            break;
        case 3: {
            int row;
            cout << "Enter row number (0-" << ROWS - 1 << "): ";
            cin >> row;
            if (row >= 0 && row < ROWS) {
                cout << "Total of row " << row << ": " << getRowTotal(array, row) << endl;
            }
            else {
                cout << "Invalid row number." << endl;
            }
            break;
        }
        case 4: {
            int col;
            cout << "Enter column number (0-" << COLS - 1 << "): ";
            cin >> col;
            if (col >= 0 && col < COLS) {
                cout << "Total of column " << col << ": " << getColumnTotal(array, col) << endl;
            }
            else {
                cout << "Invalid column number." << endl;
            }
            break;
        }
        case 5: {
            int row;
            cout << "Enter row number (0-" << ROWS - 1 << "): ";
            cin >> row;
            if (row >= 0 && row < ROWS) {
                cout << "Highest value in row " << row << ": " << getHighestInRow(array, row) << endl;
            }
            else {
                cout << "Invalid row number." << endl;
            }
            break;
        }
        case 6: {
            int row;
            cout << "Enter row number (0-" << ROWS - 1 << "): ";
            cin >> row;
            if (row >= 0 && row < ROWS) {
                cout << "Lowest value in row " << row << ": " << getLowestInRow(array, row) << endl;
            }
            else {
                cout << "Invalid row number." << endl;
            }
            break;
        }
        case 7:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 7);

    return 0;
}


void displayMenu() {
    cout << "\nMenu:\n";
    cout << "1. Get total of all values\n";
    cout << "2. Get average of all values\n";
    cout << "3. Get total of a specific row\n";
    cout << "4. Get total of a specific column\n";
    cout << "5. Get highest value in a specific row\n";
    cout << "6. Get lowest value in a specific row\n";
    cout << "7. Exit\n";
    cout << "Enter your choice: ";
}

int getTotal(const int array[ROWS][COLS]) {
    int total = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            total += array[i][j];
        }
    }
    return total;
}

double getAverage(const int array[ROWS][COLS]) {
    int total = getTotal(array);
    return static_cast<double>(total) / (ROWS * COLS);
}

int getRowTotal(const int array[ROWS][COLS], int row) {
    int total = 0;
    for (int j = 0; j < COLS; j++) {
        total += array[row][j];
    }
    return total;
}

int getColumnTotal(const int array[ROWS][COLS], int col) {
    int total = 0;
    for (int i = 0; i < ROWS; i++) {
        total += array[i][col];
    }
    return total;
}

int getHighestInRow(const int array[ROWS][COLS], int row) {
    int highest = array[row][0];
    for (int j = 1; j < COLS; j++) {
        if (array[row][j] > highest) {
            highest = array[row][j];
        }
    }
    return highest;
}

int getLowestInRow(const int array[ROWS][COLS], int row) {
    int lowest = array[row][0];
    for (int j = 1; j < COLS; j++) {
        if (array[row][j] < lowest) {
            lowest = array[row][j];
        }
    }
    return lowest;
}













