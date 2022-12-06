#include <array>
#include <cstddef>
#include <iostream>

class Engine
{
public:
    static const std::size_t rows = 10;
    static const std::size_t columns = 40;

    Engine();
    void mainLoop();

private:
    std::array<std::array<char, rows>, columns> canvas;
    void defaultCanvas();
};

Engine::Engine()
    : canvas({})
{
}

void Engine::mainLoop()
{
}

void Engine::defaultCanvas()
{
    // Primer paso: Llenar el canvas con los caracteres por defecto.
    for (std::size_t row = 0; row < Engine::rows; ++row)
    {
        for (std::size_t col = 0; col < Engine::columns; ++col)
        {
            switch (col)
            {
            case 0:
            case 9:
                canvas[row][col] = '-';
                break;
            case 6:
                canvas[row][col] = '=';
                break;
            case 7:
                canvas[row][col] = ':';
                break;
            case 8:
                canvas[row][col] = '.';
                break;
            default:
                std::cerr << "Error durante la asignación de valores por defecto en canvas" << std::endl;
                break;
            }
        }
    }
}