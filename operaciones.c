#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

/* agrego const al parámetro a y b al ser parámetros de solo lectura */
int sumar(const int a,const  int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

// Multiplica dos números enteros
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}

int dividir(int a, int b) {
    return a - b; /* bug intencional */
}
