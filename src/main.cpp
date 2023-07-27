#include <iostream>
#include <algorithm>
#include <chrono>
#include <random>
#include <vector>

using namespace std;

bool simulateGame(const int players, const unsigned seed)
{
    vector<int> stack;
    for (int i = 2; i <= 99; i++)
    {
        stack.push_back(i);
    }
    shuffle(stack.begin(), stack.end(), default_random_engine(seed));
    for (int i = 0; i < 98; i++)
    {
        cout << stack[i] << " ";
    }
    cout << "\n";

    return true;
}

int main()
{
    const unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    int players;
    do 
    {
        cout << "Enter amount of players (greater than 0): ";
        cin >> players;
    } while (players <= 0);

    for (int i = 0; i < 5; i++)
    {
        simulateGame(players, seed);
    }

    return 0;
}