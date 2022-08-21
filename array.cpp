//一

/*#include <iostream>
using namespace std;
int main()
{
	char a[80];
	cin >> a;
	int i,num=0;

	for (i = 0; i <= 81; i++) {
		if (a[i] <= 122 && a[i] >= 97) {
			a[i] -= 32;
			num++;
		}
	}
	cout << a << endl << num;;
	
}*/


//二
/*
#include<cstring>
#include<iostream>
using namespace std;
int main() {
	int a[10];
	int i,t;
	
	for (i = 0; i <= 9; i++) {
		cin >> a[i];
		
	}
	int num;
	cin >> num;
	int flag=0;
	for (i = 0; i <= 9; i++) {
		if (num == a[i]) {
		
			cout << i+1 << endl;
		}

	}
	if (flag=0){
	cout<<"no";
	}

}
*/

//三
/*
#include<iostream>
using namespace std;
int main() {
	const int M = 3;
	const int N = 3;
	double a[M ][N+1];
	
	//输入各个学生数据
	int i,j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			cin >> a[j][i];
		}
	}

	//循环算出总分

	for (j = 0; j < M; j++) {
		for (i = 0; i < N; i++) {
			a[j][N+1] = a[j][0];
			a[j][N+1] += a[j][i];


		}
	}

	//平均分
	double ave[N];
	for (j = 0; j < M; j++) {
		ave[j] = a[j][N + 1] / 3;	
	
	}

	//排序
	int total[N],temp=0;

	for (j = 0; j < M; j++) {
		total[j] = a[j][N + 1] ;
	}

	for (j = 1; j < N; j++) {
		for (i = 0; i < N - j; i++) {
			if (total[i] > total[i + 1]) {
				temp = total[i];
				total[i] = total[i + 1];
				total[i + 1] = temp;			
				temp = 0;

			}

		}
	}
}
*/

//四
/*
#include<iostream>
#include<cstdio>
#include<string.h>
#include<stdio.h>
using namespace std;
int main() {
	//定义字符串和密钥
	char chars[1000];
	int n;
	fgets(chars, 1000,stdin);
	cin >> n;

	

	//对每个字符进行加密
	int j;
	for (j = 0; j < strlen(chars); j++) {
		if (chars[j] >= 97 && chars[j] <= 122) {
			chars[j] = (chars[j] -97+ j + n) % 26 + 97;//需要减去a以带来真是的加数
			
		}
		else if (chars[j] >= 65 && chars[j] <= 90) {
			chars[j] = (chars[j]-65 + j + n) % 26 + 65;
		}
		cout << chars[j];
	}
	



}*/

//五
/*
#include<iostream>
using namespace std;
int main() {
	//定义并输入字符串
	int a[10],b[10];
	int i,j,temp;
	for ( i = 0; i < 10; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	

	//冒泡排序（从小到大）并输出
	for (i = 0; i < 9; i++) {
		cout << i + 1 << "   ";
		for (j = 0; j < 9-i; j++) {
			
			
			if (a[j] > a[j + 1]){
				temp = a[j ];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
			
			
			
		}
		for (j = 0; j < 9 - i; j++) {
			cout << a[j] << " ";
		  }


		cout << endl;
	}

	for (i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}




}*/

