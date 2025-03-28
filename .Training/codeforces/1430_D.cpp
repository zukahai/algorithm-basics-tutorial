/*
https://codeforces.com/contest/1430/problem/D
*/
#include<bits/stdc++.h>

using namespace std;

char buf[200043];

int main()
{
	int t;
	scanf("%d", &t);
	for(int tc = 1; tc <= t; tc++) {
		int n;
		scanf("%d", &n);
		scanf("%s", buf);
		string s = buf;
		queue<int> q;
		int cur = 0;
		for(int i = 0; i < n; i++)
		{
		 	if(i > 0 && s[i] != s[i - 1])
		 		cur++;
		 	if(i > 0 && s[i] == s[i - 1])
		 		q.push(cur);
		}
		int deleted = 0;       
		int score = 0;
		for(int i = 0; i < n; i++)
		{
			if(q.empty())
				break;
			q.pop();
			deleted++;
			score++;
			while(!q.empty() && q.front() == i)
			{
				q.pop();
				deleted++; 	
			}
			deleted++;
			//cerr << deleted << endl;
		}
		score += (n - deleted + 1) / 2;
		printf("%d\n", score);
	}
}