#pragma once

#include <iostream>
#include <ios>
#include <sstream>

#include <concepts>

#include <random>

#include <algorithm>
#include <numeric>
#include <cmath>

#include <string>
#include <vector>
#include <map>

#include <ranges>

using namespace std;
using namespace literals;
using namespace ranges;

using ll = long long;
template<typename T>
using Graph = vector<vector<T>>;

#define all(obj) (obj).begin(), (obj).end()

#define YESNO(flag) cout << (flag ? "YES" : "NO") << endl;
#define YesNo(flag) cout << (flag ? "Yes" : "No") << endl;
#define yesno(flag) cout << (flag ? "yes" : "no") << endl;

#define Debug(x) cerr << "\t(line:" << __LINE__ << ") - " << #x << ": " << x << endl;
#define VDebug(v) \
cerr << "\t(line): " << __LINE__ << ")\n" << #v << ": { "; \
for (auto& e : v) cerr << e << ", "; \
cerr << "}" << endl;
#define GDebug(g) \
cerr << "\t(line): " << __LINE__ << ")\n" << #g << ": {\n"; \
for (auto& v : g) {\
    cerr << "\t{ ";\
    for (auto& e : v) \
        cerr << e << ", "; \
    cerr << "}\n";\
}\
cerr << "}" << endl;


#define INPUT(n) int n; cin >> n;
#define INPUTS(n, v, type) vector<type> v(n); for(auto& e : v) cin >> e;
#define GINPUTS(n, g, type) Graph<type> g(n, vector<type>(n)); for(auto& v : g) for(auto& e : v) cin >> e;

#define LOOP(n) for(auto __loop_num = 0; __loop_num < n; __loop_num++)

template<typename T>
T myPow(const T& x, const size_t& n) {
    T r = 1;
    for ([[maybe_unused]] size_t i : iota_view(size_t(0), n)) {
        r *= x;
        cout << r << endl;
    }

    return r;
}

/*
template<integral T>
string numToStr(const T& n, ios_base& base = dec) {
    stringstream ss{};
    ss << base << n;
    return ss.str();
}
*/