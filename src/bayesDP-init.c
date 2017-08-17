#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP _bayesDP_ppexpM(SEXP, SEXP, SEXP);
extern SEXP _bayesDP_ppexpV(SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_bayesDP_ppexpM", (DL_FUNC) &_bayesDP_ppexpM, 3},
    {"_bayesDP_ppexpV", (DL_FUNC) &_bayesDP_ppexpV, 3},
    {NULL, NULL, 0}
};

void R_init_bayesDP(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
