int lengthOfLongestSubstring(string s)
    {
      vector<int> chars(256,-1);
      int start=-1;
      int maxLength=0;
      for(int i=0;i!=s.length();i++)

      {
            if (chars[s[i]>start])
            {
                start=chars[s[i]];

            }
            chars[s[i]]=i;
            maxLength= max(maxLength,i-start);



      }

    return maxLength;
    }
};
