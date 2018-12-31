/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <list>

using namespace std;


int main()
{
    list<char*> slist = {"good","mx","change"};
    vector<string> svec;
    
    //svec=slist;
    svec.assign(slist.begin(),slist.end());
    
    return 0;
}
