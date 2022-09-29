/* Colas diferentes a las pilas 
son de tipo FIFO
Desencolar muestra el primer elemento de la cola 
Encolar inserta en el final de la cola un elemento 
 */
 #include <iostream> 
 using namespace std; 

 struct Nodo
 {
    int n; 
    int frenteCola; 
    int finalCola; 
    int elemento[4];

 }nodo;

 //Funciones 
void Crear(struct Nodo *);
bool Vacia(struct Nodo *);
int Llena(Nodo *);
void Insertar(struct Nodo *, int);
void Mover(struct Nodo *);
void Eliminar(struct Nodo *);

 int main()
 {
    Crear(&nodo);
    /* solicitar datos al usuario para imprimir datos */ 
    cout << "posicion " << nodo.frenteCola << " inicio cola " << nodo.elemento[nodo.frenteCola] << endl;
    cout << "posicion " << nodo.finalCola << " fin cola " << nodo.elemento[nodo.finalCola] << endl;
    

    return 0; 
 }
 // Crear Cola vacía
void Crear(Nodo *p)
{
    p->frenteCola = -1;
    p->finalCola = -1;
}

// Vacia
bool Vacia(Nodo *p)
{
    if (p->finalCola == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// Llena
int Llena(Nodo *p)
{
    if (p->finalCola == tamano - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Encolar -- final de la lista
void Insertar(Nodo *p, int n)
{
    if (!Llena(p))
    {
        // Si la cola esta vacia
        if (Vacia(p))
        {
            p->frenteCola = 0;
        }
        p->finalCola++;
        p->elemento[p->finalCola] = n;
    }
    else
    {
        cout << "Cola esta llena";
    }
}

// Correr elementos
void Mover(Nodo *p)
{
    for (int i = 1; i <= p->finalCola; i++)
    {
        p->elemento[i - 1] = p->elemento[i];
    }
    p->finalCola--;
}

// Desencolar -- inicio de la lista
void Eliminar(Nodo *p){
    if (!Vacia(p))
    {
        // si solo hay un elemento
        if (p->finalCola==0)
        {
            p->frenteCola = -1;
            p->finalCola = -1;
        }else
        {
            // para dos o mas elementos
            Mover(p);
        }
            
    }else{
        cout<<"Cola esta vacia";
    } 
}