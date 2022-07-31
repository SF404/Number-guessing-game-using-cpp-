#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int num = rand() % 100 + 1;
    int score = 10;
    cout << "Guess the number inrange(1-100) you have ( 10 chance )\n";
    for (int i = 0; i < score; i++)
    {
        cout << "Enter your Guess: ";
        int n;
        cin >> n;
        if (n > num)
            cout << "Your input is large ( " << score - i - 1 << " chance left )\n";
        else if (n < num)
            cout << "Your input is small ( " << score - i - 1 << " chance left )\n";
        else
        {
            cout << "Congratulations!!! You got it. The number is '" << num << "'\nYour score : " << (score - i) * 10;
            return 0;
        }
    }
    cout << "Better luck next time. You loose the game. The number was: " << num << ". Your score: 0";

    return 0;
}