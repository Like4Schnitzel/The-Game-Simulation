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

    //populate and shuffle draw pile
    vector<int> drawPile;
    for (int i = 2; i <= 99; i++)
    {
        drawPile.push_back(i);
    }
    random_shuffle(drawPile.begin(), drawPile.end());

    //populate discard piles
    //first two piles descend in number, last two ascend
    vector<vector<int>> discardPiles;
    for (int i = 0; i < 4; i++)
    {
        discardPiles.push_back(vector<int>());
        if (i < 2) discardPiles[i].push_back(100);
        else discardPiles[i].push_back(1);
    }

    //give initial cards to players
    vector<vector<int>> hands;
    for (int i = 0; i < players; i++)
    {
        hands.push_back(vector<int>());
        for (int j = 0; j < cardsInHand; j++)
        {
            hands[i].push_back(drawPile.back());
            drawPile.pop_back();
        }
    }

    //main game loop
    int currentPlayer = 0;
    while (drawPile.size() > 0)
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