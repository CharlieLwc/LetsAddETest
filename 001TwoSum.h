#pragma once


#include "stdafx.h"
#include "CommonFile.h"

vector<int> twoSum(vector<int> &nums, int target)
{
	vector<int> result;


	unordered_map<int, int> numAndIndex;

	for (int i = 0; i < nums.size(); i++)
	{
		int curNum = nums[i];

		unordered_map<int, int>::iterator iter = numAndIndex.find(curNum);

		if (iter == numAndIndex.end())
		{
			numAndIndex[target - curNum] = i;
		}
		else
		{
			result.push_back(iter->second);
			result.push_back(i);
		}

		

	}


	return result;
}


void test001(void)
{
	vector<int> nums{-1, -4, 3, 7, 11, 15, -2};

	int target = 9;

	vector<int> result = twoSum(nums, target);

	if (result.empty())
		return;

	cout << result[0] << " " << result[1] << endl;
}

