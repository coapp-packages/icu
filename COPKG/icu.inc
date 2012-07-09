compatability-policy {
    minimum: "4.8.1.0";
    maximum: "${OneLessThanCurrent}"; // this is the default
}

package {
    version: "${package-version}";
    location: "http://coapp.org/repository/${OutputFilename}";

    feed: "http://coapp.org/repository/packages.atom.xml";
    publisher: "CoApp Project";
}

license[icu] {
    license-url: "http://source.icu-project.org/repos/icu/icu/trunk/license.html";
    license-type: "MIT";
}

metadata {
    description: @"ICU is a mature, widely used set of C/C++ libraries providing Unicode and Globalization support for software applications. ICU is widely portable and gives applications the same results on all platforms.

Web site: http://site.icu-project.org/home"; // or path to a file...
    
    author-version : "${package-version}";
    bug-tracker: "https://github.com/coapp-packages/icu/issues";
    stability : "0";
    licenses : {
        icu
    };
}
