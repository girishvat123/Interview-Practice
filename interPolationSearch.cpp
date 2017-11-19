bool interPolationSearch(vector<int>arr , int n)
  {
    int low=0;
    int high=n-1;
    while(low<high)
    {

      int mid= low + ((key-arr[low])* (high-low))/ (arr[high]-arr[low]);
      if (a[mid]==key) return true;
      else if(a[mid]<key) low=mid+1;
      else high=mid-1;

    }

    return false;
  }

main()
{
  int size;
  int data;
  int key;
  cin>>size;
  vector<int>arr;
  for(int i=0;i<size;i++)
  {
      cin>>data;
      arr.push_back(data);
  }
  cout<<"Enter the element to be searched"<<endl;
  cin>>key;
  (interPolationSearch)?cout<<"Found"<<endl:cout<<"Unfortunately Not Found!!!"<<endl;

}
