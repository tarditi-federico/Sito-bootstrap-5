#include <iostream>

using namespace std;

double num0, num1;
int x;

double somma(double a, double b);
double sott(double a, double b);
double molt(double a, double b);
double divis(double a, double b);
void menu();

int main()
{
    menu();
}

void menu()
{
    cout << "Inserisci il 1 numero\n";
    cin >> num0;
    cout << "Inserisci il 2 numero\n";
    cin >> num1;
    do
    {
        cout << "Scegli l'operazione da eseguire:\n1 -> Somma\n2 -> Sottrazione\n3 -> Moltiplicazione\n4 -> Divisone\n0 -> Termina programma\n";
        cin >> x;
        cout << "\n";
    } while (x < 0 || x > 4);
    switch (x)
    {
    case 1:
        cout << somma(num0, num1);
        cout << endl
             << endl;
        menu();
        break;
    case 2:
        cout << sott(num0, num1);
        cout << endl
             << endl;
        menu();
        break;
    case 3:
        cout << molt(num0, num1);
        cout << endl
             << endl;
        menu();
        break;
    case 4:
        cout << divis(num0, num1);
        cout << endl
             << endl;
        menu();
        break;
    case 0:
        cout << "HAI TERMINATO IL PROGRAMMA.\n";
        break;
    }
}

// somma-----------------------------
double somma(double a, double b)
{
    cout << "Somma: \t";
    return a + b;
}

// sottrazione-----------------------
double sott(double a, double b)
{
    if (a < b)
    {
        cout << "Differenza: \t";
        return a - b;
    }
    else
    {
        cout << "Differenza: \t";
        return b - a;
    }
}

// moltiplicazione------------------
double molt(double a, double b)
{
    cout << "Prodotto: \t";
    return a * b;
}

// divisione------------------------
double divis(double a, double b)
{
    if (b == 0)
    {
        cout << "Error\n";
        if (a == 0)
        {
            cout << "Quoziente\tindeterminato\n";
        }
    }
    return a / b;
}