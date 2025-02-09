# How to use the test case generator

Select the language: [English](README-en.md), [Vietnamese](README-vi.md)

- **Step 1**: Unzip the .zip file of the directory containing this file. If you have already done this step, you can skip it.

- **Step 2**: Open the files `run.cpp`, `generator.h`, and `solution.cpp` with any IDE (recommended: CodeBlocks).

- **Step 3**: The `solution.cpp` file is where you write the solution to the problem. The solution should read input from a file named `input.txt` and output the result to a file named `output.txt`. If these two files are not included in the directory, you can create them to test.

- **Step 4**: The `run.cpp` file is where you can customize some parameters for your test suite. Modify the number of tests in the test suite on line 7 (`int testnum = ...`), and modify the problem code on line 8 (`string prob_name = "..."`).

- **Step 5**: The `generator.h` file is where you write the test case generator function. You need to write a function with the following format:

    ```c++

    void gen(int iTest, int testnum, string target_file)
    ```

    Where:
        - **iTest** is the current test number
        - **testnum** is the total number of tests in the test suite
        - **target_file** is the output file name of the function

    In simple terms, your function needs to print to a file with the name specified by the `target_file` variable the input of a test with the test number specified by the `iTest` variable and the total number of test cases in the test suite specified by the `testnum` variable.

- Step 6: Run the `run.cpp` file and enjoy the results.

## Example:
A simple example for a problem of summing a sequence of `n` integers.

Input:
    - The first line contains an integer `n` (1 <= n <= 100)
    - The second line contains `n` integers `a1, a2, ..., an` (-1000 <= ai <= 1000)
Output:
    - An integer representing the sum of the sequence

`generator.h` file:

```c++
#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Print the necessary input
    int n = random(1, 100);
    vector<int> a = random_vector(n, -1000, 1000);
    
    cout << n << endl;
    print_vector(a, cout);
    return;
}


```

`solution.cpp` file:

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

`run.cpp` file:

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

This is a simple example of how to use the test case generator. You can customize the parameters in the `run.cpp` file to fit your problem. Especially in the `generator.h` file, you can use the available test case generation functions in the `library.h` library to create more complex test cases, and use the `iTest` variable to generate appropriate data for each test case. For example, for `iTest` less than 10, you can create simple test cases, while for `iTest` greater than 10, you can create more complex test cases.

## Supported functions include:

- **random()**

    random(): long long generates a random number in the range `[0, 1e18]`

- **random(a)**

    random(long long a): long long generates a random number in the range `[0, a]`

- **random(a, b)**

    random(long long a, long long b): long long generates a random number in the range `[a, b]`

- **random_vector(n, x)**

    vector < T> random_vector(int n, T x)
    Creates a vector of `n` random numbers in the range `[0, x]`

- **random_vector(n, l, r)**

    vector < T> random_vector(int n, T l, T r)
    Creates a vector of `n` random numbers in the range `[l, r]`

- **random_string(n)**

    string random_string(int n): Creates a random string of `n` lowercase letters, uppercase letters, and numbers

- **random_string(n, charset)**

    string random_string(int n, string charset): Creates a random string of `n` characters taken from the `charset` string.

- **random_string(n, type)**

    string random_string(int n, int type): Creates a random string of `n` characters according to the type:
    - type = 0: Only lowercase letters
    - type = 1: Only uppercase letters
    - type = 2: Only numbers
    - type = 3: Lowercase letters or uppercase letters
    - type = 4: Lowercase letters or numbers
    - type = 5: Uppercase letters or numbers
    - type = 6: All three types of characters like the `random_string(n)` function

- **print_vector(a, cout)**

    void print_vector(vector < T> a, ostream &cout): Prints a vector `a` to the console with spaces between elements

- **print_matrix(a, cout)**

    void print_matrix(vector <vector < T>> a, ostream &cout): Prints a matrix `a` to the console with spaces between elements

Create an English markdown file.