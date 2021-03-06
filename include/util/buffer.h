/************************************************************************/
/*
create time:	2015/6/10
athor:			���Ծ
discribe:		�򵥻�����
*/
/************************************************************************/

#ifndef __BUFFER_H__
#define __BUFFER_H__

#include "../net/define.hpp"

namespace fyreactor
{
	class CBuffer :public nocopyable
	{
	public:
		CBuffer();
		CBuffer(const CBuffer&buffer);
		virtual ~CBuffer();

		CBuffer& operator =(const CBuffer& buffer);

		int32_t AddBuf(const char* msg, uint32_t len);
		const char* PopBuf(uint32_t& len);

	private:
		uint32_t NextPowerOf2(uint32_t n) const;
		
	private:
		char*				m_pBuf;
		uint32_t			m_iSize;
		uint32_t			m_iLen;
	};



}

#endif //__BUFFER_H__
