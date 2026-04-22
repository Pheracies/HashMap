// HashMap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include "HashMap.cpp"

int main()
{
    std::cout << "Hello World!\n";
	HashMap<int> map = HashMap<int>();

	map["Hello"] = 5;
	map["Lol"] = 10;
	map["Hello2"] = 109;
	cout << "Thing" << endl;
	cout << map["Lol"] << endl;

	cout << map["Hello"] << endl;
	cout << map["Hello2"] << endl;
    return 0;
}
