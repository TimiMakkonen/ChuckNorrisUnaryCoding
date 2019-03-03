#include <iostream>
#include <string>
#include <bitset>
#include <vector>

using namespace std;




int main() {

	// input string
	string Message;
	getline(cin, Message);



	int MessageLength = Message.length();
	vector<int> AsciiMessage;



	// Coding Message into binary AsciiMessage
	for (int i = 0; i < MessageLength; i++) {
		bitset<7>AsciiChar(Message[i]);
		for (int j = 0; j < 7; j++) {
			AsciiMessage.push_back( AsciiChar[6 - j] );
		}
	}



	// Coding AsciiMessage into 0 & ' ' message
	for (int i = 0; i < 7 * MessageLength; i++) {

		// to print 0 or 00 number identifier
		cout << 0;
		if (AsciiMessage[i] == 0) cout << 0;
		cout << " 0";

		// to count and print consecutive numbers
		//NOTE: This block of code caused error: "Vector subscript out of range"
		//		Fixed by adding 2 if statements
		if (i + 1 < 7 * MessageLength) {
			while ( AsciiMessage[i] == AsciiMessage[i + 1] ) {
				cout << 0;
				i++;
				if (i + 1 >= 7 * MessageLength) break;
			}
		}
		

		// to skip the space at the end of coded message
		if (i != 7 * Message.length() - 1) cout << ' ';

	}

	cout << endl;

	system("pause");

	return 0;
}


