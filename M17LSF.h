/*
 *   Copyright (C) 2020,2021 by Jonathan Naylor G4KLX
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#if !defined(M17LSF_H)
#define  M17LSF_H

#include <string>

class CM17LSF {
public:
	CM17LSF();
	~CM17LSF();

	void getNetwork(unsigned char* data) const;
	void setNetwork(const unsigned char* data);

	void setSource(const std::string& callsign);

	void setDest(const std::string& callsign);

	void setPacketStream(unsigned char ps);

	void setDataType(unsigned char type);

	void setEncryptionType(unsigned char type);

	void setEncryptionSubType(unsigned char type);

	void setCAN(unsigned char can);

	void setMeta(const unsigned char* data);

private:
	unsigned char* m_lsf;
};

#endif
