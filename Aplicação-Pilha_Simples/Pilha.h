class Pilha
{
	public:
		Pilha(int n);
		~Pilha(void);
		void insere(int e);
		int remove(void);
		int topo(void);
		bool vazia(void);
		bool cheia(void);

	private:
		int max;
		int top;
		int *mem;
};