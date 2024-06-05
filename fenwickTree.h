#pragma once
#include <iostream>
#include <vector>
class fenwickTree
{
public:
	std::vector<int> b;
	int n;
	fenwickTree(int n) {
		this->n = n;
	}
	int getSum(int i) {
		int res = 0;
		while (i >= 0) {
			res += b[i];
			i = previo(i);
		}
		return res;
	}
	int previo(int i) {
		return g(i) - 1;
	}
	int g(int i) {
		return i & (i + 1);
	}
	void increment(int i, int x)
	{
		while (i < n)
		{
			b[i] += x;
			i |= i + 1;
		}
	}
};

