#ifndef TRIPORGANIZER_FUNCTIONS_H
#define TRIPORGANIZER_FUNCTIONS_H

#include <stdio.h>
#include "../../model/list/list.h"

void execute(int option, List * l);
void readWholeFile(FILE * f, List * l);
int comparePrices(const void * a, const void * b);
void showAllDestinations(List *l);
void planTrip(List *l);
void readNewFile(List * l);

#endif