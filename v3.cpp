#include <bits/stdc++.h>
#include<windows.h>
using namespace std;
void printf_green(const char *s)
{
	printf("\033[0m\033[1;32m%s\033[0m", s);
}
BOOL SetConsoleColor(WORD wAttributes)  
{  
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  
	if (hConsole == INVALID_HANDLE_VALUE)  
		return FALSE;  
	
	return SetConsoleTextAttribute(hConsole, wAttributes);  
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
				SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_GREEN);
				printf("[AC in %d]",i);
				cout<<"\n";
		}
		else{
			SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_RED);
			printf("[WA in %d]",i);
			
			return 0;
		}
	}
	printf_green("ALL TESTS RIGHT");
}