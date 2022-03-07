#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

// function declaration
void ex2_4();
void ex2_8();
void ex3_2();
void ex3_4();
void ex3_5();
void ex3_6and3_7();
void ex3_10();
void ex3_14and3_15();
void ex3_16();
void ex3_17();
void ex3_20();
void ex3_23();
void ex3_31();
void ex3_35();
void ex3_40();
void ex3_41();
void ex3_42();
void ex4_10();
void ex4_21();

int main()
{
	// ex2_4();
	// ex2_8();
	// ex3_2();
	// ex3_4();
	// ex3_6and3_7();
	// ex3_10();
	// ex3_14and3_15();
	// ex3_16();
	// ex3_17();
	// ex3_20();
	// ex3_23();
	// ex3_31();
	// ex3_35();
	// ex3_40();
	// ex3_41();
	// ex3_42();
	// ex4_10();
	// ex4_21();
	return 0;
}

void ex2_4()
{
	unsigned u = 10, u2 = 42;
	int i = 10, i2 = 42;
	cout << "ex2.4: ";
	cout << u2 - u << ",";
	cout << u - u2 << ",";
	cout << i2 - i << ",";
	cout << i - i2 << ",";
	cout << i - u << ",";
	cout << u - i << endl;
}
void ex2_8()
{
	cout << "ex2.8: ";
	cout << "1. ";
	cout << "\62\115\12";
	cout << "2. ";
	cout << "\62\11\115\12";
}

void ex3_2()
{
	cout << "ex3.2: \n";
	cout << "read a line: ";
	string temp;
	getline(cin, temp);
	cout << temp << endl;
	cout << "read a word: ";
	cin >> temp;
	cout << temp << endl;
}

void ex3_4()
{
	cout << "ex3.4: \n";
	string s1, s2, ts;
	cin >> s1;
	cin >> s2;
	if (s1 != s2)
	{
		ts = s1 > s2 ? s1 : s2;
	}
	cout << ts << endl;
	if (s1.size() != s2.size())
	{
		ts = s1.size() > s2.size() ? s1 : s2;
	}
	cout << ts << endl;
}

void ex3_5()
{
	cout << "ex3.5: \n";
	string res(""), res1(""), temp;
	while (temp != "end")
	{
		cin >> temp;
		res += temp;
		res1 += ' ' + temp;
	}
	cout << "res 1: " << res << ", res 2: " << res1 << endl;
}

void ex3_6and3_7() // ex3_7，若改为auto为char
{
	cout << "ex3.6: \n";
	string s = "Today,I want to find a internship!!!";
	for (auto &a : s)
	{
		if (isalnum(a))
		{
			a = 'X';
		}
	}
	cout << s << endl;

	cout << "ex3.7: \n";
	s = "Today,I want to find a internship!!!";
	for (char &a : s)
	{
		if (isalnum(a))
		{
			a = 'X';
		}
	}
	cout << s << endl;
}
void ex3_10()
{
	cout << "ex3.10: " << endl;
	string s, res("");
	getline(cin, s);
	cout << s << endl;
	for (char c : s)
	{
		if (!ispunct(c))
		{
			res += c;
		}
	}
	cout << res << endl;
}

void ex3_14and3_15()
{
	cout << "ex3.14: " << endl;
	cout << "read a set of integers" << endl;
	vector<int> vi;
	int temp;
	while (cin >> temp && !cin.eof())
	{
		vi.push_back(temp);
	}
	for (const int &i : vi)
	{
		cout << i << " ";
	}
	cout << endl;
	cin.clear();
	// ex 3.15
	cout << "ex3.15: " << endl;
	cout << "read a set of strings" << endl;
	vector<string> vs;
	string temps;
	while (cin >> temps && !cin.eof())
	{
		vs.push_back(temps);
	}
	for (const string &i : vs)
	{
		cout << i << " ";
	}
	cout << endl;
}

