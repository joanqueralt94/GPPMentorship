#include "RansomNote.h"

bool RansomNote::canConstruct(std::string ransomNote, std::string magazine)
{
	int i = 0; 
	int j = 0;
	int count = 0;
	std::sort(ransomNote.begin(), ransomNote.end());
	std::sort(magazine.begin(), magazine.end());

	while (j < magazine.size())
	{
		if (ransomNote[i] == magazine[j])
		{
			count++;
			i++;
			j++;
		}
		else j++;
	}

	return count == ransomNote.size();
}
