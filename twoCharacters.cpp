#include <bits/stdc++.h>

using namespace std;
int  checkValidation(string s ,char a, char b)
    {   int i=0;
        int newIndex=0;
        int maxLength=0;
        string modifiedString;
        int flag=0;
     for(;i<s.length();i++)
      {
           if (s[i]== a || s[i]== b)
              {
                 modifiedString.push_back(s[i]);
              }


       }

     for(i=0;i<modifiedString.length();i++)
      {
         if (modifiedString[i]==modifiedString[i+1])
           {
               flag=1;
               break;
           }
      }
    if (flag) return -1;
    else return modifiedString.length();

    }
int maxLen(string s){
    unordered_set <char> setOfChars ;
    vector<char>setOfCharacters;
    int length=0;
    int maxLength=0;
    int i=0;
    for(int i=0;i<s.length();i++)
    {
        setOfChars.insert(s[i]);
    }
    for (auto x : setOfChars)
        setOfCharacters.push_back(x);
    for(int i=0;i<setOfCharacters.size();i++)
        {
            for(int j=1;j<setOfCharacters.size();j++)
            {
                length= checkValidation(s,setOfCharacters[i],setOfCharacters[j]);
                maxLength= max(maxLength,length);

            }

        }
    return maxLength;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = maxLen(s);
    cout << result << endl;
    return 0;
}
