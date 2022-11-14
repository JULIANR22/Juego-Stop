#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {

  int i, k, j, cantidad,inicio, fin, tiempo;
  string nombre[100],apellido[100], ciudad[100], animal[100], color[100], name, res1, res2;
  float tiempofinal, tiempof;

  cout << "*************BIENVENIDOS A STOP GAME***************\n\n";
  cout << "¿Como te llamas? ";
  cin >> name;
  cout << endl;
  cout << "Holi :3 " << name <<" a continuacion te presento las reglas del juego\n\n";
  cout << "¿Estas de acuerdo? (S/N): ";
  cin >> res1;
  cout << endl;
  
  if (res1 == "s" || res1 == "S") {
    cout <<"************* REGLAS DE JUEGO ***************\n\nEl juego te proporciona 10 letras del abecedario de manera aleatoria.\n";
    cout << "Por cada letra debes escribir una palabra segun los siguientes criterios:\n\n Nombre - Apellido - Ciudad - Animal - Color \n\n";
    cout << "1. Por cada palabra correcta se te asignará 100 puntos\n2. Por cada palabra incorrecta se te quitarán 100 puntos\n3. Si no escribes nada... no te preocupes, no se quitarán ni se agregarán puntos\n\n";
    // Condicional para que acepte las reglas del juego
    cout << "¿Tienes claras las reglas del juego? (S/N): ";
    cin >> res2;
    cout<<endl;
  }  
  else{
    return (0);
  }
  
  if (res2 == "s" || res2 == "S"){
    cout << "************* Empieza el juego del hambre*************\n\n";
  }  
  else {
   return (0);
  }
  
  inicio = clock();
  srand(time(0)); // Generar aleatoriamente las letras que vamos a usar
  char letra[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O','P','Q','R','S','T','U','V','W','X','Y','Z'};

  cout << "Ingresa la cantidad de jugadas?: ";
  cin >> cantidad;
  cout<<endl;

  for (k = 1; k <= cantidad; k++) {
    for (i = 0; i < 1; i++) {
      cout << "Letra aleatoria: " << letra[rand() % 26] << "\n\n";
    }
    cout << "Nombre: ";
    cin >> nombre[k];
    cout << "Apellido: ";
    cin >> apellido[k];
    cout << "Ciudad: ";
    cin >> ciudad[k];
    cout << "Animal: ";
    cin >> animal[k];
    cout << "Color: ";
    cin >> color[k];
    cout<<endl;
  }
  
  fin = clock();
  tiempo = fin - inicio;
  tiempofinal = ((float)tiempo) / CLOCKS_PER_SEC;
  tiempof = tiempofinal * 100000;
    // comparacion pasar en mayuscula
    /* for(int i=0; i<2; i++){
      texto = nombre[i]
      largo = texto.size();
      for(int letra=0; letra < largo; letra++){
        texto[letra] = toupper(texto[letra]); */

    // imprimir tabla
  cout << "****************************************************" << endl;
  cout << "***************** RESULTADO DEL JUEGO **************" << endl;
  cout << "****************************************************" << endl;
  for (k = 1; k <= cantidad; k++) {
    cout << setw(10) << "|" << nombre[k] << setw(10) << "|" << setw(10) << "|"<< apellido[k] << setw(10) << "|" << ciudad[k] << setw(10) << "|"<< animal[k] << setw(10) << "|" << endl;
  }
  
  cout << "\nTIEMPO DE ESTA PARTIDA: " << tiempofinal << "  SEGUNDOS" << endl;
  
  return (0);
}

  /*cout<<" --------- --------- ---------"<<endl;
  cout<<"|         ||       ||         |"<<endl;
  cout<<" --------- --------- ---------"<<endl;
  cout<<" --------- --------- ---------"<<endl;
  cout<<"|         ||       ||         |"<<endl;
  cout<<" --------- --------- ---------"<<endl;
  cout<<" --------- --------- ---------"<<endl;
  cout<<"|         ||       ||         |"<<endl;
  cout<<" --------- --------- ---------"<<endl;
  #include <cctype>*/
