class Solution {
public:
    void helper_func(string a, int open, int close, vector<string>&output_vec)
    {
        if(open==0 && close==0)
            output_vec.push_back(a);
        if(open>0)
            helper_func(a+"(", open-1, close, output_vec);
        if(close>open)
            helper_func(a+")", open, close-1, output_vec);
    }
    vector<string> generateParenthesis(int n) {
        string a="";
        vector<string>output_vec;
        int open=n, close=n;
        helper_func(a, open, close, output_vec);
        return output_vec;
    }
};