#ifndef GAME_H
#define GAME_H
#include "vector"
#include "string"
#include "configs.h"
#include "ship.h"
#include "player.h"
#include "queue"



//этот класс не может изменять корабли (помимо повреждений)
//он реализует битву через BattleDispetcher
//шкала боя определяется после расставления кораблей

using namespace std;

class Game {
    vector<string> vcombatScale = {"small","medium","large"};
    int combatScale = 0;
    Configs *currentConfig;
    vector<Ship*> shipsInGame = {};
    vector<Player*> playersInGame = {};
    queue<Ship*> turnOrder = {};


    void placeShips(Space_movement_state::point center, long double distance);
};

class BattleDispetcher : private Game {

};



#endif // GAME_H
