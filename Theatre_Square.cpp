#include <iostream>
using namespace std;

int main() 
{
	int n,m,a;
	cin >> n >> m >> a;
		if(n <= a &&  m <= a)
			cout << max(n,m)<< endl;

		else if(m % a != 0) && (n % a != 0))
			cout << (n / a+1) * (m/a+1) << endl;
		else if((m % a) != 0 && (n % a) == 0)
			cout << (m / a + 1) * (n / a) << endl;
		else if((n % a) != 0 && (m % a) == 0)
			cout << (n / a + 1) * (m / a) << endl;
		else if((m % a) == 0 && (n % a) == 0)
			cout << (m / a) * (m / a) << endl;	
}
