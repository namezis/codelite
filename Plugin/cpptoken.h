#ifndef __cpptoken__
#define __cpptoken__

#include <wx/string.h>
#include <list>
#include <map>

class CppToken
{
	int m_id;
	wxString name;		// the name of the token
	size_t offset;		// file offset
	wxString filename;
	wxString line;

public:
	CppToken();
	~CppToken();

	void reset();
	void append(const char ch);

	void setName(const wxString& name) {
		this->name = name;
	}

	void setOffset(const size_t& offset) {
		this->offset = offset;
	}

	const wxString& getName() const {
		return name;
	}
	const size_t& getOffset() const {
		return offset;
	}

	void setFilename(const wxString& filename) {
		this->filename = filename;
	}

	const wxString& getFilename() const {
		return filename;
	}

	void setId(const int& id) {
		this->m_id = id;
	}

	const int& getId() const {
		return m_id;
	}

	void setLine(const wxString& line) {
		this->line = line;
	}
	
	const wxString& getLine() const {
		return line;
	}

	void print();
};

class CppTokensMap
{
	std::map<wxString, std::list<CppToken>* > m_tokens;

public:
	CppTokensMap();
	~CppTokensMap();

	/**
	 * @brief return true if any token with given name exists in the map
	 * @param name token's name to search
	 */
	bool contains(const wxString &name);
	/**
	 * @brief return list of tokens with given name
	 * @param name token name
	 * @param tokens [output]
	 */
	void findTokens(const wxString &name, std::list<CppToken> &tokens);
	/**
	 * @brief add token to the map. if token with same name already exists, it will be appended so multiple tokens with same name is allowed
	 * @param token token to add
	 */
	void addToken(const CppToken &token);
};

#endif // __cpptoken__
