#include <raylib.h>
#include <raymath.h>

int main(int argc, char **argv) 
{
    InitWindow(1536, 960, "Snake");
    SetTargetFPS(60);
    
    Camera camera;
    
    camera.fovy = 45.0f;
    camera.position = Vector3{
        .x = 10.0f,
        .y = 10.0f,
        .z = 10.0f
    };

    camera.projection = CAMERA_PERSPECTIVE;
    camera.target = Vector3{
        .x = 0.0f,
        .y = 0.0f,
        .z = 0.0f
    };
    camera.up = Vector3{
        .x = 0.0f,
        .y = 1.0f,
        .z = 0.0f
    };

    while(!WindowShouldClose())
    {
        BeginDrawing();
            
        
        ClearBackground(BLACK);
        
        BeginMode3D(camera);
        
        DrawCube(Vector3{.x = 0.0f, .y = 0.0f, .z = 0.0f}, 2.0f, 2.0f, 2.0f, BLUE);
        

        EndMode3D();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
