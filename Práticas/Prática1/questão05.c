#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

// Definição da função f(x)
double f(double x) {
    if (x != 3) {
        return x*x - 2*x + 1;
    } else {
        return 7;
    }
}

// Função para converter coordenadas para a tela
int convertY(double y, int windowHeight) {
    // Inverter o eixo y (janela do SDL é invertida)
    return windowHeight - (int)y;
}

int main() {
    // Inicialização do SDL
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        printf("SDL_Init error: %s\n", SDL_GetError());
        return 1;
    }

    // Criando uma janela
    SDL_Window* window = SDL_CreateWindow("Gráfico da função f(x)", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
    if (!window) {
        printf("SDL_CreateWindow error: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    // Criando um renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (!renderer) {
        printf("SDL_CreateRenderer error: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    // Definindo a cor do gráfico
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    // Limpar a tela
    SDL_RenderClear(renderer);

    // Definindo a cor da função
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

    // Desenhar a função
    double startX = -10.0;
    double endX = 10.0;
    int windowHeight = 600;
    for (double x = startX; x <= endX; x += 0.01) {
        double y = f(x);
        int screenX = (int)((x - startX) / (endX - startX) * 800);  // Mapear x para a largura da janela
        int screenY = convertY(y, windowHeight);
        SDL_RenderDrawPoint(renderer, screenX, screenY);
    }

    // Atualizar a tela
    SDL_RenderPresent(renderer);

    // Esperar por um evento de fechamento
    SDL_Event event;
    int running = 1;
    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = 0;
            }
        }
    }

    // Limpar e fechar o SDL
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
