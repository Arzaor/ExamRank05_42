#pragma once

# include "ASpell.hpp"
# include <vector>

class SpellBook
{
	private:
		std::vector<ASpell *> book;

		SpellBook& operator=(const SpellBook &);
		SpellBook(const SpellBook &);
	public:
		SpellBook();
		virtual ~SpellBook();

		void		learnSpell(ASpell *);
		void		forgetSpell(const std::string &);
		ASpell*		createSpell(const std::string &);
};
