//Union of Two Sorted Arrays with Duplicate Elements
//GeeksforGeeks

class Solutions:{
public:
    
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int n1 = a.size();
       int n2 = b.size();
       int i=0;
       int j=0;
       vector<int>unionArr;
       while(i<n1&&j<n2){
          if (a[i] < b[j]) {
                if (unionArr.empty() || unionArr.back() != a[i])
                    unionArr.push_back(a[i]);
                i++;
            }
            
            else if (a[i] > b[j]) {
                if (unionArr.empty() || unionArr.back() != b[j])
                    unionArr.push_back(b[j]);
                j++;
            }
            
            else {
                if (unionArr.empty() || unionArr.back() != a[i])
                    unionArr.push_back(a[i]);
                i++;
                j++;
            }
       }
      
       while (i < n1) {
            if (unionArr.empty() || unionArr.back() != a[i])
                unionArr.push_back(a[i]);
            i++;
        }
        
        while (j < n2) {
            if (unionArr.empty() || unionArr.back() != b[j])
                unionArr.push_back(b[j]);
            j++;
        }
       
       return unionArr;
    }
};
