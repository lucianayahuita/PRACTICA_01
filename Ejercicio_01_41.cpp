//// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 24/08/2023
// Fecha modificaci�n: 24/08/2023
// Numero de ejericio: 41
// Problema planteado: Un cierto n�mero de obreros de una empresa reciben pagos semanales de dinero, en
//funci�n a las horas trabajadas y una tarifa hora. Se sabe que cuando las horas que
//trabaja un obrero exceden de 40, el resto se convierte en horas extras que se pagan al
//doble de una hora normal, considere adem�s un descuento del 5% a todos los obreros
//para pagar su prima de seguro. Por lo tanto determine: el pago total y el pago neto por
//cada obrero y tambi�n el pago general a todos los obreros y cuanto se retendr� por la
//prima de manera general.

#include <iostream>
using namespace std;

int main() {
    int numObreros;
    cout << "Ingrese el n�mero de obreros: ";
    cin >> numObreros;
    double tarifaNormal, horasTrabajadas;
    const double TARIFA_EXTRA = 2.0;  // Tarifa para horas extras
    const double DESCUENTO_PRIMA = 0.05;  // Porcentaje de descuento para la prima de seguro
    double totalPagos = 0.0;
    double totalRetenciones = 0.0;
    for (int i = 1; i <= numObreros; i++) {
        cout << "\nObrero " << i << ":" << endl;
        cout << "Ingrese la tarifa por hora: ";
        cin >> tarifaNormal;
        cout << "Ingrese las horas trabajadas: ";
        cin >> horasTrabajadas;
        double pagoNormal = tarifaNormal * horasTrabajadas;
        double horasExtras = 0.0;
        if (horasTrabajadas > 40) {
            horasExtras = horasTrabajadas - 40;
            pagoNormal -= horasExtras * tarifaNormal;  // Deducci�n de horas extras de pago normal
        }
        double pagoTotal = pagoNormal + horasExtras * TARIFA_EXTRA;
        double retencionPrima = pagoTotal * DESCUENTO_PRIMA;
        double pagoNeto = pagoTotal - retencionPrima;
        totalPagos += pagoNeto;
        totalRetenciones += retencionPrima;
        cout << "Pago total: $" << pagoTotal << endl;
        cout << "Retenci�n de prima: $" << retencionPrima << endl;
        cout << "Pago neto: $" << pagoNeto << endl;
    }
    cout << "\nPago general a todos los obreros: $" << totalPagos << endl;
    cout << "Total retenciones de primas: $" << totalRetenciones << endl;
    return 0;
}
