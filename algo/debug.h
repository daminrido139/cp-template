#pragma once
#include <bits/stdc++.h>
using namespace std;

// ----------- Printing Utilities -----------

template <typename T>
void _print(const T &x) { cerr << x; }

// Variadic template for multiple arguments
template <typename T, typename... Ts>
void _print(const T &first, const Ts &...rest)
{
    cerr << first;
    if (sizeof...(rest))
        cerr << " ";
    _print(rest...);
}

// For pair
template <typename T1, typename T2>
void _print(const pair<T1, T2> &p)
{
    cerr << "(" << p.first << ", " << p.second << ")";
}

// For vector
template <typename T>
void _print(const vector<T> &v)
{
    cerr << "[ ";
    for (auto &x : v)
        cerr << x << " ";
    cerr << "]";
}

// For 2D vector
template <typename T>
void _print(const vector<vector<T>> &v)
{
    cerr << "\n";
    for (auto &row : v)
    {
        cerr << "[ ";
        for (auto &x : row)
            cerr << x << " ";
        cerr << "]\n";
    }
}

// For array
template <typename T, size_t N>
void _print(const array<T, N> &arr)
{
    cerr << "[ ";
    for (auto &x : arr)
        cerr << x << " ";
    cerr << "]";
}

// For 2D array
template <typename T, size_t N, size_t M>
void _print(T (&arr)[N][M])
{
    cerr << "\n";
    for (size_t i = 0; i < N; i++)
    {
        cerr << "[ ";
        for (size_t j = 0; j < M; j++)
            cerr << arr[i][j] << " ";
        cerr << "]\n";
    }
}

// For set & multiset
template <typename T>
void _print(const set<T> &s)
{
    cerr << "{ ";
    for (auto &x : s)
        cerr << x << " ";
    cerr << "}";
}
template <typename T>
void _print(const multiset<T> &s)
{
    cerr << "{ ";
    for (auto &x : s)
        cerr << x << " ";
    cerr << "}";
}

// For unordered_set & unordered_multiset
template <typename T>
void _print(const unordered_set<T> &s)
{
    cerr << "{ ";
    for (auto &x : s)
        cerr << x << " ";
    cerr << "}";
}
template <typename T>
void _print(const unordered_multiset<T> &s)
{
    cerr << "{ ";
    for (auto &x : s)
        cerr << x << " ";
    cerr << "}";
}

// For map & multimap
template <typename K, typename V>
void _print(const map<K, V> &m)
{
    cerr << "{ ";
    for (auto &p : m)
        cerr << "(" << p.first << ": " << p.second << ") ";
    cerr << "}";
}
template <typename K, typename V>
void _print(const multimap<K, V> &m)
{
    cerr << "{ ";
    for (auto &p : m)
        cerr << "(" << p.first << ": " << p.second << ") ";
    cerr << "}";
}

// For unordered_map & unordered_multimap
template <typename K, typename V>
void _print(const unordered_map<K, V> &m)
{
    cerr << "{ ";
    for (auto &p : m)
        cerr << "(" << p.first << ": " << p.second << ") ";
    cerr << "}";
}
template <typename K, typename V>
void _print(const unordered_multimap<K, V> &m)
{
    cerr << "{ ";
    for (auto &p : m)
        cerr << "(" << p.first << ": " << p.second << ") ";
    cerr << "}";
}

// For stack
template <typename T>
void _print(stack<T> s)
{ // pass by value to avoid modifying the original
    cerr << "[ ";
    while (!s.empty())
    {
        cerr << s.top() << " ";
        s.pop();
    }
    cerr << "]";
}

// For queue
template <typename T>
void _print(queue<T> q)
{
    cerr << "[ ";
    while (!q.empty())
    {
        cerr << q.front() << " ";
        q.pop();
    }
    cerr << "]";
}

// For priority_queue (max-heap by default)
template <typename T>
void _print(priority_queue<T> pq)
{
    cerr << "[ ";
    while (!pq.empty())
    {
        cerr << pq.top() << " ";
        pq.pop();
    }
    cerr << "]";
}

// For priority_queue (min-heap version)
template <typename T, typename Container, typename Compare>
void _print(priority_queue<T, Container, Compare> pq)
{
    cerr << "[ ";
    while (!pq.empty())
    {
        cerr << pq.top() << " ";
        pq.pop();
    }
    cerr << "]";
}

// For tuple
template <typename Tuple, size_t... I>
void _print_tuple_impl(const Tuple &t, index_sequence<I...>)
{
    ((cerr << (I == 0 ? "" : ", ") << get<I>(t)), ...);
}

template <typename... Args>
void _print(const tuple<Args...> &t)
{
    cerr << "(";
    _print_tuple_impl(t, index_sequence_for<Args...>{});
    cerr << ")";
}

// Debug macro
#define debug(...) cerr << "[" << #__VA_ARGS__ << "] = ", _print(__VA_ARGS__), cerr << "\n"

// ----------- Helpful Macros & Typedefs -----------
