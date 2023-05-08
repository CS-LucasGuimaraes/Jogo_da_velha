# Change Log

TODAS as modificações notaveis deste projeto serão incluídas nesse documento.
Esse projeto adere a [Versionamento Semântico 2.0.0](https://semver.org/spec/v2.0.0.html).

## [v0.5.0] - 2023-05-08

### Modificado
 - Melhorias na interface.
 - Função verifica traduzida completamente e renomeada para "check".
 - Função check refurmulada para reduzir o código, facilitar implementações futuras e reduzir a quantidade de IFs.

 ### Obsoleto
 - Função que mostra novamente o modelo de campos ao digitar 0.

## [v0.4.0] - 2023-05-08

### Adicionado
 - Função dedicada para mostrar o modelo de campos <printBoardSet>.

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
 - Lista de afazeres passou a ser um arquivo dedicado <TODO.md>

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