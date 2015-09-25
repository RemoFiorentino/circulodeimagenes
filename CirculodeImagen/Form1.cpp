#include "Form1.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(){
 Application::EnableVisualStyles();
 Application::SetCompatibleTextRenderingDefault(true);
 CirculodeImagen::Form1 Formulario;
 Application::Run(%Formulario);
}
