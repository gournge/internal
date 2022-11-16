#include "Vec2.hpp"
#include <stdint.h>
#include <unordered_map>
#include <map>

namespace sim 
{

struct Grid 
{      
    public:
        // smallest that includes every vertex
        Vec2<int> m_rect;

        // map wall to its depth
        std::unordered_map<std::pair<Vec2<int>, Vec2<int>>, float> m_data;

        // map particle position to its velocity
        std::map<Vec2<float>, Vec2<float>> m_particles;

        Grid() : {};

        // from a point to a point, with given wall depth
        void AddWall(Vec2<int>, Vec2<int>, float);
        void Simulate();

    private:
        void BeginSimulation();
        bool DoesCollide(Vec2<int>&);
};

}
