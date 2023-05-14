#ifndef _OPPONENTS_H_
#define _OPPONENTS_H_

#include <stdbool.h>
#include <alloca.h>
#include <string.h>
#include <curses.h>
#include <math.h>
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Enemy* creat_enemies(int*number_enemies, int max_x, int max_y, char **map);

void move_enemy(player player, Enemy enemy[], int num_enemies, char **map) ;



#endif