/*****************************************************************************
* @author  : xhc                                                             *
*****************************************************************************/

// C
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
using namespace std;

const int N1 = 1e1 + 5;
const int N2 = 1e2 + 5;
const int N3 = 1e3 + 5;
const int N4 = 1e4 + 5;
const int N5 = 1e5 + 5;
const int N6 = 1e6 + 5;
const int N7 = 1e7 + 5;
#define ll long long
#define pb push_back
#define ft(i, st, n) for(int i = st; i < (int)(n); i ++)
#define fte(i, st, n) for(int i = st; i <= (int)(n); i ++)
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define scanf scanf_s
int n, m;
string s;
stringstream ss;
stack<double>q;
string a[N2];
int uid;
void Input() {
    uid = -1;
    getline(cin, s);
    ss << s;
    while( getline(ss, s, ' ') ) {
        a[++uid] = s;
    }
    return;
}
void Solve() {
    for( int i = uid; i >= 0; i-- ) {
        if( a[i].length() == 1 && ( a[i][0] == '+' || a[i][0] == '-' || a[i][0] == '*' || a[i][0] == '/' ) ) {
            double aa = q.top(); q.pop();
            double bb = q.top(); q.pop();
            if( a[i][0] == '+' ) q.push(aa + bb);
            else if( a[i][0] == '-' ) q.push(aa - bb);
            else if( a[i][0] == '*' ) q.push(( aa * bb ));
            else if( a[i][0] == '/' ) {
                if( bb == 0 ) {
                    cout << "ERROR\n";
                    exit(0);
                }
                q.push(aa / bb);
            }
        } else {
            double x = atof(a[i].c_str());
            q.push(x);
        }
    }
    return;
}
void Print() {
    cout << fixed << setprecision(1) << q.top() << endl;
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    Input();
    Solve();
    Print();
    return 0;
}
