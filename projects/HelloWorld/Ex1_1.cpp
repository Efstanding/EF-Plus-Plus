#include <iostream> 
#include <cctype>
int main(){
    const float RBPF = 4.50;
    const float RBSF = 20.50;
    const float RPC = 7.50;
    const float BBPF = 15.00;
    const float BPC = 50.00 ;
    int numchannel{};
    int duedebt{};

    std::cout << "Residential Or Business ? (r/b) \n" ;
    char acronym {};
    std::cin >> acronym;
    acronym = std::tolower(acronym);

    if (acronym == 'r'){
        std::cout << "Give Number of channels  \n" ;
        std::cin >> numchannel ;
        duedebt = RBPF + RBSF + RPC * numchannel ;
    }
    else if (acronym == 'b'){
        std::cout << "Give Number of channels, Number of linkings: \n" ;
        int numlinkings{};
        std::cin >> numchannel >> numlinkings ;
        duedebt = BBPF + 75 + 5*(numlinkings - 10) + numchannel * BPC ;
    }
    std::cout << "DueDebt: " << duedebt << "\n" ;
     
}
