// �p��}�C��}.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char d[] = { "" };
	cout << "�A�n�d�ߪ��}�C�a�}���X���G";
	cin >> d;
	if (d == "2" | d == "2d" | d == "�G��")
        goto two;



two:
		int i, j, a1, a2, a3, s, q1, q2;
		int o1 = 0, o2 = 0;
		cout << "�п�J�}�C�C�ơG";
		cin >> i;
		cout << "�п�J�}�C��ơG";
		cin >> j;
		cout << "�п�J�����j�p(sizeof)�G";
		cin >> s;
		cout << "�п�J�w����}���C�G";
		cin >> a1;
		cout << "�п�J�w����}����G";
		cin >> a2;
		cout << "�п�J�w���}�C���O�����m(16�i��)�G";
		cin >> hex >> a3;
		cout << "�п�J���D��}���C�G";
		cin >> dec >> q1;
		cout << "�п�J���D��}����G";
		cin >> q2;

		cout << "��Ū�D��...    ";system("pause");

		printf("\n���@�B�I�ư}�C float A[%d][%d]; (�] sizeof(float) = %d)\n\n�YA[%d][%d]�b�O���餤����}�� %x"
			"�A�h����A[%d][%d]����}���G\n", i, j, s, a1, a2, a3, q1, q2, o1);

		o1 = o1 + ((q1 - a1)*j + (q2 - a2))*s + a3;

		printf("%x (16�i��)\n\n", o1);



	system ("pause");		

    return 0;
}

