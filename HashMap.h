#pragma once

#include <string>
#include <vector>

using namespace std;


template<typename Value>
class HashMap
{
public:
	Value& operator[](string Index);
	HashMap();
private:
	vector<Value> Values;

};

int ConvertHash(string Index);

