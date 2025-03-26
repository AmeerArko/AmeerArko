#include <iostream>

#include <iomanip>
using namespace std;
// (member)-> refers to the number of members of our mess ,
// (mealn)-> refers to the number of meal of 1 member,
// (tm)-> refers to the total meal;
// (tt)->total amount of money that was spend;
//(mk)-> refers to meal khoros;




int main(){
        int member,mealn,tm=0,tt=0;
        float Meal_rate,mk;
        double k;
        cout<<"How many member you have in your mess"<<endl;
        cin>>member;
        int Taka[member],meal[member];
        cout<<"Enter the number of meals you have eaten:"<<endl;
        for(int i=0;i<member;i++){
            if(i==0){
                cout<<"Sazid vai koida meal khaise?:"<<endl;
                cin>>meal[i];
               
                cout<<"Sazid vai koitakar Bazar korse?:"<<endl;
                cin>>Taka[i];
            }
            if(i==1){
                cout<<"Rizz koida meal khaise?:"<<endl;
                cin>>meal[i];
               
                cout<<"Rizz koitakar Bazar korse?:"<<endl;
                cin>>Taka[i];
            }
            if(i==2){
                cout<<"Emon koida meal khaise?:"<<endl;
                cin>>meal[i];
               
                cout<<"Emon koitakar Bazar korse?:"<<endl;
                cin>>Taka[i];
            }
            if(i==3){
                cout<<"Maruf koida meal khaise?:"<<endl;
                cin>>meal[i];
               
                cout<<"Maruf koitakar Bazar korse?:"<<endl;
                cin>>Taka[i];
            }
            if(i==4){
                cout<<"Raihan koida meal khaise?:"<<endl;
                cin>>meal[i];
               
                cout<<"Raihan koitakar Bazar korse?:"<<endl;
                cin>>Taka[i];
            }
            if(i==5){
                cout<<"Arko koida meal khaise?:"<<endl;
                cin>>meal[i];
               
                cout<<"Arko koitakar Bazar korse?:"<<endl;
                cin>>Taka[i];
            }
            tm=tm+meal[i];
            tt=tt+Taka[i];
        }
        Meal_rate=(float)tt/tm;
        cout<<"Meal Rate is:"<<Meal_rate<<endl;

        for(int i=0;i<member;i++){
            if(i==0){
                cout<<"Sazid vai er hishab:"<<endl;
                mk=meal[i]*Meal_rate;
                k=Taka[i]-mk;
             
               
                if(k>=0){
                    cout<<"Sazid vai pabe "<<k<<" "<<"Taka"<<endl;
                }
                else {
                    cout<<"Sazid vai dibe "<<(k*-1)<<" "<<"Taka"<<endl;
                }
            }
            if(i==1){
                cout<<"Rizz er hishab:"<<endl;
                mk=meal[i]*Meal_rate;
                k=Taka[i]-mk;
              

                if(k>=0){
                    cout<<"Rizz pabe "<<k<<" "<<"Taka"<<endl;
                }
                else {
                    cout<<"Rizz dibe "<<(k*-1)<<" "<<"Taka"<<endl;
                }
            }
            if(i==2){
                cout<<"Emon er hishab:"<<endl;
                mk=meal[i]*Meal_rate;
                k=Taka[i]-mk;
              

                if(k>=0){
                    cout<<"Emon pabe "<<k<<" "<<"Taka"<<endl;
                }
                else {
                    cout<<"Emon dibe "<<(k*-1)<<" "<<"Taka"<<endl;
                }
            }
            if(i==3){
                cout<<"Maruf er hishab:"<<endl;
                mk=meal[i]*Meal_rate;
                k=Taka[i]-mk;
              

                if(k>=0){
                    cout<<"Maruf pabe "<<k<<" "<<"Taka"<<endl;
                }
                else {
                    cout<<"Maruf dibe "<<(k*-1)<<" "<<"Taka"<<endl;
                }
            }
            if(i==4){
                cout<<"raihan er hishab:"<<endl;
                mk=meal[i]*Meal_rate;
                k=Taka[i]-mk;
              

                if(k>=0){
                    cout<<"Raihan pabe "<<k<<"Taka"<<endl;
                }
                else {
                    cout<<"Raihan dibe "<<(k*-1)<<" "<<"Taka"<<endl;
                }
            }
            if(i==5){
                cout<<"Arko er hishab:"<<endl;
                mk=meal[i]*Meal_rate;
                k=Taka[i]-mk;
              

                if(k>=0){
                    cout<<"Arko pabe "<<k<<" "<<"Taka"<<endl;
                }
                else {
                    cout<<"Arko dibe "<<(k*-1)<<" "<<"Taka"<<endl;
                }
            }
           
        }


    return 0;
}