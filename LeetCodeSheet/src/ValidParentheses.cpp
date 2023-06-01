#include "ValidParentheses.h"

bool ValidParentheses::isValid(std::string s)
{
	bool valid = true;

	for (size_t i = 0; i < s.size(); ++i)
	{
		if (s[i] == '(')
		{
			if (s[i + 1] == ')') continue;
			else
			{
				valid = false;
				break;
			}
		}
		else if (s[i] == '[')
		{
			if (s[i + 1] == ']') continue;
			else
			{
				valid = false;
				break;
			}
		}
		else if (s[i] == '{')
		{
			if (s[i + 1] == '}') continue;
			else
			{
				valid = false;
				break;
			}
		}
	}

	return valid;
}
