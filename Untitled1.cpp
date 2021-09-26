//#include"stafx.h"
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//c++ STL
	
	vector<int> A = {11,2,3,14};
	cout<<A[1]<<endl;
	
	sort(A.begin(). A.end());  //o(NlogN)
	//2,3,11,14
	
	bool present = binary_search(A.begin(), A.end(), 3); //true
	present = binary_search(A.begin(), A.end(), 4);  //falsee
	
	A.push_back(100);
	present = binary_search(A.begin(), A.end(), 100); //true
	//2,3,11,14,100
	
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(123);
	//2,,11,14,100,100,100,100,123
	
	return 0;
}
