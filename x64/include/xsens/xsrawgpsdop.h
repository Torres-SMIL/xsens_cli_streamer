#ifndef XSRAWGPSDOP_H
#define XSRAWGPSDOP_H

#include "pstdint.h"

#pragma pack(push, 1)

#ifndef __cplusplus
#define XSRAWGPSDOP_INITIALIZER { 0, 0, 0, 0, 0, 0, 0, 0 }
#endif

/*! \brief A container for NAV-DOP data
	\details DOP values are dimensionless.
	All dop values are scaled by a factor of 100. that is, if the unit transmits a value of e.g. 156,
	it means that the DOP value is 1.56.
	\deprecated
*/
struct XsRawGpsDop
{
	uint32_t	m_itow;		//!< Gps time of week (ms)
	uint16_t	m_gdop;		//!< Geometric DOP
	uint16_t	m_pdop;		//!< Position DOP
	uint16_t	m_tdop;		//!< Time DOP
	uint16_t	m_vdop;		//!< Vertical DOP
	uint16_t	m_hdop;		//!< Horizontal DOP
	uint16_t	m_ndop;		//!< Northing DOP
	uint16_t	m_edop;		//!< Easting DOP
};
typedef struct XsRawGpsDop XsRawGpsDop;

#pragma pack(pop)

#ifdef __cplusplus
inline bool operator == (XsRawGpsDop const& a, XsRawGpsDop const& b)
{
	return memcmp(&a, &b, sizeof(XsRawGpsDop)) == 0;
}
#endif

#endif
