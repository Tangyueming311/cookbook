//一
//题目内容：输入n，求以下函数的值
//s(n) = 2 / 1 + 3 / 2 + … + (n + 1) / n
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    double s=0,sn=0,t;
    cin >> n;

    for (t = 1; t <= n; t++){
        s = (t + 1) / t;
        sn += s;
    }

    cout << sn;
}
*/

//二
/*
#include<iostream>
using namespace std;
int main(){
    int number,x1=0,  x2=0,x3=0,t=0;
    cin >> number;
    if (number / 10 == 0) {
        cout << "root" << 0;
    }

    else {
         do{
           
   
            while (number !=0) {
                x1 = number % 10;
                number /=10;   
                x3 += x1;
            }
            number = x3;
            t = x3;
            x3 = 0;

         } while (t / 10 != 0);
        
 
        cout << t;
    }
    */

//三
//编程计算s=a+aa+aaa+…+aaa…a（n个a），a的取值为0～9，n的取值为0～5，a和n由键盘输入
/*#include<iostream>
using namespace std;
int main() {
    int a, n,s,i,n1=0,o;
    cin >> a >> n;
    s = a;
    o = a;
    for (i = 1; i < n; i++) {
        a = a * 10 + o;
        n1 = a;
        s += n1;
    }
    cout << s;
}
*/
//四
//编程要求输入若干不为0数据，输入0结束，求该若干数中的最大值和平均值。如果输入0个数则最大值和平均值均为0.
/*#include<iostream>
using namespace std;
int main() {
    int n,n1,i;
    int max;
    double ave=0.0;
    cin >> n;
    max = n;
    i = 1;
    ave += n;
    while(n!=0) {

        cin >> n;
        if (n > max) {
            max = n;
        }
        ave += n;
        i++;
    }   
      if (ave != 0) {
        ave = ave/(i - 1);
       }
    else ave = 0;

    cout << max<<endl;
    cout << ave << endl;
    


}
*/


//五
/*
#include<iostream>
using namespace std;
int main() {
    int num,one=1,two,yin=2;
    cin >> num;

    do {

        while(num%yin!=0) {
            yin++;
        }
                cout << yin   ;               
                num /= yin;
                if (num != 1)
                    cout << "*";
    }while(num != 1);
}
*/

//六
//两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。
//a说他不和x比，c说他不和x,z比，请编程序找出三队选手的名单。
/*#include<iostream>
using namespace std;
int main() {
    char A='x', B='x', C='x';//分别为a，b，c对手
    for (B = 'x'; B <= 'z'; B++) {

        for (A = 'x'; A <= 'z'; A++) {
            



                for (C = 'x'; C <= 'z'; C++) {

                    if (C != 'x' && C != 'y' && A != 'x'&&A!=B&&A!=C&&B!=C)

                        cout << A << B << C;
                }

            
        }


    }

}
*/
//七
//给定两个整数n和m，0 < n <= m <= 200，编写程序计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。
// 注意：是第n个素数到第m个素数，不是n和m之间的素数
/*#include<iostream>
using namespace std;
int main() {
    int n, m, i, j,ans=0,order=0,num;
    cin >> n >> m;
    for (i = 2; i <= 200; i++) {
        
        for (num = 2; num <=i; num++) {
            if (i % num == 0 &&i!=num) {
                break;
            }
           /* if (i == num) {   //我的算法并没有答案的简洁，我们的想法相同的是不是素数则跳出循环，此时已经知道该
                order++;        //值不为素数，而我另起炉灶重新定义素数，答案则利用赋值，判断其为假，而将此真假带出该循环；
            }
            if (order >= n&&i==num) {
                ans += i;
                break;
            }
            
        }
        
        if (order >= m) {
            break;
        }



    }
    cout << ans;
}
    */


//八
/*#include<iostream>
using namespace std;
int main() {
    int a, b,i,ten,one,j=0,flag=0;
    cin >> a >> b;
    for (i = 1 + a; i < b; i++) {
        one = i % 10;
        ten = (i / 10 )% 10;
        if (one * ten > one + ten) {
            cout << i << "  ";
            j++;
            flag = 1;
        }
            if(j==5){
                cout << '\n';
                j = 0;
            }       
    }
    if (flag == 0);
    cout << "no";
}
*/


//九
/*#include<iostream>
using namespace std;
int main() {
    int one, two, five,sum=100;
    for (one = 0; one <= 100; one++) {
        for (two = 0; two <= 50; two++) {
            for (five = 0; five <= 20; five++) {
                if (sum == one + 2 * two + 5 * five) {
                    cout << "一分" << one <<"  " << "两分" << two <<"  " << "五分" << five << endl;
                    break;
                }
            }
        }
    }
}
*/

//十
//从原点出发，一步只能向右走、向上走或向左走。恰好走N步且不经过已走的点共有多少种走法？
//pass


//十一
//一位商人有一个重40磅的砝码，一天不小心将砝码摔成了四块。后来商人称得每块的重量都是整磅数，
//而且发现这四块碎片可以在天平上称1至40磅之间的任意重量。请问这四块碎片各重多少？
//编写程序求出这四块砝码的重量，并输出这四块砝码的重量。（注意输出时由小到大的顺序输出）
/*#include<iostream>
using namespace std;
int main() {
    int a, b, c, d,i,flag=0;
    int x, y, z, k;
    for (a = 1; a <= 40; a++){
        for (b = 1; b <= 40; b++) {
            for (c= 1; c <= 40; c++) {
                for (d= 1; d<= 40; d++) {
                    if (a + b + c + d == 40&&a<b&&b<c&&c<d) {
                       
                        
                        flag = 1;
                        for (i = 1; i <= 40&&flag==1; i++) {
                            flag = 0;
                            
                            
                            
                            for(x=-1;x<2;x++){
                                for (y = -1; y < 2; y++) {
                                    for (z = -1; z < 2; z++) {
                                        for (k = -1; k < 2; k++) {

                                            if (i == x * a + y * b + z * c + k * d) {
                                                flag = 1;
                                                
                                            }
                                        
                                        }
                                    }
                                }
                            }

                            

                        }
                       
                            if(flag==1)
                            cout << a << " " << b << " " << c << " " << d;

                    }
                      
                }
            }
        }
    }
    
}*/

///十二
/*#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double cost=1,real,cha;
    int n1,i=1,x,WC=0;
    cin >> x;
    
    n1 = -x * x / 2;
    real = cos (x);
    do {
        cha = -x * x / ((2 * i - 1) * 2 * i);
        cost += n1;
        n1 = n1 * cha;
        WC = cost - real;
        i++;
    } while (WC > 1e-5);


    cout << cost;
}*/


//十三
/*#include<iostream>
using namespace std;
int main() {
    int a,b,m, n,i=2,maxY=1,maxB;
    cin >> a>> b;
    m = a;
    n = b;



    if (m == 1 || n == 1)
        cout << "最大公约数" << 1<<'\n'<<"最大公倍数"<<n*m;
    else {
        for (i = 2; i <= a && i <= b; i++) {

            while (m % i == 0 && n % i == 0) {
                maxY *= i;
                m /= i;
                n /= i;
                i = 2;

            }
            
        }
            cout << "最大公约数" << maxY<<'\n';
            maxB = maxY * a * b;
            cout << "最大公倍数" << maxB;

    }


    

}*/



