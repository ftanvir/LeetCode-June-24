/*
 * @lc app=leetcode id=648 lang=cpp
 *
 * [648] Replace Words
 */

// @lc code=start
class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        set<string>st;
        for(auto it:dictionary) {
            st.insert(it);
        }

        string ans = "", temp="";
        sentence.push_back(' ');
        for(int i=0; i<sentence.size(); i++) {
            if(sentence[i]==' ') {
                ans+= temp;
                ans.push_back(' ');
                temp = "";
            } else {
                temp+= sentence[i];
                if(st.find(temp)!=st.end()) {
                    ans+= temp;
                    ans.push_back(' ');
                    temp = "";
                    while(sentence[i]!=' ') i++;
                }
            }

        }

        ans.pop_back();

        return ans;
    }
};
// @lc code=end

