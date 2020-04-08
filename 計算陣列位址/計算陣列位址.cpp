// 計算陣列位址.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char d[] = { "" };
	cout << "你要查詢的陣列地址為幾維：";
	cin >> d;
	if (d == "2" | d == "2d" | d == "二維")
        goto two;



two:
		int i, j, a1, a2, a3, s, q1, q2;
		int o1 = 0, o2 = 0;
		cout << "請輸入陣列列數：";
		cin >> i;
		cout << "請輸入陣列行數：";
		cin >> j;
		cout << "請輸入元素大小(sizeof)：";
		cin >> s;
		cout << "請輸入已知位址之列：";
		cin >> a1;
		cout << "請輸入已知位址之行：";
		cin >> a2;
		cout << "請輸入已知陣列之記憶體位置(16進位)：";
		cin >> hex >> a3;
		cout << "請輸入欲求位址之列：";
		cin >> dec >> q1;
		cout << "請輸入欲求位址之行：";
		cin >> q2;

		cout << "解讀題目...    ";system("pause");

		printf("\n有一浮點數陣列 float A[%d][%d]; (設 sizeof(float) = %d)\n\n若A[%d][%d]在記憶體中的位址為 %x"
			"，則元素A[%d][%d]的位址為：\n", i, j, s, a1, a2, a3, q1, q2, o1);

		o1 = o1 + ((q1 - a1)*j + (q2 - a2))*s + a3;

		printf("%x (16進制)\n\n", o1);



	system ("pause");		

    return 0;
}

