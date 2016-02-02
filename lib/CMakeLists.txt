add_library(serverLibrary
        server.cpp

        )

target_link_libraries(serverLibrary ${Boost_LIBRARIES})
