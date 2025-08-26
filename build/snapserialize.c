#include <php.h>
#include <Zend/zend_API.h>
#include <Zend/zend_hash.h>
#include <Zend/zend_types.h>
#include <stddef.h>

#include "snapserialize.h"
#include "snapserialize_arginfo.h"
#include "_cgo_export.h"


PHP_MINIT_FUNCTION(snapserialize) {
    
    return SUCCESS;
}

zend_module_entry snapserialize_module_entry = {STANDARD_MODULE_HEADER,
                                         "snapserialize",
                                         ext_functions,             /* Functions */
                                         PHP_MINIT(snapserialize),  /* MINIT */
                                         NULL,                      /* MSHUTDOWN */
                                         NULL,                      /* RINIT */
                                         NULL,                      /* RSHUTDOWN */
                                         NULL,                      /* MINFO */
                                         "1.0.0",                   /* Version */
                                         STANDARD_MODULE_PROPERTIES};

PHP_FUNCTION(serializer_version)
{
    if (zend_parse_parameters_none() == FAILURE) {
        RETURN_THROWS();
    }
    zend_string *result = serializer_version();
    if (result) {
        RETURN_STR(result);
    }

	RETURN_EMPTY_STRING();
}

