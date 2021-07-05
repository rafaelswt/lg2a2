#ifndef PRODUTO_H
#define PRODUTO_H
#include <ctime>

using namespace std;

class Produto
{
    public:
        Produto() : Produto("") {}
        Produto(string Nome) : Produto(Nome, 0) {}
        Produto(string Nome, int Preco) : Produto (Nome, Preco, "") {}
        Produto(string Nome, int Preco, string Categoria) : Produto(Nome, Preco, Categoria, false) {}
        Produto(string Nome, int Preco, string Categoria, bool Vegetariano) :Produto(Nome, Preco, Categoria, Vegetariano, 0) {}
        Produto(string Nome, int Preco, string Categoria, bool Vegetariano, time_t Validade)
        {
            string c;

            if (!Nome.empty())
            {
                SetNome(Nome);
            }
            else
            {
                SetNome("Sem Nome");
            }

            if (Preco != 0)
            {
                SetPreco(Preco);
            }
            else
                SetPreco(9999);

            if (!Categoria.empty())
            {
                SetCategoria(Categoria);
            }
            else
                SetCategoria("SemCategoria");

            SetVegetariano(Vegetariano);


            SetValidade(Validade);
        }

        virtual ~Produto() {}

        void ExibirProduto()
        {
            cout << GetNome() << endl;
            cout << GetPreco() << endl;
            cout << GetCategoria() << endl;
            cout << GetVegetariano() << endl;
            cout << ctime(&Validade) << endl;

        }

        string GetNome() { return Nome; }
        void SetNome(string val) { Nome = val; }
        int GetPreco() { return Preco; }
        void SetPreco(int val) { Preco = val; }
        string GetCategoria() { return Categoria; }
        void SetCategoria(string val) { Categoria = val; }
        bool GetVegetariano() { return Vegetariano; }
        void SetVegetariano(bool val) { Vegetariano = val; }
        time_t GetValidade() { return Validade; }
        void SetValidade(time_t val) { Validade = val; }

    protected:

    private:
        string Nome;
        int Preco;
        string Categoria;
        bool Vegetariano;
        time_t Validade;
};

#endif // PRODUTO_H
