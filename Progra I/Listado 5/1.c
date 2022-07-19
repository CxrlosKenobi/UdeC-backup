// Solucion propia
typedef struct {
  char nombre[100];
  unsigned char edad;
  double agresividad;
} Fanatico;


enum posicion {
  Arquero,
  Defensor,
  Medio,
  Delantero
};
typedef struct {
  char nombre[100];
  unsigned char edad;
  enum posicion posicion;
  float regate;
  float defensa;
  float reflejos;
  float velocidad;
  float dureza;
  float resistencia;
} Jugador;


enum rol {
  DT,
  PreparadorArqueros,
  PreparadorFisico,
  Asistente,
  Fisioterapeuta,
  Doctor
};
typedef struct {
  char nombre[100];
  unsigned char edad;
  enum rol rol;
  unsigned char experiencia;
} Staff;


typedef struct {
  char nombre[100];
  unsigned int anyoFundacion;
  Staff *staff;
  int numStaff[6];
  Jugador *jugadores;
  int numJugadores[4];
  Fanatico *fanaticos;
  int numFanaticos;
} Equipo;
