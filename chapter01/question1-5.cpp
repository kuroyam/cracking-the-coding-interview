// 1.5 文字の連続する数を使って基本的な文字列圧縮を行うメソッドを実装してください。
// たとえばｍ「aabcccccaaa」は「a2b1c5a3」のようにしてください。
// もし、圧縮変換された文字列元の文字列よりも短くならなかった場合は、元の文字列を返してください。

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string compressString(string str)
{
    int oldLength = str.length();
    int newLength = oldLength;
    
    for (int i = 0; i < oldLength; i++) {
	char c = str.at(i); 
	int count = 1;
	
	for (int j = i + 1; j < oldLength; j++) {
	    if (c == str.at(j)) {
		count++;
	    } else {
		break;
	    }
	}

	newLength -= count - 2;
    }

    if (newLength >= oldLength) {
	return str;
    }

    for (int i = 0; i < oldLength; i++) {
	char c = str.at(i);
	int count = 1;

	for (int j = i + 1; j < oldLength; j++) {
	    if (c == str.at(j)) {
		count++;
	    } else {
		break;
	    }
	}

	string s(1, c);
        stringstream ss;
	ss << count;
	str.append(s);
	str.append(ss.str());

	i += count - 1;
    }

    str.erase(0, oldLength);

    return str;
}

int main(int argc, char* argv[])
{
    string str = compressString(argv[1]);
    cout << str << endl;
}
