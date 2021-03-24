#include <string>
#include "Direction.hpp"
using namespace std;

namespace ariel
{

    class Board
    {

    public:
       static void post(unsigned  int row, unsigned int col, Direction direction, string const & ad);
       static string read(unsigned int row, unsigned int col, Direction dire,unsigned int NumberOfChar);
        void show();
    };

}

