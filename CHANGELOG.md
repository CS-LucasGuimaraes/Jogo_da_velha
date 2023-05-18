# Change Log

TODAS as modificações notaveis deste projeto serão incluídas nesse documento.
Esse projeto adere a [Versionamento Semântico 2.0.0](https://semver.org/spec/v2.0.0.html).

## [v1.0.0] - 2023-05-18

## Adicionado
 - Opção de alterar idioma do jogo entre português e inglês.
 - Funções text_pt e text_en para realizar os prints do jogo por meio da definição da linguagem e de um identificador de cada texto.
 - Parametro ClearMode na função clear que altera entre os modos std (standard) e debug.

 ## Modificado
  - Todos os textos foram reescritos.

## Removido
 - Lista de afazeres todo.md removida, visto que foi concluída e o programa se encontra com todas as funções implementadas.

## [v0.7.0] - 2023-05-16

### Adicionado
 - Funcionamento de uma inteligência artificial para jogar contra 1 jogador.
        - Função BotRandomMove para fazer a I.A. fazer um movimento aleatório quando não ouver jogada eficiente;
        - Função check_bot_movement para checar se a I.A. pode vencer naquela rodada e se ela precisa bloquear o jogador;
        - Função BotMove que controla os movimentos da I.A;
 - Adicionado .gitignore.

### Modificado
 - Função dedicada para limpar o terminal para facilitar sua alteração no futuro.

### Corrigido
 - Erro no qual a diagonal secundária não era reconhecida pela função check devido a um erro de reestabalecemento da variável sec_diagonal.

### Removido
 - Pasta de testes.
 - Pasta de Outputs.
 - Quaisquer binários compilados com extensão .exe.

## [v0.6.0] - 2023-05-08

### Adicionado
 - Pasta de testes com testes de novas funções antes de implementa-las no código oficial.
 - Função playersName implementada.

### Modificado
 - Códigos movidos para a pasta code.
 - Pastas de output com .exe dos arquivos não será mais enviada para o repositório.

### Removido
 - Função que mostra novamente o modelo de campos ao digitar 0.

## [v0.5.0] - 2023-05-08

### Modificado
 - Melhorias na interface.
 - Função verifica traduzida completamente e renomeada para "check".
 - Função check refurmulada para reduzir o código, facilitar implementações futuras e reduzir a quantidade de IFs.

 ### Obsoleto
 - Função que mostra novamente o modelo de campos ao digitar 0.

## [v0.4.0] - 2023-05-08

### Adicionado
 - Função dedicada para mostrar o modelo de campos printBoardSet.

### Modificado
 - Função printBoardSet aplicada onde possível.
 - Função Joga completamente reformulada para ter menos IFs e ser mais facilmente alterada.
 - Função Joga traduzida completamente e renomeada para "play".

## [v0.3.1] - 2023-05-07

### Corrigido
 - Funções "joga" e "verifica" movidas para baixo no código para evitar erro de variavel implícita.

## [v0.3.0] - 2023-05-07

### Adicionado
 - CHANGELOG.md
 - Sempre que o jogador digitar 0, o modelo de campos será mostrado novamente.

### Modificado
 - Lista de afazeres passou a ser um arquivo dedicado TODO.md

## [v0.2.0] - 2023-04-25  
 
### Adicionado
 - Menu.
 - Nova configuração de teclado.
 - Lista de afazeres.

### Modificado
 - Limpeza do código e tradução de algumas variáveis para o inglês.

## [v0.1.0] - 2023-04-22  

### Adicionado
 - Adicionado funcionamento padrão do jogo de PvP.  