// export_php:namespace Snap\Serializer
package ext_snapserialize

import (
	"C"
	"unsafe"

	"github.com/dunglas/frankenphp"
)

// export_php:function serializer_version(): string
func serializer_version() unsafe.Pointer {

	return frankenphp.PHPString("indev 1.0.0", false)
}
