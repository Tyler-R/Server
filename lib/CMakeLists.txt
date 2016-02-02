add_library(serverLibrary
        server.cpp
        session.cpp
        )

target_link_libraries(serverLibrary ${Boost_LIBRARIES})
