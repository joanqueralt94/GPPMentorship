#include "LongestCommonPrefix.h"

std::string LongestCommonPrefix::longestCommonPrefix(std::vector<std::string>& strs)
{
	if (strs.empty()) {
		return "";
	}

	size_t minLen = strs[0].length();
	for (size_t i = 1; i < strs.size(); ++i) {
		minLen = std::min(minLen, strs[i].length());
	}

	for (size_t i = 0; i < minLen; ++i) {
		char c = strs[0][i];
		for (size_t j = 1; j < strs.size(); ++j) {
			if (strs[j][i] != c) {
				return strs[0].substr(0, i);
			}
		}
	}

	return strs[0].substr(0, minLen);

}