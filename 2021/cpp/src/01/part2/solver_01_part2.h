#include <iosfwd>
#include <string>

#include "../../solver.h"

class Solver_01_part2 : public Solver
{
public:
  std::string solve(std::istream &is) override;
};