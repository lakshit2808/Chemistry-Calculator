#include <iostream>
#include <string>
int main()
{
    float mass_per , weight_x , weight_y, mass_solute, molarity , mass_solvent, mol_st, mol_svnt, mol_fraction;
    int x,y;
    double atm , mass_1atm, Ava_cont = 6.022e+23, mass_ele, one_mole;

    std::cout<<"                                         Chemistry Calculator \n\n";
    std::cout<<"PRESS 1 TO FIND MASS PERCENTAGE.\n";
    std::cout<<"PRESS 2 TO FIND MOLARITY. \n";
    std::cout<<"PRESS 3 TO FIND MOLE FRACTIOIN. \n";
    std::cout<<"PRESS 4 TO FIND MASS OF ONE ATOM. \n";
    std::cout<<"PRESS 5 TO FIND ONE MOLE OF ATOM. \n";
    std::cout<<"PRESS 6 TO FIND MASS OF ONE MOLECULE. \n";
    std::cout<<"PRESS 7 TO FIND MOLES OF COMPOUND. \n";
    std::cout<<"\nEnter your choice: ", std::cin >> x;

    if(x == 1)
    {
    std::cout <<"\nMass of Component A in grams: ", std::cin>> weight_x;
    std::cout<<"Mass of Component B in grams: " , std::cin>>weight_y;
    mass_per = (weight_x*100)/(weight_x+weight_y);
    std::cout<<"Mass Percentage = " << mass_per;

    }

   if(x == 2)
   {
       std::cout<<"\nMass of solute in grams: ", std::cin>>mass_solute;
       std::cout<<"Volume of solvent in liters: ", std::cin>> mass_solvent;
       molarity = mass_solute/mass_solvent;
       std::cout<<"Molarity = " << molarity;
   }

   if(x == 3)
   {
       std::cout<<"\nNumbers of moles of solute: ", std::cin>> mol_st;
       std::cout<<"Number of moles of solvent: ", std::cin>>mol_svnt;
       mol_fraction = mol_st/(mol_st+mol_svnt);
       std::cout<<"Mole Fraction = " << mol_fraction;
   }

   if(x==4)
   {
       std::cout<<"\nAtomic mass of element in gram: ", std::cin>> atm;
       mass_1atm = atm/Ava_cont;
       std::cout<<"Mass of one Atom = " << mass_1atm;
   }

   if(x==5)
   {
       std::cout<<"\nMass of element: " , std::cin>> mass_ele;
       std::cout<<"Atomic mass of element: ",std::cin>> atm;
       one_mole = mass_ele/atm;
       std::cout<<"One mole of Atom = " << one_mole;
   }

    if(x==6)
    {
       std::cout<<"\nMolecular mass in gram: ", std::cin>> atm;
       mass_1atm = atm/Ava_cont;
       std::cout<<"Mass of one Molecule = " << mass_1atm;
    }

    if(x==7)
    {
       std::cout<<"\nMass of Compound in grams: " , std::cin>> mass_ele;
       std::cout<<"Molecular mass in grams: ",std::cin>> atm;
       one_mole = mass_ele/atm;
       std::cout<<"Moles of Compound = " <<one_mole;

    }



    return 0;

}
