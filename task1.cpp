#include <iostream>
#include <vector>
#include <map>
using namespace std;


class Solution {
    vector<int> m_arr;
    int m_targ;
public:
    Solution(vector<int> arr, int target)
    {
          m_arr = arr;
          m_targ = target;

    }
    vector<int> twoSum() {
        vector<int> arrResult;
        map <int , int> arr1;
        for(int i = 0; i < m_arr.size(); i++)
        {
            arr1.insert(pair<int, int>(i, m_arr[i]));
        
        }
            for(auto x : arr1)
            {
                if(x.second > m_targ){
                    continue; 
                }else
                {
                    for(int y = (x.first + 1); y < arr1.size(); y++) 
                    {
                        if((x.second + arr1[y]) == m_targ)
                        {
                            arrResult.push_back(x.first);
                            arrResult.push_back(y);
                            return arrResult;
                        }
                           
                    }
                }
            }
        return arrResult;
    }
};
int main(){
    int target = 67;
    vector<int> arr = {23, 65, 80, 74, 45, 24, 35, 37, 2, 4};
    Solution obj1(arr, target);
    vector<int> res = obj1.twoSum();
    cout << "result indexes " << res[0] << " " << res[1] << endl;     
    return 0;
}






