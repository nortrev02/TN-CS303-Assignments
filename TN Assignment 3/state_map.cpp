#include <iostream>
#include <map>
using namespace std;

int 

int main() {
	map<string, string > stateDataMap;
	string stateName;
	string capitalName;

	stateDataMap.insert(pair<string, string>("Nebraska", "Lincoln"));
	stateDataMap.insert(pair<string, string>("New York", "Albany"));
	stateDataMap.insert(pair<string, string>("Ohio", "Columbus"));
	stateDataMap.insert(pair<string, string>("California", "Sacramento"));
	stateDataMap.insert(pair<string, string>("Massachusets", "Boston"));
	stateDataMap.insert(pair<string, string>("Texas", "Austin"));
	//This is where q5 part 2 would be if I knew how to do it.
	stateDataMap.at("California") = "Los Angeles";
	cout << "Please insert state name now: " << endl;
	cin >> stateName;
	cout << stateDataMap.at(stateName);
}