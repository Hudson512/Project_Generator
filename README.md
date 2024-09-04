# Project Generator (ProGen)
**Inicializador Atomático de projecto**
![IMG](img1.jpeg)

# Sobre o projecto.
**Project Generator** é uma ferramenta automatizada desenvolvida para facilitar a criação e configuração de novos projetos em C. Ele cria uma estrutura básica de projeto com arquivos padrão e diretórios, incluindo arquivos .c, .h, um Makefile, e um diretório src.

**Funcionalidades**
1. **_Criação de Diretórios_**: Cria o diretório principal do projeto e um diretório src dentro dele.
2. **_Geração de Arquivos_**: Cria arquivos .c e .h com uma estruturas básicas de código.
3. **_Geração de Makefile_**: Cria um Makefile básico com variáveis essenciais e regras para compilar e limpar o projeto.

**Pré-requisitos**
+ Sistema Unix-like (Linux, macOS)
- `gcc` ou `cc` (compilador C)

**Instalação**
1. Clone o repositório:
```
git clone https://github.com/Hudson512/Project_Generator
cd Project_Generator
```
2. Compile o projeto
```
Make
```
3. Execute o executal (ProGen)
```
./project_generator <nome_do_projeto> [nome_do_arquivo_c] [nome_do_arquivo_h]
```
**Contribuição**
Sinta-se à vontade para contribuir com melhorias e correções. Faça um fork do repositório e envie um pull request com suas alterações.
