#include <stdio.h>
#include<iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i = 1; n?i<=n:1;i++) {
		system("gen > test.in");  
		system("sol.exe < test.in > a.out"); //sol:要对的程序
		system("ans.exe < test.in > b.out");  //ans:保证对的暴力代码
		cout<<i<<endl;
		if (system("fc a.out b.out")) {
			system("pause");  
			return 0;
		}
	}
	cout<<"AC";
}