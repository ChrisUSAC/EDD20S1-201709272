
package tareasedd2020;
import tareasedd2020.NodoMoneda;

/**
 *
 * @author cris
 */
public class Lista {
    
    
   int tamano; // nos indica cuantas personas existen en la lista
   NodoMoneda primero; //indica el primer elemento de la lista
   NodoMoneda ultimo; // indica el ultimo elemento de la lista
   
   public Lista()
   {    
       this.tamano = 0;
       this.primero = null;
       this.ultimo = null;
   }
   
   //---------------------------------------------------------------------------------------------------
    //metodo que avisa si la lista esta vacia
    public boolean estaVacia()
    {
        return this.primero==null;
    }
    
    //---------------------------------------------------------------------------------------------------
    //metodo utilizado para almacenar los usuarios
    public void insertarFinal(int cantidadMoneda,String propietario)
    {
        
        //elemento a insertar
        NodoMoneda nuevo =new  NodoMoneda(cantidadMoneda, propietario);
        
        //si la lista esta vacia 
        if (this.primero==null) {
            
            this.primero = nuevo;
            this.ultimo = nuevo;
            
        }
        else
        {
            //si ya tiene un elemento inserta al final
            this.ultimo.siguiente = nuevo;
            nuevo.anterior = this.ultimo;
            this.ultimo = nuevo;
        }
        this.tamano++;
    
    }
    
    //metodo que agrega del monedero a una persona la transferencia
    public void transferencia (String nombre,int cantidadAbonar)
    {   
        NodoMoneda aux = this.primero;
        
        while (aux.siguiente!=null) {
            
            if (aux.propietario.equals(nombre)) {
                aux.settTransferencia(cantidadAbonar);
                System.out.println("cantidad abonada con exito");
                break;
                
            }
            aux = aux.siguiente;
            
        }
        
    }
    
    
        //metodo que agrega del monedero a una persona la transferencia
    public void transferenciaFrom (String nombrePropietario,String nombreBeneficiario,int cantidadAbonar)
    {   
        NodoMoneda aux = this.primero;
        
        while (aux!=null) {
            
            if (aux.propietario.equals(nombrePropietario)) {
                
                if (aux.cantidadMoneda<cantidadAbonar) 
                {
                    System.out.println("No dispones de esta cantidad para ser transferida");
                }
                else
                {
                    //validar que el beneficiario exista
                    NodoMoneda aux2 = this.primero;
                    
                    while (aux2!=null) {                        
                        if (aux2.propietario.equals(nombreBeneficiario)) {
                            break;
                        }
                        aux2 = aux2.siguiente;
                    }
                    
                    if (aux2!=null) {
                        //restar cantidad del que envia las monedas
                        aux.restarTransferencia(cantidadAbonar);
                        //abonar a la cuenta del que recibe la transferencia
                        aux2.settTransferencia(cantidadAbonar);
                        System.out.println("transferencia exitosa");
                    }
                    else
                    {
                        System.out.println(" beneficiario no encontrado");
                    }
                        
                }
                
            }
            aux = aux.siguiente;
            
        }
    }
}
