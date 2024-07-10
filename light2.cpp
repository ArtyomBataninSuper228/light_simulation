//
//  main.cpp
//  Light3
//
//  Created by Артем Батанин on 21.03.2023.
//

#include <iostream>
#include <SDL2/SDL.h>
#include <vector>
#include <string>
#include <cmath>
#include <typeinfo>
#include <thread>
#include <SDL2_ttf/SDL_ttf.h>
#include <fstream>
//#include "Header.h"



double long default_value = 125;
class Pixel
{
public:
    double long a = default_value;
    double long i = 0;
    double mass = 1; //17.34
    short x;
    short y;
    double d = 0;
    
};




std::string end = "/n";
bool is_mirror = false;
double air = 0.000;
short w = 1000;
short h = 1000;
bool is_run = false;
short mouse_pos[] = {10, 10};
bool is_clicked = false;
short iter = 0;
std::vector<std::vector<Pixel>> Pixels;

void update()
{
    //std::copy(&Pixels[0][0], &Pixels[0][0] + w * h, &Pixels2[0][0]);
    std::vector <std::vector<Pixel>> Pixels2 = Pixels;
    while (1){
        //unsigned long start_time =  clock();
        while(is_run == false){
            if (is_run == true){
                break;
            }
        }
        for(short x = 0; x < w; x++){
            for(short y = 0; y < h; y++){
                Pixel Pix = Pixels[x][y];
                if(iter == 0)
                {
                    
                    /*
                    if(sqrt(pow(x - 300, 2) + pow(y - 250, 2)) <= 25){
                        Pix.i = 0.5*sqrt(25 - abs(300 - x))*sqrt(25 - abs(250 - y))*sin(x*2);
                        Pixels2[x][y] = Pix;
                    }
                     
                    
                    
                    if(sqrt(pow(x - 250, 2) + pow(y - 175, 2)) <= 25){
                        Pix.i = 2*sqrt(25 - abs(250 - x))*sqrt(25 - abs(175 - y))*sin(x);
                        Pixels2[x][y] = Pix;
                    }
                     */
                     
                     
                     

                    
                    
                   
                     
                     
                     
                    
                    
                    /*
                    if(y > -2*x + 1200){ //and y > 2*x - 900 and y < 300){
                        Pix.mass = 1.52;
                     
                     Pixels2[x][y] = Pix;
                     }
                     */
                     
                     
                    
                    /*
                     if(x > 200 and x < 220 and y > 0 and y < 175){
                     Pix.mass = 2500;
                     
                     Pixels2[x][y] = Pix;
                     }
                     if(x > 200 and x < 220 and y > 200 and y < 300){
                     Pix.mass = 2500;
                     
                     Pixels2[x][y] = Pix;
                     }
                     
                     
                     if(x > 200 and x < 220 and y > 325 and y < 500){
                     Pix.mass = 2500;
                     
                     Pixels2[x][y] = Pix;
                     }
                     */
                     
                     
                     
                    
                    
                    
                    /*
                     if (sqrt(pow(x - 625, 2) + pow(y - 250, 2)) < 251 and sqrt(pow(x - 775, 2) + pow(y - 250, 2)) > 351){
                     Pix.mass = 1.52;
                     Pixels2[x][y] = Pix;
                     
                     }
                     
                     if (sqrt(pow(x - 585, 2) + pow(y - 250, 2)) > 351 and sqrt(pow(x - 1315, 2) + pow(y - 250, 2)) > 351 and x > 900 and x < 1000){
                     Pix.mass = 1.52;
                     
                     Pixels2[x][y] = Pix;
                     
                     }
                     if (sqrt(pow(x - 350, 2) + pow(y - 250, 2)) < 351 and sqrt(pow(x - 950, 2) + pow(y - 250, 2)) < 351){
                     Pix.mass = 1.52;
                     Pixels2[x][y] = Pix;
                     
                     }
                     
                     if (sqrt(pow(x - 450, 2) + pow(y - 250, 2)) < 351 and sqrt(pow(x - 1050, 2) + pow(y - 250, 2)) < 351){
                     Pix.mass = 1.52;
                     
                     Pixels2[x][y] = Pix;
                     
                     }
                     if (sqrt(pow(x - 850, 2) + pow(y - 250, 2)) < 401 and x < 500){
                     Pix.mass = 1.52;
                     
                     Pixels2[x][y] = Pix;
                     
                     }
                     */
                     
                     
                    
                }

                
                
                
                
                
                else
                {
                    
                    if(sqrt(pow(x - 450, 2) + pow(y - 500, 2)) < 6){
                        Pix.i = (cos(3.14159* iter/38))*2;
                        Pixels2[x][y] = Pix;
                        
                    }
                    
                    if(sqrt(pow(x - 550, 2) + pow(y - 500, 2)) < 6){
                        Pix.i = (cos(3.14159*iter/38))*2;
                        Pixels2[x][y] = Pix;
                     
                        
                    }
                     
                     
                    
                    
                    
                            
                            double val = 0;
                            short num = 0;
                            short iy = Pix.y;

                            for(short ix = Pix.x - 1; ix <= Pix.x + 1; ix ++){
                                if(ix == x){
                                    continue;
                                }
                                if(ix < 0 or iy < 0){
                                    continue;
                                }
                                if(ix > w - 1){
                                    continue;
                                }
                                val += Pixels[ix][iy].a;
                                num++;
                                
                            }
                            short ix = Pix.x;
                            for(short iy = Pix.y - 1; iy <= Pix.y + 1; iy ++){
                                if(iy == y){
                                    continue;
                                }
                                if(iy < 0){
                                    continue;
                                }
                                
                                if(iy > h - 1){
                                    continue;
                                }
                                val += Pixels[ix][iy].a;
                                num++;
                                
                                
                            }
                            if(num != 4 and !is_mirror){
                                //val = default_value*num;
                                Pix.i = 0;
                            }
                            Pix.i += ((val/num) - Pix.a)/Pix.mass;
                            Pix.a -= (Pix.a - default_value) * air;
                            Pix.a += Pix.i;
                            
                            
                            Pix.d +=(abs(Pix.i));
                            
                            //Pix.d/= 0.0001;
                    /*
                            if(Pix.d > 255)
                            {
                                Pix.d = 255;
                            }
                     
                    
                    
                            else if (Pix.d < 0){
                                Pix.d = 0;
                            }
                     */
                             
                            
                            if(Pix.a > 255)
                            {
                                Pix.a = 255;
                            }
                            else if (Pix.a < 0){
                                Pix.a = 0;
                            }
                            Pixels2[x][y] = Pix;
                            
                        }
                        
                    
                
            }
        }
        //std::copy(&Pixels2[0][0], &Pixels2[0][0] + w * h, &Pixels[0][0]);
        Pixels = Pixels2;
        iter++;
        
        if (iter > 10000){
            /*
            double xzn = 0;
            for(short x = 0; x < w; x += 1){
                double yzn = 0;
                for(short y = 0; y < h; y += 1 ){
                    yzn += Pixels[x][y].a;
                }
                xzn += yzn/h;
            }
            double res = xzn/w;
            std::cout << "Среднее значение: " << res<< std::endl*/
         
        
        iter = 1;
    
        }
        //unsigned long end_time =  clock();
        //std::cout<<1000000/(end_time - start_time)<<std::endl;
            

    }
}



