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

    //populate and shuffle main stack
    vector<int> mainStack;
    for (int i = 2; i <= 99; i++)
    {
        mainStack.push_back(i);
    }
    random_shuffle(mainStack.begin(), mainStack.end());

    //populate side stacks
    //first two stacks descend in number, last two ascend
    vector<vector<int>> sideStacks;
    for (int i = 0; i < 4; i++)
    {
        sideStacks.push_back(vector<int>());
        if (i < 2) sideStacks[i].push_back(100);
        else sideStacks[i].push_back(1);
    }

    //give initial cards to players
    vector<vector<int>> hands;
    for (int i = 0; i < players; i++)
    {
        hands.push_back(vector<int>());
        for (int j = 0; j < cardsInHand; j++)
        {
            hands[i].push_back(mainStack.back());
            mainStack.pop_back();
        }
    }

    //main game loop
    int currentPlayer = 0;
    while (mainStack.size() > 0)
    {
        currentPlayer = (currentPlayer + 1) % players;


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