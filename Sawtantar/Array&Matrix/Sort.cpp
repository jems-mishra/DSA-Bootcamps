#include <iostream>
    using namespace std;
    int main()
    {
        int i,j,n,a[100],temp,p,q,temp1;
        cout<<"Enter the size of array: "  "\n" ;  
        cin>>n;
        cout<<"Enter the elements:" "\n" ; 
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)  
        {
            for(j=i+1;j<n;j++) { 
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        cout<<"Ascending order of an array: "  "\n";  
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" " ;
        }
        
        for(p=0;p<n;p++)
        {
            for(q=p+1;q<n;q++)
            {
                if(a[p]<a[q])
                {
                    temp1=a[p];
                    a[p]=a[q];
                    a[q]=temp1;
                }
            }
        }
        cout<<"\n Descending order of an array:"  "\n";  
        for(p=0;p<n;p++)
        {
            cout<<a[p]<<" ";
        }
    }        