#include "tourist.hpp"

//Pushes each animal name with small caps.

void Tourist::visit(Monkey &monkey)
{
    visited.push_back("monkey");
}
void Tourist::visit(Tiger &tiger)
{
    visited.push_back("tiger");
}

void Tourist::visit(Fish &monkey)
{
    visited.push_back("fish");
}

std::vector<std::string> Tourist::list_visited()
{
    return visited;
}