#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
	forward_list<int> iflist = {1,2,3,4,5,6,7,8};

	auto prev = iflist.before_begin();
	auto curr = iflist.begin();
	
	while(curr != iflist.end())
	{
		if(*curr & 1){//odd delete
			curr = iflist.erase_after(prev);
			cout<<"after:"<<*curr<<endl;
		}
		else{//set cur to prev
			prev = curr;
			curr++;
		}
	}
	for(curr = iflist.begin();curr!=iflist.end();curr++)
		cout<<*curr<<" ";
	cout<<endl;

}
