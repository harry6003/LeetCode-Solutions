class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int i = 0;
        int j = numbers.size()-1;
         vector<int> a;
        while(i<j)
        {
            if(numbers[i] + numbers[j] > target)
            {
                j--;
            }
            else if(numbers[i] + numbers[j] < target)
            {
                i++;
            }
            else
            {
               
                a.push_back(i+1);
                a.push_back(j+1);
                return a;
            }
                
        }
        return a;
        
    }
};