#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // Para usar system().
using namespace std;



int main() {
    int opcion;
    vector<string> tareas; // Vector para almacenar múltiples tareas.
    
    do {
        // Muestra el menú.
        #ifdef _WIN32
            system("cls"); // Limpia la pantalla en Windows.
        #else
            system("clear"); // Limpia la pantalla en Linux/macOS.
        #endif
    	
    	
        cout << "1. Agregar tarea" << endl;
        cout << "2. Eliminar tarea" << endl;
        cout << "3. Mostrar tareas" << endl;
        cout << "4. Salir" << endl << " " << endl;
        
        cout << "Escriba su opcion aqui: " << endl;
        
        cin >> opcion, cout << endl;
        cin.ignore(); // Ignorar el salto de línea después de cin.

        switch (opcion) {
        case 1: {
        	// Limpia la consola al seleccionar esta opción.
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
        	
            cout << "Ingrese la tarea a registrar: ";
            string nuevaTarea;
            getline(cin, nuevaTarea); // Permite leer tareas con espacios.
            tareas.push_back(nuevaTarea);
            cout << "Tarea agregada." << endl;
            break;
            
        }
        case 2: {
        	// Limpia la consola al seleccionar esta opción.
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
        	
            cout << "Ingrese el numero de la tarea a eliminar: ";
            int num;
            cin >> num;
            if (num > 0 && num <= tareas.size()) {
                tareas.erase(tareas.begin() + num - 1);
                cout << "Tarea eliminada." << endl;
            } else {
                cout << "Numero invalido." << endl;
            }
            break;
            
        }
		case 3: {
		            // No limpiar la consola antes de mostrar las tareas.
		            cout << "Lista de tareas:" << endl;
		            if (tareas.empty()) {
		                cout << "No hay tareas registradas." << endl;
		            } else {
		                for (size_t i = 0; i < tareas.size(); ++i) {
		                    cout << i + 1 << ". " << tareas[i] << endl;
		                }
		            }
		            cout << " " << endl << "=============" << endl << "Presione Enter para volver al Menu...";
		            cin.ignore(); // Espera a que el usuario presione Enter.
		    break;
		            
        }
        case 4:
        	// Limpia la consola al seleccionar esta opción.
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
        	
            cout << "Saliendo del programa." << endl;
            break;
			
        default:
            cout << "Opcion invalida. Intente nuevamente." << endl;
        }
    } while (opcion != 4);

    return 0;
}
