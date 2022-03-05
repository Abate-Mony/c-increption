#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int Base2_to_10(string name);//prototype

int main()
{
	string Code;//string that holds the code.
	getline(cin, Code);
	int val, code_S = Code.size(), n = 0, stop = 0, result, count = code_S / 8;
	while (code_S % 8 != 0)
	{
		cout << "********************************************************\n\tSorry there is an error in the transmission:\n\v\t Please verify and try again \n";
		val = 8 - (code_S % 8);
		++stop;
		cout << "\n theres is lost of : " << val << " in the transmission\n*********************************************************** .." << endl;
		if (stop == 3)
		{
			cout<<right<<"\n too many attemp--> aborting !!!"<<endl;
			break;
		}
		getline(cin, Code);
		
	}//loop validator
	code_S = Code.size();//resize the loop

	char encode[count];//pos cuecker
	for (int i = 0; i < count; ++i)
	{
		string code = Code, Eight(code, n, 8);
		result = Base2_to_10(Eight);

		if (result == 32)
		{
			encode[i] = ' ';
		}
		if (result == 33)
		{
			encode[i] = '!';
		}
		if (result == 34)
		{
			encode[i] = '"';
		}
		if (result == 35)
		{
			encode[i] = '#';
		}
		if (result == 36)
		{
			encode[i] = '$';
		}
		if (result == 37)
		{
			encode[i] = '%';
		}
		if (result == 38)
		{
			encode[i] = '&';
		}
		if (result == 39)
		{
			encode[i] = '\'';
		}
		if (result == 40)
		{
			encode[i] = '(';
		}
		if (result == 41)
		{
			encode[i] = ')';
		}
		if (result == 42)
		{
			encode[i] = '*';
		}
		if (result == 43)
		{
			encode[i] = '+';
		}
		if (result == 44)
		{
			encode[i] = ',';
		}
		if (result == 45)
		{
			encode[i] = '-';
		}
		if (result == 46)
		{
			encode[i] = '.';
		}
		if (result == 47)
		{
			encode[i] = '/';
		}
		if (result == 48)
		{
			encode[i] = '0';
		}
		if (result == 49)
		{
			encode[i] = '1';
		}
		if (result == 50)
		{
			encode[i] = '2';
		}
		if (result == 51)
		{
			encode[i] = '3';
		}
		if (result == 52)
		{
			encode[i] = '4';
		}
		if (result == 53)
		{
			encode[i] = '5';
		}
		if (result == 54)
		{
			encode[i] = '6';
		}
		if (result == 55)
		{
			encode[i] = '7';
		}
		if (result == 56)
		{
			encode[i] = '8';
		}
		if (result == 57)
		{
			encode[i] = '9';
		}
		if (result == 58)
		{
			encode[i] = ':';
		}
		if (result == 59)
		{
			encode[i] = ';';
		}
		if (result == 60)
		{
			encode[i] = '<';
		}
		if (result == 61)
		{
			encode[i] = '=';
		}
		if (result == 62)
		{
			encode[i] = '>';
		}
		if (result == 63)
		{
			encode[i] = '?';
		}
		if (result == 64)
		{
			encode[i] = '@';
		}
		if (result == 65)
		{
			encode[i] = 'A';
		}
		if (result == 66)
		{
			encode[i] = 'B';
		}
		if (result == 67)
		{
			encode[i] = 'C';
		}
		if (result == 68)
		{
			encode[i] = 'D';
		}
		if (result == 69)
		{
			encode[i] = 'E';
		}
		if (result == 70)
		{
			encode[i] = 'F';
		}
		if (result == 71)
		{
			encode[i] = 'G';
		}
		if (result == 72)
		{
			encode[i] = 'H';
		}
		if (result == 73)
		{
			encode[i] = 'I';
		}
		if (result == 74)
		{
			encode[i] = 'J';
		}
		if (result == 75)
		{
			encode[i] = 'K';
		}
		if (result == 76)
		{
			encode[i] = 'L';
		}
		if (result == 77)
		{
			encode[i] = 'M';
		}
		if (result == 78)
		{
			encode[i] = 'N';
		}
		if (result == 79)
		{
			encode[i] = 'O';
		}
		if (result == 80)
		{
			encode[i] = 'P';
		}
		if (result == 81)
		{
			encode[i] = 'Q';
		}
		if (result == 82)
		{
			encode[i] = 'R';
		}
		if (result == 83)
		{
			encode[i] = 'S';
		}
		if (result == 84)
		{
			encode[i] = 'T';
		}
		if (result == 85)
		{
			encode[i] = 'U';
		}
		if (result == 86)
		{
			encode[i] = 'V';
		}
		if (result == 87)
		{
			encode[i] = 'W';
		}
		if (result == 88)
		{
			encode[i] = 'X';
		}
		if (result == 89)
		{
			encode[i] = 'Y';
		}
		if (result == 90)
		{
			encode[i] = 'Z';
		}
		if (result == 91)
		{
			encode[i] = '[';
		}
		if (result == 92)
		{
			encode[i] = '\\';
		}
		if (result == 93)
		{
			encode[i] = ']';
		}
		if (result == 94)
		{
			encode[i] = '^';
		}
		if (result == 95)
		{
			encode[i] = '_';
		}
		if (result == 96)
		{
			encode[i] = '`';
		}
		if (result == 97)
		{
			encode[i] = (char)(97);
		}
		if (result == 98)
		{
			encode[i] = 'b';
		}
		if (result == 99)
		{
			encode[i] = 'c';
		}
		if (result == 100)
		{
			encode[i] = 'd';
		}
		if (result == 101)
		{
			encode[i] = 'e';
		}
		if (result == 102)
		{
			encode[i] = 'f';
		}
		if (result == 103)
		{
			encode[i] = 'g';
		}
		if (result == 104)
		{
			encode[i] = 'h';
		}
		if (result == 105)
		{
			encode[i] = 'i';
		}
		if (result == 106)
		{
			encode[i] = 'j';
		}
		if (result == 107)
		{
			encode[i] = 'k';
		}
		if (result == 108)
		{
			encode[i] = 'l';
		}
		if (result == 109)
		{
			encode[i] = 'm';
		}
		if (result == 110)
		{
			encode[i] = 'n';
		}
		if (result == 111)
		{
			encode[i] = 'o';
		}
		if (result == 112)
		{
			encode[i] = 'p';
		}
		if (result == 113)
		{
			encode[i] = 'q';
		}
		if (result == 114)
		{
			encode[i] = 'r';
		}
		if (result == 115)
		{
			encode[i] = 's';
		}
		if (result == 116)
		{
			encode[i] = 't';
		}
		if (result == 117)
		{
			encode[i] = 'u';
		}
		if (result == 118)
		{
			encode[i] = 'v';
		}
		if (result == 119)
		{
			encode[i] = 'w';
		}
		if (result == 120)
		{
			encode[i] = 'x';
		}
		if (result == 121)
		{
			encode[i] = 'y';
		}
		if (result == 122)
		{
			encode[i] = 'z';
		}
		if (result == 123)
		{
			encode[i] = '{';
		}
		if (result == 124)
		{
			encode[i] = '|';
		}
		if (result == 125)
		{
			encode[i] = '}';
		}
		if (result == 126)
		{
			encode[i] = '~';
		}
		if (result == 127)
		{
			encode[i] = '';
		}

		n += 8;
	}
	cout<<"\n your descripted message here \n\n\n\n";
	for (int j = 0; j < count; ++j)
	{  cout << encode[j];
			for(int j=0;j<50000000;++j)//helps to delay the code so that you will see a smooth display!!
		;
		
	}
}

int Base2_to_10(string num)
{
	int nm = num.size();
	char Nn[nm];
	int sum = 0, a = 1;
	int N[nm];
	for (int j = 1; j < nm; ++j)
	{
		a = a * 2;
	}
	for (int i = 0; i < nm; ++i)
	{
		Nn[i] = num[i];
		if (Nn[i] == '1')
		{
			N[i] = a;
		}
		else
		{
			N[i] = 0;
		}
		a = a / 2;
		sum = sum + N[i];
	}
	return sum;
}
