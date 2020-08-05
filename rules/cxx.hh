const unsigned int nr_mutations = 239;
static node_ptr mutate(node_ptr root, node_ptr leaf, unsigned int mutation)
{
	auto replacement = std::make_shared<node>();
	switch (mutation) {
	case 0:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("void"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("f"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(") { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" }", true));
		break;
	case 1:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 2:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(";", true));
		break;
	case 3:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(";", true));
		break;
	case 4:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(", ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 5:
		replacement->children.push_back(std::make_shared<node>("{ ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" }", true));
		break;
	case 6:
		replacement->children.push_back(std::make_shared<node>("{ ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(", ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" }", true));
		break;
	case 7:
		replacement->children.push_back(std::make_shared<node>("( ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" )", true));
		break;
	case 8:
		replacement->children.push_back(std::make_shared<node>("( ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(", ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" )", true));
		break;
	case 9:
		replacement->children.push_back(std::make_shared<node>("< ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" >", true));
		break;
	case 10:
		replacement->children.push_back(std::make_shared<node>("< ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(", ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" >", true));
		break;
	case 11:
		replacement->children.push_back(std::make_shared<node>("[", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("]", true));
		break;
	case 12:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("a"));
		replacement->children.push_back(std::make_shared<node>("[", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("]", true));
		break;
	case 13:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("a"));
		replacement->children.push_back(std::make_shared<node>("[", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("] = { ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(" };", true));
		break;
	case 14:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("a"));
		replacement->children.push_back(std::make_shared<node>("[", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("] = ", true));
		replacement->children.push_back(std::make_shared<node>("{ 0 }"));
		replacement->children.push_back(std::make_shared<node>(";", true));
		break;
	case 15:
		replacement->children.push_back(std::make_shared<node>("while (", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(") { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" }", true));
		break;
	case 16:
		replacement->children.push_back(std::make_shared<node>("switch ", true));
		replacement->children.push_back(std::make_shared<node>("(x)"));
		replacement->children.push_back(std::make_shared<node>(" { case ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(": ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; default: ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" } ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(";", true));
		break;
	case 17:
		replacement->children.push_back(std::make_shared<node>("if (", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(") { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; } else { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; }", true));
		break;
	case 18:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(" ? ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(" : ", true));
		replacement->children.push_back(std::make_shared<node>("1"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 19:
		replacement->children.push_back(std::make_shared<node>("typename ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 20:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("typename T"));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>("typename U"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 21:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("typename"));
		replacement->children.push_back(std::make_shared<node>("... ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 22:
		replacement->children.push_back(std::make_shared<node>("...", true));
		break;
	case 23:
		replacement->children.push_back(std::make_shared<node>("template<", true));
		replacement->children.push_back(std::make_shared<node>("typename T"));
		replacement->children.push_back(std::make_shared<node>("> ", true));
		replacement->children.push_back(std::make_shared<node>("struct {}"));
		replacement->children.push_back(std::make_shared<node>(";", true));
		break;
	case 24:
		replacement->children.push_back(std::make_shared<node>("template<", true));
		replacement->children.push_back(std::make_shared<node>("typename T"));
		replacement->children.push_back(std::make_shared<node>("> struct ", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>(" { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" };", true));
		break;
	case 25:
		replacement->children.push_back(std::make_shared<node>("template<", true));
		replacement->children.push_back(std::make_shared<node>("typename T"));
		replacement->children.push_back(std::make_shared<node>("> ", true));
		replacement->children.push_back(std::make_shared<node>("void"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("f"));
		replacement->children.push_back(std::make_shared<node>(" (", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(") { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" }", true));
		break;
	case 26:
		replacement->children.push_back(std::make_shared<node>(".", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(" = ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 27:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 28:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>(" *", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 29:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>(" &", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 30:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("float"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 31:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("double"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 32:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" struct ", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("{}"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 33:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" struct ", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>(" { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" } ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 34:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" struct ", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("{}"));
		replacement->children.push_back(std::make_shared<node>("; struct ", true));
		replacement->children.push_back(std::make_shared<node>("t"));
		replacement->children.push_back(std::make_shared<node>(": ", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("{}"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 35:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" struct ", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("{}"));
		replacement->children.push_back(std::make_shared<node>("; struct ", true));
		replacement->children.push_back(std::make_shared<node>("t"));
		replacement->children.push_back(std::make_shared<node>(": ", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>(" { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" } ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 36:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" struct ", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>(" { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" }; struct ", true));
		replacement->children.push_back(std::make_shared<node>("t"));
		replacement->children.push_back(std::make_shared<node>(": ", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("{}"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 37:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" struct ", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>(" { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" }; struct ", true));
		replacement->children.push_back(std::make_shared<node>("t"));
		replacement->children.push_back(std::make_shared<node>(": ", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>(" { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" } ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 38:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" class ", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("{}"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 39:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" class ", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>(" { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" } ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 40:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" union ", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("{}"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 41:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" union ", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>(" { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" } ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 42:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" enum ", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("{}"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 43:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" enum ", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>(" { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" } ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 44:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>("(): ", true));
		replacement->children.push_back(std::make_shared<node>("f"));
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(") { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" }", true));
		break;
	case 45:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" ~", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>("() { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" }", true));
		break;
	case 46:
		replacement->children.push_back(std::make_shared<node>("public: ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 47:
		replacement->children.push_back(std::make_shared<node>("private: ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 48:
		replacement->children.push_back(std::make_shared<node>("operator+(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 49:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(" + ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 50:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(" - ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 51:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(" << ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 52:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(" >> ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 53:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(" * ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 54:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("1.2345"));
		replacement->children.push_back(std::make_shared<node>(" * ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 55:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(" / ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 56:
		replacement->children.push_back(std::make_shared<node>("~", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 57:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(" && ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 58:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(" || ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 59:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("char"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("*", true));
		break;
	case 60:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("char"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("&", true));
		break;
	case 61:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("char"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("&&", true));
		break;
	case 62:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" && ", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 63:
		replacement->children.push_back(std::make_shared<node>("const ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 64:
		replacement->children.push_back(std::make_shared<node>("restrict ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 65:
		replacement->children.push_back(std::make_shared<node>("volatile ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 66:
		replacement->children.push_back(std::make_shared<node>("mutable ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 67:
		replacement->children.push_back(std::make_shared<node>("register ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 68:
		replacement->children.push_back(std::make_shared<node>("thread_local ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 69:
		replacement->children.push_back(std::make_shared<node>("noexcept ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 70:
		replacement->children.push_back(std::make_shared<node>("typeid(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 71:
		replacement->children.push_back(std::make_shared<node>("virtual ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 72:
		replacement->children.push_back(std::make_shared<node>("export ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 73:
		replacement->children.push_back(std::make_shared<node>("friend ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 74:
		replacement->children.push_back(std::make_shared<node>("reinterpret_cast<", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>(">(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 75:
		replacement->children.push_back(std::make_shared<node>("static_cast<", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>(">(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 76:
		replacement->children.push_back(std::make_shared<node>("const_cast<", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>(">(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 77:
		replacement->children.push_back(std::make_shared<node>("dynamic_cast<", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>(">(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 78:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("void"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("f"));
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(") const = 0;", true));
		break;
	case 79:
		replacement->children.push_back(std::make_shared<node>("virtual ", true));
		replacement->children.push_back(std::make_shared<node>("void"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("f"));
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(") = 0;", true));
		break;
	case 80:
		replacement->children.push_back(std::make_shared<node>("constexpr ", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("f"));
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(") { return ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("; }", true));
		break;
	case 81:
		replacement->children.push_back(std::make_shared<node>("constexpr ", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>(" f(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(") { return ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("; } void ", true));
		replacement->children.push_back(std::make_shared<node>("g"));
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(") { f(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("); }", true));
		break;
	case 82:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("f"));
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(");", true));
		break;
	case 83:
		replacement->children.push_back(std::make_shared<node>("[", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("] (", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(") {", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("}", true));
		break;
	case 84:
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(" = ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 85:
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(" == ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 86:
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(" % ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 87:
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(" %= ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 88:
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(" < ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 89:
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(" > ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 90:
		replacement->children.push_back(std::make_shared<node>("unsigned ", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 91:
		replacement->children.push_back(std::make_shared<node>("unsigned long long int", true));
		break;
	case 92:
		replacement->children.push_back(std::make_shared<node>("long double", true));
		break;
	case 93:
		replacement->children.push_back(std::make_shared<node>("short", true));
		break;
	case 94:
		replacement->children.push_back(std::make_shared<node>("({ ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; 0 })", true));
		break;
	case 95:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("unsigned int"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("b"));
		replacement->children.push_back(std::make_shared<node>(":", true));
		replacement->children.push_back(std::make_shared<node>("1"));
		replacement->children.push_back(std::make_shared<node>(";", true));
		break;
	case 96:
		replacement->children.push_back(std::make_shared<node>("asm ", true));
		replacement->children.push_back(std::make_shared<node>("volatile"));
		replacement->children.push_back(std::make_shared<node>(" (\"", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("\" : \"=r\" (", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(") : \"r\" (", true));
		replacement->children.push_back(std::make_shared<node>("y"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 97:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("T"));
		replacement->children.push_back(std::make_shared<node>("::", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 98:
		replacement->children.push_back(std::make_shared<node>("&", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 99:
		replacement->children.push_back(std::make_shared<node>("*", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 100:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(".", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 101:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("->", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 102:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("extern"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("void"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 103:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("extern"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 104:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("static"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("void"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 105:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("static"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 106:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("inline"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("void"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 107:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("inline"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 108:
		replacement->children.push_back(std::make_shared<node>("typeof(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 109:
		replacement->children.push_back(std::make_shared<node>("typeof ", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 110:
		replacement->children.push_back(std::make_shared<node>("sizeof(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 111:
		replacement->children.push_back(std::make_shared<node>("sizeof ", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 112:
		replacement->children.push_back(std::make_shared<node>("decltype(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 113:
		replacement->children.push_back(std::make_shared<node>("alignof(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 114:
		replacement->children.push_back(std::make_shared<node>("default:", true));
		break;
	case 115:
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>("void"));
		replacement->children.push_back(std::make_shared<node>(") ", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 116:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("f"));
		replacement->children.push_back(std::make_shared<node>("<", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(">(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 117:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("f"));
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("<>"));
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 118:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("a"));
		replacement->children.push_back(std::make_shared<node>("[] = ", true));
		replacement->children.push_back(std::make_shared<node>("{}"));
		replacement->children.push_back(std::make_shared<node>(";", true));
		break;
	case 119:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("a"));
		replacement->children.push_back(std::make_shared<node>("[] = { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" };", true));
		break;
	case 120:
		replacement->children.push_back(std::make_shared<node>("a", true));
		break;
	case 121:
		replacement->children.push_back(std::make_shared<node>("&a", true));
		break;
	case 122:
		replacement->children.push_back(std::make_shared<node>("x", true));
		break;
	case 123:
		replacement->children.push_back(std::make_shared<node>("&x", true));
		break;
	case 124:
		replacement->children.push_back(std::make_shared<node>("y", true));
		break;
	case 125:
		replacement->children.push_back(std::make_shared<node>("&y", true));
		break;
	case 126:
		replacement->children.push_back(std::make_shared<node>("f", true));
		break;
	case 127:
		replacement->children.push_back(std::make_shared<node>("&f", true));
		break;
	case 128:
		replacement->children.push_back(std::make_shared<node>("t", true));
		break;
	case 129:
		replacement->children.push_back(std::make_shared<node>("&t", true));
		break;
	case 130:
		replacement->children.push_back(std::make_shared<node>("T", true));
		break;
	case 131:
		replacement->children.push_back(std::make_shared<node>("&T", true));
		break;
	case 132:
		replacement->children.push_back(std::make_shared<node>("s", true));
		break;
	case 133:
		replacement->children.push_back(std::make_shared<node>("&s", true));
		break;
	case 134:
		replacement->children.push_back(std::make_shared<node>("-1ULL", true));
		break;
	case 135:
		replacement->children.push_back(std::make_shared<node>("-1", true));
		break;
	case 136:
		replacement->children.push_back(std::make_shared<node>("0", true));
		break;
	case 137:
		replacement->children.push_back(std::make_shared<node>("1", true));
		break;
	case 138:
		replacement->children.push_back(std::make_shared<node>("2", true));
		break;
	case 139:
		replacement->children.push_back(std::make_shared<node>(".1", true));
		break;
	case 140:
		replacement->children.push_back(std::make_shared<node>(".3", true));
		break;
	case 141:
		replacement->children.push_back(std::make_shared<node>(".1f", true));
		break;
	case 142:
		replacement->children.push_back(std::make_shared<node>("-.3f", true));
		break;
	case 143:
		replacement->children.push_back(std::make_shared<node>("1e9", true));
		break;
	case 144:
		replacement->children.push_back(std::make_shared<node>("1e15", true));
		break;
	case 145:
		replacement->children.push_back(std::make_shared<node>("1e31", true));
		break;
	case 146:
		replacement->children.push_back(std::make_shared<node>("1e67", true));
		break;
	case 147:
		replacement->children.push_back(std::make_shared<node>("1e91", true));
		break;
	case 148:
		replacement->children.push_back(std::make_shared<node>("l:", true));
		break;
	case 149:
		replacement->children.push_back(std::make_shared<node>("goto ", true));
		replacement->children.push_back(std::make_shared<node>("l"));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 150:
		replacement->children.push_back(std::make_shared<node>("&&", true));
		replacement->children.push_back(std::make_shared<node>("l"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 151:
		replacement->children.push_back(std::make_shared<node>("auto ", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(" = ", true));
		replacement->children.push_back(std::make_shared<node>("f()"));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 152:
		replacement->children.push_back(std::make_shared<node>("auto ", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(" = ", true));
		replacement->children.push_back(std::make_shared<node>("f"));
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("); ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 153:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("f"));
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 154:
		replacement->children.push_back(std::make_shared<node>("break; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 155:
		replacement->children.push_back(std::make_shared<node>("continue; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 156:
		replacement->children.push_back(std::make_shared<node>("return ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 157:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; return ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(";", true));
		break;
	case 158:
		replacement->children.push_back(std::make_shared<node>("namespace { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" } ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 159:
		replacement->children.push_back(std::make_shared<node>("using ", true));
		replacement->children.push_back(std::make_shared<node>("t"));
		replacement->children.push_back(std::make_shared<node>(" = ", true));
		replacement->children.push_back(std::make_shared<node>("T"));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 160:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; try { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; } catch (", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(") { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; } ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(";", true));
		break;
	case 161:
		replacement->children.push_back(std::make_shared<node>("new ", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("()"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 162:
		replacement->children.push_back(std::make_shared<node>("new ", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 163:
		replacement->children.push_back(std::make_shared<node>("delete ", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 164:
		replacement->children.push_back(std::make_shared<node>("throw ", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 165:
		replacement->children.push_back(std::make_shared<node>("static_assert(", true));
		replacement->children.push_back(std::make_shared<node>("1"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 166:
		replacement->children.push_back(std::make_shared<node>("typedef ", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("t"));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 167:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("void"));
		replacement->children.push_back(std::make_shared<node>(" (*", true));
		replacement->children.push_back(std::make_shared<node>("cb"));
		replacement->children.push_back(std::make_shared<node>(")(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 168:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("void"));
		replacement->children.push_back(std::make_shared<node>(" (*", true));
		replacement->children.push_back(std::make_shared<node>("cb"));
		replacement->children.push_back(std::make_shared<node>(")(", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>(" x)", true));
		break;
	case 169:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("cb"));
		replacement->children.push_back(std::make_shared<node>("->(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 170:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("cb"));
		replacement->children.push_back(std::make_shared<node>("->(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 171:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("void"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("f"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>("void"));
		replacement->children.push_back(std::make_shared<node>(" (*", true));
		replacement->children.push_back(std::make_shared<node>("cb"));
		replacement->children.push_back(std::make_shared<node>(")(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(")) ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>("cb"));
		replacement->children.push_back(std::make_shared<node>("->(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("); ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" }", true));
		break;
	case 172:
		replacement->children.push_back(std::make_shared<node>("struct ", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>(" { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>(" ", true));
		replacement->children.push_back(std::make_shared<node>("f"));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>("void"));
		replacement->children.push_back(std::make_shared<node>(" m ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(") ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; }", true));
		break;
	case 173:
		replacement->children.push_back(std::make_shared<node>("&", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>("::", true));
		replacement->children.push_back(std::make_shared<node>("f"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 174:
		replacement->children.push_back(std::make_shared<node>("&", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>("::", true));
		replacement->children.push_back(std::make_shared<node>("m"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 175:
		replacement->children.push_back(std::make_shared<node>("(*", true));
		replacement->children.push_back(std::make_shared<node>("s"));
		replacement->children.push_back(std::make_shared<node>(")->", true));
		replacement->children.push_back(std::make_shared<node>("cb"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 176:
		replacement->children.push_back(std::make_shared<node>("__attribute__ ((", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("))", true));
		break;
	case 177:
		replacement->children.push_back(std::make_shared<node>("__attribute__ ((noinline(", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(")))", true));
		break;
	case 178:
		replacement->children.push_back(std::make_shared<node>("__builtin_alloca(", true));
		replacement->children.push_back(std::make_shared<node>("1"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 179:
		replacement->children.push_back(std::make_shared<node>("__builtin_types_compatible_p(", true));
		replacement->children.push_back(std::make_shared<node>("int"));
		replacement->children.push_back(std::make_shared<node>(", ", true));
		replacement->children.push_back(std::make_shared<node>("float"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 180:
		replacement->children.push_back(std::make_shared<node>("__builtin_choose_expr(", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(", ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(", ", true));
		replacement->children.push_back(std::make_shared<node>("1"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 181:
		replacement->children.push_back(std::make_shared<node>("__builtin_unreachable()", true));
		break;
	case 182:
		replacement->children.push_back(std::make_shared<node>("__builtin___clear_cache(", true));
		replacement->children.push_back(std::make_shared<node>("&x"));
		replacement->children.push_back(std::make_shared<node>(", ", true));
		replacement->children.push_back(std::make_shared<node>("&x"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 183:
		replacement->children.push_back(std::make_shared<node>("__builtin_prefetch(", true));
		replacement->children.push_back(std::make_shared<node>("&x"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 184:
		replacement->children.push_back(std::make_shared<node>("__builtin_inf()", true));
		break;
	case 185:
		replacement->children.push_back(std::make_shared<node>("__builtin_popcount(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 186:
		replacement->children.push_back(std::make_shared<node>("__builtin_extend_pointer(", true));
		replacement->children.push_back(std::make_shared<node>("&x"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 187:
		replacement->children.push_back(std::make_shared<node>("int main() { int x; long y; short z; char w; float f; double d; void *p; l: ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; }", true));
		break;
	case 188:
		replacement->children.push_back(std::make_shared<node>("{ ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; }", true));
		break;
	case 189:
		replacement->children.push_back(std::make_shared<node>("for (unsigned int i = ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("; i < ", true));
		replacement->children.push_back(std::make_shared<node>("5"));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>("i++"));
		replacement->children.push_back(std::make_shared<node>(") { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; }", true));
		break;
	case 190:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(", ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 191:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 192:
		replacement->children.push_back(std::make_shared<node>("&", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 193:
		replacement->children.push_back(std::make_shared<node>("&", true));
		replacement->children.push_back(std::make_shared<node>("l"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 194:
		replacement->children.push_back(std::make_shared<node>("&&", true));
		replacement->children.push_back(std::make_shared<node>("l"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 195:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("y"));
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 196:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("z"));
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 197:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("w"));
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 198:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("f"));
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 199:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("d"));
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 200:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("p"));
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 201:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("g"));
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 202:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 203:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("z"));
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 204:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("l"));
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 205:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("Ir", true));
		break;
	case 206:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("+"));
		replacement->children.push_back(std::make_shared<node>("rm", true));
		break;
	case 207:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("="));
		replacement->children.push_back(std::make_shared<node>("rm", true));
		break;
	case 208:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("+"));
		replacement->children.push_back(std::make_shared<node>("m", true));
		break;
	case 209:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("="));
		replacement->children.push_back(std::make_shared<node>("m", true));
		break;
	case 210:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("ae", true));
		break;
	case 211:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("0", true));
		break;
	case 212:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("+"));
		replacement->children.push_back(std::make_shared<node>("f", true));
		break;
	case 213:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("="));
		replacement->children.push_back(std::make_shared<node>("f", true));
		break;
	case 214:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("q", true));
		break;
	case 215:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("="));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 216:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("&"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 217:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("+"));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 218:
		replacement->children.push_back(std::make_shared<node>("asm ", true));
		replacement->children.push_back(std::make_shared<node>("volatile"));
		replacement->children.push_back(std::make_shared<node>(" (\"\" : ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" : ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" : ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 219:
		replacement->children.push_back(std::make_shared<node>("asm ", true));
		replacement->children.push_back(std::make_shared<node>("goto"));
		replacement->children.push_back(std::make_shared<node>(" (\"\" : ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" : ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" : ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 220:
		replacement->children.push_back(std::make_shared<node>("(void *) ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 221:
		replacement->children.push_back(std::make_shared<node>("(int *) ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 222:
		replacement->children.push_back(std::make_shared<node>("(int) ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 223:
		replacement->children.push_back(std::make_shared<node>("(float) ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 224:
		replacement->children.push_back(std::make_shared<node>("goto", true));
		break;
	case 225:
		replacement->children.push_back(std::make_shared<node>("\"", true));
		replacement->children.push_back(std::make_shared<node>("="));
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("&"));
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("t"));
		replacement->children.push_back(std::make_shared<node>("\" (", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 226:
		replacement->children.push_back(std::make_shared<node>("\"", true));
		replacement->children.push_back(std::make_shared<node>("="));
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("r"));
		replacement->children.push_back(std::make_shared<node>("\" (", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 227:
		replacement->children.push_back(std::make_shared<node>("\"", true));
		replacement->children.push_back(std::make_shared<node>("+"));
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("r"));
		replacement->children.push_back(std::make_shared<node>("\" (", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 228:
		replacement->children.push_back(std::make_shared<node>("\"", true));
		replacement->children.push_back(std::make_shared<node>("&"));
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("r"));
		replacement->children.push_back(std::make_shared<node>("\" (", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 229:
		replacement->children.push_back(std::make_shared<node>("\"", true));
		replacement->children.push_back(std::make_shared<node>("r"));
		replacement->children.push_back(std::make_shared<node>("\" (", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 230:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("\"memory\""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 231:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>("\"cc\""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 232:
		replacement->children.push_back(std::make_shared<node>("__builtin_constant_p(", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(")", true));
		break;
	case 233:
		replacement->children.push_back(std::make_shared<node>("({ union { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; typeof(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(") __val; ", true));
		replacement->children.push_back(std::make_shared<node>("char"));
		replacement->children.push_back(std::make_shared<node>(" __c[1]; } __u; *(", true));
		replacement->children.push_back(std::make_shared<node>("unsigned char"));
		replacement->children.push_back(std::make_shared<node>(" *) __u.__c = *(", true));
		replacement->children.push_back(std::make_shared<node>("volatile unsigned char"));
		replacement->children.push_back(std::make_shared<node>(" *) &(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("); __u.__val; })", true));
		break;
	case 234:
		replacement->children.push_back(std::make_shared<node>("({ ", true));
		replacement->children.push_back(std::make_shared<node>("unsigned long"));
		replacement->children.push_back(std::make_shared<node>(" __ptr; __ptr = (", true));
		replacement->children.push_back(std::make_shared<node>("unsigned long"));
		replacement->children.push_back(std::make_shared<node>(") (", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("); (", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>(" typeof(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(")) (__ptr + (", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(")); })", true));
		break;
	case 235:
		replacement->children.push_back(std::make_shared<node>("((void) sizeof(char[1 - 2 * ", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("]))", true));
		break;
	case 236:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; do { ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; asm goto(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("); asm (\"\"); ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; } while (", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("); ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 237:
		replacement->children.push_back(std::make_shared<node>("", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("; asm(\"\" : \"", true));
		replacement->children.push_back(std::make_shared<node>("=a"));
		replacement->children.push_back(std::make_shared<node>("\"(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("), \"", true));
		replacement->children.push_back(std::make_shared<node>("=d"));
		replacement->children.push_back(std::make_shared<node>("\"(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(") : \"", true));
		replacement->children.push_back(std::make_shared<node>("r"));
		replacement->children.push_back(std::make_shared<node>("\" (", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("), \"", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("\" (", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>("), \"1\" (", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(")); ", true));
		replacement->children.push_back(std::make_shared<node>(""));
		replacement->children.push_back(std::make_shared<node>("", true));
		break;
	case 238:
		replacement->children.push_back(std::make_shared<node>("(", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(" != ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>(" && ((", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(" & (", true));
		replacement->children.push_back(std::make_shared<node>("x"));
		replacement->children.push_back(std::make_shared<node>(" - ", true));
		replacement->children.push_back(std::make_shared<node>("1"));
		replacement->children.push_back(std::make_shared<node>(")) == ", true));
		replacement->children.push_back(std::make_shared<node>("0"));
		replacement->children.push_back(std::make_shared<node>("))", true));
		break;
	}
	return replace(root, leaf, replacement);
}
