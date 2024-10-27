int n;
    cin>>n;
    int sum=0;
    int mx=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum+=x;
        mx=max(mx,sum);
    }
    cout<<mx<<endl;