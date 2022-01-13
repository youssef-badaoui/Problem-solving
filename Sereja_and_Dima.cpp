#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	vector<int>str(n);
	int start,end,serja,dima;
	serja = 0;
	dima = 0;
	for (int i = 0; i < n; i++)
		cin >> str[i];
	start = 0;
	end = n - 1;
	int ss = 0;
	while(start <= end)
	{
		serja += max(str[start],str[end]);

		if(max(str[start],str[end]) == str[end])
			end--;
		else
			start++;
		if(end < start)
			break;

		dima += max(str[start],str[end]);
		if(max(str[start],str[end]) == str[end])
			end--;
		else
			start++; 
	}
	cout << serja << " " << dima << endl;
}
