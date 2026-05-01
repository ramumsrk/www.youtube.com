#include <iostream>
#include <vector>
#include <numeric>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::accumulate;

class Solution {
    public:
        void printSubArray(vector<int>& nums) {
            int nums_size {static_cast<int>(nums.size())};
            for (int i {}; i < nums_size; i += 1) {
                cout<<"i: "<<i<<" ["<<i<<"]: "<<nums[i]<<' ';
            }
        }
        int subArraySum(vector<int>& nums) {
            return accumulate(begin(nums), end(nums), int {});
        }
};

auto
main(void) -> int {
    int T {};
    cin>>T;
    while (T) {
        int N {};
        cin>>N;
        vector<int> nums(N,0);
        for (auto& e : nums) {
            cin>>e;
        }
        Solution * solution = new Solution();
        for (int i {}; i < N; i += 1) {
            for (int j {i}; j < N; j += 1) {
                vector<int> subarray(0,0);
                for (int k {i}; k <= j; k += 1) {
                    subarray.push_back(nums[k]);
                }
                solution->printSubArray(subarray);
                cout<<' ';
                cout<<"subarray sum: "<<solution->subArraySum(subarray);
                cout<<endl;
            }
        }
        T -= 1;
    }
    return EXIT_SUCCESS;
}