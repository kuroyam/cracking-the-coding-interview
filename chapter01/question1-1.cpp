// 1.1 ある文字列が、すべてユニークである（重複する文字がない）かどうかを判定するアルゴリズムを実装してください。
// また、それを実装するのに新たなデータ構造が使えない場合、どのようにすればよいですか？

#include <iostream>
#include <string.h>

bool checkCharIsUnique(const char* str) 
{
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
	for (int j = 0; j < length; j++) {
	    if (str[i] == str[j] && i != j) {
		return false;
	    }
	}
    }

    return true;
}

int main(int argc, char* argv[])
{
   const char* str = (checkCharIsUnique(argv[1])) ? "true" : "false";
   std::cout << str << std::endl;
}
