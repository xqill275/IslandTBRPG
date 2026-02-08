#include <iosfwd>
//
// Created by olive on 08/02/2026.
//
#include <string>
#ifndef PLAYER_H
#define PLAYER_H



class player {
public:
    explicit player(std::string Name, int hp, int attackStat, int defenceStat, int magicStat );
    std::string Name;
    int hp;
    int attackStat;
    int defenceStat;
    int magicStat;
};



#endif //PLAYER_H
