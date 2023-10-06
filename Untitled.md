The "id-query-indexed" version of the query exhibits superior spatial locality compared to the "naive" version due to the reduced size of the indexed records. In the indexed dataset, each record is stored in a more compact form compared to the naive dataset, resulting in smaller record sizes. Consequently, in the indexed dataset, each indexed record is positioned closer to its adjacent records in memory, leading to improved spatial locality.

In the context of memory access, spatial locality refers to the tendency of a program to access memory locations that are near each other in physical memory within a short time span. This behavior optimizes memory access efficiency, as fetching data from nearby memory locations is faster than jumping to distant ones.

In the "naive" dataset, where records are larger, there is a greater gap in memory between each record. This means that when accessing subsequent records, there is a need to jump a substantial distance in memory (approximately 200 bytes) to reach the next record. Such large jumps result in poorer spatial locality and can lead to less efficient memory access patterns.

In contrast, in the "id-query-indexed" dataset, each indexed record is compact and occupies less memory space. As a result, the distance between neighboring records is significantly smaller (around 16 bytes), making it more likely that accessing the next record requires only a short jump in memory. This proximity between records in the indexed dataset results in better spatial locality, minimizing the overhead associated with fetching data from distant memory locations.

In summary, the id-query-indexed version improves spatial locality by reducing the size of records and positioning them closer together in memory, leading to more efficient memory access patterns compared to the naive version, where larger records result in larger memory jumps between records.


temporal locality is not a key consideration because you only need to examine an ID once during the query process. Once a specific ID (the "needle") is compared to a record's "osm.id," it is not revisited in the same query session.

the "needle" is accessed repeatedly during the querying process, while other data elements, such as the records' "osm.id," may not exhibit significant temporal locality.