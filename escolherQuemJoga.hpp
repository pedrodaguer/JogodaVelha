#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

bool escolherQuemJoga()
{
    srand((unsigned)time(NULL));
    int random = rand();

    if (random % 2 == 0)
        return true;
    return false;
}