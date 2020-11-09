#include <iostream>

using namespace std;

const double PERCENT = 2.6;

int main(void){
    int currentWage = 0;
    int newWage = 0;
    int retroactiveWage = 0;
    char again;

    do{
        cout << "Welcome to the salary system!" << endl;
        cout << "-----------------------------" << endl << endl;
        cout << "What is the employees current salary? ";
        cin >> currentWage;

        newWage = int(currentWage + (currentWage * (PERCENT/100)) + 0.5);
        retroactiveWage = int(6 * (currentWage * (PERCENT/100)) + 0.5);

        cout << "=============================" << endl
             << "The current wage is: " << currentWage << endl
             << "The new wage is: " << newWage << endl
             << "The retroactive wage is: " << retroactiveWage << endl << endl;

        cout << "Would you like to calculate the wage for a new employee? (Y/N)";
        cin >> again;

    }while(again == 'y' || again == 'Y');

    return 0;
/* Den räknar ut hur mycket den retroaktiva lönen och vad den nya lönen blir utifrån lönen personen har just nu */
}