void update_render(SDL_Renderer *ren){
    while(1){
        /*
            SDL_SetRenderDrawColor(ren, 0x00, 0x00, 0x00, 0x00);
            SDL_RenderClear(ren);
         */
            for(short x = 0; x < w; x++){
                for(short y = 0; y < h; y++){
                    Pixel Pix = Pixels[x][y];
                    SDL_SetRenderDrawColor(ren,  Pix.a, Pix.a, Pix.a, 255);
                    SDL_RenderDrawPoint(ren, x, y);
                }
            
            }
        
            if(is_clicked){
                SDL_SetRenderDrawColor(ren, 25, 25, 255, 255);
                SDL_RenderDrawLine(ren, mouse_pos[0] - 5,mouse_pos[1] - 5 , mouse_pos[0] + 5, mouse_pos[1] + 5);
                SDL_RenderDrawLine(ren, mouse_pos[0] + 5,mouse_pos[1] - 5, mouse_pos[0] - 5, mouse_pos[1] + 5);
            }
            else{
                SDL_SetRenderDrawColor(ren, 252, 25, 25, 255);
                SDL_RenderDrawLine(ren, mouse_pos[0] - 5,mouse_pos[1] - 5 , mouse_pos[0] + 5, mouse_pos[1] + 5);
                SDL_RenderDrawLine(ren, mouse_pos[0] + 5,mouse_pos[1] - 5, mouse_pos[0] - 5, mouse_pos[1] + 5);
            }
             
            SDL_RenderPresent(ren);
            
        }
        
            
        
    
}
 

    
    
    
int main(int argc, const char * argv[]){
        std::vector<Pixel> b;
        for (short x = 0; x <= w; x += 1){
            for (short y = 0; y <= h; y += 1){
                Pixel Pix;
                Pix.x = x;
                Pix.y = y;
                b.push_back(Pix);
            }
            Pixels.push_back(b);
            b.clear();
        }
        
        SDL_DisplayMode displayMode;
        if (SDL_Init(SDL_INIT_EVERYTHING) != 0){
            std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
            return 1;
        }
        int request = SDL_GetDesktopDisplayMode(0,&displayMode);
        SDL_Window *win = SDL_CreateWindow("Light C++", 0, 0, w, h, SDL_WINDOW_SHOWN);
        if (win == nullptr){
            std::cout << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
            return 1;
        }
        SDL_Renderer *ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
        if (ren == nullptr){
            std::cout << "SDL_CreateRenderer Error: " << SDL_GetError() << std::endl;
            return 1;
        }
        SDL_RenderClear(ren);
        SDL_RenderPresent(ren);
        SDL_Event event;
        bool quit = false;
        std::thread t1 (update_render, ren);
        std::thread t2 (update);
        SDL_ShowCursor(SDL_DISABLE);
        while(!quit){
            while(SDL_PollEvent(&event))
            {
                if(event.type == SDL_QUIT)
                    quit=true;
                else if(event.type == SDL_TEXTINPUT){
                    
                    if (event.text.text[0] == ' '){
                        std::cout << Pixels[mouse_pos[0]][mouse_pos[1]].a;
                        std::cout << " ";
                        std::cout << "x = ";
                        std::cout << mouse_pos[0];
                        std::cout << " ";
                        std::cout << "y = ";
                        std::cout << mouse_pos[1];
                        std::cout << " ";
                        std::cout << "d = ";
                        std::cout << Pixels[mouse_pos[0]][mouse_pos[1]].d << std::endl;
                    }
                    if (event.text.text[0] == 'c'){
                        for(short x = 0; x < w; x += 1){
                            for(short y = 0; y < h; y += 1 ){
                                is_run = false;
                                Pixels[x][y].d = 0;
                                is_run = true;
                            }
                        }
                    }
                    
                    if (event.text.text[0] == 'g'){
                        double xzn = 0;
                        for(short x = 0; x < w; x += 1){
                            long double yzn = 0;
                            for(short y = 0; y < h; y += 1 ){
                                yzn += Pixels[x][y].a;
                            }
                            xzn += yzn/h;
                        }
                        long double res = xzn/w;
                        std::cout << "Среднее значение: " << res<< std::endl;
                    }
                    if(event.text.text[0] == 'i'){
                        for(short numx = 0; numx < w; numx+=1){
                            std::cout<<Pixels[numx][400].d << std::endl;
                        }
                    }
                    //std::cout << event.text.text  << std::endl;
                }
                else if(event.type == SDL_MOUSEMOTION){
                    mouse_pos[0] = event.motion.x;
                    mouse_pos[1] = event.motion.y;
                }
                else if(event.type == SDL_MOUSEBUTTONDOWN){
                    is_clicked = true;
                    if (is_run == true){
                        is_run = false;
                    }
                    else{
                        is_run = true;
                    }
                    
                }
                else if(event.type == SDL_MOUSEBUTTONUP){
                    is_clicked = false;
                }
                SDL_PumpEvents(); // обработчик событий.
            }
        }
        t1.detach();
        t2.detach();
        SDL_DestroyRenderer(ren);
        SDL_DestroyWindow(win);
        SDL_Quit();
        is_run = false;
        return 0;
}

