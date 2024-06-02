#include <bits/stdc++.h>

using namespace std;

string timeInWords(int h, int m) {
    vector<string> hours = {
        "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
        "eleven", "twelve"
    };
    vector<string> minutes = {
        "o' clock", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen", "quarter", "sixteen", "seventeen",
        "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four",
        "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine", "half"
    };
    if (m == 0) {
        return hours[h - 1] + " " + minutes[m];
    } else if (m == 1) {
        return minutes[m] + " minute past " + hours[h - 1];
    } else if (m == 15) {
        return minutes[m] + " past " + hours[h - 1];
    } else if (m == 30) {
        return minutes[m] + " past " + hours[h - 1];
    } else if (m == 45) {
        return minutes[60 - m] + " to " + hours[h % 12];
    } else if (m == 59) {
        return minutes[60 - m] + " minute to " + hours[h % 12];
    } else if (m < 30) {
        return minutes[m] + " minutes past " + hours[h - 1];
    } else {
        return minutes[60 - m] + " minutes to " + hours[h % 12];
    }
}

int main() {
    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    cout << result << "\n";

    return 0;
}