#ifndef __SOCKET_H__
#define __SOCKET_H__

/** Crée une socket serveur qui écoute sur toute les interfaces IPv4
de la machine sur le port passé en paramètre. La socket retournée
doit pouvoir être utilisée directement par un appel à accept.
La fonction retourne -1 en cas d'erreur ou le descripteur de la
socket créée. */
void create_server(int *server_sockets, int port);
void signal_init(void);

#endif
