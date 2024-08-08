#include <iostream>
#include <cstring>

using namespace std;

int arr[2000001] = {};
int fronts = 0;
int backs = -1;

constexpr unsigned int HashCode(const char *str)
{
    return str[0] ? static_cast<unsigned int>(str[0]) + 0xEDB8832Full * HashCode(str + 1) : 8603;
}

void push(int n)
{
    arr[++backs] = n;
}
void pop()
{
    if (fronts <= backs)
    {
        cout << arr[fronts++] << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }
}

void size()
{
    if (fronts <= backs)
    {
        cout << backs - fronts + 1 << '\n';
    }
    else
    {
        cout << 0 << '\n';
    }
}

void empty()
{
    if (fronts <= backs)
    {
        cout << 0 << '\n';
    }
    else
    {
        cout << 1 << '\n';
    }
}
void front()
{
    if (fronts <= backs)
    {
        cout << arr[fronts] << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }
}
void back()
{
    if (fronts <= backs)
    {
        cout << arr[backs] << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, num;
    char s[101];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (strcmp(s, "push") == 0)
            cin >> num;
        switch (HashCode(s))
        {
        case HashCode("push"):
            push(num);
            break;
        case HashCode("pop"):
            pop();
            break;
        case HashCode("size"):
            size();
            break;
        case HashCode("empty"):
            empty();
            break;
        case HashCode("front"):
            front();
            break;
        case HashCode("back"):
            back();
            break;
        }
    }

    return 0;
}