#include "StdAfx.h"
#include "Triangle.h"

TFTriangle::TFTriangle(void)
{
}

TFTriangle::~TFTriangle(void)
{
}

TFTriangle::TFTriangle(int n1,int n2,int n3)
{
	this->m_pointIdx1=n1;
	this->m_pointIdx2=n2;
	this->m_pointIdx3=n3;
}

void TFTriangle::GetPointIdx(int& idx1,int& idx2,int& idx3)
{
	idx1=m_pointIdx1;
	idx2=m_pointIdx2;
	idx3=m_pointIdx3;
}