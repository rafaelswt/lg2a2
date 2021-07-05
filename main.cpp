#include <iostream>
#include <produto.h>
#include <cliente.h>
#include <ctime>

using namespace std;

int main()
{
    Produto p1 = Produto("Torrada", 15, "Padaria", true, 24*60*60);
    Produto p2 = Produto("Salgadinho");
    p1.ExibirProduto();
    p2.ExibirProduto();

    return 0;
}
