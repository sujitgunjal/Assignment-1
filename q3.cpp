# include<iostream>
 using namespace std;
 
 //to check the greatest of three numbers
 int main()
 {
     int a,b,c;
     cout<<"Enter the three numbers a,b,c"<<endl;
     cin>>a>>b>>c;
     
     if(a>b){
         if (a>c){
             cout<<"The largest among three numbers is:"<<a<<endl;
             
         }
    
         }
      if(b>a){
          if(b>c){
               cout<<"The largest among three numbers is:"<<b<<endl;
          }
      }
     if(c>a){
         if(c>b){
             cout<<"The largest among three numbers is:"<<c<<endl;
         }
     }
            
      
      return 0;
         
 }