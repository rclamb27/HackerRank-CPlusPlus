#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    while(a<=b)
    {
        if(1 <= a && a <= 9)
        {
            if (a == 1) printf("one");
            if (a == 2) printf("two");
            if (a == 3) printf("three");
            if (a == 4) printf("four");
            if (a == 5) printf("five");
            if (a == 6) printf("six");
            if (a == 7) printf("seven");
            if (a == 8) printf("eight");
            if (a == 9) printf("nine");
           
        }
        else if (a % 2 == 0)
        {
            printf("even");
        }
        else 
        {
            printf("odd");
        }
        a++;
        printf("\n");
    }
    return 0;
}
