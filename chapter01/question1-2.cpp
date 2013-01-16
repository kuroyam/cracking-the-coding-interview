// 1.2 CかC++で、void reverse(char* str)という'\0'終端の文字列を逆に並び替える関数を実装してください。

#include <iostream>
#include <string.h>
#include <vector>

void reverse(char* str)
{
    int length = strlen(str);

    for (int i = 0; i < length / 2; i++) {
	char tmp;
	int terget = length - 1 - i;
	
	tmp         = str[i];
	str[i]      = str[terget];
	str[terget] = tmp;
    }
}

int main(int argc, char* argv[])
{
    reverse(argv[1]);
    std::cout << argv[1] << std::endl;
}
