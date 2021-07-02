#ifndef CLIENTE_H
#define CLIENTE_H


class Cliente
{
    public:
        Cliente(string Nome, int CPF, string NomeDaMae, string NomeDoPai, int QteDeCompras) {}
        virtual ~Cliente() {}

        string GetNome() { return Nome; }
        void SetNome(string val) { Nome = val; }
        int GetCPF() { return CPF; }
        void SetCPF(int val) { CPF = val; }
        string GetNomeDoPai() { return NomeDoPai; }
        void SetNomeDoPai(string val) { NomeDoPai = val; }
        string GetNomeDaMae() { return NomeDaMae; }
        void SetNomeDaMae(string val) { NomeDaMae = val; }
        int GetQteDeCompras() { return QteDeCompras; }
        void SetQteDeCompras(int val) { QteDeCompras = val; }

    protected:

    private:
        string Nome;
        int CPF;
        string NomeDoPai;
        string NomeDaMae;
        int QteDeCompras;
};

#endif // CLIENTE_H
