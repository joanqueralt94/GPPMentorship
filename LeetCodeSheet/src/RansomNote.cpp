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

//bool RansomNote::canConstruct2(std::string ransomNote, std::string magazine)
//{
//	std::unordered_map<std::string, int> dictionary;
//
//	for (int i = 0; i < magazine.size(); ++i)
//	{
//		const char& c = magazine[i];
//
//
//		std::unordered_map<std::string, int>::iterator it = dictionary.find(c);
//		if (it == dictionary.end())
//		{
//			dictionary.emplace(std::make_pair<std::string, int>(c, 1));
//			continue;
//		}
//
//		int& value = (*it).second;
//		++value;
//	}
//
//}
