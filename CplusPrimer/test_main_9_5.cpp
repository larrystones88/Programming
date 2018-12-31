/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

vector<int>::iterator search_vec(vector<int>::iterator beg,vector<int>::iterator end,int val)
{
    for(;beg != end;beg++)
        if(*beg == val)
            return beg;
    return end;
}

int main()
{
    vector<int> ilist = {1,2,3,4,5,6,7};
    cout<<*search_vec(ilist.begin(),ilist.end(),3)<<endl;
    cout<<search_vec(ilist.begin(),ilist.end(),9)-ilist.begin()<<endl;

    return 0;
}
