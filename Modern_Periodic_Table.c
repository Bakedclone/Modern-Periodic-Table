#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// This function is used to print details of elements
void print_details(int n, char *Elements_Name[], char *Elements_Symbol[], float Atomic_mass[],
        char *Elements_Properties[]) {
            printf("\nName : %s", Elements_Name[n-1]);
            printf("\nSymbol : %s", Elements_Symbol[n-1]);
            printf("\nAtomic Mass : %.3f", Atomic_mass[n-1]);
            printf("\nProperties : %s", Elements_Properties[n-1]);
            printf("\n\n");
}

// This function is used to search element by it's name and return it's index
int Search_by_name(char input_name[], char *Elements_Name[]) {
            char *name = input_name;

            for (int i = 0; i <118; i++)
            {
                if (strcmp(name, Elements_Name[i]) == 0) {
                    return i;
                }
            }
            return -1;
}

// This function is used to search element by it's symbol and return it's index
int Search_by_symbol(char input_symbol[], char *Elements_Symbol[]) {
            char *symbol = input_symbol;
            for (int i = 0; i < 118; i++)
            {
                if (strcmp(symbol, Elements_Symbol[i]) == 0) {
                    return i;
                }
            }
            return -1;
}

int main() 
{
    // Initialized all variables with details of periodic table
    char *Elements_Name[] = {"Hydrogen","Helium","Lithium","Beryllium","Boron","Carbon","Nitrogen","Oxygen","Fluorine","Neon","Sodium","Magnesium","Aluminium","Silicon","PhosphorusP","Sulphur","Chlorine","Argon","Potassium","Calcium","Scandium","Titanium","Vanadium","Chromium","Manganese","Iron","Cobalt","Nickel","Copper","Zinc","Gallium","Germaium","Arsenic","Selenium","Bromine","Krpton","Rubidium","Strontium","Yttrium","Zirconium","Niobium","MolybdenumMo","TechnetiumTc","Ruthenium","Rhodium","Palladium","Silver","Cadmium","Indium","Tin","Antimony","Tellurium","Iodine","Xenon","Cesium","Barium","Lanthanum","Cerium","PraseodymiPr","Neodymium","PromethiumPm","Samarium","Europium","GadoliniumGd","Terbium","DysprosiumDy","Holmium","Erbium","Thrulium","Ytterbium","Lutetium","Hafnium","Tantalum","Tungsten","Rhenium","Osmium","Iridium","Platinum","Gold","Mercury","Thallium","Lead","Bismuth","Polonium","Astatine","Radon","Francium","Radium","Actinium","Thorium","ProtactiumPa","Uranium","Neptunium","Plutonium","Americium","Curium","Berkelium","CaliforniuCf","EinsteiniuEs","Fermium","MendeleviuMd","Nobelium","LawrenciumLu","RutherfordRf","Dubnium","SeaborgiumSg","Bohrium","Hassium","MeitneriumMt","DarmstadtiDs","RoentgeniuRg","CoperniciuCn","Nihonium","Nihonium","Moscovium","LivermoriuLv","TennessineTs","Oganesson"};
    char *Elements_Symbol[] = {"H","He","Li","Be","B","C","N","O","F","Ne","Na","Mg","Al","Si","P","S","Cl","Ar","K","Ca","Sc","Ti","V","Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br","Kr","Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd","In","Sn","Sb","Te","I","Xe","Cs","Ba","La","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb","Lu","Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg","Tl","Pb","Bi","Po","At","Rn","Fr","Ra","Ac","Th","Pa","Ur","Np","Pu","Am","Cm","Bk","Cf","Es","Fm","Md","No","Lu","Rf","Db","Sg","Bh","Hs","Mt","Ds","Rg","Cn","Nh","Fl","Mc","Lv","Ts","Og",};
    float Atomic_mass[] = {1.008,4.003,6.941,9.012,10.811,12.011,14.007,15.999,18.998,20.180,22.990,24.305,23.982,28.086,30.974,32.066,35.453,39.948,39.098,40.078,44.956,47.880,50.942,51.996,54.938,55.933,58.933,58.693,63.546,65.380,69.723,72.631,74.922,78.971,79.904,83.798,85.468,87.620,88.906,91.224,92.906,95.950,98.907,101.070,102.906,106.420,107.868,112.414,114.818,118.711,121.760,127.600,126.904,131.294,132.905,137.328,138.905,140.116,140.908,144.243,144.913,150.360,151.964,157.250,158.925,162.500,164.930,167.259,168.934,173.055,174.967,178.490,180.948,183.850,186.207,190.230,192.220,195.080,196.967,200.590,204.383,207.200,208.980,208.982,209.987,222.018,223.020,226.025,227.028,232.038,231.036,238.029,237.048,244.064,243.061,247.070,247.070,251.080,254.000,257.095,258.100,259.101,262.000,261.000,262.000,266.000,264.000,269.000,278.000,281.000,280.000,285.000,286.000,289.000,289.000,293.000,294.000,294.000};
    char *Elements_Properties[] = {"Non-Metal","Noble Gas","Alkali Metal","Alkaline Earth Metal","Metalliod","Non-Metal","Non-Metal","Non-Metal","Halogen","Noble Gas","Alkali Metal","Alkaline Earth Metal","Metal","Metalliod","Halogen","Non-Metal","Halogen","Noble Gas","Alkali Metal","Alkaline Earth Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Metal","Metalloid","","Non-Metal","Halogen","Noble Gas","Alkali Metal","Alkaline Earth Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Metal","Metal","","Metalloid","Halogen","Noble Gas","Alkali Metal","Alkaline Earth Metal","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Metal","Metal","Metal","Metalloid","Halogen","Noble Gas","Alkali Metal","Alkaline Earth Metal","Actinide","Actinide","Actinide","Actinide","Actinide","Actinide","Actinide","Actinide","Actinide","Actinide","Actinide","Actinide","Actinide","Actinide","Actinide","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Metal","Metal","Metal","Metal","Halogen","Noble Gas"};
    int n;

    while(1) {
        printf("\t\t\t\tModern Periodic Table\n");
        printf("\t\t\t--------------------------------------\n");
        printf("1) Search atom by its Name\n");
        printf("2) Search atom by its Symbol\n");
        printf("3) Search atom by its Atomic no.\n");
        printf("4) Search atom by its Group/Transition Series\n");
        printf("5) Exit\n");

        // Enter Choice
        int ch;
        printf("\nEnter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("\nEnter name : ");
                char input_name[20];
                fflush(stdin);
                gets(input_name);
                n = Search_by_name(input_name, Elements_Name);
                if(n != -1)                         // Element found
                    print_details(n+1, Elements_Name, Elements_Symbol, Atomic_mass, Elements_Properties);
                else                                // Element Not-found
                    printf("\nEnter correct name\n");
                break;
            case 2:
                printf("\nEnter Symbol : ");
                char input_symbol[5];
                fflush(stdin);

                gets(input_symbol);
                n = Search_by_symbol(input_symbol, Elements_Symbol);
                if(n != -1)                         // Element found
                    print_details(n+1, Elements_Name, Elements_Symbol, Atomic_mass, Elements_Properties);
                else                                // Element Not-found
                    printf("\nEnter correct symbol\n");
                break;
            case 3:
                printf("\nEnter Element No. : ");
                scanf("%d", &n);
                if(n > 0 && n < 119)        // Element found
                    print_details(n, Elements_Name, Elements_Symbol, Atomic_mass, Elements_Properties);
                else                        // Element Not-found
                    printf("\nEnter correct no.\n");
                break;
            case 4:
                printf("\n1)Print Group\n2)Print Transition Series\n");
                printf("\nEnter your choice : ");
                int ch2;
                scanf("%d", &ch2);
                if (ch2 == 1)       // Print Group
                {
                    int group[8][7] = {{1, 3, 11, 19, 37, 55, 87},       // group 1
                                        {4, 12, 20, 38, 56, 88, -1 /*to fill empty space*/},     // group 2       
                                        {5, 13, 31, 49, 81, 113, -1},    // group 13
                                        {6, 14, 32, 50, 82, 114, -1},    // group 14
                                        {7, 15, 33, 51, 83, 115, -1},    // group 15
                                        {8, 16, 34, 52, 84, 116, -1},    // group 16
                                        {9, 17, 35, 53, 85, 117, -1},    // group 17
                                        {2, 10, 18, 36, 54, 86, 118}};   // group 18
                    int input_group;

                    printf("\nEnter Group no. to print : ");
                    scanf("%d", &input_group);

                    if(input_group > 2 && input_group < 13 || input_group > 18) {   // Incorrect input
                        printf("\nEnter correct group between 1 & 2 or 13 & 18\n");
                    }
                    else {                                                          // Correct input
                        if(input_group >= 13) {               
                        input_group = input_group - 10;     // convert input_group in range of group array
                        }

                        for(int i=0; i<7; i++) {
                            if(group[input_group-1][i] != -1)
                                print_details(group[input_group-1][i], Elements_Name, Elements_Symbol, Atomic_mass, Elements_Properties);
                        }
                    }
                    
                }
                else if (ch2 == 2)      // Print transition series
                {
                    int ts_start_index[4] = {21, 39, 57, 89};           // staring indexes of transition series
                    int ts_end_index[4] = {30, 48, 80, 112};            // Ending indexes of transition series
                    int input_ts;

                    printf("\nEnter transition series no. to print : ");
                    scanf("%d", &input_ts);

                    if(input_ts > 0 && input_ts < 5){           // Correct input
                        for(int i=ts_start_index[input_ts-1]; i<=ts_end_index[input_ts-1]; i++) {
                            print_details(i, Elements_Name, Elements_Symbol, Atomic_mass, Elements_Properties);
                        }
                    }
                    else {                                      // Incorrect input
                        printf("\nEnter correct choice\n");
                    }
                }
                else {                                          // Incorrect choice of group or transition series
                    printf("\nEnter correct choice\n");
                }
                break;
            case 5:                                 
                exit(0);                            // Terminates program
            default:
            printf("\nEnter correct choice\n");
            break;
        }
        system("pause");                            // Pause the infinite while loop
        system("cls");                              // Clears the output terminal
    }
}