#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s){

    // Complete this function
   stack<char>ele;
    string result="";
    int i=0;
    int j=0;
   for(;i<s.length();i++)
   {
       if (ele.empty() || ele.top()!=s[i]) ele.push(s[i]);
       else if (ele.top()== s[i])
           {
                ele.pop();
                continue;


           }


   }
    while(!ele.empty())
    {
        result.push_back(ele.top());
        ele.pop();
    }
    i=0;
    j=result.length()-1;
    while(i<j)
    {
        swap(result[i++],result[j--]);
    }

    return result;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    if (result=="") cout<<"Empty String";
    cout << result << endl;
    return 0;
}
