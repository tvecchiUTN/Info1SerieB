#ifndef __FUNCIONES_H
#define __FUNCIONES_H

/**
 * @brief Verifica si un número es par.
 * @param num Número entero a evaluar.
 * @return 1 si es par, 0 si es impar.
 */
int par(int num);

/**
 * @brief Verifica si un número es impar.
 * @param num Número entero a evaluar.
 * @return 1 si es impar, 0 si es par.
 */
int impar(int num);

/**
 * @brief Verifica si un número está en el rango [100, 500].
 * @param num Número entero a evaluar.
 * @return 1 si está en el rango, 0 en caso contrario.
 */
int rango(int num);

/**
 * @brief Verifica si un número es divisible por otro.
 * @param divPrim Dividendo.
 * @param divSeg Divisor.
 * @return 1 si divisible, 0 si no lo es.
 */
int divisible(int divPrim, int divSeg);

/**
 * @brief Calcula el cuadrado de un número entero.
 * @param num Número entero.
 * @return Resultado de num².
 */
int cuadrado(int num);

/**
 * @brief Calcula el cubo de un número entero.
 * @param num Número entero.
 * @return Resultado de num³.
 */
int cuboEnte(int num);

/**
 * @brief Calcula el cubo de un número flotante.
 * @param num Número decimal.
 * @return Resultado de num³.
 */
float cuboFlota(float num);

/**
 * @brief Calcula el área de un rectángulo.
 * @param base Base del rectángulo.
 * @param altura Altura del rectángulo.
 * @return Área si los datos son válidos, -1 en caso contrario.
 */
int areaRecta(int base, int altura);

/**
 * @brief Calcula el área de un círculo.
 * @param radio Radio del círculo.
 * @return Área si radio ≥ 0, -1 si es inválido.
 */
int circulo(int radio);

/**
 * @brief Calcula el perímetro (circunferencia) de un círculo.
 * @param radio Radio del círculo.
 * @return Circunferencia si radio > 0, -1 si es inválido.
 */
int circunferencia(int radio);

/**
 * @brief Calcula la potencia base^exp (solo con enteros).
 * @param base Base de la potencia.
 * @param exp Exponente (≥ 0).
 * @return Resultado de base^exp, o -1 si exp < 0.
 */
int potencia(int base, int exp);

/**
 * @brief Verifica si un número está dentro de un rango (excluyendo extremos).
 * @param eval Número a evaluar.
 * @param extInicial Extremo inferior.
 * @param extFinal Extremo superior.
 * @return 1 si está dentro, -1 si el rango es inválido, 0 si no lo está.
 */
int dentroRango(int eval, int extInicial, int extFinal);

/**
 * @brief Determina el cuadrante o eje de un punto (x, y).
 * @param x Coordenada X.
 * @param y Coordenada Y.
 * @return Código del cuadrante, eje o 0 si está en el origen.
 */
int cuadrante(int x, int y);

/**
 * @brief Retorna el mayor de tres números enteros.
 * @param num1 Primer número.
 * @param num2 Segundo número.
 * @param num3 Tercer número.
 * @return El número mayor.
 */
int mayor(int num1, int num2, int num3);

/**
 * @brief Calcula la hipotenusa de un triángulo rectángulo.
 * @param base Un cateto.
 * @param altura El otro cateto.
 * @return Hipotenusa entera.
 */
int hipotenusa(int base, int altura);

/**
 * @brief Calcula el área de un triángulo dados base y altura.
 * @param base Base del triángulo.
 * @param altura Altura del triángulo.
 * @return Área, o -1 si datos inválidos.
 */
int triangulo(int base, int altura);

#endif

