#include <box2d/box2d.h>
#include <iostream>

int main() {
    // Create world
    b2WorldDef worldDef = b2DefaultWorldDef();
    worldDef.gravity = {0.0f, -9.81f};

    b2WorldId world = b2CreateWorld(&worldDef);

    // Create body
    b2BodyDef bodyDef = b2DefaultBodyDef();
    bodyDef.type = b2_dynamicBody;
    bodyDef.position = {0.0f, 10.0f};

    b2BodyId body = b2CreateBody(world, &bodyDef);

    b2Polygon box = b2MakeBox(1.0f, 1.0f);

    b2ShapeDef shapeDef = b2DefaultShapeDef();
    shapeDef.density = 1.0f;

    b2CreatePolygonShape(body, &shapeDef, &box);

    // Simulate
    float dt = 1.0f / 60.0f;

    for (int i = 0; i < 120; ++i) {
        b2World_Step(world, dt, 4);

        b2Vec2 pos = b2Body_GetPosition(body);
        std::cout << "Step " << i
                  << " : (" << pos.x << ", " << pos.y << ")"
                  << std::endl;
    }

    b2DestroyWorld(world);
}