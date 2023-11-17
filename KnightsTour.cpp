#include<iostream>
using std::endl; using std::cout;

#include<stack>
using std::stack;

#include<array>
using std::array;

#include<utility>
using std::pair;

#include<optional>
using std::optional; using std::nullopt;

class cTour
{
  using kPosition = pair<int, int>;
  using kLegalMoves = stack<int>;
  
  [[nodiscard]] static optional<kPosition> IsLegal(kPosition const& Pos, int TrialPos)
  {
    optional<kPosition> LegalPoint = nullopt;
    switch(TrialPos)
    {
    case 0: // 2 left, 1 up
      if(Pos.second < 2) return nullopt;
      if(Pos.first > 6) return nullopt;
      LegalPoint = kPosition{Pos.first + 1, Pos.second - 2};
      break;
    case 1: // 2 up, 1 left
      if(Pos.second < 1) return nullopt;
      if(Pos.first > 5) return nullopt;
      LegalPoint = kPosition{Pos.first + 2, Pos.second - 1};
      break;
    case 2: // 2 up, 1 right
      if(Pos.second > 6) return nullopt;
      if(Pos.first > 5) return nullopt;
      LegalPoint = kPosition{Pos.first + 2, Pos.second + 1};
      break;
    case 3: // 2 right, 1 up
      if(Pos.second > 5) return nullopt;
      if(Pos.first > 6) return nullopt;
      LegalPoint = kPosition{Pos.first + 1, Pos.second + 2};
      break;
    case 4: // 2 right, 1 down
      if(Pos.second > 5) return nullopt;
      if(Pos.first < 1) return nullopt;
      LegalPoint = kPosition{Pos.first - 1, Pos.second + 2};
      break;
    case 5: // 2 down, 1 right
      if(Pos.second > 6) return nullopt;
      if(Pos.first < 2) return nullopt;
      LegalPoint = kPosition{Pos.first - 2, Pos.second + 1};
      break;
    case 6: // 2 down, 1 left
      if(Pos.second < 1) return nullopt;
      if(Pos.first < 2) return nullopt;
      LegalPoint = kPosition{Pos.first - 2, Pos.second - 1};
      break;
    case 7: // 2 left, 1 down
      if(Pos.second < 2) return nullopt;
      if(Pos.first < 1) return nullopt;
      LegalPoint = kPosition{Pos.first - 1, Pos.second - 2};
      break;
    default:
      return nullopt;
    }

    return LegalPoint;
  }

  void static Complete(stack<int>& Tour)
  {
    cout << "Complete. Tour:" << endl;

    stack<int> rTour;
    while(Tour.size())
    {
      rTour.push(Tour.top());
      Tour.pop();
    }
    while(rTour.size())
    {
      cout << rTour.top() << ", ";
      rTour.pop();
    }
    cout << endl;
  }
  
public:
  
  static void PlaceKnight(int Position, stack<int>& Tour, array<bool, 64>& Visited)    
  {
    // Build a stack of legal moves from this position.
    kLegalMoves LegalMoves = GetLegalMoves(Position, Visited);

    Visited[Position] = true;
    Tour.push(Position);

    if(8 == Tour.size()) // Placed 4 knights.
    {
      Complete(Tour);
      Visited[Position] = false;
      Tour.pop();
    }
    
    // While the stack is not empty:
    while(LegalMoves.size())
    {
      //  -- pop the top, place the knight here
      int const MoveIndex = LegalMoves.top();
      LegalMoves.pop();
      PlaceKnight(MoveIndex, Tour, Visited);      
    }

    Visited[Position] = false;
    Tour.pop();    
  }

  static kLegalMoves GetLegalMoves(int Position, array<bool, 64> const& Visited)
  {
    kLegalMoves LegalMoves;

    int const File = Position & 0x7;
    int const Rank = Position >> 3;
    
    for(int i = 0; i < 8; i++)
    {
      optional<kPosition> LegalMove = IsLegal(kPosition{Rank, File}, i);
      if(LegalMove.has_value())
      {
	int const Index = (LegalMove->first << 3) + LegalMove->second;
	if(!Visited[Index]) LegalMoves.push(Index);
      }
    }
    return LegalMoves;
  }

  
};



int main()
{

  array<bool, 64> Visited = {false};
  stack<int> Tour;

  cTour::PlaceKnight(0, Tour, Visited);
  
}
