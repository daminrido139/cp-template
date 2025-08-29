#include <bits/stdc++.h>
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 0
#endif
#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()   
const int MOD = 1e9 + 7;
int dx4[] = {-1, 1, 0, 0};
int dy4[] = {0, 0, -1, 1};
int dx8[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy8[] = {-1, 0, 1, -1, 1, -1, 0, 1};
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    // Example: debug basic types
    int a = 42;
    long long b = 1e12;
    string s = "Hello CP";

    debug(a, b, s);

    // Example: debug vector
    vector<int> v = {1, 2, 3, 4, 5};
    debug(v);

    // Example: debug 2D vector
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    debug(grid);

    // Example: debug set and map
    set<int> st = {5, 3, 9};
    map<int, string> mp = {{1, "one"}, {2, "two"}, {3, "three"}};
    debug(st);
    debug(mp);

    // Example: debug stack and queue
    stack<int> stck;
    stck.push(10);
    stck.push(20);
    stck.push(30);

    queue<int> q;
    q.push(100);
    q.push(200);

    debug(stck);
    debug(q);

    // Example: debug tuple
    tuple<int, string, double> t = {7, "tuple", 3.14};
    debug(t);

    return 0;
}
