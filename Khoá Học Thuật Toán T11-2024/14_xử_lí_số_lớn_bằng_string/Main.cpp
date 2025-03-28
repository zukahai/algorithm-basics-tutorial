#include<bits/stdc++.h>

using namespace std;

/*
    Tra ve 1 khi a > b
    Tra ve 0 khi a = b
    Tra ve -1 khi a < b
*/
int compare(string a, string b) { 
    while (a.size() < b.size())
        a = "0" + a;
    while (b.size() < a.size())
        b = "0" + b;
    
    if (a == b) {
        return 0;
    } else if (a > b) {
        return 1;
    } else {
        return -1;
    }
}

string sum(string a, string b) {
    while (a.size() < b.size())
        a = "0" + a;
    while (b.size() < a.size())
        b = "0" + b;
    int d = 0;
    string res = "";
    for (int i = a.size() - 1; i >= 0; i--) {
        int t = (a[i] - '0') + (b[i] - '0') + d;
        char lastDigit = t % 10 + '0';
        res = lastDigit + res;
        d = t / 10;
    }
    if (d == 1)
        res = "1" + res;
    return res;
}

string sub(string a, string b) {
    while (a.size() < b.size())
        a = "0" + a;
    while (b.size() < a.size())
        b = "0" + b;
    int d = 0, t;
    string res = "";
    for (int i = a.size() - 1; i >= 0; i--) {
		if (a[i] - b[i] - d >= 0) {
			t = a[i] - b[i] - d;
			char lastDigit = t + '0';
			res = lastDigit + res;
			d = 0;
		} else {
			t = 10 + a[i] - b[i] - d;
			d = 1;
			char lastDigit = t + '0';
			res = lastDigit + res;
		}
    }
    
    while (res[0] == '0' && res.size() > 1)
		res.erase(0, 1);

    return res;
}


string mul(string a, string b) {
	string c[10];
	c[0] = "0";
	for (int i = 1; i <= 9; i++) {
		c[i] = sum(c[i - 1], a);
	}
	
	string res = "0";
	string t;
	string space = "";
	for (int i = b.size() - 1; i >= 0; i--) {
		t = c[b[i] - '0'] + space;
		res = sum(res, t);
		space = space + "0";
	}
	return res;
}


string div(string a, string b) {
	string c[10];
	c[0] = "0";
	for (int i = 1; i <= 9; i++) {
		c[i] = sum(c[i - 1], b);
	}
	
	string n = "";
	string res = "";
	for (int i = 0; i < a.size(); i++) {
		n = n + a[i];
		int index = 9;
		for (int j = 9; j >= 0; j--) {
			if (compare(c[j], n) != 1) {
				index = j;
				break;
			}
		}
		res = res + char(index + '0');
		n = sub(n, c[index]);
	}
	while (res[0] == '0' && res.size() > 1)
		res.erase(0, 1);
	return res;
}


int main() {
    string a, b;
    cin >> a >> b;
    cout << div(a, b);
}
