
package tareasedd2020;

/**
 *
 * @author cris
 */
public class NodoMoneda {
    
    String nombreMoneda; // describe el nombre de la moneda
    int cantidadMoneda; // numero que describe la cantidad de monedas del propietario
    String propietario; // nombre del propietario
    
    NodoMoneda siguiente; // puntero al siguiente Nodo
    NodoMoneda anterior; // puntero al anterior nodo
    
    //metodo constructor para las monedas pertenecientes a una persona
    public NodoMoneda(int cantidadMoneda,String propietario)
    {
        this.nombreMoneda = "Bit"; //nombre asignado a la moneda creada
        this.propietario = propietario;
        this.cantidadMoneda = cantidadMoneda;
        
        this.siguiente =null;
        this.anterior =null;
    }
    
    //metodo que agrega el valor que se desea transferir
    public void  settTransferencia(int cantidadMoneda)
    {
        this.cantidadMoneda += cantidadMoneda;
    }

    //metodo que agrega el valor que se desea transferir
    public void  restarTransferencia(int cantidadMoneda)
    {
        this.cantidadMoneda -= cantidadMoneda;
    }
    
}
