#include "NumberOfStepsToZero.h"

int NumberOfStepsToZero::numberOfSteps(int num)
{
    int counter = 0;

    while (num != 0)
    {
        if (num % 2 == 0)
        {
            ++counter;
            num /= 2;
        }
        else
        {
            ++counter;
            num -= 1;
        }
    }

    return counter;
}
