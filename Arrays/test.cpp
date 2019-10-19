#include <catch2/catch.hpp>
#include <list>

using namespace std;

extern void Problem_6_1(vector<int> &arr, int pivot);
extern void Problem_6_1_Variant_1(vector<int> &arr, int k1, int k2, int k3);
extern void Problem_6_1_Variant_2(vector<int> &arr, int k1, int k2, int k3, int k4);
extern void Problem_6_1_Variant_3(vector<bool> &arr);
extern void Problem_6_1_Variant_4(vector<bool> &arr);
extern vector<int> Problem_6_2(const vector<int> &arr);
extern string Problem_6_2_Varaint(const string &a, const string &b);

TEST_CASE("6.1") {
    vector<int> a1{0, 1, 2, 0, 2, 1, 1};
    vector<int> r1{0, 0, 2, 2, 1, 1, 1};
    Problem_6_1(a1, 3);
    REQUIRE(a1 == r1);

    vector<int> a2{0, 1, 2, 0, 2, 1, 1};
    vector<int> r2{0, 0, 1, 1, 1, 2, 2};
    Problem_6_1_Variant_1(a2, 0, 1, 2);
    REQUIRE(a2 == r2);

    vector<int> a3{2, 2, 3, 3, 1, 1, 1, 4, 4};
    vector<int> r3{1, 1, 1, 2, 2, 3, 3, 4, 4};
    Problem_6_1_Variant_2(a3, 1, 2, 3, 4);
    REQUIRE(a3 == r3);

    vector<bool> a4{true, false, false, true};
    vector<bool> r4{false, false, true, true};
    Problem_6_1_Variant_3(a4);
    REQUIRE(a4 == r4);

    vector<bool> a5{true, false, true, false, false, true};
    vector<bool> r5{false, false, false, true, true, true};
    Problem_6_1_Variant_4(a5);
    REQUIRE(a5 == r5);
}

TEST_CASE("6.2") {
    const vector<int> a1{9, 9, 9};
    const vector<int> r1{1, 0, 0, 0};
    REQUIRE(Problem_6_2(a1) == r1);

    const string a = "999";
    const string b = "999";
    REQUIRE(Problem_6_2_Varaint(a, b) == "1998");
}