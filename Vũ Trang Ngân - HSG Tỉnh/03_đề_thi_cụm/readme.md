Nhập vào một chuỗi, tính tổng các số trong dãy
s = "12ab-32-23abc1000a
Kết quả là: 1003

sum = 0, temp = 0;
flag = 1;
s = s + "N";
Duyệt từng ký tự trong string:
	Nếu ký tự là '-':
		Nếu flag = 1:
			sum += temp;
		Ngược lại:
			sum -= temp;
			flag = 1
		temp = 0;
		flag = 0;
	Ngược lại, nếu ký tự là số:
		temp = temp * 10 + s[i] - '0'
	Ngược lại:
		Nếu flag = 1:
			sum += temp;
		Ngược lại:
			sum -= temp;
			flag = 1
		temp = 0;



Khi nào cần cộng trừ vào sum: khi gặp ký tự khác ký tự số

sum = 0, temp = 0;
flag = 1; // 1 la +, -1 la -
s = s + "N";
Duyệt từng ký tự trong string:
	Nếu là ký tự số:
		temp = temp * 10 + s[i] - '0'
	Ngược lại:
		sum += flag * temp;
		flag = 1
		Nếu là ký tự '-':
			flag = -1
		


Nhập vào một chuỗi bao gồm ký tự số và ký tự chữ cái latinh.
Biết rằng tối đa chỉ có 6 ký tự số liên tiếp
Độ dài chuỗi là |s| <= 10^6
Tìm số nguyên tố lớn nhất trong dãy, nếu không có số nguyên tố nào, in ra -1
s = "13ab2337abc233a"
Kết quả là 2337



vector <bool> b;

Nhập vào một chuỗi bao gồm ký tự số và ký tự chữ cái latinh.
Biết rằng tối đa chỉ có 6 ký tự số liên tiếp
Độ dài chuỗi là |s| <= 10^6
Tìm một chuỗi con trong S là số nguyên tố lớn nhất trong dãy, nếu không có số nguyên tố nào, in ra -1
s = "123abc132dd21252c"
Kết quả là 23


string p = "123"

for (int i = 0; i < p.size(); i++) {
	for (int len = 1; len <= p.size() - i; len ++) {
		string t = p.substr(i, len);
		long long t2 = strToNumber(t);
		if (nt[t2]) ...
	}
}

if (x > 10) {
	cout << x * x;
}