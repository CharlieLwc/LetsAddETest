#pragma once


#include "stdafx.h"
#include "CommonFile.h"


int lengthOfLongestSubstring(string s)
{
	int length = s.length();

	if (length <= 1)
		return length;

	unordered_map<char, int> letterAndIndex;
	
	int start = 0;
	int longestSubLength = 0;

	for (int i = 0; i < length; i++)
	{
		char curLetter = s[i];

		unordered_map<char, int>::iterator iter;

		iter = letterAndIndex.find(curLetter);

		if (iter == letterAndIndex.end())
		{
			letterAndIndex[curLetter] = i;
		}
		else
		{
			int curSubLength = i - start;
			if (curSubLength > longestSubLength)
				longestSubLength = curSubLength;
			start = iter->second + 1;
			iter->second = i;
		}


	}

	return longestSubLength;


}




void test003(void)
{
	string strs[3] = { "abcabcbb", "bbbbb", "pwwkew" };
	int num = 3;

	for (int i = 0; i < num; i++)
		cout << lengthOfLongestSubstring(strs[i]) << " ";
	
	cout << endl;

}
