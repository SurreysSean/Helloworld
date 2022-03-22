#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>

using namespace std;


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

void ex3_6To3_7() // ex3_7，若改为auto为char
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

void ex3_14To3_15()
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
	while (cin >> temp && temp != 42)
	{
		cout << temp << endl;
	}
}
void ex4_21()
{
	cout << "ex4.21: " << endl;
	vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (int &i : vec)
	{
		i % 2 ? i *= 2 : 0;
		cout << i << endl;
	}
}
void ex5_9To5_12()
{
	cout << "ex5.09~5.12: " << endl;
	int acnt = 0, spaceCnt = 0, specialtwoCharCnt = 0;
	string text("");
	cout << "Read a text: " << endl;
	char c;
	while ((c = getchar()) != EOF)
	{
		text += c;
	}

	for (unsigned i = 0; i < text.size(); i++)
	{
		char c = text[i];
		if (isalpha(c))
		{
			if (c == 'f' && i + 1 < text.size() && (text[i + 1] == 'f' | text[i + 1] == 'l' | text[i + 1] == 'i'))
			{
				++specialtwoCharCnt;
			}
			c = tolower(c);
			if (c == 'a' || c == 'o' || c == 'e' || c == 'i' || c == 'u')
			{
				++acnt;
			}
		}
		else if (isspace(c))
		{
			++spaceCnt;
		}
	}
	cout << "vowel nums: " << acnt << ", space nums: " << spaceCnt << ", special two characters sequence: " << specialtwoCharCnt << endl;
}
void ex5_14()
{
	cout << "ex5.14: " << endl;
	vector<string> vs;
	string s;
	int max_repeat_time = 0;
	int temp = 0;
	while (cin >> s && !cin.eof())
	{
		vs.emplace_back(s);
		s.clear();
	}

	for (auto iter = vs.begin() + 1; iter != vs.end(); iter++)
	{
		if (*iter == *(iter - 1))
		{
			++temp;
			s = *iter;
		}
		else
		{
			if (max_repeat_time < temp)
			{
				max_repeat_time = temp;
			}
			temp = 0;
		}
	}
	if (max_repeat_time != 0)
		cout << "word: " << s << ", max repeat times = " << max_repeat_time + 1 << endl;
	else
		cout << "no repeat word" << endl;
}
void ex5_17()
{
	cout << "ex5.17: " << endl;
	vector<int> vi1{1, 2, 3, 5};
	vector<int> vi2{1, 2, 3, 4, 5, 6, 7, 8, 9};
	unsigned i = 0;
	if (vi1.size() <= vi2.size())
	{
		for (i = 0; i < vi1.size(); i++)
		{
			if (vi1[i] != vi2[i])
				break;
		}
		if (i == vi1.size())
			cout << "True\n";
		else
			cout << "False\n";
	}
	else
	{
		for (i = 0; i < vi2.size(); i++)
		{
			if (vi1[i] != vi2[i])
				break;
		}
		if (i == vi2.size())
			cout << "True\n";
		else
			cout << "False\n";
	}
}
void ex5_19()
{
	cout << "ex5.19: " << endl;
	string s1, s2;
	do
	{
		cout << "Enter two strings: ";
		cin >> s1 >> s2;
		if (!cin.eof())
			cout << "The shorter one: " << (s1.size() <= s2.size() ? s1 : s2) << endl;
		cin.ignore();
	} while (!cin.eof());
}
void ex5_20()
{
	cout << "ex5.19: " << endl;
	string cur_str, last_str;
	while (cin >> cur_str && !cin.eof())
	{
		if (cur_str == last_str)
		{
			cout << "the repeated word: " << cur_str << endl;
			break;
		}
		last_str = cur_str;
	}
	if (cin.eof())
	{
		cout << "no repeated word" << endl;
	}
}
void ex5_23To5_25()
{
	cout << "ex5.23~5.25: " << endl;
	int a, b;
	while (cin.good())
	{
		try
		{
			cout << "Enter two num(Enter other character to exit)\n";
			if (cin >> a >> b)
			{
				!b ? throw runtime_error("divisor can't be 0") : 0;
				cout << a / b << endl;
			}
		}
		catch (const runtime_error &e)
		{
			std::cerr << e.what() << '\n';
			cout << "Try again?(enter 'n' to exit)" << endl;
			char tempR;
			cin >> tempR;
			if (tempR == 'n')
			{
				break;
			}
		}
	}
}
unsigned ex6_3_fact(unsigned x)
{
	if (!x)
	{
		cout << "ex6.3: " << endl;
		return 1;
	}
	return x * ex6_3_fact(x - 1);
}
void ex6_4()
{
	cout << "ex6.4: " << endl;

	int origin_input = 0;
	cout << "Enter a integer: " ;
	cin >> origin_input;
	if (origin_input <0)
	{
		cout << "Input must be positive" << endl;
		return;
	}
	cout << ex6_3_fact(origin_input) << endl;
}
void ex6_5(int i)
{
	cout << "ex6.5: " << endl;
	if (i<0)
	{
		i = -i;
	}
	cout << i << endl;
}
int ex6_7()
{
	cout << "ex6.7: " << endl;
	static int i = 0;
	return ++i;
}
void ex6_10(int*a,int*b)
{
	cout << "ex6.10: " << endl;
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void ex6_12(int &a,int &b)
{
	cout << "ex6.10: " << endl;
	int temp = a ^ b;
	a = temp ^ a;
	b = temp ^ b;
}
int ex6_21(const int a,const int  *const b)
{
	cout << "ex6.21: " << endl;
	if (a>=*b)
		return a;
	return *b;
}

void ex6_22(const int *a,const int *b)
{
	cout << "ex6.22: " << endl;
	const int *temp = b;
	b = a;
	a = temp;
}
void ex6_25(int argc,char**argv)
{
	cout << "ex6.22: " << endl;
	if (argc !=3)
	{
		cout << "invalid parameters" << endl;
		return;
	}
	string str = string(argv[1]) + string(argv[2]);
	cout << str << endl;
}

void ex6_26(int argc,char**argv)
{
	cout << "ex6.26: " << endl;
	for (int i = 1; i < argc;i++)
	{
		cout << "argv[" << i << "] = " << argv[i] << endl;
	}
}

void ex6_27(initializer_list<int> &list)
{
	cout << "ex6.27: " << endl;
	int sum = 0;
	for (auto iter = list.begin(); iter != list.end();iter++)
	{
		sum += *iter;
	}
	cout << "sum = " << sum << endl;
}
void ex6_33(const vector<int> &vec,int p)
{
	cout << "ex6.33: " << endl;
	if(p<vec.size())
	{
		cout << vec[p] << endl;
		ex6_33(vec, p + 1);
	}
}
int ex6_55_add(int a,int b)
{
	return a + b;
}
int ex6_55_sub(int a,int b)
{
	return a - b;
}
int ex6_55_prod(int a,int b)
{
	return a * b;
}
int ex6_55_div(int a,int b)
{
	return a / b;
}
void ex6_55()
{
	cout << "ex6.55: " << endl;
	vector<int (*)(int, int)> funcPtrVec{ex6_55_add, ex6_55_sub, ex6_55_prod, ex6_55_div};
	int a = 10, b = 5;
	for (auto f:funcPtrVec)
	{
		cout << f(10, 5) << endl;
	}
}

//---ex7.4/7.5/7.9/7.22--- 
struct Person
{
private://7.22
	string name;
	string address;

public:
//7.5
	string showName() const { return name; }
	string showAddress() const { return address; }
	Person() = default;
	Person(string t_name) : name(t_name){}
	Person(string t_name,string t_address):name(t_name),address(t_address){}
	Person(istream &is) { is >> name >> address; }
	//7.22
	friend istream &read(istream &, Person &);
	friend ostream &print(ostream &os, const Person &item);
};
//7.9
istream& read(istream& is,Person& item)
{
	is >> item.name >> item.address;
	return is;
}
ostream & print(ostream& os,const Person& item)
{
	os << item.name << "\t" << item.address << endl;
	return os;
}

//---ex7.23/7.24/7.27/7.29/7.32/7.33---
class Screen;
class Window_mgr
{
	vector<Screen> scs;
public:
	void clear(int);
};
class Screen
{
private:
	size_t row, col;
	size_t cursor;
	string content;

	void do_display(ostream &os) const  { os << content << endl; }

public:
	Screen() = default;
	Screen(size_t r,size_t c):row(r),col(c),content(row*col,' '){}
	Screen(size_t r, size_t c, char cr) : row(r), col(c) ,content(row*col,'X'){}
	~Screen(){};

	inline Screen &set(char c) 
	{
		content[cursor] = c;
		return *this;
	}
	inline Screen& move(size_t r,size_t c)
	{
		cursor = r * col + c;
		return *this;
	}
	inline Screen& display(ostream& os)
	{
		do_display(os);
		return *this;
	}
	inline const Screen& display(ostream& os) const 
	{
		do_display(os);
		return *this;
	}
	size_t size() const 
	{
		return row * col;
	}

	//friends
	friend void Window_mgr::clear(int);
};
void Window_mgr::clear(int i)
{
	Screen &s = scs[i];
	s.content = string(s.row * s.col, ' ');
}
//---ex7.31---
class Y;
class X
{
	Y *ptr_Y;
};

class Y
{
	class X;
};
//---ex7.32---
int main(int argc,char **argv)
{
	return 0;
}