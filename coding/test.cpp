#include <iostream>
#include <atomic>	
#include <string>
#include <typeinfo>
#include<math.h>
#include<algorithm>
#include"BSTree.h"
#include<map>

using namespace std;

bool inTimeRange(bool& inRange)
{
	bool m_inRange(inRange);
	m_inRange = false;
	return m_inRange;
}


int main() 
{
	//bool x = true;
	//cout << x << endl;
	//cout << inTimeRange(x) << endl;

	string s1("D1");
	string s2("D2");
	string s3("D3");
	string s4("D4");
	string s5("D5");
	string s6("D6");
	string s7("D7");
	string s8("D8");
	string s9("D9");
	string s10("D10");
	uint64_t c1 = s1[1] - 48;
	uint64_t c10 = s10[2] - 38;
	uint64_t c2 = ' ';
	//cout << sizeof(cl) << endl;
	//cout << sizeof(s1[1]) << endl;
	//cout << c10 << endl;

	//string str = "p:\\Nanex_Data\\20130702.JW.nxc";
	//string str2;
	//for (size_t i = 0; i <= str.length(); ++i)
	//{
	//	if (str[i] == '2')
	//	{
	//		str2 = str.substr(i, 8);
	//		break;
	//	}
	//}
	//cout << str2 << endl;
	//cout << "str2 is of type" << typeid(str2).name() << endl;

	map<std::string, int> m;
	m.insert(make_pair("ES", 1));
	m.insert(make_pair("VX", 0));
	cout << m[0] << endl;




	//BSTree bst = BSTree();
	//
	//bst.insert(10);
	//bst.insert(5);
	//bst.insert(12);
	//bst.insert(11);
	//bst.insert(15);
	//bst.insert(8);
	//bst.insert(4);

	//int number;
	//cout << "please enter a number to find: " << endl;
	//cin >> number;

	//Node* findNode = bst.search(number, bst.root());

	//if (findNode != NULL)
	//	cout << "found" << endl;
	//else
	//	cout << "not found" << endl;

	//cout << "min= " << bst.min(bst.root())->key() << endl;
	//cout << "max= " << bst.max(bst.root())->key() << endl;

	return 0;
}