#include "Utils/Log.h"
#include "Running1dArray.h"
#include "RichestCustomerWealth.h"
#include "FizzBuzz.h"
#include "NumberOfStepsToZero.h"
#include "MiddleLinkedList.h"
#include "RansomNote.h"
#include "TwoSumTarget.h"

void RunningSumExercise()
{
	Running1dArray exercise;

	std::vector<int> vectorInput = { 1, 2, 3, 4 };
	exercise.runningSum(vectorInput);
	Log::PrintIntVector(vectorInput);
}

void MaximumWealthExercise()
{
	RichestCustomerWealth exercise;

	std::vector<std::vector<int>> accounts = { {1,2,3},{3,2,1}};
	std::vector<std::vector<int>> accounts2 = { {1,5},{7,3},{3,5} };
	std::vector<std::vector<int>> accounts3 = { {2,8,7},{7,1,3},{1,9,5} };

	Log::PrintInt(exercise.maximumWealth(accounts));
	Log::PrintInt(exercise.maximumWealth(accounts2));
	Log::PrintInt(exercise.maximumWealth(accounts3));
}

void FizzBuzzExercise()
{
	FizzBuzz exercise;

	int value = 3;
	int value2 = 5;
	int value3 = 15;

	Log::PrintStringVector(exercise.fizzBuzz(value));
	Log::PrintStringVector(exercise.fizzBuzz(value2));
	Log::PrintStringVector(exercise.fizzBuzz(value3));
}

void NumberOfStepsToZeroExercise()
{
	NumberOfStepsToZero exercise;

	int num = 14;
	int num2 = 8;
	int num3 = 123;

	Log::PrintInt(exercise.numberOfSteps(num));
	Log::PrintInt(exercise.numberOfSteps(num2));
	Log::PrintInt(exercise.numberOfSteps(num3));

}

void MiddleLinkedListExercise()
{
	/*MiddleLinkedList exercise;


	ListNode* head;

	exercise.middleNode(head);*/
}

void RansomNoteExercise()
{
	RansomNote exercise;

	std::string string1 = "bg";
	std::string string2 = "efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj";

	if (exercise.canConstruct(string1, string2))
		std::cout << "Can construct" << std::endl;
	else std::cout << "Can't construct" << std::endl;
}

void TwoSumExercise()
{
	TwoSumTarget exercise;

	std::vector<int> nums = { 2,7,11,15 };
	int target = 9;

	exercise.twoSum(nums,target);
}

int main()
{
	/*RunningSumExercise();
	MaximumWealthExercise();
	FizzBuzzExercise();
	NumberOfStepsToZeroExercise();
	MiddleLinkedListExercise();
	RansomNoteExercise();*/
	TwoSumExercise();

	system("pause");
	return 0;
}
