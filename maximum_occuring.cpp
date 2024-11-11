class Solution
{
    public:

    char getMaxOccuringChar(string str)
    {
    
    
    int n = str.size();
    std::map<char, int> count;

    
    for (int i = 0; i < n; i++) {
        count[str[i]]++; 
    }

    int max = 0;
    char ans;

    
    for (auto it : count) {
        if (it.second > max) {
            ans = it.first;
            max = it.second;
        }
    }

    return ans;
    }

};
