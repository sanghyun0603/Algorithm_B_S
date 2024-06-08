#include <iostream>

using namespace std;

int arr[501] = {};

int main()
{
    int H, W;
    int lmax = 0;
    int rmax = 0;
    int rain = 0;
    cin >> H >> W;
    for (int i = 0; i < W; i++)
    {
        cin >> arr[i];
    }
    // 양끝은 물이고이지 못함
    for (int i = 1; i < W - 1; i++)
    {
        lmax = 0;
        rmax = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] < arr[j])
            {
                if (lmax < arr[j])
                    lmax = arr[j];
            }
        }
        for (int j = i; j < W; j++)
        {
            if (arr[i] < arr[j])
            {
                if (rmax < arr[j])
                    rmax = arr[j];
            }
        }
        if (lmax != 0 && rmax != 0)
        {
            int minmax = lmax <= rmax ? lmax : rmax;
            rain += minmax - arr[i];
        }
    }
    cout << rain << '\n';
    return 0;
}