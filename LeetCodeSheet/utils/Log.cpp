#include "Log.h"

namespace Log
{
	void PrintIntVector(const std::vector<int>& intVector)
	{
		/*for (int value : intVector)
		{
			std::cout << value << " " ;
		}*/
		for (int i = 0; i < intVector.size(); ++i)
		{
			if (i == (intVector.size() - 1))
			{
				std::cout << intVector[i] << std::endl;
			}
			else std::cout << intVector[i] << " ";
		}
	}

	void PrintIntVectorofVector(const std::vector<std::vector<int>>& intVectors)
	{
		for (int i = 0; i < intVectors.size(); i++)
		{
			for (int j = 0; j < intVectors.size() - 1; j++)
			{
				std::cout << intVectors[i][j] << " ";
			}
			
		}
	}

	void PrintStringVector(const std::vector<std::string>& stringVector)
	{
		for (int i = 0; i < stringVector.size(); ++i)
		{
			if (i == (stringVector.size() - 1))
			{
				std::cout << stringVector[i] << std::endl;
			}
			else std::cout << stringVector[i] << " ";
		}
	}

	void PrintInt(int value)
	{
		std::cout << value << std::endl;
	}

	void PrintChar(const char* message)
	{
		std::cout << message << std::endl;
	}

	void PrintGrid(const std::vector<std::vector<int>>& grid)
	{
		for (int i = 0; i < grid.size(); ++i)
		{
			for (int j = 0; j < grid[i].size(); ++j)
			{
				std::cout << grid[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}

	void PrintString(const std::string& word)
	{
		std::cout << word << std::endl;
	}

	void PrintBool(bool b)
	{
		if (b) std::cout << "True" << std::endl;
		else std::cout << "False" << std::endl;
	}

}