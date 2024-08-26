# Hướng dẫn sử dụng trình sinh test case

Chọn ngôn ngữ: [English](README-en.md) | [Tiếng Việt](README-vi.md)

- **Bước 1**: Giải nén file .zip của thư mục chứa file này. Nếu bạn đã thực hiện bước này thì có thể bỏ qua.

- **Bước 2**: Mở các file ``run.cpp``, `generator.h` và `solution.cpp` bằng một IDE bất kỳ (khuyên dùng: CodeBlocks).

- **Bước 3**: File `solution.cpp` là nơi để bạn ghi lời giải của bài toán. Lời giải cần nhập dữ liệu từ file có tên `input.txt` và xuất dữ liệu ra một file có tên `output.txt`. Nếu trong thư mục không bao gồm hai file này, các bạn có thể thử tạo hai file như thế để chạy thử.

- **Bước 4**: File `run.cpp` là nơi để bạn tùy chỉnh một số thông số cho bộ test của mình. Chỉnh sửa số lượng test trong bộ test ở dòng 7 (int testnum = ...), và chỉnh sửa mã bài ở dòng 8 (string prob_name = "...").

- **Bước 5**: File generator.h là nơi để bạn viết trình sinh test. Bạn cần viết một hàm có dạng như sau:

	```c++

	void gen (int iTest, int testnum, string target_file)
	```

	Trong đó:
		- **iTest** là số thứ tự của test hiện tại
		- **testnum** là số lượng test của bộ test
		- **target_file** là tên file đầu ra của hàm

	Nói cho dễ hiểu, hàm của bạn cần phải in ra file có tên là giá trị của biến `target_file` input của một test có số thứ tự là giá trị của biến iTest và số lượng testcase của bộ test là giá trị của biến testnum.

- Bước 6: Chạy file `run.cpp` và tận hưởng thành quả.

## Ví dụ:
Ví dụ đơn giản cho bài tính tổng 1 dãy số gồm `n` số nguyên

input:
	- Dòng đầu tiên gồm một số nguyên `n` (1 <= n <= 100)
	- Dòng thứ hai gồm `n` số nguyên `a1, a2, ..., an` (-1000 <= ai <= 1000)
Output:
	- Một số nguyên là tổng của dãy số

File `generator.h`:

```c++
#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết
    int n = random(1, 100);
    vector<int> a = random_vector(n, -1000, 1000);
    
    cout << n << endl;
    print_vector(a, cout);
    return;
}


```

File `solution.cpp`:

```c++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int n;
    vector<int> a;
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;
}

```

File `run.cpp`:

```c++
#include "../lib/create.h"
#include "generator.h"

int main()
{
    srand(24022007);
    int start = 1;
    int testnum = 100;
    string prob_name = "testcase";

    create_all_and_compile(prob_name, start, testnum);
    for(int i = start; i <= testnum; i ++)
    {
        cout << "Test #" << str(i) << ": ";
        gen(i, testnum, "input.txt");
        cop("input.txt", prob_name + "\ Test" + str(i) + "\\" + prob_name + ".inp");
        cout << "Generated - ";
        system("solution.exe");
        cop("output.txt", prob_name + "\ Test" + str(i) + "\\" + prob_name + ".out");
        cout << "Finished \n";
    }

    return 0;
}

```

Đây là một ví dụ đơn giản về cách sử dụng trình sinh test case. Bạn có thể tùy chỉnh các thông số trong file `run.cpp` để phù hợp với bài toán của mình. Đặc biệt bạn ở `generator.h` có thể sử dụng các hàm sinh test case có sẵn trong thư viện `library.h` để tạo ra các test case phức tạp hơn, và dựa vào `iTest` để tạo ra dữ liệu phù hợp cho từng test case. Ví dụ với với những `iTest` nhỏ hơn 10, bạn có thể tạo ra các test case đơn giản, còn với những `iTest` lớn hơn 10, bạn có thể tạo ra các test case phức tạp hơn.

## Các hàm được hỗ trợ bao gồm:

- **random()**

	random(): long long sinh một số ngẫu nhiên trong đoạn `[0, 1e18]`

- **random(a)**

	random(long long a): long long sinh một số ngẫu nhiên trong đoạn `[0, a]`

- **random(a, b)**

	random(long long a, long long b): long long sinh một số ngẫu nhiên trong đoạn `[a, b]`

- **random_vector(n, x)**

	vector < T> random_vector(int n, T x)
	Tạo một vector gồm `n` số ngẫu nhiên trong khoảng `[0, x]`

- **random_vector(n, l, r)**

	vector < T> random_vector(int n, T l, T r)
	Tạo một vector gồm `n` số ngẫu nhiên trong khoảng `[l, r]`

- **random_string(n)**

	string random_string(int n): Tạo một chuỗi ngẫu nhiên `n` ký tự chữ in thường, in hoa và số

- **random_string(n, charset)**

	string random_string(int n, string charset): Tạo ngẫu nhiên 1 chuỗi `n` ký tự được lấy từ chuỗi `charset`.

- **random_string(n, type)**

	string random_string(int n, int type): Tạo ngẫu nhiên 1 chuỗi `n` ký tự theo type:
	- type = 0: Chỉ gồm các ký tự thường
	- type = 1: Chỉ gồm các ký tự in hoa
	- type = 2: Chỉ gồm các ký tự số
	- type = 3: Gồm các ký tự in thường hoặc in hoa
	- type = 4: Gồm các ký tự in thường hoặc số
	- type = 5: Gồm các ký tự in hoa học số
	- type = 6: Gồm cả 3 loại ký tử như hàm `random_string(n)`

- **print_vector(a, cout)**

    void print_vector(vector < T> a, ostream &cout): In ra màn hình một vector `a` với dấu cách ngăn cách giữa các phần tử

- **print_matrix(a, cout)**

    void print_matrix(vector <vector < T>> a, ostream &cout): In ra màn hình một ma trận `a` với dấu cách ngăn cách giữa các phần tử