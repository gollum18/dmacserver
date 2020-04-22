/**
 * Name: dmac.x
 * Since: 04/22/2020
 * Author: Christen Ford
 * Description: Implements an RPC protocol for a server that 
 * hands out temporary MAC addresses to clients on a LAN.
 */

%#define DATABASE "mac.dat" /* % passes it through */

const TOK_LEN = 256; /* tokens are 255 chars + 1 for \0 */
const MAC_LEN = 18;	/* MAC addresses are 17 chars + 1 for \0 */

struct lease_resp {
	string token<TOK_LEN>; /* pseudonym for client */
	string mac<MAC_LEN>; /* the mac address assigned by server */
};

struct renew_rqst {
	string token<TOK_LEN>; /* pseudonym for client */
	uint32_t time; /* requested lease time */
};

program DMACPROG {
	version DMACVERS {
		bool RELEASE_MAC(string) = 1;
		lease_resp LEASE_MAC(uint32_t) = 2;
		bool RENEW_MAC(renew_rqst) = 3;
	} = 1;
} = 0x20000001;
