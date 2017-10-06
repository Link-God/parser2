#include "stdafx.h"
#include"string"
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	float sum;
	int numb;
	string str;
	char op;
	getline(cin, str);
	istringstream stream(str);
	stream >> sum;
	bool del_0=false;
	while( stream >> op )
	{
		stream >> numb;
		switch (op)
		{
		case '+':
		{
			sum += numb;
			break;
		}
		case '-':
		{
			sum -= numb;
			break;
		}
		case'*':
		{
			sum *= numb;
			break;
		}
		case'/':
		{
			if (numb != 0)
			{
				sum = 1.*sum / numb;
				break;
			}
			else
			{
				cout << "inf";
				del_0 = true;
				break;
			}
		}
		default:
			del_0 = true;
			break;
		}

	}
	if(!del_0) cout << sum<< endl;
	system("pause");
    return 0;
}
