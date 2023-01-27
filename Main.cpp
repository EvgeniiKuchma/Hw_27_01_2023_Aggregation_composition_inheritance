#include <iostream>
#include "windows.h"
#include <cstring>
//..
 // ждать 5 секунд, время эта функция считает в тысячных долях секунды
//пример композиции - когда один класс создается внутри другого и не может без него существовать 
class Long_bow {
    public:
        void Target_info() {
            std::cout << "You target have a " << _armor << " armor point."<< std::endl;
            Sleep(2000); 
            std::cout << "Distance to target " << _distance_from_target << " metres." << std::endl;
             Sleep(2000); 
            std::cout << "Hmm...what will your archer do?" << std::endl;
            for (int i = 0; i < 5; i++) {
                std::cout << "....";
                Sleep(525);
            }
        }
        void Out_Shoot() {
            std::cout << "\nArcher use long_bow "<< std::endl;
            Sleep(1000);
            std::cout << "Archer takes aim"; 
            for (int i = 0; i < 7; i++) {
                std::cout << "....";
                Sleep(600);
            }
            std::cout << "PAAUUU...";
            Sleep(50);
            for (int i = 0; i < _distance_from_target; i++) {
                std::cout << "...>>>---->...";
                Sleep (50);
         
            }
            std::cout << "..>>>>-||-> VTTTTTK!!! \n\n" << std::endl;
            Sleep(1000); 
            std::cout << "\t!!!!!!...TADAM...!!!!!!!!!!!!" << std::endl;
            std::cout << "\t*****Congratulations*****" << std::endl;
           
        }
        int Arrow_Damage() {
            return _damage = _shoot - _armor;
        }
        void Out_Arrow_Damage() {
            std::cout << "\tYour arrow " << _damage << " damage point to the target !!!"<< std::endl;
        }
        private:
        int _distance_from_target = 10;
        int _shoot = 4;
        int _armor = 2;
        int _damage = 0;
};
class Cap {
public: 
    const std::string& GetColor() {
        return _cap;
    }
   const std::string _cap  = "red";
};
class Cap; // forward declaration
        
class Archer {
public: 
    void Look_at_the_Cap(Cap& cap_archer) {
        std::cout << cap_archer.GetColor();
    }
    void shotArrow(){
        arch_sht.Target_info();
        arch_sht.Out_Shoot();
        arch_sht.Arrow_Damage(); 
        arch_sht.Out_Arrow_Damage();
    }
private:
    Long_bow arch_sht;
};
//пример агрегации - когда один класс связан с другим но может существовать самостоятельно


int main()
{
    setlocale(LC_ALL, "Russian");
    Archer shoot;
    shoot.shotArrow();
    
    
    
    return 0;
}