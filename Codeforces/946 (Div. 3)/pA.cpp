#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        int screens = 0;

        while (y > 0 || x > 0) {
            screens++;
            int available_cells = 15;
            int place_2x2 = min(y, 2);
            y -= place_2x2;
            available_cells -= place_2x2 * 4;
            int place_1x1 = min(x, available_cells);
            x -= place_1x1;
        }

        cout << screens << endl;
    }

    return 0;
}
