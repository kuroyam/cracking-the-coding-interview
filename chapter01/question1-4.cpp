// 1.4 文字列内に出現するすべての空白文字を"%20"で置き換えるメソッドを書いてください。
// ただし、文字列の後ろには新たに文字を追加するためのスペースが十分にある（バッファのサイズは気にしなくてもよい）ことと、
// その追加用スペースを除いた文字列の真の長さが与えられます。

#include <iostream>
#include <string.h>

char* replaceSpace (char* str, int oldLength)
{
    int newLength = oldLength;

    for (int i = 0; i < oldLength; i++) {
	if (str[i] == ' ') {
	    newLength += 2;
	}
    }
    
    str[newLength] = '\0';		// null文字忘れてた
    int  currentPoint = --newLength;    // デクリメント忘れてはまった。位置も注意。

    for (int i = oldLength - 1; i >= 0; i--) {
	if (str[i] == ' ') {
	    str[currentPoint--] = '0';
	    str[currentPoint--] = '2';
	    str[currentPoint--] = '%';
	} else {
	    str[currentPoint--] = str[i];
	}
    }

    return str;
}

int main (int argc, char* argv[])
{
    int length = strlen(argv[1]);
    char* str = replaceSpace(argv[1], length);
    std::cout << str << std::endl;
}
