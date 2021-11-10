#ifndef GAME_H
#define GAME_H

#include "gba.h"

                    /* TODO: */
#define MAX_FLIES 6
#define LIVES 5
#define MAX_SCORE 6
            // Create any necessary structs //
struct fly {
    int row;
    int col;
    int rd;
    int cd;
};

struct fly_swatter {
	int row;
	int col;
	int size;
};

struct state {
	int nfly;
	int size;
	struct fly flies[MAX_FLIES];
	struct fly_swatter player;
} cs, ps;


struct fruit {
	int row;
	int col;
} fruit;


/*
* For example, for a Snake game, one could be:
*
* typedef struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* } Snake;
*
*
*
*
*
* Example of a struct to hold state machine data:
*
* typedef struct state {
*   int currentState;
*   int nextState;
* } State
*
*/

#endif
