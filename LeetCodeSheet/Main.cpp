#include "Utils/Log.h"
#include "src/Running1dArray.h"
#include "src/RichestCustomerWealth.h"
#include "src/FizzBuzz.h"
#include "src/NumberOfStepsToZero.h"
#include "src/MiddleLinkedList.h"
#include "src/RansomNote.h"
#include "src/TwoSumTarget.h"
#include "src/PalindromeNumber.h"
#include "src/RomanToInteger.h"
#include "src/LongestCommonPrefix.h"
#include "src/ValidParentheses.h"
#include "src/MaximumDepthBinaryTree.h"

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

	//Inputs
	std::vector<int> nums = { 2,7,11,15 };
	std::vector<int> nums2 = { 3, 2, 4};
	std::vector<int> nums3 = { 3, 3};
	int target = 9;
	int target2 = 6;
	int target3 = 6;

	Log::PrintIntVector(exercise.twoSum(nums2,target2));
}

void PalindromeExercise()
{
	PalindromeNumber exercise;

	int number = 1331;

	if (exercise.isPalindrome(number)) Log::PrintChar("Is a palindrome");
	else Log::PrintChar("Is not a palindrome");
}

void RomanToIntExercise()
{
	RomanToInteger exercise;

	std::string input = "III";
	std::string input2 = "LVIII";
	std::string input3 = "MCMXCIV";

	Log::PrintInt(exercise.romanToInt(input));
	Log::PrintInt(exercise.romanToInt(input2));
	Log::PrintInt(exercise.romanToInt(input3));
}

void LongestCommPrefixExercise()
{
	LongestCommonPrefix exercise;

	std::vector<std::string> inputStrings = {"flower","flow","flight"};
	std::vector<std::string> inputStrings2 = {"dog","racecar","car"};

	Log::PrintString(exercise.longestCommonPrefix(inputStrings));
	Log::PrintString(exercise.longestCommonPrefix(inputStrings2));


}

void ValidParenthesesExercise()
{
	ValidParentheses exercise;

	std::string s = { "()[]{}" };
	std::string s2 = { "()" };
	std::string s3 = { "(]" };
	std::string s4 = { "]{([})" };
	std::string s4 = { "([)]" };

	Log::PrintBool(exercise.isValid(s3));
}

void MaximumDepthBinaryTreeExercise()
{
	MaximumDepthBinaryTree exercise;

	int value = 3;
	
	//TreeNode* rootInput(value);

	//exercise.maxDepth(rootInput);


}

int main()
{
	/*RunningSumExercise();
	MaximumWealthExercise();
	FizzBuzzExercise();
	NumberOfStepsToZeroExercise();
	MiddleLinkedListExercise();
	RansomNoteExercise();
	TwoSumExercise();
	PalindromeExercise();
	RomanToIntExercise();
	LongestCommPrefixExercise();*/
	//ValidParenthesesExercise(); NOT FINISHED


	system("pause");
	return 0;
}
