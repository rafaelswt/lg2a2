#ifndef PEIXES_H
#define PEIXES_H

#include <Produto.h>


class Peixes : public Produto
{
    public:
        Peixes(string Nome, int Preco, string Categoria, bool Vegetariano, time_t Validade, time_t DiaDaPesca) {}
        virtual ~Peixes() {}

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

#endif // PEIXES_H
