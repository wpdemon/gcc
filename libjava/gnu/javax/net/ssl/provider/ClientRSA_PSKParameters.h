
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_ClientRSA_PSKParameters__
#define __gnu_javax_net_ssl_provider_ClientRSA_PSKParameters__

#pragma interface

#include <gnu/javax/net/ssl/provider/ExchangeKeys.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class ClientRSA_PSKParameters;
              class EncryptedPreMasterSecret;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace nio
    {
        class ByteBuffer;
    }
  }
}

class gnu::javax::net::ssl::provider::ClientRSA_PSKParameters : public ::gnu::javax::net::ssl::provider::ExchangeKeys
{

public:
  ClientRSA_PSKParameters(::java::nio::ByteBuffer *);
  ClientRSA_PSKParameters(::java::lang::String *, ::java::nio::ByteBuffer *);
  virtual ::java::nio::ByteBuffer * buffer();
  virtual ::java::lang::String * identity();
private:
  jint identityLength();
public:
  virtual jint length();
  virtual ::gnu::javax::net::ssl::provider::EncryptedPreMasterSecret * secret();
  virtual ::java::lang::String * toString(::java::lang::String *);
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_ClientRSA_PSKParameters__
