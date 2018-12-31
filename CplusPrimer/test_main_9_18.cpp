#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<string> sd;
	int i = 0;
	string word;
	while((cin>>word)&&(i<10))
	{
		i++;
		sd.push_back(word);
		sd.push_front(word);
	}
	for(auto si = sd.cbegin();si != sd.cend();si++)
		cout<<*si<<endl;

	return 0;
}
