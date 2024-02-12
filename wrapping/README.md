# wrapping webassembly


### compile c to wass

    emcc wrapping.c -o wrapping.js

### compile exportando funciones.
    emcc wrapping.c -o wrapping.js -s NO_EXIT_RUNTIME=1 -s EXPORTED_RUNTIME_METHODS=ccall

### compile exportando funciones con cwrap
    emcc wrapping.c -o wrapping.js -s NO_EXIT_RUNTIME=1 -s EXPORTED_RUNTIME_METHODS=ccall,cwrap


