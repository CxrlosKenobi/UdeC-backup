// Solución única

#include <stdio.h>
#include <stdlib.h>
//
#include "1.c"


Fanatico *crearFanaticos(int numFanaticos) {
  Fanatico *fanaticos = (Fanatico *)malloc(numFanaticos * sizeof(Fanatico));
  for (int i = 0; i < numFanaticos; i++) {
    fanaticos[i].edad = rand() % 100;
    fanaticos[i].agresividad = rand() % 100;
    fanaticos[i].nombre[0] = '\0';
  }

  return fanaticos;
};

void liberarFanaticos(Fanatico *fans) {
  free(fans);
};


Staff *crearStaff(
  int numDT, int numPrepArq, int numPrepFis,
  int NumAsis, int numFisio, int numDoc) {

  Staff *staff = (Staff *) malloc(
    (numDT + numPrepArq + numPrepFis + NumAsis + numFisio + numDoc) * sizeof(Staff)
  );

  for (int i = 0; i < numDT; i++) {
    staff[i].edad = rand() % 100;
    staff[i].rol = DT;
    staff[i].experiencia = rand() % 100;
    staff[i].nombre[0] = '\0';
  }

  for (int i = 0; i < numPrepArq; i++) {
    staff[i].edad = rand() % 100;
    staff[i].rol = PreparadorArqueros;
    staff[i].experiencia = rand() % 100;
    staff[i].nombre[0] = '\0';
  }

  for (int i = 0; i < numPrepFis; i++) {
    staff[i].edad = rand() % 100;
    staff[i].rol = PreparadorFisico;
    staff[i].experiencia = rand() % 100;
    staff[i].nombre[0] = '\0';
  }

  for (int i = 0; i < NumAsis; i++) {
    staff[i].edad = rand() % 100;
    staff[i].rol = Asistente;
    staff[i].experiencia = rand() % 100;
    staff[i].nombre[0] = '\0';
  }

  for (int i = 0; i < numFisio; i++) {
    staff[i].edad = rand() % 100;
    staff[i].rol = Fisioterapeuta;
    staff[i].experiencia = rand() % 100;
    staff[i].nombre[0] = '\0';
  }

  for (int i = 0; i < numDoc; i++) {
    staff[i].edad = rand() % 100;
    staff[i].rol = Doctor;
    staff[i].experiencia = rand() % 100;
    staff[i].nombre[0] = '\0';
  }

  return staff;
}

void liberarStaff(Staff *staff) {
  free(staff);
};


Jugador *crearJugadores(
  int numArq, int numDef,
  int numCent, int numDel) {
  
  Jugador *jugadores = (Jugador *)malloc(
    (numArq + numDef + numCent + numDel) * sizeof(Jugador)
  );

  for (int i = 0; i < numArq; i++) {
    jugadores[i].edad = rand() % 100;
    jugadores[i].posicion = Arquero;
    jugadores[i].regate = rand() % 100;
    jugadores[i].defensa = rand() % 100;
    jugadores[i].reflejos = rand() % 100;
    jugadores[i].velocidad = rand() % 100;
    jugadores[i].dureza = rand() % 100;
    jugadores[i].resistencia = rand() % 100;
    jugadores[i].nombre[0] = '\0';
  }

  for (int i = 0; i < numDef; i++) {
    jugadores[i].edad = rand() % 100;
    jugadores[i].posicion = Defensor;
    jugadores[i].regate = rand() % 100;
    jugadores[i].defensa = rand() % 100;
    jugadores[i].reflejos = rand() % 100;
    jugadores[i].velocidad = rand() % 100;
    jugadores[i].dureza = rand() % 100;
    jugadores[i].resistencia = rand() % 100;
    jugadores[i].nombre[0] = '\0';
  }

  for (int i = 0; i < numCent; i++) {
    jugadores[i].edad = rand() % 100;
    jugadores[i].posicion = Medio;
    jugadores[i].regate = rand() % 100;
    jugadores[i].defensa = rand() % 100;
    jugadores[i].reflejos = rand() % 100;
    jugadores[i].velocidad = rand() % 100;
    jugadores[i].dureza = rand() % 100;
    jugadores[i].resistencia = rand() % 100;
    jugadores[i].nombre[0] = '\0';
  }

  for (int i = 0; i < numDel; i++) {
    jugadores[i].edad = rand() % 100;
    jugadores[i].posicion = Delantero;
    jugadores[i].regate = rand() % 100;
    jugadores[i].defensa = rand() % 100;
    jugadores[i].reflejos = rand() % 100;
    jugadores[i].velocidad = rand() % 100;
    jugadores[i].dureza = rand() % 100;
    jugadores[i].resistencia = rand() % 100;
    jugadores[i].nombre[0] = '\0';
  }

  return jugadores;
};

void liberarJugadores(Jugador *jugadores) {
  free(jugadores);
};


Equipo *crearEquipos(int numEquipos) {
  Equipo *equipos = (Equipo *)malloc(numEquipos * sizeof(Equipo));

  for (int i = 0; i < numEquipos; i++) {
    int year = rand() % (2020 - 1900 + 1) + 1900; // Año random entre 1900 y 2020

    equipos[i].nombre[0] = '\0';
    equipos[i].anyoFundacion = year;
    for (int j = 0; j < 6; j++) equipos[i].numStaff[j] = rand() % 10;
    for (int j = 0; j < 4; j++) equipos[i].numJugadores[j] = rand() % 10;
    equipos[i].numFanaticos = rand() % 100;
  }

  return equipos;
}

void liberarEquipos(Equipo *equipos, int numEquipos) {
  for (int i = 0; i < numEquipos; i++) {
    liberarJugadores(equipos[i].jugadores);
    liberarStaff(equipos[i].staff);
    liberarFanaticos(equipos[i].fanaticos);
  }
  free(equipos);
};


// Funcion principal para testear el programa
// int main() {
//   int numEquipos = 3;
//   Equipo *equipos = crearEquipos(numEquipos);

//   for (int i = 0; i < numEquipos; i++) {
//     printf("--------------------------\n");
//     printf("Equipo %d:\n", i);
//     printf("Nombre: %s\n", equipos[i].nombre);
//     printf("Año de fundación: %d\n", equipos[i].anyoFundacion);
//     printf("Staff:\n");
//     for (int j = 0; j < 6; j++) {
//       printf("%d ", equipos[i].numStaff[j]);
//     }
//     printf("\n");
//     printf("Jugadores:\n");
//     for (int j = 0; j < 4; j++) {
//       printf("%d ", equipos[i].numJugadores[j]);
//     }
//     printf("\n");
//     printf("Fanaticos: %d\n", equipos[i].numFanaticos);
//   }


//   return 0;
// };

