bool checkArrays(int A[], int B[], int size)
{
  unordered_map<int,int>hash;

  for(int i=0;i<size;i++)
  {
    hash[A[i]]++;

  }
  for(int i=0;i<size;i++)
  {
    if hash.find(B[i])!=hash.end()
    {
      hash[A[i]]--;
    }
  }
  if hash.empty()
  {
    return true;
  }
  else{
    return false;
  }

}

main()
{
  int size;
  cin>>size;
  int * A= new int[size];
  int * B= new int [size];
  (checkArrays(A,B,size))? cout<<"Both Arrays are same" : cout<<"Arrays are different";
return 0;
}
