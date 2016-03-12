#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	srand((int)time(NULL));
	int subject_number;    
	int a[100];   
	char b[100];    
	char c[100];   
	char d[100];    
	int  e[100];    
	char random_bracket;    
	int random_number = 0;    
	int i = 0;
	int operation_character = 0;    
	int fuhao = 0;    
	int j;
	int k;
	int l;
	int p;
	int min, Max;    
	int random_have;       
	char review_array;    
	char left;    
	char right;    
	char sign = 'a ';   
	bool result = 0;   
	bool need = 0;
	random_number = rand() % 10 + 2;    
	cout << "*************************************************" << endl;
	cout << "please input £¨min and max£©:";
	cin >> min >> Max;
	cout << "need multipaly an divition?[0(yes)/1(no)]";
	cin >> result;
	cout << "please input the number you need:";
	cin >> subject_number;
		if (0 == result)
		{
			for (j = 0; j < subject_number; j++)    //set the number of subject
			{
				for (i = 0; i < random_number; i++)
				{
					operation_character = rand() % (Max - min + 1) + min;
					a[i] = operation_character;
					fuhao = rand() % 4 + 1;
					switch (fuhao)
					{
					case 1:sign = '+'; break;
					case 2:sign = '-'; break;
					case 3:sign = '*'; break;
					case 4:sign = '/'; break;
					}
					b[i] = sign;
					e[4 * i] = ' ';
					e[4 * i + 1] = a[i];
					e[4 * i + 3] = b[i];
					e[4 * i + 2] = ' ';
				}
				random_have = rand() % 2 + 1;  //rand have or don't have brackets
				switch (random_have)
				{
				case 1:
					left = '(';
					right = ')';
					break;
				case 2:
					left = ' ';
					right = ' ';
					break;
				}

				for (i = 0; i < random_number; i++)
				{
					for (k = 0; k < (random_number - 1) / 2; k++)
					{
						e[4 * k] = left;
						if (left == '(')
						{
							e[4 * k + 10] = right;
						}
					}
					if ((e[4 * i] == left)&&(e[4 * i + 2] == right))
					{
						e[4 * i] = ' ';
						e[4 * i + 2] = ' ';
					}
					cout << (char)e[4 * i] << e[4 * i + 1] << (char)e[4 * i + 2] << (char)e[4 * i + 3];
				}

				cout << '\b' << "=" << endl;//use '\b'to eliminate the last symbol
			}
		}
		else
		{
			for (j = 0; j < subject_number; j++)    //set the number of subject
			{
				for (i = 0; i < random_number; i++)
				{
					operation_character = rand() % (Max - min + 1) + min;
					a[i] = operation_character;
					fuhao = rand() % 4 + 1;
					switch (fuhao)
					{
					case 1:sign = '+'; break;
					case 2:sign = '-'; break;
					case 3:sign = '*'; break;
					case 4:sign = '/'; break;
					}
					b[i] = sign;
					e[4 * i] = ' ';
					e[4 * i + 1] = a[i];
					e[4 * i + 3] = b[i];
					e[4 * i + 2] = ' ';
				}
				random_have = rand() % 2 + 1;  //rand have or don't have brackets
				switch (random_have)
				{
				case 1:
					left = '(';
					right = ')';
					break;
				case 2:
					left = ' ';
					right = ' ';
					break;
				}

				for (i = 0; i < random_number; i++)
				{
					for (k = 0; k < (random_number - 1) / 2; k++)
					{
						e[4 * k] = left;
						if (left == '(')
						{
							e[4 * k + 10] = right;
						}
					}
					if ((e[4 * i] == left) && (e[4 * i + 2] == right))
					{
						e[4 * i] = ' ';
						e[4 * i + 2] = ' ';
					}
					cout << (char)e[4 * i] << e[4 * i + 1] << (char)e[4 * i + 2] << (char)e[4 * i + 3];
				}

				cout << '\b' << "=" << endl;//use '\b'to eliminate the last symbol
			}
		}
}


