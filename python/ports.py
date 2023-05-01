from socket import *

server="127.0.0.1"
port=43210

obj_socket = socket(AF_INET, SOCK_STREAM)
obj_socket.bind((server,port))

obj_socket.listen(2)
print("Aguardando cliente....")

while True:
    con, client = obj_socket.accept()
    print("Conectado com: ", client)
    while True:
        msg_received = str(con.recv(1024))
        print("Recebemos: ", msg_received)
        msg_send = b'Olah cliente'
        con.send(msg_send)
        break
    con.close()