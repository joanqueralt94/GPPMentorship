#include "QueueAndStackExercises.h"

std::vector<int> QueueAndStackExercises::dailyTemperatures(std::vector<int>& temperatures)
{
	int n = temperatures.size();
	std::vector<int> answer(n, 0);
	std::stack<int> st; // Store the indices of the temperatures

	for (int i = 0; i < n; i++) {
		// Check if the current temperature is warmer than the temperatures on the stack
		while (!st.empty() && temperatures[i] > temperatures[st.top()]) 
		{
			int prevIndex = st.top();
			st.pop();
			answer[prevIndex] = i - prevIndex;
		}

		// Push the current index onto the stack
		st.push(i);
	}

	return answer;
}
