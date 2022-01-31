#pragma once

# include "ATarget.hpp"
# include <vector>

class TargetGenerator
{
	private:
		std::vector<ATarget *> generator;

		TargetGenerator& operator=(const TargetGenerator &);
		TargetGenerator(const TargetGenerator &);
	public:
		TargetGenerator();
		virtual ~TargetGenerator();

		void		learnTargetType(ATarget *);
		void		forgetTargetType(const std::string &);
		ATarget*	createTarget(const std::string &);
};
