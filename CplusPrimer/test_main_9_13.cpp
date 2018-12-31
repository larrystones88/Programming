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
    list<int> ilist = {1,2,3,4,5,6,7};
    vector<int> ivec = {1,2,3,4,5,6,7};
    vector<double> dvec(ilist.begin(),ilist.end());
    vector<double> dvec1(ivec.begin(),ivec.end());
    
    //vector<double> ivec(ilist);//list should not in vector
    //list<double> ilist(ivec);//vector should not in list
    
    cout<<dvec.capacity()<<" "<<dvec.size()<<" "
        <<dvec[0]<<" "<<dvec[dvec.size()-1]<<endl;
        
    cout<<dvec1.capacity()<<" "<<dvec1.size()<<" "
        <<dvec1[0]<<" "<<dvec1[dvec1.size()-1]<<endl;

    return 0;
}
