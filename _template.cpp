#include <iostream>
#include <ios>
#include <sstream>

#include <bit>
#include <concepts>
#include <chrono>

#include <random>

#include <algorithm>
#include <numeric>
#include <cmath>

#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>

#include <ranges>

using namespace std::literals;
using namespace std::ranges;
using namespace std::numbers;

using std::cout;
using std::cin;
using std::cerr;
using std::flush;
using std::endl;
using std::print;
using std::string;
using std::vector;
using std::pair;
using std::map;
using std::unordered_map;
using std::set;
using std::unordered_set;

using ll = long long;
template<typename T>
using Graph = vector<vector<T>>;

template<typename T>
constexpr T Inf() { return std::numeric_limits<T>::infinity(); }
template<typename T>
constexpr pair<T, T> LR() { return { std::numeric_limits<T>::lowest(), std::numeric_limits<T>::max() }; }

constexpr int64_t Now() { return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count(); }

#define YESNO(flag) cout << (flag ? "YES" : "NO") << endl;
#define YesNo(flag) cout << (flag ? "Yes" : "No") << endl;
#define yesno(flag) cout << (flag ? "yes" : "no") << endl;

#define Input(type, n) type n; cin >> n
#define VInputs(type, v, n) vector<type> v(n); for(auto& e : v) cin >> e
#define GInputs(type, g, x, y) Graph<type> g(x, vector<type>(y)); for(auto& v : g) for(auto& e : v) cin >> e

#define Rep(i, n) for(auto i = 0; i < n; ++i)
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
T Parse(std::string_view str) {
    std::stringstream ss;
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

    friend std::ostream& operator<<(std::ostream& os, const Point& p) {
        os << "{ " << p.x << ", " << p.y << " }";
        return os;
    }
};

int main() {
    //TODO

    return 0;
}