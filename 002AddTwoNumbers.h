#pragma once


#include "stdafx.h"
#include "CommonFile.h"

ListNode* AddTwoNumbers(ListNode* l1, ListNode* l2)
{
	ListNode prel1(0);
	ListNode* curl1 = &prel1;
	curl1->next = l1;

	ListNode prel2(0);
	ListNode* curl2 = &prel2;
	curl2->next = l2;

	ListNode preR(0);
	ListNode* curR = &preR;

	int addOne = 0;

	while (curl1->next != NULL && curl2->next != NULL)
	{
		curl1 = curl1->next;
		curl2 = curl2->next;

		int sum = curl1->val + curl2->val + addOne;

		if (sum >= 10)
		{
			sum -= 10;
			addOne = 1;
		}
		else
			addOne = 0;

		curR->next = new ListNode(sum);
		curR = curR->next;
	}


	ListNode* remainL = curl1->next == NULL ? curl2 : curl1;

	while (addOne == 1 && remainL->next != NULL)
	{
		remainL = remainL->next;

		int sum = remainL->val + addOne;

		if (sum >= 10)
		{
			sum -= 10;
			addOne = 1;
		}
		else
			addOne = 0;

		curR->next = new ListNode(sum);
		curR = curR->next;
	}

	while (remainL->next != NULL)
	{

		remainL = remainL->next;
		curR->next = new ListNode(remainL->val);
		curR = curR->next;

	}

	return preR.next;

}


void test002(void)
{





}

