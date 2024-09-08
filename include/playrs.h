#ifndef PLAYERS_H
#define PLAYERS_H

#define MAX_NAME_SIZE_PLAYER 32
#define SIZE_CHOICE_SYMBOL 16

typedef struct 
{
    char first_player[MAX_NAME_SIZE_PLAYER];
    char seconect_playr[MAX_NAME_SIZE_PLAYER];
    char symbol_for_first[SIZE_CHOICE_SYMBOL];
    char symbol_for_second[SIZE_CHOICE_SYMBOL];

} info;

void name_playrs(info *Info_Playrsl);
void choice_symbol(info *Info_Playrsl);

#endif // PLAYERS_H