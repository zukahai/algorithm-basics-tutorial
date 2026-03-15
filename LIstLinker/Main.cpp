#include <bits/stdc++.h>
#include "library.h"

using namespace std;

int main() {
    LL list;
    CreateLL(10, list);
    InsertNodeAfterLL(20, list);
    InsertNodeAfterLL(35, list);
    InsertNodeAfterLL(40, list);
    
    printf("List 1: \n");
    TraverseLL(list);
    printf("%d", CountEven(list));
}