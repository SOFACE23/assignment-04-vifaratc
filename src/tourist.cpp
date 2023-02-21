#include "tourist.hpp"

void Tourist::visit(Monkey &monkey)
{
    visited.push_back("monkey");
}
void Tourist::visit(Tiger &tiger)
{
    visited.push_back("tiger");
}
//Error in name..?
void Tourist::visit(Fish &monkey)
{
    visited.push_back("fish");

}

std::vector<std::string> Tourist::list_visited()
{
    return visited;
}