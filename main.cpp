#include<Engine.h>

int main()
{
  Engine *engine = new Engine(GetConsoleWindow(), GetDC(GetConsoleWindow()));
  return 0;
}
