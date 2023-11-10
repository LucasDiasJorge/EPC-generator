  GNU nano 7.2                                   macro.sh                                               
#!/bin/bash

# Execute o programa e copie o output para a área de transferência
hello | xclip -selection c

# Aguarde um breve momento para garantir que o conteúdo foi copiado
sleep 1

# Cole o conteúdo da área de transferência usando xdotool
xdotool key ctrl+shift+v




