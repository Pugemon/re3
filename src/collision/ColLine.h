#pragma once

struct CColLine
{
	// NB: this has to be compatible with two CVuVectors
	CVector p0;
	int pad0;
	CVector p1;
	int pad1;

	CColLine(void) = default;
	CColLine(const CVector &p0, const CVector &p1) : p0(p0), p1(p1) {  };
	void Set(const CVector &p0, const CVector &p1);
};