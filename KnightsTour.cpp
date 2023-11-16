#include<iostream>
using std::endl; using std::cout;

#include<stack>
using std::stack;

#include<array>
using std::array;

class cTour
{
public:
  
  static void PlaceKnight(int Index, stack<int>& Tour)
  {

    
  }

  static stack<int> GetLegalMoves(int Position, array<bool, 64> const& Visited)
  {
        
    return stack<int>({0,1});
  }

  
};



int main()
{

  array<bool, 64> Visited = {false};
  

  stack<int> LegalMoves = cTour::GetLegalMoves(0, Visited);
  while(LegalMoves.size())
  {
    cout << LegalMoves.top() << ", ";
    LegalMoves.pop();    
  }
  
}
