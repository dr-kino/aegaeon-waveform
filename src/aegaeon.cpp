/**
 * @file aegaeon.cpp
 *
 * @brief Main module, responsible to handle information exchange with user
 *
 * @ingroup Aegaeon
 *
 * @author Rafael Cavalcanti
 * Contact: doctorkinoo@gmail.com
 *
 */
#include <boost/program_options.hpp>
namespace po = boost::program_options;

#include <iostream>
#include <iterator>
using namespace std;

int main(int ac, char* av[])
{
    try {

        po::options_description desc("Allowed options");
        desc.add_options()
            ("help", "produce help message")
            ("compression", po::value<double>(), "set compression level")
            ("filein", po::value<string>(), "file name")
        ;

        po::variables_map vm;        
        po::store(po::parse_command_line(ac, av, desc), vm);
        po::notify(vm);    

        if (vm.count("help")) {
            cout << desc << "\n";
            return 0;
        }

        if (vm.count("compression")) {
            cout << "Compression level was set to " 
                 << vm["compression"].as<double>() << ".\n";
        } else {
            cout << "Compression level was not set.\n";
        }

        if (vm.count("filein")) {
            cout << "Input file: "
                 << vm["filein"].as<string>() << "\n";
        } else {
            cout << "No input file\n";
        }
    }
    catch(exception& e) {
        cerr << "error: " << e.what() << "\n";
        return 1;
    }
    catch(...) {
        cerr << "Exception of unknown type!\n";
    }

    return 0;
}