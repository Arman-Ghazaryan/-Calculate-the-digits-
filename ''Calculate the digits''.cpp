#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> a)
{
	vector<int> b(10);
	vector<int> c;
	int temp;
	for (int i = 0; i < a.size(); i++)
	{
		while (a[i] % 10 != 0)
		{
			b[a[i] % 10]++;
			a[i] /= 10;
		}
	}
	temp = b[0];
	for (int i = 1; i < 10; i++)
	{
		if (b[i] > temp)temp = b[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (b[i] == temp)
		{
			c.push_back(i);
			cout << i << " ";
		}
	}
	return c;
}

int main()
{
	vector<int> a = { 25,2,3,57,38,41 };
	solution(a);
}