void ex3_16()
{
	cout << "ex3.16: " << endl;
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};
	cout << "vecName\tsize\tcontent" << endl;
	cout << "v1\t" << v1.size() << "\t{";
	for (int &i : v1)
		cout << i << ' ';
	cout << "}\n";
	cout << "v2\t" << v2.size() << "\t{";
	for (int &i : v2)
		cout << i << ' ';
	cout << "}\n";
	cout << "v3\t" << v3.size() << "\t{";
	for (int &i : v3)
		cout << i << ' ';
	cout << "}\n";
	cout << "v4\t" << v4.size() << "\t{";
	for (int &i : v4)
		cout << i << ' ';
	cout << "}\n";
	cout << "v5\t" << v5.size() << "\t{";
	for (int &i : v5)
		cout << i << ' ';
	cout << "}\n";
	cout << "v6\t" << v6.size() << "\t{";
	for (string &i : v6)
		cout << i << ' ';
	cout << "}\n";
	cout << "v7\t" << v7.size() << "\t{";
	for (string &i : v7)
		cout << i << ' ';
	cout << "}\n";
}
void ex3_17()
{
	cout << "ex3.17: " << endl;
	cout << "read a set of strings" << endl;
	vector<string> vs;
	string temps;
	while (cin >> temps && !cin.eof())
	{
		for (char &c : temps)
		{
			if (islower(c))
			{
				c = toupper(c);
			}
		}
		vs.push_back(temps);
	}
	for (const string &i : vs)
	{
		cout << i << endl;
	}
}
void ex3_20()
{
	cout << "ex3.20: " << endl;
	cout << "read a set of integers" << endl;
	vector<int> vi;
	int temp;
	while (cin >> temp && !cin.eof())
	{
		vi.push_back(temp);
	}
	const unsigned int len = vi.size();
	for (int i = 0, j = len - 1; i <= j; i++, j--)
	{
		if (i == j)
		{
			cout << vi[i] << endl;
		}
		else
		{
			cout << vi[i] + vi[j] << endl;
		}
	}
}
void ex3_23()
{
	cout << "ex3.23: " << endl;
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 55};
	vector<int>::iterator iter;
	for (int &i : v)
	{
		cout << i << ",";
	}
	cout << "\b\n";
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		*iter *= 2;
	}
	for (int &i : v)
	{
		cout << i << ",";
	}
	cout << "\b\n";
}
void ex3_31()
{
	cout << "ex3.31: " << endl;
	int a[10]{};
	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
	}
	for (const int &i : a)
	{
		cout << i << " ";
	}
	cout << "\b\n";
}
void ex3_35()
{
	cout << "ex3.35: " << endl;
	int a[] = {1, 2, 3, 4, 5};
	int *pa = a;
	while (pa - a < 5)
	{
		*pa = 0;
		pa++;
	}
	for (const int &i : a)
	{
		cout << i << " ";
	}
	cout << "\b\n";
}
void ex3_40()
{
	cout << "ex3.40: " << endl;

	char a[] = "hello! ";
	char b[] = "I am a programmer.";
	const int al = strlen(a), bl = strlen(b);
	char *acb = new char[(al + bl)];
	strcpy(acb, a);
	strcat(acb, b);
	cout << a << endl;
	cout << b << endl;
	cout << acb << endl;
	delete[] acb;
}
void ex3_41()
{
	cout << "ex3.41: " << endl;

	int a[5] = {1, 2, 3, 4, 5};
	vector<int> va(a, a + 5);
	for (const int &i : va)
		cout << i << endl;
}
void ex3_42()
{
	cout << "ex3.42: " << endl;
	vector<int> va{1, 2, 3, 4, 5};
	int a[10]{};
	for (unsigned i = 0; i < va.size(); i++)
	{
		a[i] = va[i];
	}
	for (const int &i : a)
		cout << i << endl;
}
void ex4_10()
{
	cout << "ex4.10: " << endl;
	int temp;
	while (cin>>temp&&temp!=42)
	{
		cout << temp << endl;
	}
}
void ex4_21()
{
	cout << "ex4.21: " << endl;
	vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (int &i:vec)
	{
		i % 2 ? i *= 2 : 0;
		cout << i << endl;
	}
}