import socket

print("## Iniciando o PortScan ##")

exit = ""

while exit != "EXIT":
    # Solicitando IP a ser pesquisado
    host = input("Qual o dominio ou IP do servidor? ")

    # Cria um objeto socket para realizar a conexão
    obj_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    # Testa todas as portas de 0 a 1023
    for port in range(0, 1024):
        if obj_socket.connect_ex((host, port)):
            pass
        else:
            # Exibe as portas que estão abertas
            print("A porta ", port," está aberta")
    # Verifica de o usuário quer encerrar o programa
    exit = input("Digite <EXIT> para sair: ").upper()