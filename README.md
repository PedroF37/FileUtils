# FileUtils
## Biblioteca de manipulação de arquivos para meus projetos de aprendizado em C
* Biblioteca criada com o comando: `clang -shared -fPIC -o libfileutils.so fileutils.c`
* Localização dos arquivos no meu sistema para usar com meus projetos:
* Arquivo .so `/usr/local/lib64/`
* Arquivo .h `/usr/local/include/`
* Flag usada na compilação dos projetos que usam a bibloteca: `-lfileutils`
* Ex: `clang -Wall -Wextra --pedantic -std=c99 -lfileutils -o arquivo arquivo.c`
