#include<iostream>
#include<cstdlib>
#include<ctime>
 
using namespace std;
 
int main()
{
    const int n = 10;   
    
    srand(time(NULL)); 
                                                
                                                
        int tab[n]; 
        for(int i=0;i<n;i++)
        {
                tab[i] = rand()%100; 
                cout<<tab[i]<<" ";      
        }
        
        cout<<endl;
        
        for(int i=0;i<n;i++)
                if(tab[i]%2==0) 
                        cout<<tab[i]<<" "; 
                        
        cout<<endl;
        
        for(int i=0;i<n;i++)
                if(tab[i]%2) 
                        cout<<tab[i]<<" "; 
        
        cout<<endl;
        
        system("pause");
        
        return 0;
}