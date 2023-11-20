Fejl:
fputs tilføjer og fjerner ikke end of text/file markers, det gør fwrite
Fseek bruger longs, men max payload og response.header.length er ints, de skal have eksplisit conversion

skal åbnes for write fordi append ignorer fseek, yderligere skal vi også læse derfor w+, vi vil gerne faile open når filen eksiterer derfor x, w+x