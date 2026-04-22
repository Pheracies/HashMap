// HashMap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include "HashMap.h"

using namespace std;




template<typename Value>
	Value& HashMap<Value>::operator[](string Index) {
		int idx = ConvertHash(Index);
		if (idx < 0) idx = 0;
		if ((size_t)idx >= Values.size()) Values.resize(idx + 1);
		return ((this->Values)[ConvertHash(Index)]);
	}
	template<typename Value>
	HashMap<Value>::HashMap() {
		this->Values = vector<Value>(1);
	}



inline int ConvertHash(string Index) {
	int HashAmnt = 0;
	for (char& c : Index) {
		HashAmnt += (int)(31 * c);
	}
	
	return HashAmnt;
}