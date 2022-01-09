#include <iostream>
using namespace std;

int main() 
{
	int n,t,k,d;
	cin >> n >> t >> k >> d;
	while(n%k != 0)
		n++;
	if(((((n/k)*t)-(t+(d-t)))-t) > 0)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
}
