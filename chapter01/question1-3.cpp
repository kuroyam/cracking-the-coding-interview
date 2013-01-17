// 1.3 2つの文字列が与えられたとき、片方がもう片方の並び替えになっているかどうかを決定するメソッドを書いてください。

#include <iostream>
#include <string.h>

bool checkStringIsAnagram(const char* str1, const char* str2)
{
    int length1 = strlen(str1);
    int length2 = strlen(str2);

    if (length1 != length2) {
	return false;
    }

    for (int i = 0; i < length1; i++) {
	char c = str1[i];
	int counter1 = 0;
	int counter2 = 0;

	for (int j = 0; j < length1; j++) {
	    if (c == str1[j]) {
		counter1++;
	    }
	}
	for (int k = 0; k < length2; k++) {
	    if (c == str2[k]) {
		counter2++;
	    }
	}

	if (counter1 != counter2) {
	    return false;
	}
    }
    return true;
}

int main (int argc, char* argv[]) {
    const char* str = (checkStringIsAnagram(argv[1], argv[2])) ? "true" : "false";
    std::cout << str << std::endl;
}
