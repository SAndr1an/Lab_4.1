#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, i;
    double result;

    cout << "N = ";
    cin >> N;

    // while
    result = 0;
    i = 3;
    while (i <= N) {
        result += ((cos(i / 2) + sin(2 * i)) / (1 + sin(cos(i))));
        i++;
    }
    cout << "Result using while: " << result << endl;

    // do-while
    result = 0;
    i = 3;
    do {
        result += ((cos(i / 2) + sin(2 * i)) / (1 + sin(cos(i))));
        i++;
    } while (i <= N);
    cout << "Result using do-while: " << result << endl;

    // for ++
    result = 0;
    for (i = 3; i <= N; i++) {
        result += ((cos(i / 2) + sin(2 * i)) / (1 + sin(cos(i))));
    }
    cout << "Result using for (ascending): " << result << endl;

    // for --
    result = 0;
    for (i = N; i >= 3; i--) {
        result += ((cos(i / 2) + sin(2 * i)) / (1 + sin(cos(i))));
    }
    cout << "Result using for (descending): " << result << endl;
    system("pause");
    return 0;
}