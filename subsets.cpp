//Generating Subsets using Binary Counting
//#include<bits/stdc++.h> 
#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;

int main(){
	
	string strInput;
	int intIndex = 0;
	cout << "hello world, enter any string of characters with out repeating any character and no spaces(eg. ABC): ";
	cin >> strInput;
	//const int strSIZE = strInput.length();
	char charSet[strInput.length()];
	for(auto c: strInput)
	{
		charSet[intIndex] = c;
		//cout << c << endl;
		intIndex++;
	}

	//Generating Subsets
	long intSubsets = 1 << strInput.length();
	//cout << intSubsets;
	for(int i = 1; i < intSubsets; i++)
	{
		//set<char> subsets; Set is ordered
		unordered_set<char> subsets;	//Because we need distinct elements and no order required
		for(int j = 0; j < strInput.length(); j++)
		{
			//cout << "Set ";
			if((i & (1 << j)) > 0)
			{
				subsets.insert(charSet[j]);
				//cout << charSet[j] << endl;
			}
		}
		//cout << "end of that set" << endl;	//Print out each value in that subset
		cout << "{" ;
		for(auto i : subsets)
		{
			cout << i ;
		}
		cout << "}" << endl;

	}
	return 0;
}
