// string_switch_statement.cpp : Defines the entry point for the application.
//

#include "string_switch_statement.h"

using namespace std;

int main()
{
	string input = "";

	cout << "Have you ever flown in a UFO? Enter either \"yes\" or \"no\": ";
	cin >> input;

	map<string, int> input_encoding;
	input_encoding.insert(pair<string,int>("no", 0));
	input_encoding.insert(pair<string, int>("yes", 1));
	
	int input_value = -1;
	try {
		input_value = input_encoding.at(input);
	}
	catch (std::out_of_range& const oor)
	{
		SPDLOG_ERROR("input key \"{}\" not in hashmap - {}", input, oor.what());
	}

	switch (input_value) {
		case(0):
			cout << "you are a human." << endl;
			break;
		case(1):
			cout << "you are an alien from outer space." << endl;
			break;
		default:
			break;
	}
	return 0;
}
