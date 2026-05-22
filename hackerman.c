#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // Necessário para a função usleep()

int main() {
    // Lista de comandos Linux válidos e textos técnicos para simular atividade
    const char *comandos[] = {
        "nmap -sV -O 192.168.1.0/24",
        "ssh -p 2222 root@10.0.0.5",
        "tail -f /var/log/auth.log",
        "grep -r 'password' /etc/",
        "iptables -A INPUT -p tcp --dport 80 -j DROP",
        "tcpdump -i eth0 -n -s 0 -w capture.pcap",
        "cat /etc/shadow",
        "ps aux | grep root",
        "netstat -tulnp",
        "ping -c 4 8.8.8.8",
        "traceroute 1.1.1.1",
        "lsof -i :80",
        "chmod -R 777 /var/www/html",
        "chown -R root:root /",
        "mount /dev/sda1 /mnt/usb",
        "fsck /dev/hda1",
        "tar -czvf backup.tar.gz /home/user/data",
        "systemctl restart sshd",
        "journalctl -xe",
        "dmesg | tail",
        "ip addr show",
        "df -h",
        "free -m",
        "uname -a",
        "curl -O https://servidor-remoto.com/pacote.tar.gz",
        "base64 -d hash_encoded.txt > output.bin",
        "md5sum /bin/bash",
        "sha256sum /etc/passwd",
        "strace -p 1234",
        "rsync -avz /local/ /remoto/"
    };

    // Calcula o tamanho do array de comandos
    int num_comandos = sizeof(comandos) / sizeof(comandos[0]);

    // Inicializa o gerador de números aleatórios usando a hora atual
    srand(time(NULL));

    // Um pequeno charme inicial
    printf("Iniciando sequencia de invasao...\n");
    printf("Estabelecendo conexao segura...\n");
    usleep(1000000); // Pausa de 1 segundo (1.000.000 microssegundos)

    // Loop infinito
    while(1) {
        // Escolhe um índice aleatório do array
        int indice_aleatorio = rand() % num_comandos;

        // Gera um falso número de processo (PID) entre 1000 e 9999 para parecer mais real
        int pid_falso = (rand() % 9000) + 1000;

        // Imprime o comando na tela
        printf("[root@system ~]# [PID: %d] Executing: %s\n", pid_falso, comandos[indice_aleatorio]);

        // Controla a velocidade da impressão na tela.
        // 50000 microssegundos = 0.05 segundos.
        // Diminua o valor para ir mais rápido, ou aumente para ir mais devagar.
        usleep(50000);
    }

    return 0;
}
