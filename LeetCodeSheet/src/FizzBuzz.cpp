#include "FizzBuzz.h"

std::vector<std::string> FizzBuzz::fizzBuzz(int n)
{
    std::vector<std::string> answer;
    answer.resize(n);
    
    int tempInt = 1;

    for (int i = 0; i < answer.size(); ++i)
    {
        if ((tempInt % 3 == 0) && (tempInt % 5 == 0)) answer[i] = "FizzBuzz";
        else if (tempInt % 3 == 0) answer[i] = "Fizz";
        else if (tempInt % 5 == 0) answer[i] = "Buzz";
        else
        {
            answer[i] = std::to_string(tempInt);
        }

        ++tempInt;
    }
    return answer;
}
