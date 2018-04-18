#include <iostream>
using namespace std;

void rearrangeNumbers(int &red, int &green, int &blue);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA

  rearrangeNumbers(red, green, blue);



  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

void rearrangeNumbers(int &red, int &green, int &blue)
{ 
  int one;
  int two;
  
  if(red>green && red>blue) 
  {
      if(green<blue)
      {
       one = green;
       green = blue;
       blue = one;
      }
  }
  
  else if(green>red && green>blue)
  {
      one = red;
      
      if(red>blue)
      {
          red = green;
          green = red;
      }
      
      else
      {
          red = green;
          green = blue;
          blue = one;
      }
  }
  
  else if(blue>red && blue>green)
  {
      one = red;
      
      if(red>green)
      {
          red = blue;
          blue = green;
          green = one;
      }
      
      else
      {
          red = blue;
          blue = one;
      }
  }
}
