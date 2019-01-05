#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Sales_data{
	private:
		string bookNo;
		unsigned units_sold = 0;
		double sellingprice = 0.0;
		double saleprice = 0.0;
		double discount = 0.0;
	public:
		string isbn() const{return bookNo;}
		Sales_data& combine(const Sales_data &rhs){
			units_sold += rhs.units_sold;
			saleprice = (rhs.saleprice*rhs.units_sold + saleprice*units_sold)/(rhs.units_sold+units_sold);
			if(sellingprice != 0)
				discount = saleprice/sellingprice;

			return * this;
		}
};

int main(){

	vector<Sales_data> sds;
	Sales_data sd;
	//while(read(in,sd))
	//	sds.push_back(sd);

	sort(sds.begin(),sds.end(),[](const Sales_data &lhs,const Sales_data &rhs){return lhs.isbn()<rhs.isbn();});

	for(auto &s:sds)
		cout<<s.isbn();
	cout<<endl;
	return 0;
}
