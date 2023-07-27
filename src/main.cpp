#include <iostream>
#include <algorithm>
#include <chrono>
#include <random>
#include <vector>

using namespace std;

bool simulateGame(const int players)
{
    vector<int> stack;
    for (int i = 2; i <= 99; i++)
    {
        stack.push_back(i);
    }
    random_shuffle(stack.begin(), stack.end());

    return true;
}

int main()
{
    int players;
    do 
    {
        cout << "Enter amount of players (greater than 0): ";
        cin >> players;
    } while (players <= 0);

    return 0;
}