#include <iostream>
using namespace std;

int main() 
{
	int n,m,a;
	cin >> n >> m >> a;
	if(a > m ||  a > n)
		cout << (n/ a+1) + (m/a+1) << endl;
	else
		cout << n/a + m/a<<	endl;
}
