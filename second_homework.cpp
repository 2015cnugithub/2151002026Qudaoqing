#include<iostream> 
#include<stdio.h> 
#include<cstring> 
using namespace std; 
class Worker 
{  
public:   
Worker();  
 Worker(string n,int a,char s,float p)  {  
  name=n;   age=a;   sex=s;   pay_per_hour=p; 
   }   
   void Name() 
    {  
     swith(choice)  
      {          
       case 1:name=name1;break;    
       case 2:name=name2;break;        
       case 3:name=name3;break;   
       case 4:name=name4;break;         
       case 4:name=name4;break;         
       case 5:name=name5;break;   
       }  
        virtual void Compute_pay(double hours)=0; 
        virtual friend ostream& operator << (ostream& out,Worker& Worker); 
        protected:  
         string name;  
         int age; 
         char sex;  
         int choice;  
         float pay_per_hour; 
          };   
          ostream& operator<<(ostream& output,Worker&w)  
          {   
          output<<w.name<<","<<w.age<<","<<w.sex<<","<<w.pay_per_hour<<endl;  
           return output; 
            }  
             class HourlyWorker:public Worker  
             {  
              public:   
              HourlyWorker();   
              HourlyWorker(string n,int a,char s,float p):Worker(n,a,s,p){}   
              void Compute_pay(double hours) 
  {    
  switch(k)
  {    
  case 1:if(hours<40)  
         zhouxin=10*hours;      
           else         
            zhouxin=10*40+1.5*10*(hours-40);    
  case 2:if(hours<40)    
       zhouxin=20*hours;      
         else        
           zhouxin=20*40+1.5*20*(hours-40); 
  case 3:if(hours<40)        
   zhouxin=40*hours;       
    else         
     zhouxin=40*40+1.5*40*(hours-40);  
       }   
        void display() 
          {   
           switch(k){   
            case 1:cout<<"zhouxin:"<<zhouxin;   
            case 2:cout<<"zhouxin:"<<zhouxin;  
            case 3:cout<<"zhouixn:"<<zhouxin;   
             }    
              }   
              friend ostream&operator<<(ostream& output,HourWorker& h);    
              private:    
               int k;     
               int hours;     
               float zhouxin;   
               };  
                ostream&operator<<(ostream& output,HourlyWorker& h)  
                 {     
                 output<<h.name<<","<<h.age<<","<<h.sex<<","<<pay_per_hour<<","<<zhouxin;   
                  return output;  
                   }   
                    class SalariedWorker:public Worker  
                     {   
                      public:
                       SalariedWorker();  
                       SalariedWorker(string n,int a,char s,float p):Worker(n,a,s,p){} 
                          void Compute_pay(double hours)     
                           { 
                           switch(k)
                           {     
                           case 4:if(hours>=35)       
                              zhouxin=30*40;     
                               else        
                               zhouxin=30*hours+0.5*30*(35-hours);  
                             case 5:if(hours<35)        
                               zhouxin=50*40;    
                                 else       
                                  zhouxin=50*hours+0.5*50*(35-hours);   
                                    }   
                                     void display()   
                                      {     
                                      switch(k)  
                                         {    
                                            case 4: cout<<"zhouxin:"<<zhouxin;   
                                                case 5: cout<<"zhouxin:"<<zhouxin;    
                                                 }     
                                                 friend ostream&operator<<(ostream& output,SalariedWorker& s);    
                                                  private: 
                                                       int k;   
                                                          int hours;     
                                                           float zhouxin;   
                                                            };   
                                                             ostream&operator<<(ostream& output,SalariedWorker& s)   
                                                              {      
                                                              output<,s.name<<","<<s.age<<","<<s.sex<<","<<s.pay_per_hour<<","<<zhouxin;     return output;
                                                                  }   
                                                                   int main()   
                                                                    {     
                                                                     int i,j;  
                                                                        HourlyWorker a[3];   
                                                                          SalariedWorker b[2]; 
                                                                              for(i=1;i<=3;i++)    
                                                                               {       
                                                                               cin>>a[i].name>>",">>a[i].age>>",">>a[i].sex>>a[i].pay_per_hour;  
                                                                                  }   
                                                                            for(i=1;i<=3;i++)  
                                                                               {        
                                                                               cout<<a[i].name<<","<<a[i].age<<","<<a[i].sex<<a[i].pay_per_hour; 
                                                                  }     
                                                       for(j=1;j<=2;j++)   
                                                    {    
                                                       cin>>a[j].name>>",">>a[j].age>>",">>a[j].sex>>a[j].pay_per_hour;   
                                                         }    
                                                          for(j=1;j<=2;j++)  
                                                             {       
                                                             cout<<a[j].name<<","<<a[j].age<<","<<a[j].sex<<a[j].pay_per_hour;  
                                                                }     
                                                                for(i=1;i<=3;i++)   
                                                                  {     
                                                                   printf("[1] select name1\n");    
                                                                     printf("[2] select name2\n");    

                                                                     printf("[3] select name3\n");  
                                                                         printf("[4] select name4\n");  
                                                                             printf("[5] select name5\n"); 
                                                                                  printf{"Enter choice:");  
                                                                                      scanf("%d",&choice);    
                                                                                if(choice==0) break;   
                                                                                   else      
                                                                                    switch(choice)    
                                                                                      {        
                                                                                       case 1:pay_per_hour=10;break;  
                                                                                       case 2:pay_per_hour=20;break;  
                                                                                       case 3:pay_per_hour=40;break;  
                                                                                       case 4:pay_per_hour=30;break;     
                                                                                       case 5:pay_per_hour=50;break;  
                                                                                           }      
                                                                                           cout<<"zhouxin:"<<compute_pay(hours);    
                                                                                             }     
                                                                                              return 0;   
                                                                                                }
