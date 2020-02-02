
package tareasedd2020;
import tareasedd2020.*;
/**
 *
 * @author cris
 */
public class TareasEDD2020 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        //creacion de la lista de personas
        Lista ListaPersonas = new Lista();
        
        //creacion de 5 personas con una cantidad de monedas Llamadas Bit de  100
        ListaPersonas.insertarFinal(100, "Daniel");
        ListaPersonas.insertarFinal(100, "Mario");
        ListaPersonas.insertarFinal(100, "Julio");
        ListaPersonas.insertarFinal(100, "Jose");
        ListaPersonas.insertarFinal(100, "Ana");
        
        //metodo que le abona la cantidad de monedas a la Persona directamente del monedero
        ListaPersonas.transferencia("Julio", 3);
        ListaPersonas.transferencia("Daniel", 50);
         
        //metodo que transfiere de persona a persona
        ListaPersonas.transferenciaFrom("Julio", "Daniel", 100);
        //si la cantidad de monedas a transferir  de una persona a otra sobrepasa su credito sale el siguinte mensaje
        // No dispones de esta cantidad para ser transferida
        ListaPersonas.transferenciaFrom("Julio", "Daniel", 100);
        
    }
    
}
