#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector<string> svec;
	string word;
	auto iter = svec.begin();
	int i = 0;
        for(;(cin>>word)&&(i<5);i++){
		iter = svec.insert(iter,word);
		cout<<"before"<<*iter<<endl;
		//iter++;
		//cout<<"after"<<*iter<<endl;
	}
	for(auto iter=svec.cbegin();iter!=svec.cend();iter++)
		cout<<*iter<<endl;

	return 0;

}
