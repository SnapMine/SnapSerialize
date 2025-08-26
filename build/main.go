package main

/*
#include <stdlib.h>
#include "main.h"
*/
import "C"
import "runtime/cgo"
import "unsafe"
import "github.com/dunglas/frankenphp"

func init() {
	frankenphp.RegisterExtension(unsafe.Pointer(&C.ext_module_entry))
}


//export serializer_version
func serializer_version() unsafe.Pointer {

	return frankenphp.PHPString("indev 1.0.0", false)
}

