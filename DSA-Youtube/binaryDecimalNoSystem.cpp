#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    int multiplier = 1;

    while (n != 0) {
        int bit = n & 1;
        
        ans += bit * multiplier;

        multiplier *= 10;
        
        n = n >> 1;
    }

    cout << "Answer is: " << ans << endl;
    return 0;
}
