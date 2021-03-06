/* $NetBSD: softfloat-for-gcc.h,v 1.7 2004/09/26 21:13:27 jmmv Exp $ */

/*
 * Move private identifiers with external linkage into implementation
 * namespace.  -- Klaus Klein <kleink@NetBSD.org>, May 5, 1999
 */
#define float_exception_flags	_softfloat_float_exception_flags
#define float_exception_mask	_softfloat_float_exception_mask
#define float_rounding_mode	_softfloat_float_rounding_mode
#define float_raise		_softfloat_float_raise
/* The following batch are called by GCC through wrappers */
#define float32_eq		_softfloat_float32_eq
#define float32_le		_softfloat_float32_le
#define float32_lt		_softfloat_float32_lt
#define float64_eq		_softfloat_float64_eq
#define float64_le		_softfloat_float64_le
#define float64_lt		_softfloat_float64_lt

/*
 * Macros to define functions with the GCC expected names
 */

#define float32_add			__addsf3
#define float64_add			__adddf3
#define floatx80_add			__addxf3
#define float32_sub			__subsf3
#define float64_sub			__subdf3
#define floatx80_sub			__subxf3
#define float32_mul			__mulsf3
#define float64_mul			__muldf3
#define floatx80_mul			__mulxf3
#define float32_div			__divsf3
#define float64_div			__divdf3
#define floatx80_div			__divxf3
#define int32_to_float32		__floatsisf
#define int32_to_float64		__floatsidf
#define int32_to_floatx80		__floatsixf
#define int64_to_float32		__floatdisf
#define int64_to_float64		__floatdidf
#define int64_to_floatx80		__floatdixf
#define float32_to_int32_round_to_zero	__fixsfsi
#define float64_to_int32_round_to_zero	__fixdfsi
#define floatx80_to_int32_round_to_zero __fixxfsi
#define float32_to_int64_round_to_zero	__fixsfdi
#define float64_to_int64_round_to_zero	__fixdfdi
#define floatx80_to_int64_round_to_zero __fixxfdi
#define float32_to_uint32_round_to_zero	__fixunssfsi
#define float64_to_uint32_round_to_zero	__fixunsdfsi
#define float32_to_float64		__extendsfdf2
#define float64_to_floatx80		__extenddfxf2
#define float32_to_floatx80		__extendsfxf2
#define float64_to_float32		__truncdfsf2
#define floatx80_to_float64		__truncxfdf2
#define floatx80_to_float32		__truncxfsf2

#define floatx80_lt			__ltxf2
#define floatx80_eq			__eqxf2
#define floatx80_le			__lexf2
