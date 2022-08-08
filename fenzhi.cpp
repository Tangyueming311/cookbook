// 分支结构.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。


//一
//某快递公司收取快递费的标准是：5公斤（包括5公斤）以下收费10元，
//超过5公斤后每2公斤收费5元，不足2公斤按2公斤收费。
/*
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double weight,a;
	int price;
	cin >> weight;
	if (weight <= 5) price = 10;
	else
	{
		a = (weight - 5) / 2;
		a = ceil(a);
		price = 10 + a * 5;

	}

	cout << price<<endl;	
}
*/



//二
/*根据输入的数判断输出下列4种情况之一。

① 是3的倍数但不是7的倍数。

② 不是3的倍数但是7的倍数。

③ 既是3的倍数也是7的倍数。

④ 既不是3的倍数也不是7的倍数。*/

/*#include<iostream>
using namespace std;
int main()
{
	int number;
	cin >> number;
	if (number % 3 == 0 && number % 7 == 0)
		cout << "3"<<endl;
	else if (number % 3 != 0 && number % 7 == 0)
		cout << "2" << endl;
	else if (number % 3 != 0 && number % 7 != 0)
		cout << "4" << endl;
	else if (number % 3 == 0 && number % 7 != 0)
		cout << "1" << endl;
}
	*/


//三
//输入一门课程的成绩，若大于等于90分，输出“A  grade”；若大于等于于80分而低于90分，输出“B grade”；
//若大于等于70分而低于80分，输出“C  grade ”；若大于等于60分而低于70分，输出“D  grade”；否则输出“Not passed”。 

/*#include<iostream>
using namespace std;
int main()
{
	int grade,G10;
	cin >> grade;
	G10 = grade / 10;
	if (G10 >= 9)
		cout << "A";
	else
		switch (G10)
		{
		    case 8:
			    cout << "B" << endl;
			    break;
			case 7:
				cout << "C" << endl;
				break;
			case 6:
				cout << "D" << endl;
				break;
			default:
				cout << "No pass" << endl;
		}
}

*/

//四
//程序输入某年某月某日，判断这一天是这一年的第几天？
/*#include<iostream>
using namespace std;
int main()
{
	int year, month, day,total,order;
	year = 0;
	month = 0;
	total = 0;
	order = 0;

	cin >> year >> month >> day;
	
	if (year % 4 == 0 && year % 100 != 0)
		switch (month)
		{
            case 12:
				total = 0;
				total = total + 30;
			case 11:
				total += 31;
			case 10:
				total += 30;
			case 9:
				total += 31;
			case 8:
				total += 31;
			case 7:
				total += 30;
			case 6:
				total += 31;
			case 5:
				total += 30;
			case 4:
				total += 31;
			case 3:
				total += 28;
			case 2:
				total += 31;
			case 1:
				order = day+total;
		}
	else
	{
		switch (month)
		{
		case 12:
			total = 0;
			total += 30;
		case 11:
			total += 31;
		case 10:
			total += 30;
		case 9:
			total += 31;
		case 8:
			total += 31;
		case 7:
			total += 30;
		case 6:
			total += 31;
		case 5:
			total += 30;
		case 4:
			total += 31;
		case 3:
			total += 29;
		case 2:
			total += 31;
		case 1:
			order = day +total;
		}
	}

	cout <<order<<endl;
}
*/

//五
//计算器
/*#include<iostream>
using namespace std;
int main()
{
	double nu1, nu2,answer;
	int yu1,yu2;
	char fu;
	cin >> nu1 >> nu2 >> fu;
	answer = 0;
	yu1 = 0;
	yu2 = 0;

	switch (fu)
	{
	case '+':
		answer = nu1 + nu2;
		cout << answer;
		break;
	case '-':
		answer = nu1 - nu2;
		cout << answer;
		break;
	case '*':
		answer = nu1 * nu2;
		cout << answer;
		break;
	case '/':
	{
		if ( nu2 == 0)
			cout << "除数他妈的不为0";
		    answer = nu1 / nu2;
		    cout << answer;
		break;
	}
		

	}

	
	if (fu == '%' && int(nu1) == nu1 && int(nu2) == nu2)
	{
		yu1 = nu1;
		yu2 = nu2;
		answer = yu1 % yu2;
		/*
		或者answer=int(nu1)%int(nu2);
		*/
	/*}
	 else if (fu == '%' && (int(nu1) != nu1 || int(nu2) != nu2))
		cout << "error" << endl;
	
}
*/

//六
//二次方程
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c;
	double x1, x2, delta,i1,i2;
	string i = "i";
	cin >> a >> b >> c;
	x1 = 0;
	x2 = 0;
	delta = 0;
	delta = b * b - 4 * a * c;
	i1 = 0;
	i2 = 0;

	if (a == 0)
	{
		if (b == 0)
		{
			cout << "error" << endl;

		}
		else
			x1 = -c / b;
		cout << x1 << endl;

	}
	else
	{
		if (delta == 0)
		{
			x1 = -b / 2 * a;
			cout << "x1=x2=" << x1 << endl;
		}
		else if (delta > 0)
		{
			delta = sqrt(delta);
			x1 = (-b + delta) / 2 * a;
			x2 = (-b - delta) / 2 * a;
			cout << "x1=" << x1 << "x2=" << x2;
		}

		else 
		{
			delta = sqrt(-delta);
			x1 = -b / 2 * a;
			x2 = -b / 2 * a;
			i1 = -delta / 2 * a;
			i2 = delta / 2 * a;
			cout << "x1=" << x1 << "+" << i1 << i << "x2=" << x2 << i2 << i<<endl;

		}

		
	}



}

