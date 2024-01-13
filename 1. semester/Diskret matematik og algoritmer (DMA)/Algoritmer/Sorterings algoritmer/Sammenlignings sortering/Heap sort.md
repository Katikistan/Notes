I heap sort bruger vi [[1. semester/Diskret matematik og algoritmer (DMA)/Algoritmer/Datastrukturer/Heap]] data skruturen:

![[Pasted image 20220927143050.png|300]]
https://www.geeksforgeeks.org/heap-sort/
-   Build a max heap from the input data. 
-   At this point, the maximum element is stored at the root of the heap. Replace it with the last item of the heap followed by reducing the size of the heap by 1. Finally, heapify the root of the tree. 
-   Repeat step 2 while the size of the heap is greater than 1.

En mere visuel fremgangsmåde kan findes her: 
https://www.geeksforgeeks.org/heap-sort/

## Tidskompleksitet 
Heap sort kører i $\Theta(n)=n \cdot log(n)$
Det skyldes at vi tager højden gange bredden af heap træet. Vi kender højden fra da vi skulle indsætte i en heap, der så vi at en heap har højde på log n og en bredde på n. 
## Heap sort vs other sorting algorithms 
Heap sort bliver ikke ofte benyttet eftersom andre sorterings algoritmer såsom Quick sort er hurtigere, men hvis man skal sammenligne med merge sort har det nogle fordele fordi man ikke behøver at benytte sig at et sekundært array for at kunne sorterer. Det er er altså på grund af plads den vinder over Merge sort. 

Merge sort vs heap sort:
The answer lies in the comparison of their time complexity and space requirement. The Merge sort is slightly faster than the Heap sort. But on the other hand merge sort takes extra memory. Depending on the requirement, one should choose which one to use.

Heap sort algorithm is not a stable algorithm. This algorithm is not stable because the operations that are performed in a heap can change the relative ordering of the equivalent keys.

Merge sort bruger dobbelt så meget plads som Heap sort fordi der er nødt til at være det sekundære array.
