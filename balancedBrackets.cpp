class Solution {
public:
    bool ArePair(char openBracket,char closeBracket)
    {
        if(openBracket=='('  && closeBracket == ')') return true;
        else if (openBracket=='{'  && closeBracket == '}')return true;
        else if (openBracket=='['  && closeBracket == ']')return true;
        else return false;
    }
    bool isValid(string s) {

        stack<char>elements;
        for(int i=0;i!=s.length();i++)
        {
            if(s[i]=='(' || s[i]== '{' || s[i]=='[')
            {
                elements.push(s[i]);

            }

            else if(s[i]=='}' ||s[i]==')' || s[i]==']')
            {
                if(elements.empty() || !ArePair(elements.top(),s[i]) )
                    return false;

               elements.pop();
            }



        }
        return (elements.empty())?true:false;

    }
};
