if(CMAKE_BUILD_TYPE MATCHES UnitTest)
    set(EASYSETUP_D2D_SOURCES
        http/tcp/iot_easysetup_d2d_tcp.c
        http/tcp/iot_easysetup_http_tcp.c
        http/iot_easysetup_http_parser.c
        http/iot_easysetup_http.c
        http/easysetup_http.h
        )
else()
    set(EASYSETUP_D2D_SOURCES
        posix_testing/iot_easysetup_posix_testing.c
        )
endif()

target_sources(iotcore
               PRIVATE
               iot_easysetup_st_mqtt.c
               ${EASYSETUP_D2D_SOURCES}
               )
