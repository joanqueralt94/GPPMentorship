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
#include "src/MaxConsecutiveOnes.h"
#include "src/FindNumbersEvenNumberDigits.h"
#include "src/SquaresSortedArray.h"
#include "src/DuplicateZeros.h"
#include "src/MergedSortedArray.h"
#include "src/RemoveElement.h"
#include "src/RemoveDuplicatesSortedArray.h"
#include "src/CheckIfExistNandDouble.h"

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

	Log::PrintBool(exercise.isValid(s3));
}

void MaximumDepthBinaryTreeExercise()
{
	MaximumDepthBinaryTree exercise;

	int value = 3;
	
	//TreeNode* rootInput(value);

	//exercise.maxDepth(rootInput);


}

void MaxConsecutiveOnesExercise()
{
	MaxConsecutiveOnes exercise;

	std::vector<int> nums = {1,1,0,1,1,1};
	std::vector<int> nums2 = {1,0,1,1,0,1};

	exercise.findMaxConsecutiveOnes(nums);
	exercise.findMaxConsecutiveOnes(nums2);
}

void FindNumbersEvenNumberDigitsExercise()
{
	FindNumbersEvenNumberDigits exercise;

	std::vector<int> nums = {12,345,2,6,7896};
	std::vector<int> nums2 = {555,901,482,1771};

	exercise.findNumbers(nums);
	exercise.findNumbers(nums2);
}

void SquaresSortedArrayExercise()
{
	SquaresSortedArray exercise;

	std::vector<int> nums = { -4,-1,0,3,10 };
	std::vector<int> nums2 = { -7,-3,2,3,11 };

	exercise.sortedSquares(nums);
	exercise.sortedSquares(nums2);

}

void DuplicateZerosExercise()
{
	DuplicateZeros exercise;

	std::vector<int> nums = {1,0,2,3,0,4,5,0};
	std::vector<int> nums2 = {1,2,3};

	exercise.duplicateZeros(nums);
	exercise.duplicateZeros(nums2);
}

void MergedSortedArrayExercise()
{
	MergedSortedArray exercise;

	std::vector<int> nums1 = {1,2,3,0,0,0};
	int m = 3;
	std::vector<int> nums2 = {2,5,6};
	int n = 3;

	exercise.merge(nums1, m, nums2, n);
}

void RemoveElementExercise()
{
	RemoveElement exercise;

	std::vector<int> nums = {3,2,2,3};
	std::vector<int> nums2 = {0,1,2,2,3,0,4,2};
	int val = 3;
	int val2 = 2;

	exercise.removeElement(nums,val);
	exercise.removeElement(nums2,val2);
}

void RemoveDuplicatesSortedArrayExercise()
{
	RemoveDuplicatesSortedArray exercise;


	std::vector<int> nums = {1,1,2};
	std::vector<int> nums2 = {0,0,1,1,1,2,2,3,3,4};

	exercise.removeDuplicates(nums);
	exercise.removeDuplicates(nums2);
}

void CheckIfExistNandDoubleExercise()
{
	CheckIfExistNandDouble exercise;

	std::vector<int> arr = { 10, 2, 5, 3 };
	std::vector<int> arr2 = { 3,1,7,11 };
	std::vector<int> arr3 = {-2, 0, 10, -19, 4, 6, -8};

	Log::PrintBool(exercise.checkIfExist(arr));
	Log::PrintBool(exercise.checkIfExist(arr2));
	Log::PrintBool(exercise.checkIfExist(arr3));
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
	LongestCommPrefixExercise();
	ValidParenthesesExercise();
	MaxConsecutiveOnesExercise();
	FindNumbersEvenNumberDigitsExercise();
	SquaresSortedArrayExercise();
	DuplicateZerosExercise();
	MergedSortedArrayExercise();
	RemoveElementExercise();
	RemoveDuplicatesSortedArrayExercise();*/

	CheckIfExistNandDoubleExercise();


	system("pause");
	return 0;
}
