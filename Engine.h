#include<iostream>
#include<fstream>
#include<Windows.h>

using namespace std;

class Engine
{
  public:
    HWND hwnd;
    HDC hdc;
  
  public: 
    Engine::Engine(HWND wnd, HDC dc)
    {
      hwnd = wnd;
      hdc = dc;
    }
  
  public:
    void draw_line(int x1, int y1, int x2, int y2, COLORREF color)
    {
      int m = (y2-y1)/(x2-x1);
      
      int b = y1 - m * x1;
      
      for(int i=x1;x<x2;i++)
      {
        int j = m*i + b;
        
        SetPixel(color, i, j, hdc);
      }
    }
};