//六
/*
#include<iostream>
using namespace std;
int main() {
	//输入数据
	int n,i,j;
	
	cin >> n;

	int a[100];
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	int key;
	cin >> key;
	//二分查找
	int flag = 0;
	int num = 0;
	int low = 0, high = n-1,mid=0;
	while(low<=high) {
		num++;
		mid = (low + high) / 2;
		if (key == a[mid]) {
			flag = 1;
			break;
		}
		else if (key > a[mid]) {
			low = mid + 1;

		}
		else if (key < a[mid]) {
			high = mid - 1;
		}
		
	}

	if (flag == 1) {
		cout << "找到了" << endl << num << endl << "a[" << mid << "]" << a[mid];
	}



}*/
/*
#include<iostream>
using namespace std;
int main() {
	//num1小于num2,10<=mun1<num2
	int num1, num2;
	int i, j, k;

	cin >> num1 >> num2;
	//遍历num1到num2之间的数
	for (i = num1; i <= num2; i++) {
		int a[100];
		k = 0;
		int b,d=0;
		d = i;
		while (d  != 0) {
			//cout << "debug d =" << d << endl;
			b = d % 10;
			//cout <<  "var b =" << b << endl;
			a[k] = b;

			d=d / 10;
			//cout << "a[" << k << "] =" << a[k] << endl;
			k++;
		}

		int flag = 1;
		k = k -1;
		if ((k + 1) % 2 == 0) {
			for (j = 0; j <= (k / 2); j++) {
			//cout << " k " << k << endl;
			if (a[j] != a[(k - j)]) {
				//cout << "===" << i << " ";
				flag = 0;
				break;
			}

			}

		}
		else {
			for (j = 0; j < (k / 2); j++) {
				//cout << " k " << k << endl;
				if (a[j] != a[(k - j)]) {
					//cout << "===" << i << " ";
					flag = 0;
					break;
				}

			}
		}


		if (flag == 1) {
			cout << i<<" ";
		}

	}




}*/

//九
//一只兔子躲进了 10 个环形分布的洞的某一个，狼第一次在第一个洞没有找到兔子，
//就隔一个洞，再到第三个洞去找，也没有找到，就隔两个洞，到第六个洞去找，以后每次多隔一个洞 去找兔子……
//这样下去，结果一直找不到兔子，编程输出第n次找洞时，兔子可能藏在哪几个洞中？
/*
#include<iostream>
using namespace std;
int main() {
	int tru[10];
	int n;

	cin >> n;

	for (int i = 0; i <= 9; i++) {//全赋值为一，找得到的洞赋值为0，最后循环找数
		tru[i] = 1;
	}

	int mum;
	for (int i = 1; i <= n; i++) {
		mum = (2 + i) * (i - 1) / 2;
		mum = mum % 10;
		tru[mum] = 0;
		mum = 0;
	}

	for (int i = 0; i <= 9; i++) {
		if (tru[i] == 1) {
			cout << i+1<<endl;
		}

	}


}*/

//十
/*
#include<iostream>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	int a[m][n];
}*/


//十一
/*
#include<iostream>
using namespace std;
int main() {
	const int N = 20;
	int a[N][N];
	int n, m, i, j;
	cin >> n;

	a[0][0] = 0;
	for (i = 0;  i <= n;i++) {
		m = i;
		for (j = 0; j <= m; j++) {
			a[i][0] = 1;

			if (i > 0 && j > 0) {
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
			a[i][i] = 1;
		}

	}

	for (i = 0; i <= n; i++) {
		m = i;
		for (j = 0; j <= m; j++) {
			cout << a[i][j] << "    ";
		}
		cout << endl;
	}



}*/

//十二
/*
#include<iostream>
using namespace std;
int main() {
	const int M = 100, N = 2;
	int a[M][N] = { 0 };
	int b[M][N] = { 0 };
	int m = 0, n, i, j, max;

	//输入二维数组
	for (m = 0; m < 100; m++) {
		for (n = 0; n < 2; n++) {
			cin >> a[m][n];
		}

		if (a[m][0] == 0 && a[m][1] == 0) {
			break;
		}
	}
	max = a[0][0];




	for (j = 0; j <= m; j++) {
		n = a[j][0];
		b[n][1] += a[j][1];
	}





	//按顺序打印出值
	for (i = max; i >= 0; i--) {
		if (b[i][1] != 0 && i != 0) {
			cout << b[i][1] << "x" << "^" << i << "+";

		}
		if (i == 0) {
			cout << b[i][1];
		}

	}

}*/