#include "Simulation.hpp"
#include <algorithm>
#include <utility>
using std::max, std::min;

void sim::Grid::AddWall(Vec2<int> p1, Vec2<int> p2, float depth)
{
    m_rect.x = max(m_rect.x, p1.x, p2.x);
    m_rect.y = max(m_rect.y, p1.y, p2.y);

    m_data[std::make_pair(p1, p2)] = depth;
    
    return;
}

