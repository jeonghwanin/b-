#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int T;
	int N;
	string s; 
	int visited = 0;
	int ans = 0;
	int total = (1 << 10) - 1;
	cin >> T;
	for (int t = 1; t <= T; t++)
	{
		
		cin >> N;
		ans = 0;
		visited = 0;
		while(true)
		{
			ans++;
			s = to_string(N*ans);
			for (int y = 0; y < s.length(); y++)
			{
				visited |= 1 << (s[y] - '0');
			}
			if (visited == total) break;
			
		}
		cout << '#' << t << ' ' << ans*N<<'\n';
	}
}
