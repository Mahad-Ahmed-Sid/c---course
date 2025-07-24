#include<iostream>
using namespace std;


class car { 

protected:
  string model;
  float speed;
  int price;
  string color;

public:


  car (string m, float s, int p, string c)
{
   model = m;
   speed = s;
   price = p;
   color = c;

}

   void car_run( float distance)
   {
     cout<<model<<" will take "<< distance/speed << " hours to cover " <<distance<<" kilometer "<<endl;
   }


};




class electric_car : car{

public:
    int battery_mah;


  electric_car (string m, float s, int p, string c, int bm) : car(m,s,p,c)
  {
  model = m;
  speed = s;
  price = p;
  color = c;
  battery_mah = bm;
  }

     virtual void car_run( float distance)
   {
     cout<<model<<" tesla electric car will take "<< distance/speed << " hours to cover " <<distance<<" kilometer"<<endl;
   }





};

int main()
{

    car toyota = car ("t1", 80 , 500 , "white");
    car bmw = car ("b1", 150 , 1500 , "red");
    car ferrari = car ("f1", 200 , 3500 , "black");

    electric_car tesla = electric_car ("T1", 250 , 4000 ,"grey",20000);

    electric_car *tesla2 = &tesla;

    tesla2->car_run(400);

    ferrari.car_run(600);

    return 0;

}
