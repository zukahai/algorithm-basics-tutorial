#include<bits/stdc++.h>
using namespace std;

template <typename T>
void print_vector (vector<T> a, ofstream &cout) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
}

struct Subtask
{
    int percent;
    int lenN;
    int lenAi;
};


template <typename T>
void print_matrix (vector<vector<T>> a, ofstream &cout) {
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}


long long random();
long long random(long long l, long long r);
vector<long long> random_vector(int n, long long l, long long r);
vector<long long> random_vector(int n, long long x);
string random_string(int n, string charset);
string random_string(int n);
string random_string(int n, int type);
long long random_len(int len);
vector<long long> random_vector(vector<Subtask> subtasks, int iTest, int testnum);


/**
 * Generates a random long long number.
 * 
 * @return The generated random number.
 */
long long random()
{
    long long ans = 1;
    int length = rand() % 17 + 1;
    for (int i = 0; i < length; i++)
    {
        ans = ans * 10 + rand() % 10;
    }
    return ans;
}


/**
 * Generates a random long long number within the range [l, r].
 * 
 * @param l The lower bound (inclusive) for the generated random number.
 * @param r The upper bound (inclusive) for the generated random number.
 * @return The generated random number.
 */
long long random(long long l, long long r)
{
    return l + random() % (r - l + 1);
}



/**
 * Generates a vector of random long long numbers within the range [l, r].
 * 
 * @param n The size of the vector.
 * @param l The lower bound (inclusive) for the generated random numbers.
 * @param r The upper bound (inclusive) for the generated random numbers.
 * @return The generated vector of random long long numbers.
 */
vector<long long> random_vector(int n, long long l, long long r)
{
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        a[i] = random(l, r);
    }
    return a;
}

/**
 * Generates a random string of length n using the given charset.
 * 
 * @param n The length of the generated random string.
 * @param charset The charset used to generate the random string.
 * @return The generated random string.
 */

string random_string(int n, string charset)
{
    string s = "";
    for (int i = 0; i < n; i++)
    {
        s += charset[rand() % charset.size()];
    }
    return s;
}

/**
 * Generates a random string of length n using the default charset.
 * 
 * @param n The length of the generated random string.
 * @return The generated random string.
 */

string random_string(int n)
{
    return random_string(n, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
}


/**
 * Generates a random string of length n using the given type.
 * 
 * @param n The length of the generated random string.
 * @param type The type of the generated random string.
 * @return The generated random string.
 */

string random_string(int n, int type)
{
    string charset = "";
    switch (type) {
        case 0:
            charset = "abcdefghijklmnopqrstuvwxyz";
            break;
        case 1:
            charset = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            break;
        case 2:
            charset = "0123456789";
            break;
        case 3:
            charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
            break;
        case 4:
            charset = "abcdefghijklmnopqrstuvwxyz0123456789";
            break;
        case 5:
            charset = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
            break;
        case 6:
            charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
            break;
        default:
            charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
            break;
    }
}


long long random_len(int len) {
    long long ans = 0;
    for (int i = 0; i < len; i++) {
        ans = ans * 10 + rand() % 10;
    }
    return ans;
}

vector<long long> random_vector(vector<Subtask> subtasks, int iTest, int testnum) {
    int sumPercent = 0;
    for (int i = 0; i < subtasks.size(); i++) {
        sumPercent += subtasks[i].percent;
    }

    for (int i = 0; i < subtasks.size(); i++) {
        subtasks[i].percent = subtasks[i].percent * 100 / sumPercent;
    }

    for (int i = 1; i < subtasks.size(); i++) {
        subtasks[i].percent += subtasks[i - 1].percent;
    }

    Subtask st = subtasks[0];
    for (int i = 0; i < subtasks.size(); i++) {
        if (iTest <= testnum * subtasks[i].percent / 100.0) {
            st = subtasks[i];
            break;
        }
    }
    vector<long long> a;
    int n = random_len(st.lenN);
    for (int i = 0; i < n; i++) {
        a.push_back(random_len(st.lenAi));
    }
    return a;
}

long long random(vector<Subtask> subtasks, int iTest, int testnum) {
    int sumPercent = 0;
    for (int i = 0; i < subtasks.size(); i++) {
        sumPercent += subtasks[i].percent;
    }

    for (int i = 0; i < subtasks.size(); i++) {
        subtasks[i].percent = subtasks[i].percent * 100 / sumPercent;
    }

    for (int i = 1; i < subtasks.size(); i++) {
        subtasks[i].percent += subtasks[i - 1].percent;
    }

    Subtask st = subtasks[0];
    for (int i = 0; i < subtasks.size(); i++) {
        if (iTest <= testnum * subtasks[i].percent / 100.0) {
            st = subtasks[i];
            break;
        }
    }
    return random_len(st.lenN);
}