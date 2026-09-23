# Práctica 1: Suma de 5 números
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->

Mi programa le pide al usuario 5 numeros, uno por uno, y al final le dice cuanto suman entre todos

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. 5 numeros escritos por el usuario, uno a la vez, para poder aceptar decimales y negativos

**Salidas:**
1. Un numero que es el resultado de sumar los 5 numeros
2. Un mensaje que dice si el resultado fue negativo o no

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- El usuario debe escribir exactamente 5 numeros
- Cada numero debe ser un valor numerico valido

**Decisión sobre negativos y decimales** (¿los acepto? ¿por qué?):
_____

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
_____

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Suma calculada a mano |
|Caso|Numeros|Suma calculada a mano|
| 1 | 1,2,3,4,5| 15|
| 2 | 0,0,0,0,0 | 0|
| 3 | -1,-2,-3,-4-,5| -15 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las dos preguntas. -->

**¿Probé mi receta a mano con un caso?** Sí 
**¿Tuve que corregirla?** si

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o suma
./suma
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->
Ingresa el numero 1: 1
Ingresa el numero 2: 2
Ingresa el numero 3: 3
Ingresa el numero 4: 4
Ingresa el numero 5: 5




## 8. Experimentos (Fase 3)

**Experimento A: ¿qué pasó al no inicializar `suma`?**
El resultado salio con un numero raro

**Experimento B (opcional): ¿qué pasó al usar `int` con 2.5?**
el programa lo leyo como si fuera un solo numero

## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|caso|numeros|esperado|obtenido|paso|
| Del 1 al 5 | 1 a 5 | 15 |  | si|
| Todos ceros | 0 ×5 | 0 | si| _____ |
| Con negativos | -1,-2,-3,-4,-5 | _____ | _____ | _____ |
| Decimales | 0.5 ×5 | 2.5 | _____ | _____ |
| Todos iguales | 7 ×5 | 35 | _____ | _____ |
| Caso propio 1 | _____ | _____ | _____ | _____ |
| Caso propio 2 | _____ | _____ | _____ | _____ |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | La suma daba otro resultado | _____ | _____ |
| 2 | Los decimales se cortaban

**Reto elegido (opcional):** _____

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
Ninguna

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
A usar mejor vscode

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
la forma en que lo hice

**¿Qué fue lo más difícil y cómo lo resolví?**
Programar

**¿Qué pregunta me quedó sin responder?**
Responder

## 13. Lista de verificación antes de entregar (Fase 5)

- [ ] Llené todas las secciones (no quedan `_____`)
- [ ] Mi programa compila sin advertencias
- [ ] Probé todos los casos de la tabla
- [ ] Hice al menos 3 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Entregué el enlace de mi fork en Classroom
