#include <iostream>
using namespace std;

bool palinCheck(string inp, int i) {
	if (i > inp.size() / 2) {
		return true;
	}
	return inp[i] == inp[inp.size() - i - 1] && palinCheck(inp, i + 1);
}
// Function that uses recursion to check if the input string is a palindrome.

int main() {
	string str;
	cout << "Please enter string to check for Palindrome: ";
	cin >> str;
	if (palinCheck(str, 0)) {
		cout << "No";
	}
	else; {
		cout << "Yes";
	}
};
// Main function that gets string from user and returns if it is a palindrome or not.