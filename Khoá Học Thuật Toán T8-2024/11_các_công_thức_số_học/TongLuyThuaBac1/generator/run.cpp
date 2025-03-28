#include "../lib/create.h"
#include "generator.h"

int main()
{
    srand(time(NULL));
    int start = 1;
    int testnum = 50;
    string prob_name = "TongLuyThuaBac1";

    create_all_and_compile(prob_name, start, testnum);
    for(int i = start; i <= testnum; i ++)
    {
        cout << "Test #" << str(i) << ": ";
        gen(i, testnum, "input.txt");
        cop("input.txt", prob_name + "\\Test" + str(i) + "\\" + prob_name + ".inp");
        cout << "Generated - ";
        system("solution.exe");
        cop("output.txt", prob_name + "\\Test" + str(i) + "\\" + prob_name + ".out");
        cout << "Finished \n";
    }

    return 0;
}
