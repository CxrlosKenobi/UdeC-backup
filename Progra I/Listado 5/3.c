#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//
#include "2.c"

void ordenarDB(Equipo *equipos, int numEquipos) {
  /* Ordenamiento del vector equipos. */
  
  // Ordenar ascendentemente de acuerdo al nombre de los equipos en orden alfabetico
  for (int i = 0; i < numEquipos - 1; i++) {
    for (int j = i + 1; j < numEquipos; j++) {
      if (strcmp(equipos[i].nombre, equipos[j].nombre) > 0) {
        Equipo aux = equipos[i];
        equipos[i] = equipos[j];
        equipos[j] = aux;
      }
    }
  }

  // Para cada equipo, su lista de jugadores se deberá ordenar ascendentemente, primero considerando la posición y, como segundo criterio, el nombre
  for (int i = 0; i < numEquipos; i++) {
    int totalJugadores;
    for (int m = 0; m < 4; m++) totalJugadores += equipos[i].numJugadores[m];
    for (int j = 0; j < totalJugadores - 1; j++) {
      for (int k = j + 1; k < totalJugadores; k++) {
        if (equipos[i].jugadores[j].posicion > equipos[i].jugadores[k].posicion) {
          Jugador aux = equipos[i].jugadores[j];
          equipos[i].jugadores[j] = equipos[i].jugadores[k];
          equipos[i].jugadores[k] = aux;
        } else if (equipos[i].jugadores[j].posicion == equipos[i].jugadores[k].posicion) {
          if (strcmp(equipos[i].jugadores[j].nombre, equipos[i].jugadores[k].nombre) > 0) {
            Jugador aux = equipos[i].jugadores[j];
            equipos[i].jugadores[j] = equipos[i].jugadores[k];
            equipos[i].jugadores[k] = aux;
          }
        }
      }
    }
  }

  // Para cada equipo, su lista de fanáticos se deberá ordenar ascendentemente, primero en función a la agresividad y luego en función al nombre
  for (int i = 0; i < numEquipos; i++) {
    for (int j = 0; j < equipos[i].numFanaticos - 1; j++) {
      for (int k = j + 1; k < equipos[i].numFanaticos; k++) {
        if (equipos[i].fanaticos[j].agresividad > equipos[i].fanaticos[k].agresividad) {
          Fanatico aux = equipos[i].fanaticos[j];
          equipos[i].fanaticos[j] = equipos[i].fanaticos[k];
          equipos[i].fanaticos[k] = aux;
        } else if (equipos[i].fanaticos[j].agresividad == equipos[i].fanaticos[k].agresividad) {
          if (strcmp(equipos[i].fanaticos[j].nombre, equipos[i].fanaticos[k].nombre) > 0) {
            Fanatico aux = equipos[i].fanaticos[j];
            equipos[i].fanaticos[j] = equipos[i].fanaticos[k];
            equipos[i].fanaticos[k] = aux;
          }
        }
      }
    }
  }

  // Para cada equipo, su lista de personal del staff se deberá ordenar ascendentemente, primero en función al rol y luego en función al nombre
  for (int i = 0; i < numEquipos; i++) {
    // Obtenemos el numero de personal del staff del equipo
    int numPersonal;
    for (int j = 0; j < 6; j++) numPersonal += equipos[i].numStaff[j];
    // Ordenamos el personal del staff del equipo
    for (int j = 0; j < numPersonal - 1; j++) {
      for (int k = j + 1; k < numPersonal; k++) {
        if (equipos[i].staff[j].rol > equipos[i].staff[k].rol) {
          Staff aux = equipos[i].staff[j];
          equipos[i].staff[j] = equipos[i].staff[k];
          equipos[i].staff[k] = aux;
        } else if (equipos[i].staff[j].rol == equipos[i].staff[k].rol) {
          if (strcmp(equipos[i].staff[j].nombre, equipos[i].staff[k].nombre) > 0) {
            Staff aux = equipos[i].staff[j];
            equipos[i].staff[j] = equipos[i].staff[k];
            equipos[i].staff[k] = aux;
          }
        }
      }
    }
  }

}


int main () {
  int numEquipos = 3;
  Equipo *equipos = crearEquipos(numEquipos);

  ordenarDB(equipos, numEquipos);

  for (int i = 0; i < numEquipos; i++) {
    printf("--------------------------\n");
    printf("Equipo %d:\n", i);
    printf("Nombre: %s\n", equipos[i].nombre);
    printf("Año de fundación: %d\n", equipos[i].anyoFundacion);
    printf("Staff:\n");
    for (int j = 0; j < 6; j++) {
      printf("%d ", equipos[i].numStaff[j]);
    }
    printf("\n");
    printf("Jugadores:\n");
    for (int j = 0; j < 4; j++) {
      printf("%d ", equipos[i].numJugadores[j]);
    }
    printf("\n");
    printf("Fanaticos: %d\n", equipos[i].numFanaticos);
  }

  return 0;
}
