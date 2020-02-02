# Moneda:
tipo de dato entero para la moneda nombrada Bit, propiedades nombreMoneda,cantidadMoneda,propietario.

## Descripcion:
Moneda virtual creada para ser transeferida de un monedero central y entre propietarios de dichas monedas

## Operaciones:
- estaVacia() devuelve booleano.
- public void insertarFinal(int cantidadMoneda,String propietario)
  -metodo que agrega una Persona con un saldo inicial a la lista
- public void transferencia (String nombre,int cantidadAbonar)
  - metodo que transfiere de el monedero a una persona
- public void transferenciaFrom (String nombrePropietario,String nombreBeneficiario,int cantidadAbonar)
  -metodo que transfiere de una persona a otra cierta cantidad de Bit monedas