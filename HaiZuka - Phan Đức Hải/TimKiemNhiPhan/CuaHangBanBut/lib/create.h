#include<windows.h>
#include<bits/stdc++.h>
using namespace std;

string str(long long a)
{
    if(a == 0) return "0";
    if(a < 0) return "-" + str(-a);
    string ans = "";
    for(int i = 1; i <= 4; i ++)
    {
        ans = "0" + ans;
        ans[0] = (a % 10) + '0';
        a /= 10;
    }
    return ans;
}

void create_set(string prob_name, int iTest)
{
    system(("mkdir " + prob_name + "\\Test" + str(iTest)).c_str());
}

void create_root(string prob_name)
{
    system(("mkdir " + prob_name).c_str());
}

void compile()
{
    system("g++ -g -pipe -O2 -s -static -lm -DTHEMIS -Wl,--stack,66060288 solution.cpp -o solution.exe");
}

void create_all_and_compile(string prob_name, int start, int TestNum)
{
    create_root(prob_name);
    for(int i = start; i <= TestNum; i ++) create_set(prob_name, i);
    compile();
}

void cop(string source_file, string target_file)
{
    ifstream cin(source_file);
    ofstream cout(target_file);
    string s;
    while(getline(cin, s)) cout << s << '\n';
}
