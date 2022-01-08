#include <iostream>
using namespace std;

int main() {
	int i, diff, nr;

	i = 0;
	nr = 0;
	string name;
  	cin >> name; 
	diff = name[0] - 'a';
	if(diff > 13)
		diff = 26 - diff;
	nr += diff;
  while(name[i + 1])
  {
	  diff = name[i] - name[i + 1];
	  if(diff < 0)
		  diff *= -1;
	  if(diff > 13)
		  diff = 26 - diff;
	  nr += diff;
	  i++;
  }
  cout << nr;
}
