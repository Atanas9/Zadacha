// Основен вход и изход
#include <iostream>
// За генериране на случайни числа
#include <cstdlib>
// Таймер
#include <ctime>
// Използва std namespace
using namespace std;

int main()
{
	// seed random number generator
    srand(time(0));
    // Деклариране на долна и горна граница
    int nai_malko, nai_golqmo;
    // Изписва Guess My Number Game
    cout << "Guess My Number Game\n\n";
    // Въвеждане на горна и долна граница
    cout << "Enter lower bound: ";
    cin >> nai_malko;
    cout << "\nEnter upper bound: ";
    cin >> nai_golqmo;
    cout << endl;

    // Случайно число от 1 до 100
    int num = rand() % (nai_golqmo - nai_malko) + nai_malko;
	// Декларира броя на познавания и това, което познава човека
    int guess = 0, broi_poznavaniq = 0;

    // Продължава да познава, докато не познае
    while (guess != num) {
    	// Увеличава броя на познаванията
        broi_poznavaniq++;
		// Въвежда guess
        cout << "Enter a guess between " << nai_malko << " and  "<< nai_golqmo << ": ";
        cin >> guess;
		// Ако се въведе 0 се спира играта
        if (guess == 0) {
            cout << "\nGame ended\n";
            break;
        }
        // Guess е по-голямо от num
        if (guess > num) {
            cout << "Too high!\n\n";
        }
        // Guess е по-малко от num
        else if (guess < num) {
                cout << "Too low!\n\n";
        }
        // Иначе guess = num
        else {
            cout << "\nCorrect! You got it in " << broi_poznavaniq << " guesses";
        }
    }

	// Излизане от програмата
    return 0;
}
