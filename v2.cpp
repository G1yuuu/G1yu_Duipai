#include <bits/stdc++.h>
using namespace std;
void printf_green(const char *s)
{
	printf("\033[0m\033[1;32m%s\033[0m", s);
}

bool check()
{
	string ans,ans2;
	freopen("a.out","r",stdin);
	char c;
	while(scanf("%c",&c)!=EOF) ans+=c;
	fclose(stdin);
	freopen("b.out","r",stdin);
	while(scanf("%c",&c)!=EOF) ans2+=c;;
	fclose(stdin);
	return ans == ans2;
}
int main() {
	int n;
	cin>>n;
	for(int i = 1; n?i<=n:1;i++) {
		system("gen > test.in");
		system("sol.exe < test.in > a.out");
		system("ans.exe < test.in > b.out"); 
		
		if (check()) {
			printf_green("AC on test ");
			string a = to_string(i);
			char ch[1000];
			strcpy(ch,a.c_str());
			printf_green(ch);
			cout<<"\n";
		}
		else{
			cout<<"WA!!!!"<<endl;
			return 0;
		}
	}
	printf_green("ALL TESTS RIGHT");
}