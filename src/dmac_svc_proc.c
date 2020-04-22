#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <rpc/rpc.h>
#include "dmac.h"

static bool_t *bresult = NULL;
static lease_resp *lresp = NULL;

bool_t * release_mac_1_svc(char **token, struct svc_req *srq) {
	if (bresult == NULL) {
		bresult = malloc(sizeof(bool_t));
	} bresult = FALSE;

	// TODO: Implement releasing a MAC address

	return ((bool_t *) bresult);
}

lease_resp * lease_mac_1_svc(uint32_t *time, struct svc_req *srq) {
	if (lresp == NULL) {
		lresp = malloc(sizeof(lease_resp));
	}

	// TODO: Implement leasing a MAC address

	return ((lease_resp *) lresp);
}

bool_t * renew_mac_1_svc(renew_rqst *rqst, struct svc_req *srq) {
	if (bresult == NULL) {
		bresult = malloc(sizeof(bool_t));
	} bresult = FALSE;

	// TODO: Implement renewing a MAC address

	return ((bool_t *) bresult);
}
