#include <iostream>

int main()
{
    float mass_per , weight_x , weight_y, mass_solute, molarity , mass_solvent, mol_st, mol_svnt, mol_fraction;
    int x;
    std::cout<<"                                         Chemistry Calculator \n\n";

    std::cout<<"PRESS 1 TO FIND MASS PERCENTAGE.\n";
    std::cout<<"PRESS 2 TO FIND MOLARITY. \n";
    std::cout<<"PRESS 3 TO FIND MOLE FRACTIOIN. \n", std::cin >> x;

    if(x == 1)
    {
    std::cout <<"Mass of Component A in grams: ", std::cin>> weight_x;
    std::cout<<"Mass of Component B in grams: " , std::cin>>weight_y;
    mass_per = (weight_x*100)/(weight_x+weight_y);
    std::cout<<"Mass Percentage = " << mass_per;

    }

   if(x == 2)
   {
       std::cout<<"Mass of solute in grams: ", std::cin>>mass_solute;
       std::cout<<"Volume of solvent in liters: ", std::cin>> mass_solvent;
       molarity = mass_solute/mass_solvent;
       std::cout<<"Molarity = " << molarity;
   }

   if(x == 3)
   {
       std::cout<<"Numbers of moles of solute: ", std::cin>> mol_st;
       std::cout<<"Number of moles of solvent: ", std::cin>>mol_svnt;
       mol_fraction = mol_st/(mol_st+mol_svnt);
       std::cout<<"Mole Fraction = " << mol_fraction;
   }


    return 0;

}
