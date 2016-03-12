#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	int num,num1, num2,num3,num4, fuhao, i,a=0,b=0,c=0,d=0,e;
	srand((int)time(NULL));
	for (i = 0; i < 30; i++)
	{
		num1 = 1 + rand() % 100;
		num2 = 1 + rand() % 100;
		num3 = 1 + rand() % 100;
		num4 = 1 + rand() % 100;
		num = 1 + rand() % 2;
		if (num == 1)
		{
			fuhao = num1 % 4 + 1;
			cout << num1;
			switch (fuhao)
			{
			case 1:cout << "+"; break;
			case 2:cout << "-"; break;
			case 3:cout << "*"; break;
			case 4:cout << "/"; break;
			}
			cout << num2 << "=" << endl;
		}
		if(num==2)
		{
			a = num1;
			b = num2;
			if (num1 > num2)
			{
				e = a;
				a = b;
				b = e;
			}
			cout << "("<<a << "/" << b<<") ";
			fuhao = num1 % 4 + 1;
			switch (fuhao)
			{
			case 1:cout << "+"; break;
			case 2:cout << "-"; break;
			case 3:cout << "*"; break;
			case 4:cout << "/"; break;
			}
			c = num3;
			d = num4;
			if (num3 > num4)
			{
				e = c;
				c = d;
				d = e;
			}
			cout <<"("<< c << "/" << d<<")"<<"="<<endl;
		}
	}
}