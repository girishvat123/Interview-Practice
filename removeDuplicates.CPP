string removeDuplicates(string duplicateString)
{
  vector<bool>hash;
  int newIndex=0;
  for(int i=0;i<duplicateString.length();i++)
      {
        if (hash[duplicateString]==0)
        {
          hash[duplicateString]==1;
          duplicateString[newIndex++]=duplicateString[i];
        }

      }
      duplicateString[i]='\0';
return duplicateString;
}

void main()

{
  string duplicateString="BANANAS";
  string uniqueString=removeDuplicates(duplicateString);
  cout<<uniqueString<<endl;
}
