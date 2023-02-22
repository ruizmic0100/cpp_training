// #include <iostream>
// #include <algorithm>
// #include <vector>

// #define LOG(msg) \
//     std::cout << __FILE__ << "(" << __LINE__ << "): " << msg << std::endl;

// using namespace std;

// class Solution {
//     public:
//         string longestCommonPrefix(vector<string>& strs) {
//             int n = strs.size();

//             if (n==0) {
//                 return "";
//             }

//             string res = "";

//             sort(strs.begin(), strs.end()); // sort the array.
//             string first = strs[0]; // first word.
//             string last = strs[n-1]; // last word.

//             int limit = min(first.length(), last.length());

//             for (int i = 0; i < limit; i++) {
//                 if (first[i] == last[i]) {
//                     res += first[i];
//                 } else {
//                     break;
//                 }
//             }
//             return res;
//         }
// };

// int main()
// {

//     Solution sol;

//     vector<string> stringData = {"flowers", "flow", "flight"};

//     string res = sol.longestCommonPrefix(stringData);

//     LOG(res);

//     std::cin;
// }