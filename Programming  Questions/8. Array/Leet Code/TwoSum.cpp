// #include <iostream>
// using namespace std;
// int main()
// {
//     int n; 
//     int a[n];
//     int target;
//     cin >> n;
//     cin >> target;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n + 1; i++)
//     {
//         for (int j = i + 1; j < n + 1; j++)
//         {
//             if ((a[i] + a[j]) == target)
//             {
//                 cout << a[i] << " " << a[j];
//             }
//         }
//     }
//     return 0;
// }
// lets have an other approach to optimize 
//time complexity from O(n^2) to :

/**
 * @brief Brute Force approach
 * first fix i then minus i from target
 * for ex :    2 6 5 8 11
 * let target be 14
 * let i be 2 in the first loop:
 * 
 *          target - i = 14-2 = 12 then see if this exists in the right half or not, if it doesnt exists then move to right half ofnow i = . 6;
 *      14 - 6 = 8; this exists in the rihg thalf or not, and it does exists i.e. in 3rd index and tahts our pair
 * but if its not there then we will move i pointer to every other element and then target - i
 *optimized approach:
 *we use hash table:
 * so we do the same thing like target - i;
 * but after this, we see if the answer is available in the hash table, if no then we put it in the hash tabke
 * along with its index number
 * now the 2nd element in the list i; 
 * target - i = ans if ans is in the hash table then return index of the element thats present in the hash table tahts matches with ans and thre index of i;
 * |               |
 * |               |
 * |               |
 * |       ""      |
 * |like i,index(i)|
 * 
 * so here itme complexity of O(n)
 * space complexity is O(n)
 * o(n) for insertion and for iterating also
 * 
 * 
 * 
 * 
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.find(target-nums[i])!= mpp.end()){
                ans.push_back(mpp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            mpp[nums[i]]= i;
        }        
        return ans;
    }
};
// the end