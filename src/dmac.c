/**
 * Name: dmac
 * Since: 04/22/2020
 * Author: Christen Ford
 * Description: Implements an RPC client for the DMAC service.
 */

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <rpc/rpc.h>
#include "dmac.h"

#define BUFMAX 256

void print_help() {
	printf("Commands for the dmac_clnt program are:\n");
	printf("help - print this help statement.\n");
	printf("lease <time> - lease a MAC address for time 'time' seconds.\n");
	printf("release - manually release MAC address.\n");
	printf("renew <time> - renew a MAC address for time 'time' seconds.\n");
	printf("quit - exit the client.\n");
	printf("exit - exit the client.\n");
}

void print_usage() {
	printf("./dmac_clnt <server>\n");
	printf("<server>: Name/IP of DMAC server. Required.\n");
}

int count_delims(char * src, char * delim) {
	int delims = 0;

	return delims;
}

void parse_str(char * src, char * tokens[], int n, char * delim) {
	int i = 0;
	char * token = strtok(src, delim);
	do {
		tokens[i++] = token;
	} while (i < n && (token = strtok(NULL, delim)) != NULL);
}

int main (int argc, char * argv[]) {
	if (argc != 1) {
		print_usage();
		exit(1);
	}

	char * server = argv[0];
	
	CLIENT *cl;
	char * value;
	int key;

	// create an RPC client using the DMAC protocol over UDP
	if (!(cl = clnt_create(server, DMACPROG, DMACVERS, "udp"))) {
		clnt_pcreateerror(server);
		exit(1);
	}

	char input[BUFMAX];

	while (1) {
		printf("dmac> ");
		fgets(input, BUFMAX, stdin);
		if (strlen(input) == 0) {
			continue;
		}
		input[strlen(input)-1] = '\0';

		int delims = count_delims(input, " ");
		char * tokens[delims+1];
		parse_str(input, tokens, delims+1, " ");

		if (strcmp("help", tokens[0]) == 0) {
			print_help();
			break;
		} else if (strcmp("lease", tokens[0]) == 0) {
			key = LEASE_MAC;
		} else if (strcmp("release", tokens[0]) == 0) {
			key = RELEASE_MAC;
		} else if (strcmp("renew", tokens[0]) == 0) {
			key = RENEW_MAC;
		} else if (strcmp("exit", tokens[0]) == 0 || 
				   strcmp("quit", tokens[0]) == 0) {
			break;
		} else {
			printf("Error: Invalid command, type \'help\' to see a list of valid commands.\n");
			continue;
		}

		switch (key) {
			case RELEASE_MAC:
				// TODO: Request a MAC release
				break;
			case LEASE_MAC:
				// TODO: Request a MAC lease
				break;
			case RENEW_MAC:
				// TODO: Request a MAC renewal
				break;
			default:
				perror("Error: Invalid key specified!\n");
				break;
		}
	}

	return 0;
}
