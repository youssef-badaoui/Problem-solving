#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() 
{
	int n;cin >> n;
	int nn = n;
	vector<int>tap(n);
	while(n-->0)
		cin >> tap[n];
	sort(tap.begin(), tap.end());
	for (int i = 0; i < nn; i++)
	{
		if(i == nn-1)
			cout << tap[i];
		else
			cout << tap[i] << " ";
	}
}
