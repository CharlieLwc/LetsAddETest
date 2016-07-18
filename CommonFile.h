#pragma once


#include "stdafx.h"


#include <vector>
#include <map>
#include <unordered_map>
#include <iostream>

using namespace std;

struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int x) :val(x), next(NULL){}

};