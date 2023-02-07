#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MIN_RANGE = 1, MAX_RANGE = 99, MIN_DIFFERENCE = 40, MAX_DIFFERENCE = 70;
const int MIN_GUESSES = 1, MAX_GUESSES = 10, MIN_GAMES = 1, MAX_GAMES = 4;
const int COLOR_COLD = 11, COLOR_WARM = 14, COLOR_HOT = 12;

void generateRange(int &low, int &high)
{
    int difference = high - low + 1;
    while (difference < MIN_DIFFERENCE || difference > MAX_DIFFERENCE)
    {
        low = MIN_RANGE + rand() % (MAX_RANGE - MIN_RANGE + 1 - (MAX_DIFFERENCE - MIN_DIFFERENCE + 1));
        high = low + MIN_DIFFERENCE + rand() % (MAX_DIFFERENCE - MIN_DIFFERENCE + 1);
        difference = high - low + 1;
    }
}

void generateNumber(int &number, int low, int high)
{
    number = low + rand() % (high - low + 1);
}

void displayRange(int low, int high)
{
    cout << "The number is between " << low << " and " << high << endl;
}

void displayResult(int result)
{
    if (result == COLOR_COLD)
    {
        cout << "\033[1;34mFrio\033[0m" << endl;
    }
    else if (result == COLOR_WARM)
    {
        cout << "\033[1;33mTibio\033[0m" << endl;
    }
    else if (result == COLOR_HOT)
    {
        cout << "\033[1;31mCaliente\033[0m" << endl;
    }
    else
    {
        cout << "\033[1;32mGanaste!\033[0m" << endl;
    }
}

void playGame(string name, int &score)
{
    int low = MIN_RANGE, high = MAX_RANGE, number, guess, attempts = 0;
    generateRange(low, high);
    generateNumber(number, low, high);

    while (attempts < MAX_GUESSES)
    {
        cout << name << ", adivina el numero: ";
        cin >> guess;
        if (guess < low || guess > high)
        {
            cout << "Suposición no valida, intentalo de nuevo." << endl;
            continue;
        }
        if (guess == number)
        {
            score += MAX_GUESSES - attempts;
            displayResult(0);
            break;
        }
        if (abs(guess - number) <= 5)
        {
            displayResult(COLOR_HOT);
        }
        else if (abs(guess - number) <= 10)
        {
            displayResult(COLOR_WARM);
        }
        else
        {
            displayResult(COLOR_COLD);
        }
        attempts++;
    }
}
int main(void)
{
    string name1, name2;
    int score1 = 0, score2 = 0;
    cout << "Ingresa el nombre del jugador 1: ";
    cin >> name1;
    cout << "Ingresa el nombre del jugador 2: ";
    cin >> name2;

    for (int i = 0; i < MAX_GAMES; i++)
    {
        if (i % 2 == 0)
        {
            cout << endl
                 << "Juego " << i + 1 << " para " << name1 << ":" << endl;
            playGame(name1, score1);
        }
        else
        {
            cout << endl
                 << "Juego " << i + 1 << " para " << name2 << ":" << endl;
            playGame(name2, score2);
        }
    }

    cout << endl
         << "Gracias por jugar, " << name1 << " y " << name2 << "!" << endl;
    cout << name1 << " obtuvo una puntuación final de " << score1 << "." << endl;
    cout << name2 << " obtuvo una puntuación final de " << score2 << "." << endl;
    return 0;
}
