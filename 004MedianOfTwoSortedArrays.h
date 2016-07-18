#pragma once


#include "stdafx.h"
#include "CommonFile.h"


int start1, start2, end1, end2, index1, index2;

vector<int> nums1 = { 1, 2 };
vector<int> nums2 = { 3, 4 };

double findithNum(int index)
{




}





double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
	int tarS,tarE;

	int start1 = 0, start2 = 0;
	int end1 = nums1.size() - 1, end2 = nums2.size() - 1;





	int curWindow1 = end1 - start1;
	int curWindow2 = end2 - start2;

	if (curWindow1 > tarE)
	{
		end1 = start1 + tarE;
		curWindow1 = tarE;
	}

	if (curWindow2 > tarE)
	{
		end2 = start2 + tarE;
		curWindow2 = tarE;
	}
	
	if (curWindow1 < tarS || curWindow2 < tarS)
	{
		start2 = 



	}




	int pureSmall = 0, pureBig = 0;
	while (pureBig + pureSmall < totalSize)
	{




	}






	return 0.0;
}


void test004(void)
{


	cout << findMedianSortedArrays(nums1, nums2) << endl;

}

