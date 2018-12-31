#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main{

	list<int> ilist = {1,2,3,4,5,6,7,8};
	deque<int> odd_t,event_t;

	for(auto iter = ilist.cbegin();iter!=ilist.cend();iter++)
	{
		if(*iter & 0x1)
			odd_t.push_back(*iter);
		else
			event_t.push_back(*iter);
	}
	cout<<"odd num:";
	for(auto iter = odd_t.cbegin();iter!=odd_t.cend();iter++)
		cout<<*iter<<" ";
	cout<<endl;

	return 0;

}
