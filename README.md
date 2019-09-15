# Actividad integradora 8

## Bubble sort
<p align="justify">
Bubble Sort a menudo se enseña a programadores novatos en cursos introductorios de informática. Esto es lamentable, porque Bubble Sort no tiene características de valgan la pena en absoluto. Bubble Sort consiste en un simple doble for loop. La primera iteración del bucle for interno se mueve a través de la matriz de registros de abajo hacia arriba, comparando las teclas adyacentes. Si el valor de la clave indexada inferior es mayor que su vecino indexado superior, los dos valores se intercambian. Una vez que se encuentra el valor más pequeño, este proceso hará que "burbujee" hasta la parte superior de la matriz. La segunda pasada a través de la matriz repite este proceso. Sin embargo, como sabemos que el valor más pequeño alcanzó la parte superior de la matriz en la primera pasada, no es necesario comparar los dos elementos superiores en la segunda pasada. Del mismo modo, cada pasada sucesiva a través de la matriz compara elementos adyacentes, observando un valor menos que la pasada anterior. (2011, Shaffer).
</p>
![image](https://user-images.githubusercontent.com/6539267/64583614-7aa02d80-d346-11e9-8030-b55e3fb59f73.png)

## Cocktail Sort o bubblesort bidireccional
<p align="justify">
Cocktail Sort es una variación de Bubble Sort. El algoritmo de clasificación de burbujas siempre atraviesa elementos desde la izquierda y mueve el elemento más grande a su posición correcta en la primera iteración y el segundo más grande en la segunda iteración, y así sucesivamente. Cocktail Sort atraviesa una matriz dada en ambas direcciones alternativamente, por eso se llama bidireccional.
La primera etapa recorre la matriz de izquierda a derecha, al igual que el Bubble Sort. Durante el ciclo, los elementos adyacentes se comparan y si el valor de la izquierda es mayor que el valor de la derecha, los valores se intercambian. Al final de la primera iteración, el mayor número residirá al final de la matriz.
La segunda etapa recorre la matriz en dirección opuesta, comenzando desde el elemento justo antes del elemento ordenado más recientemente, y volviendo al inicio de la matriz. Aquí también, los elementos adyacentes se comparan y se intercambian si es necesario.
<p>
![image](https://user-images.githubusercontent.com/6539267/64586399-00c17180-d351-11e9-992c-5f9caa23cb62.png)

![image](https://user-images.githubusercontent.com/6539267/64586471-37978780-d351-11e9-8143-b8d3f32b1573.png)

## Insertion Sort
<p align="justify">
El ordenamiento por inserción es un algoritmo basado en la comparación de elementos. Es estable y tiene una complejidad asintótica cuadrática O (n ^ {2}). La versión generalizada de este algoritmo es la ordenación de Shell, que es un ordenamiento de inserción con un incremento decreciente.
Un elemento se ordena trivialmente.Elije el elemento junto a la secuencia ya ordenada y lo insérta en el lugar correcto: mueve cada elemento de la secuencia ya ordenada, que tiene un valor más alto que el elemento que se está ordenando, un lugar a la derecha, que coloca el elemento en el espacio (lugar correcto dentro de la secuencia). Mientras el conjunto contenga elementos desordenados, se volverpa al paso dos.
<p>
![image](https://user-images.githubusercontent.com/6539267/64629760-a5bb6900-d3a8-11e9-882c-c5ee106b90c3.png)

![image](https://user-images.githubusercontent.com/6539267/64629676-815f8c80-d3a8-11e9-994a-8452bd3498f2.png)

## Bucket sort u Ordenamiento por casilleros
<p align="justify">
El ordenamiento por casilleros (bucket sort en inglés) es un algoritmo de ordenamiento que distribuye todos los elementos  n ha ordenar entre un número n de casilleros. Cada casillero sólo puede contener los elementos que cumplan unas determinadas condiciones. Las condiciones deben ser excluyentes entre sí, para evitar que un elemento pueda ser clasificado en dos casilleros distintos. Después cada uno de esos casilleros se ordena uno por uno con otro algoritmo de ordenación (para que distinto según el casillero), o se aplica recursividad en este algoritmo para obtener casilleros con menos elementos. Se trata de una generalización del algoritmo Pigeonhole sort (GeeksforGeeks, 2015). Cuando los elementos a ordenar están uniformemente distribuidos la complejidad computacional de este algoritmo es de O(n). (Serna, 2010).
<p>

![image](https://user-images.githubusercontent.com/6539267/64917073-ae14fa80-d740-11e9-9f17-c09706b6a66a.png)

## Referencias
<p align="justify">
Shaffer, Clifford A .. Estructuras de datos y análisis de algoritmos en C ++, tercera edición (Dover Books on Computer Science). Publicaciones de Dover. Edición de Kindle.
  
Serna C., Andrés F. (2010). Bucket Sort, Algoritmos de ordenamiento. Obtenido en: https://upcanalisisalgoritmos.wikispaces.com/file/view/Bucket+Sort+AO.pdf

GeeksforGeeks.,(2015). Pigeonhole Sort, Noida Uttar Pradesh. India. Algoritmos de ordenamiento, Obtenido en: http://www.geeksforgeeks.org/about/contact-us/.
<p>
