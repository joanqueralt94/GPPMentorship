#include "RichestCustomerWealth.h"

int RichestCustomerWealth::maximumWealth(std::vector<std::vector<int>>& accounts)
{
    int tempInt = 0;
    int tempInt2 = 0;

    for (int i = 0; i < accounts.size(); ++i)
    {    
        for (int j = 0; j < accounts[i].size(); ++j)
        {
            tempInt += accounts[i][j];
        }
        if (tempInt > tempInt2)
        {
            tempInt2 = tempInt;
        }
        tempInt = 0;
    }

    if (tempInt > tempInt2)
    {
        return tempInt;
    }
    else
    {
        return tempInt2;
    }
}
