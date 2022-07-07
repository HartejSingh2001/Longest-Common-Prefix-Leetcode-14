class Solution {
public:  
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)
        {
            return strs[0];
        }
        int n=strs.size(),i,j,flag=0;
        int min =strs[0].length();
        for(i=1;i<n;i++)
        {
            if(strs[i].length()<min)
            {
                min=strs[i].length();
            }
        }
        char ch;
        string res;
        for(i=0;i<min;i++)//min
        {
            ch=strs[0][i];
            for(j=1;j<n;j++)//n
            {
                if(strs[j][i]!=ch)
                {
                    flag=0; break;
                }
                else
                {
                    flag=1;
                }
            }
            if(flag==1)
            {
                res.push_back(ch);
                flag=0;
            }
            else if(flag==0)// break condition very imp
            {
                break;
            }
        }
        return res;  
    }
};
