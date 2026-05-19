#include <iostream>
#include <ios>
#include <sstream>

#include <concepts>
#include <chrono>

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
using namespace numbers;

using ll = long long;
template<typename T>
using Graph = vector<vector<T>>;

template<typename T>
constexpr T Inf() { return numeric_limits<T>::infinity(); }

constexpr int64_t Now() { return chrono::duration_cast<chrono::milliseconds>(chrono::system_clock::now().time_since_epoch()).count(); }

#define all(obj) (obj).begin(), (obj).end()

#define YESNO(flag) cout << (flag ? "YES" : "NO") << endl;
#define YesNo(flag) cout << (flag ? "Yes" : "No") << endl;
#define yesno(flag) cout << (flag ? "yes" : "no") << endl;

#define INPUT(n) int n; cin >> n;
#define INPUTS(n, v, type) vector<type> v(n); for(auto& e : v) cin >> e;
#define GINPUTS(n, g, type) Graph<type> g(n, vector<type>(n)); for(auto& v : g) for(auto& e : v) cin >> e;

#define Rep(n) for(auto __loop_num = 0; __loop_num < n; __loop_num++)
#define Foreach(e, v) for(auto&& e : v)

#define Debug(x) cerr << "\t(line:" << __LINE__ << ") - " << #x << ": " << x << endl;
#define VDebug(v) \
cerr << "\t(line): " << __LINE__ << ")\n" << #v << ": { "; \
Foreach(__elem, v) cerr << __elem << ", "; \
cerr << "}" << endl;
#define GDebug(g) \
cerr << "\t(line): " << __LINE__ << ")\n" << #g << ": {\n"; \
Foreach(v, g) {\
    cerr << "\t{ ";\
    Foreach(__elem, v) \
        cerr << __elem << ", "; \
    cerr << "}\n";\
}\
cerr << "}" << endl;

template<typename T>
T Parse(string_view str) {
    stringstream ss;
    T value;
    ss << str;
    ss >> value;
    return value;
}

struct Point {
    int x, y;

    constexpr Point operator+(const Point& other) const {
        return Point{ x + other.x, y + other.y };
    }
    constexpr Point operator-(const Point& other) const {
        return Point{ x - other.x, y - other.y };
    }
    constexpr Point operator*(const Point& other) const {
        return Point{ x * other.x, y * other.y };
    }
    constexpr Point operator/(const Point& other) const {
        return Point{ x / other.x, y / other.y };
    }

    constexpr Point& operator+=(const Point& rhs) {
        *this = *this + rhs;
        return *this;
    }
    constexpr Point& operator-=(const Point& rhs) {
        *this = *this - rhs;
        return *this;
    }
    constexpr Point& operator*=(const Point& rhs) {
        *this = *this * rhs;
        return *this;
    }
    constexpr Point& operator/=(const Point& rhs) {
        *this = *this / rhs;
        return *this;
    }

    constexpr auto operator<=>(const Point& rhs) const = default;

    constexpr int dist(const Point& other) const {
        return abs(other.x - x) + abs(other.y - y);
    }

    friend ostream& operator<<(ostream& os, const Point& p) {
        os << "{ " << p.x << ", " << p.y << " }";
        return os;
    }
};

int main() {
    //TODO
    
    return 0;
}