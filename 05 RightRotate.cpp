void RightRotate(int a[], int n, int k)
{
    
    k = k % n;

    for(int i = 0; i < n; i++)
    {
       if(i < k)
       {
           
           cout << a[n + i - k] << " ";
       }
       else
       {
           cout << (a[i - k]) << " ";
       }
    }
    cout << "\n";
}
