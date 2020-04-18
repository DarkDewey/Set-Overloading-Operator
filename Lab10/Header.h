#pragma once
#include<iostream>
#include<set>
#include<algorithm>
#include<iterator>
#include<ostream>
#include<string>
using namespace std;

//Output the set contains: overloading operator <<
template<typename dataType>
ostream& operator<<(ostream& out, const set<dataType> a_set) {
	out << "{";  
	bool first = true;
	typename set<dataType>::iterator itr;

	for (itr = a_set.begin(); itr != a_set.end(); ++itr) { 
		if (first)      
			out << *itr;    
		else      
			out << ", " << *itr;    
		first = false; 
	}  
	return out << "}";

}

//Return the union of 2 sets: overloading operator +
template<typename dataType> 
set<dataType> operator+(const set<dataType> left, const set<dataType> right) {
	set<dataType> result;
	set_union(left.begin(), left.end(), right.begin(), right.end(), inserter(result, result.begin()));
	return result;
}

//Return the difference of 2 sets: overloading operator -
template<typename dataType>
set<dataType> operator-(const set<dataType> left, const set<dataType> right) {
	set<dataType> result;
	set_difference(left.begin(), left.end(), right.begin(), right.end(), inserter(result, result.begin()));
	return result;
}

//Return the intersection of 2 sets: overloading operator *
template<typename dataType>
set<dataType> operator*(const set<dataType> left, const set<dataType> right) {
	set<dataType> result;
	set_intersection(left.begin(), left.end(), right.begin(), right.end(), inserter(result, result.begin()));
	return result;
}