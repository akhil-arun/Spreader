#ifndef SPREADER_H
#define SPREADER_H

#include "spreaderRunner.h"
#include "Person2.h"

class Spreader
{
  Person2 * people2;
public:
  Spreader(const Person *people, int population);
  int simulate(int starterIDs[], int starterCount, int commandLineOption);
};

#endif /* SPREADER_H */
