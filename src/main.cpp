#include <iostream>
#include <algorithm>
#include <chrono>
#include <random>
#include <vector>

using namespace std;

bool simulateGame(const int players)
{
    int cardsInHand;
    if (players < 3) cardsInHand = 7;
    else cardsInHand = 6;

    //populate and shuffle stack
    vector<int> stack;
    for (int i = 2; i <= 99; i++)
    {
        stack.push_back(i);
    }
    random_shuffle(stack.begin(), stack.end());

    //give initial cards to players
    vector<vector<int>> hands;
    for (int i = 0; i < players; i++)
    {
        hands.push_back(vector<int>());
        for (int j = 0; j < cardsInHand; j++)
        {
            hands[i].push_back(stack.back());
            stack.pop_back();
        }
    }

    //main game loop
    int current_player = 0;
    while (stack.size() > 0)
    {
    }

    //win
    return true;
}

int main()
{
    int players;
    do 
    {
        cout << "Enter amount of players (1-5): ";
        cin >> players;
    } while (players < 1 || players > 5);

    simulateGame(players);

    return 0;
}