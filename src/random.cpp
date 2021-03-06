#include <openssl/rand.h>
#include "../include/random.h"
#include "../include/private/crypto_p.h"

QTNETWORKNG_NAMESPACE_BEGIN

QByteArray randomBytes(int i)
{
    initOpenSSL();
    QByteArray b;
    b.resize(i);
    RAND_bytes(reinterpret_cast<unsigned char*>(b.data()), i);
    return b;
}

QTNETWORKNG_NAMESPACE_END
