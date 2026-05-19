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
    
    INPUTS(2, v, int);

    cout << v[0] - v[1] << endl;
    
    return 0;
}