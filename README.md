# actividad-integradora-8

# Bubble sort

Bubble Sort a menudo se enseña a programadores novatos en cursos introductorios de informática. Esto es lamentable, porque Bubble Sort no tiene características de valgan la pena en absoluto. Bubble Sort consiste en un simple doble for loop. La primera iteración del bucle for interno se mueve a través de la matriz de registros de abajo hacia arriba, comparando las teclas adyacentes. Si el valor de la clave indexada inferior es mayor que su vecino indexado superior, los dos valores se intercambian. Una vez que se encuentra el valor más pequeño, este proceso hará que "burbujee" hasta la parte superior de la matriz. La segunda pasada a través de la matriz repite este proceso. Sin embargo, como sabemos que el valor más pequeño alcanzó la parte superior de la matriz en la primera pasada, no es necesario comparar los dos elementos superiores en la segunda pasada. Del mismo modo, cada pasada sucesiva a través de la matriz compara elementos adyacentes, observando un valor menos que la pasada anterior. (2011, Shaffer).

![image](https://user-images.githubusercontent.com/6539267/64583614-7aa02d80-d346-11e9-8030-b55e3fb59f73.png)

# Cocktail Sort o bubblesort bidireccional

Cocktail Sort es una variación de Bubble Sort. El algoritmo de clasificación de burbujas siempre atraviesa elementos desde la izquierda y mueve el elemento más grande a su posición correcta en la primera iteración y el segundo más grande en la segunda iteración, y así sucesivamente. Cocktail Sort atraviesa una matriz dada en ambas direcciones alternativamente, por eso se llama bidireccional.

La primera etapa recorre la matriz de izquierda a derecha, al igual que el Bubble Sort. Durante el ciclo, los elementos adyacentes se comparan y si el valor de la izquierda es mayor que el valor de la derecha, los valores se intercambian. Al final de la primera iteración, el mayor número residirá al final de la matriz.

La segunda etapa recorre la matriz en dirección opuesta, comenzando desde el elemento justo antes del elemento ordenado más recientemente, y volviendo al inicio de la matriz. Aquí también, los elementos adyacentes se comparan y se intercambian si es necesario.

![image](https://user-images.githubusercontent.com/6539267/64586399-00c17180-d351-11e9-992c-5f9caa23cb62.png)

![image](https://user-images.githubusercontent.com/6539267/64586471-37978780-d351-11e9-8143-b8d3f32b1573.png)

# Referencias
Shaffer, Clifford A .. Estructuras de datos y análisis de algoritmos en C ++, tercera edición (Dover Books on Computer Science). Publicaciones de Dover. Edición de Kindle.
