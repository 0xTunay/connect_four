#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../include/playrs.h"

void name_playrs(info *Info_Playrsl)
{

    Info_Playrsl = malloc(sizeof(info));

    if(Info_Playrsl == NULL){
        perror("Memory error");
        exit(1);
    }

    puts("Enter first player");
    scanf("%31s",Info_Playrsl->first_player);

    puts("Enter second playr");
    scanf("%31s",Info_Playrsl->seconect_playr);

    choice_symbol(Info_Playrsl);
}

void choice_symbol(info *Info_Playrsl)
{
    int x;
    
    printf("%s\n %s\n",Info_Playrsl->first_player,Info_Playrsl->seconect_playr);

    puts("Who choice? 1 or 2");
    scanf("%d",&x);

    if(x == 1)
    {
        printf("Choice symbol, X or 0 %s",Info_Playrsl->first_player);
        scanf("%s",Info_Playrsl->symbol_for_first);

    if(strcmp(Info_Playrsl->first_player,"X")== 0)
        strcpy(Info_Playrsl->symbol_for_first,"0");
    } 
    else 
    {
        printf("Choice symbol, X or 0 %s",Info_Playrsl->seconect_playr);
        scanf("%s",Info_Playrsl->symbol_for_second);

    if(strcmp(Info_Playrsl->symbol_for_second,"X")== 0)
        strcpy(Info_Playrsl->symbol_for_first,"0");
    }
}