#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");//делаем возможным вывод русского текста
    srand(time(NULL));//чтобы число всегда было рандомным
    int number = rand()%10+1;//интервал от 1 до 10 включительно
    int tries = 1;
    
    cout << "Введите сложность (easy, medium, hard): ";
    string difficulty;
    cin >> difficulty;
    int max_tries;
    if (difficulty == "easy") {
        max_tries = 10;
    }
    else if (difficulty == "medium") {
        max_tries = 5;
    }
    else {
        max_tries = 3;
    }
    int guessed = 11;
    cout << "Введите число: ";
    cin >> guessed;
    while (guessed != number) {
        ++tries;
        if (tries > max_tries) {
            break;
        }if (guessed == number + 1 || guessed == number - 1) {
            cout << "Жарко" << endl;
        }
        else {
            cout << "Холодно" << endl;
        }
        cout << "Введите ещё раз: ";
        cin >> guessed;
        
    }
    if (tries <= max_tries) {
        cout << "Браво, вы справились за " << tries << " попытки";
    }
    else {
        cout << "Увы,но ах...";
    }
}

