#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

void add_family(map<string,vector<string>> &families, const string &family)
{
	if(families.find(family)==families.end())
		families[family] = vector<string>();
}

void add_child(map<string,vector<string>> &families, const string &family, const string &child)
{
	families[family].push_back(child);//key->val
}

int main()
{
	map<string, vector<string>> families;
	add_family(families,"zhang");
	add_child(families,"zhang","ming");
	add_child(families,"zhang","xin");
	add_family(families,"wang");


	for(auto f:families){
		cout<<f.first<<"'s child:";
		for(auto c:f.second)
			cout<<c<<" ";
		cout<<endl;

	}

	return 0;
}
