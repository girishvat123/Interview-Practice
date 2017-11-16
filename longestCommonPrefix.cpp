class Solution {
public:
    string findPrefix(string s1,string s2){
        int i=0;
        int j=0;
        string result;
        while(i<s1.length() && j <s2.length()){
            if(s1[i]!=s2[j]){

                break;
            }
            result.push_back(s1[i]);
            i++;
            j++;

        }
        return result;

    }
    string longestCommonPrefix(vector<string>& strs) {

        if(strs.size()==0) return "";
        string resultantString=strs[0];
        for(int i=1;i<strs.size();i++)

        {
            resultantString=findPrefix(resultantString,strs[i]);
            if(resultantString.empty()) return "";


        }
        return resultantString;




    }



};
