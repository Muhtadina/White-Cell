// JC-A. White Cells

#include <iostream>
using namespace std;
int main()
{
    int H, W;
    cin >> H >> W;
    int h, w;
    cin >> h >> w;
    int white = (H-h)*(W-w);
    cout << white << endl;
    return 0;
}
