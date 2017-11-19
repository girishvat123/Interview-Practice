string  maskFunction(string baseString, string mask)
  {

            vector<int>hash(256,0);
            int newIndex=0;
            for(int i=0;i<baseString.length();i++)
            {
              hash[mask[i]]=1;
            }

            for(int i=0;i<baseString.length();i++)
            {
              if(!hash[baseString[i]])

              {
                  baseString[newIndex++]=baseString[i];

              }

            }
            baseString[newIndex]='\0';

return baseString;
  }


main()
{

string str="GeekforGeeks";
string mask="mask";

maskFunction(str,mask);
}
