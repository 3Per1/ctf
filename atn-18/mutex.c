#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
    bool EnEjecucion;

    //mutex =
    CreateMutex(NULL, FALSE, "ShellcoreDiscipline");
    EnEjecucion = (GetLastError() == ERROR_ALREADY_EXISTS || GetLastError() == ERROR_ACCESS_DENIED);

    if(EnEjecucion) {
        MessageBox(NULL, "El programa ya está en ejecución", "Probar mutex", MB_OK);
        return 0;
    }
    // Resto del programa aquí...
    cin.get();
    return 0;
}
