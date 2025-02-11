SET(STDK_EXTRA_CFLAGS
    CONFIG_STDK_IOT_CORE
    CONFIG_STDK_IOT_CORE_OS_SUPPORT_POSIX
    CONFIG_STDK_IOT_CORE_USE_MBEDTLS
    CONFIG_STDK_IOT_CORE_NET_MBEDTLS
    CONFIG_STDK_IOT_CORE_CRYPTO_SUPPORT_ED25519
    CONFIG_STDK_IOT_CORE_SECURITY_BACKEND_SOFTWARE
    CONFIG_STDK_IOT_CORE_EASYSETUP_DISCOVERY_SSID
    CONFIG_STDK_IOT_CORE_EASYSETUP_HTTP
    CONFIG_STDK_IOT_CORE_EASYSETUP_HTTP_USE_SOCKET_API
    CONFIG_STDK_IOT_CORE_CRYPTO_SUPPORT_VERIFY

    CONFIG_STDK_IOT_CORE_LOG_LEVEL_ERROR
    CONFIG_STDK_IOT_CORE_LOG_LEVEL_WARN
    CONFIG_STDK_IOT_CORE_LOG_LEVEL_INFO
    CONFIG_STDK_IOT_CORE_LOG_LEVEL_DEBUG
   )

SET(STDK_UNITTEST_EXTRA_CFLAGS
    CONFIG_STDK_IOT_CORE
    CONFIG_STDK_IOT_CORE_OS_SUPPORT_POSIX
    CONFIG_STDK_IOT_CORE_USE_MBEDTLS
    CONFIG_STDK_IOT_CORE_NET_MBEDTLS
    CONFIG_STDK_IOT_CORE_CRYPTO_SUPPORT_ED25519
    CONFIG_STDK_IOT_CORE_SECURITY_BACKEND_SOFTWARE
    CONFIG_STDK_IOT_CORE_EASYSETUP_DISCOVERY_SSID
    CONFIG_STDK_IOT_CORE_EASYSETUP_HTTP
    CONFIG_STDK_IOT_CORE_EASYSETUP_HTTP_USE_SOCKET_API
    CONFIG_STDK_IOT_CORE_CRYPTO_SUPPORT_VERIFY
    CONFIG_STDK_IOT_CORE_LOG_FILE
    CONFIG_STDK_IOT_CORE_LOG_FILE_RAM_ONLY
    CONFIG_STDK_IOT_CORE_LOG_FILE_RAM_BUF_SIZE=8192
    #CONFIG_STDK_IOT_CORE_LOG_LEVEL_ERROR
    #CONFIG_STDK_IOT_CORE_LOG_LEVEL_WARN
    #CONFIG_STDK_IOT_CORE_LOG_LEVEL_INFO
    #CONFIG_STDK_IOT_CORE_LOG_LEVEL_DEBUG
    )
