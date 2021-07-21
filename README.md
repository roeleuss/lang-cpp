# Documentação

## Windows

Link para baixar o MingW-64 que instala o gcc/g++ para Windows 10.
<https://sourceforge.net/projects/mingw-w64/>

Após a instalação, adicionar na variável de ambiente PATH (sistema ou usuário) o caminho da pasta onde o MingW-64 foi instalado.

Exemplo do caminho da pasta na instalação padrão:

```path
C:\Program Files\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin
```

**Compilando no Windows:**

```powershell
g++ -c hello-world.cpp                      # compila código-fonte c++ mas não faz link para gerar o executável
g++ -o hello-world.exe hello-world.o        # gerar o executável fazendo o link dos compilados
strip --strip-unneeded hello-world.exe      # remove conteúdos desnecessários do executável deixando-o mais enxuto
hello-world.exe                             # executa o programa

g++ -S hello-world.cpp                      # caso queira analisar o assembly é gerado com base no código-fonte
```

Na raiz do projeto tem com arquivo `run.bat` que já compilar e executa o programa.

```powershell
.\run.bat .\chapter-01\hello-world
```

____

## Linux

Comando para instalar gcc no Ubuntu 20-04.

```bash
sudo apt-get install -y gcc
```

**Compilando no Linux:**
No linux não é obrigatório o executável ter extensão.
Estou adicionando a extensão (`.bin`) para facilitar sua identificação pelo `.gitignore`.

```bash
g++ -c hello-world.cpp                      # compila código-fonte c++ mas não faz link para gerar o executável
g++ -o hello-world hello-world.o            # gerar o executável fazendo o link dos compilados
strip --strip-unneeded hello-world          # remove conteúdos desnecessários do executável deixando-o mais enxuto
sudo chmod +x hello-world                   # caso não tenha permissão para executar
./hello-world                               # executa o programa

g++ -S hello-world.cpp                      # caso queira analisar o assembly é gerado com base no código-fonte
```

Na raiz do projeto tem com arquivo `run.sh` que já compilar e executa o programa.

```bash
./run.sh ./chapter-01/hello-world
```
