#include <iostream>
#include <produto.h>
#include <cliente.h>
#include <ctime>

using namespace std;

int main()
{
    Produto p1 = Produto("Pastel", 15, "Padaria", false, 24*60*60);
    p1.ExibirProduto();

    return 0;
}
