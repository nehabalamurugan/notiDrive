#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* UnityTlsContext_CertificateCallback_mCF0B5C35CA9C47C2FA5438BA3BA603911642333B_RuntimeMethod_var;
extern const RuntimeMethod* UnityTlsContext_ReadCallback_m761A4E7B983E40C8D727C2251158F22F762CD419_RuntimeMethod_var;
extern const RuntimeMethod* UnityTlsContext_VerifyCallback_m8367D8479B3FD1AA41D886446279FEE8246F04B2_RuntimeMethod_var;
extern const RuntimeMethod* UnityTlsContext_WriteCallback_mE11815EF2287F4F9D27C94D0E5414DC1E2BCEFD8_RuntimeMethod_var;



// 0x00000001 System.String SR::GetString(System.String,System.Object[])
extern void SR_GetString_m60DD6FC6EE29B45330D1A1A35D27061605169AF5 (void);
// 0x00000002 System.String SR::GetString(System.Globalization.CultureInfo,System.String,System.Object[])
extern void SR_GetString_mBCE484542C4DBA5BFBEEDBC4EDBA47DB241E774E (void);
// 0x00000003 System.String SR::GetString(System.String)
extern void SR_GetString_m6A5DA279E5FFB81210609BAD3C4099947C625E54 (void);
// 0x00000004 System.Void Mono.Util.MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern void MonoPInvokeCallbackAttribute__ctor_m38A1F94D97EA55DC3B5AEC44EB89A0F266BAFE92 (void);
// 0x00000005 System.Void Mono.Unity.CertHelper::AddCertificatesToNativeChain(Mono.Unity.UnityTls/unitytls_x509list*,System.Security.Cryptography.X509Certificates.X509CertificateCollection,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void CertHelper_AddCertificatesToNativeChain_m01FF59F30DBE0728865ECF561D4F0A17186FC9DA (void);
// 0x00000006 System.Void Mono.Unity.CertHelper::AddCertificateToNativeChain(Mono.Unity.UnityTls/unitytls_x509list*,System.Security.Cryptography.X509Certificates.X509Certificate,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void CertHelper_AddCertificateToNativeChain_m9B02240E4BB8AF33B6DE4BF82EBDB7FE7699A5F2 (void);
// 0x00000007 System.Void Mono.Unity.Debug::CheckAndThrow(Mono.Unity.UnityTls/unitytls_errorstate,System.String,Mono.Security.Interface.AlertDescription)
extern void Debug_CheckAndThrow_m7936E6C6DB91CE5DA2C88D80D6B06F48997024AF (void);
// 0x00000008 System.Void Mono.Unity.Debug::CheckAndThrow(Mono.Unity.UnityTls/unitytls_errorstate,Mono.Unity.UnityTls/unitytls_x509verify_result,System.String,Mono.Security.Interface.AlertDescription)
extern void Debug_CheckAndThrow_m7A66A3C29F16FFAE652BD0BBC01B1160CC76EA66 (void);
// 0x00000009 System.IntPtr Mono.Unity.UnityTls::GetUnityTlsInterface()
extern void UnityTls_GetUnityTlsInterface_mEB1549C22D01D9EFF5163D617DD6C524399C9168 (void);
// 0x0000000A System.Boolean Mono.Unity.UnityTls::get_IsSupported()
extern void UnityTls_get_IsSupported_m056D75A7037671BE51A245A5F87A4DF48E95AC56 (void);
// 0x0000000B Mono.Unity.UnityTls/unitytls_interface_struct Mono.Unity.UnityTls::get_NativeInterface()
extern void UnityTls_get_NativeInterface_mB1E9187BB6587A1B6CDDF82B5E08CE253FC84802 (void);
// 0x0000000C System.Void Mono.Unity.UnityTls/unitytls_x509verify_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509verify_callback__ctor_mCD4AE44980D156BAF7B292E03B17CEE73CBFA77A (void);
// 0x0000000D Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509verify_callback_Invoke_mE05631A7F1E2B1C94DE9D05468D1A399449BE3DB (void);
// 0x0000000E System.IAsyncResult Mono.Unity.UnityTls/unitytls_x509verify_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509verify_callback_BeginInvoke_m80B588AC361E881F6B9A6A4CB1249527B5EE2D82 (void);
// 0x0000000F Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_x509verify_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_x509verify_callback_EndInvoke_m4B9E4F34C79F1DB7EEBD8CD901402D21D9897DA5 (void);
// 0x00000010 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_write_callback__ctor_m4A3B6C97ADCDE640A6D51BEBF956FE89CE7FE06E (void);
// 0x00000011 System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::Invoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_write_callback_Invoke_mE4D37080BCB02702B715781D34FD5EB30816E87E (void);
// 0x00000012 System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::BeginInvoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_write_callback_BeginInvoke_m56D8E3602D68CCF6F84B1241B4046230ECE9EB17 (void);
// 0x00000013 System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_write_callback_EndInvoke_mF45640F3BD3B119F178FDDEAC7202B0084762C13 (void);
// 0x00000014 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_read_callback__ctor_m42EC0545CBCEE38C403A2AD81C2A951A18536317 (void);
// 0x00000015 System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::Invoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_read_callback_Invoke_m10194359ED6B21DAC2865817902E27D036864332 (void);
// 0x00000016 System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::BeginInvoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_read_callback_BeginInvoke_m500B1F505ACCCE25672F6C4112379D824CA20B21 (void);
// 0x00000017 System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_read_callback_EndInvoke_m5F3AE9D02E36D788A768006CF41CE166C3B1029A (void);
// 0x00000018 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_trace_callback__ctor_m5AAAAE3312A549267BC7A177CE9298C31B9FE6CD (void);
// 0x00000019 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr)
extern void unitytls_tlsctx_trace_callback_Invoke_m9A667101357751D33683A21B461FA7EF0C8A9B9C (void);
// 0x0000001A System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_trace_callback_BeginInvoke_mEA1F9A679A167E7758686CE4B73A60E8D316010F (void);
// 0x0000001B System.Void Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_trace_callback_EndInvoke_m7B34BE12F355DE949608742051B4F0E047D02487 (void);
// 0x0000001C System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_certificate_callback__ctor_mE30600E8B0DC15C286BEBDE36DB7CF0A5DC806A3 (void);
// 0x0000001D System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_certificate_callback_Invoke_m536C2AF2B9CF109A6014DFF45D3691EF04A56919 (void);
// 0x0000001E System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_certificate_callback_BeginInvoke_m7A678B70786434002434B2C15E17F0E642FC9606 (void);
// 0x0000001F System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_certificate_callback_EndInvoke_m55CDFC75FB80F60044FFE4FA6939252C2A01FD7B (void);
// 0x00000020 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_x509verify_callback__ctor_mD102129FAC6B05E4B4454B322E0DE2E7BFB16B9F (void);
// 0x00000021 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_x509verify_callback_Invoke_mE24F745E1914200CEB53E4489DA7CD2072B46AEC (void);
// 0x00000022 System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_x509verify_callback_BeginInvoke_m96C1493D382DB98D0FDF62000704BA32B7C51F4B (void);
// 0x00000023 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_x509verify_callback_EndInvoke_mC445AA50EA5722909B9D24D543DB945654233729 (void);
// 0x00000024 System.Void Mono.Unity.UnityTls/unitytls_interface_struct::.ctor()
extern void unitytls_interface_struct__ctor_m55B3993F42779B4442042D897FAFEC6C978012AD (void);
// 0x00000025 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_errorstate_create_t__ctor_m502A58FB6B55E6F5A7C23A6D0BA9A57AD5C2FC8E (void);
// 0x00000026 Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::Invoke()
extern void unitytls_errorstate_create_t_Invoke_m6DF09A1CC8C5C38D78CC2E510F318571202E7087 (void);
// 0x00000027 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::BeginInvoke(System.AsyncCallback,System.Object)
extern void unitytls_errorstate_create_t_BeginInvoke_m103F02317D04043A6F17DBA039AC7DE10720F2B4 (void);
// 0x00000028 Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::EndInvoke(System.IAsyncResult)
extern void unitytls_errorstate_create_t_EndInvoke_m1129F7E0667ABDE028F644D2F6AE39659501283F (void);
// 0x00000029 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_errorstate_raise_error_t__ctor_mBDF3F1DBB55EBC328D0EE9A14A544A20CD076EBA (void);
// 0x0000002A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_error_code)
extern void unitytls_errorstate_raise_error_t_Invoke_mB92B8CF1876FF0C9467C82918E427EBD324D8D8A (void);
// 0x0000002B System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_error_code,System.AsyncCallback,System.Object)
extern void unitytls_errorstate_raise_error_t_BeginInvoke_mABE9FA2B499289353E0B756509458BB432BFED51 (void);
// 0x0000002C System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::EndInvoke(System.IAsyncResult)
extern void unitytls_errorstate_raise_error_t_EndInvoke_mDEBE29AF3E514929895AB7971B159BAB19E4BD5D (void);
// 0x0000002D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_get_ref_t__ctor_mE569EA0229BC956FD332E398F4A6ED32902EFBE3 (void);
// 0x0000002E Mono.Unity.UnityTls/unitytls_key_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_key*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_key_get_ref_t_Invoke_mE487DAB011D7F5966E09A2245399B312C2EF9111 (void);
// 0x0000002F System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_key*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_key_get_ref_t_BeginInvoke_m6E656A4FA9FC8D6BC473D707DAFC17DF861E8A95 (void);
// 0x00000030 Mono.Unity.UnityTls/unitytls_key_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::EndInvoke(System.IAsyncResult)
extern void unitytls_key_get_ref_t_EndInvoke_mBE91A77CA27DE41245B333EA0C8B93EAF0325DE2 (void);
// 0x00000031 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_parse_der_t__ctor_m6E905C011D2077EE54DA350886C16B2BD1EE7681 (void);
// 0x00000032 Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::Invoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_key_parse_der_t_Invoke_m108AFDBB38B2C1AD429E957CD5BEA93D23C152E6 (void);
// 0x00000033 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::BeginInvoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_key_parse_der_t_BeginInvoke_mD0BF42B3B39E50702EC624F2A8596D3017D0F93B (void);
// 0x00000034 Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::EndInvoke(System.IAsyncResult)
extern void unitytls_key_parse_der_t_EndInvoke_mEF249023FA9DD82850CB35FBF5691B44F8023A25 (void);
// 0x00000035 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_parse_pem_t__ctor_m47E001D14C6F8F11E914B1126DE9516411A2AC06 (void);
// 0x00000036 Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::Invoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_key_parse_pem_t_Invoke_mD4D86D5A1C3E8E9BF2BB9CC8774EB3499ED598F4 (void);
// 0x00000037 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::BeginInvoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_key_parse_pem_t_BeginInvoke_m0AA005FBD3649ACA89E06C9664AC4B7BE062FD7B (void);
// 0x00000038 Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::EndInvoke(System.IAsyncResult)
extern void unitytls_key_parse_pem_t_EndInvoke_m564A47C1A42623E189B4792E82B007B65D1BBEF7 (void);
// 0x00000039 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_free_t__ctor_m0233235C55B3ECFECA16F0A8346E97D6ADDEC040 (void);
// 0x0000003A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::Invoke(Mono.Unity.UnityTls/unitytls_key*)
extern void unitytls_key_free_t_Invoke_m4DD025ECA7C3B5020EBF702BC4BAAE8D9B3C807B (void);
// 0x0000003B System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_key*,System.AsyncCallback,System.Object)
extern void unitytls_key_free_t_BeginInvoke_m972ED483F0CC8F99724B66019E736094D326EE29 (void);
// 0x0000003C System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::EndInvoke(System.IAsyncResult)
extern void unitytls_key_free_t_EndInvoke_m47D280EFAE1EA7E16E6400B2F47A83C408410A24 (void);
// 0x0000003D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509_export_der_t__ctor_m4514C241AC221F91BBB088FF1DC31B342DCA7397 (void);
// 0x0000003E System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509_export_der_t_Invoke_mFA1224BE85A73019C32C3CB0E8ABD7E5BFEFFA82 (void);
// 0x0000003F System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509_export_der_t_BeginInvoke_m315A20FF03D9FD6B82A9A3997267A4E4B72B8D05 (void);
// 0x00000040 System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509_export_der_t_EndInvoke_m660B809820CF47708B4DB7EBDF618AB34B70242E (void);
// 0x00000041 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_get_ref_t__ctor_m672FA9C9A5170D460A7D9839E786559819DB8459 (void);
// 0x00000042 Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_get_ref_t_Invoke_mFADB5F4BCB29A18DD0BD689EA8180D74CD9E4E63 (void);
// 0x00000043 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_get_ref_t_BeginInvoke_m282E11FB630DFD9FAA07EE42FA460C10AD6A7915 (void);
// 0x00000044 Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_get_ref_t_EndInvoke_mF4CA76D68207C44E63DA55C4C4208576998D5AE0 (void);
// 0x00000045 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_get_x509_t__ctor_mE5676A42AAAE07337AB42C51E139736482AD3FCC (void);
// 0x00000046 Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_get_x509_t_Invoke_m58A02DBC5C5C9A0C693DFDE3BEBCE8518C5BEDFE (void);
// 0x00000047 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_get_x509_t_BeginInvoke_m5B76F36D52C182CFB7B62AA43C3E159E7E7DB468 (void);
// 0x00000048 Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_get_x509_t_EndInvoke_m6AFA7951802ED216C9EB13AAA7A5C707F7289F41 (void);
// 0x00000049 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_create_t__ctor_m396CBCF6F413041E9FB829BCF12DBB71160E0CC5 (void);
// 0x0000004A Mono.Unity.UnityTls/unitytls_x509list* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_create_t_Invoke_m3A52B8B8AC08AA77CEDD34817D2C15209130A1F1 (void);
// 0x0000004B System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_create_t_BeginInvoke_m85BD25215C3E215460E132F10110223FED5C7CA2 (void);
// 0x0000004C Mono.Unity.UnityTls/unitytls_x509list* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_create_t_EndInvoke_m4D70BD363D9EA21E21E73C6705E62955477CB3B0 (void);
// 0x0000004D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_append_t__ctor_m264F31493E6C24EF19C6560237F1DFB0522195C2 (void);
// 0x0000004E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_append_t_Invoke_m85E010BA75CBBCC9B32C8A6C685E4F2CCFB69300 (void);
// 0x0000004F System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_append_t_BeginInvoke_m3A87AAC9A120A76CEC99B52A91B43739A74D097F (void);
// 0x00000050 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_append_t_EndInvoke_m06BB61716750C77C7D19DF3A10628680899382C9 (void);
// 0x00000051 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_append_der_t__ctor_m814A959A92E1D413C2AB5BE0E8920318D52C8F3F (void);
// 0x00000052 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_append_der_t_Invoke_mA432486D4A73BB7FC4DFE3DD02205FE4C0AB9066 (void);
// 0x00000053 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_append_der_t_BeginInvoke_mFC163657F9DBE3408CE9FBD94C0E0D672099618D (void);
// 0x00000054 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_append_der_t_EndInvoke_m6002A55859F4C9DCF95DEBADC867E85E33DEF36E (void);
// 0x00000055 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_free_t__ctor_m360A7960A558BFF26B537EE2717CE4FF60612EBE (void);
// 0x00000056 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*)
extern void unitytls_x509list_free_t_Invoke_m5F920A1A43E549E297391F2033A04AF8C05A3C4C (void);
// 0x00000057 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_free_t_BeginInvoke_m43DF55CE129363751C545897CF317FAD1D7BFA1A (void);
// 0x00000058 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_free_t_EndInvoke_m2EAAE00B58B3922A632D13E4DFA3DD737D971916 (void);
// 0x00000059 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509verify_default_ca_t__ctor_m87E8CBD1080B32E3E9B2085435089120EE8E7B51 (void);
// 0x0000005A Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509verify_default_ca_t_Invoke_m22C2DE021D3D750655FFEF54BE2B030596F1A82E (void);
// 0x0000005B System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509verify_default_ca_t_BeginInvoke_mDD34421A5A03B034EAD940EA3E667E2ACEFF5829 (void);
// 0x0000005C Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509verify_default_ca_t_EndInvoke_m4D26A5425526F6A205596F7AE025620E74173282 (void);
// 0x0000005D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509verify_explicit_ca_t__ctor_m27337465175BADAB82BFF9333ADA82DCF2DFD2A3 (void);
// 0x0000005E Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509verify_explicit_ca_t_Invoke_m56F009ABDD7ED613CB6AC27AF8CAD6E6FB34555B (void);
// 0x0000005F System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509verify_explicit_ca_t_BeginInvoke_m83F9DF37B6DCF058C496C26892257C5FE3CAB8F1 (void);
// 0x00000060 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509verify_explicit_ca_t_EndInvoke_mC69D3C3E3F677940005907387BF6A51758A67968 (void);
// 0x00000061 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_create_server_t__ctor_m444E3E5CA424BD6649C48AA2724ECABE25A6ACA7 (void);
// 0x00000062 Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_create_server_t_Invoke_m9BAA6CD5D7D6646AFC00AFAF4128DF92428F0F44 (void);
// 0x00000063 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_create_server_t_BeginInvoke_mB600A87E8909E5FBCA2FC92239A783E345BCB5D7 (void);
// 0x00000064 Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_create_server_t_EndInvoke_mE0ED7A6AE53A54CF3479E70917D0BB2F8EC2DE3A (void);
// 0x00000065 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_create_client_t__ctor_mBEAE100CA3144364E49C2468343428FE9E19F9B6 (void);
// 0x00000066 Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_create_client_t_Invoke_m3BABCEA6ED54FD59886B7E8685BD7BDB6145079A (void);
// 0x00000067 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_create_client_t_BeginInvoke_mAF50983B4C1D6DC77B6E7A644872A95E88769D95 (void);
// 0x00000068 Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_create_client_t_EndInvoke_mFFC92B25698A95310EB56B6C8B82661E75D348C4 (void);
// 0x00000069 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_server_require_client_authentication_t__ctor_mA41774A651C25857A72D3694EBDE91E70A408D81 (void);
// 0x0000006A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_server_require_client_authentication_t_Invoke_mC8E06902662956294CEC4AFCF8697671E7BA3639 (void);
// 0x0000006B System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_server_require_client_authentication_t_BeginInvoke_mF93542F5F7DC74FC5042D346C0956E694F4B2479 (void);
// 0x0000006C System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_server_require_client_authentication_t_EndInvoke_m8F406760E0CA52C53B0C91D7A7862119F10E3B7C (void);
// 0x0000006D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_certificate_callback_t__ctor_mDC0A66278594A9B37EFA6FA3010AFD64DC3E81BE (void);
// 0x0000006E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_certificate_callback_t_Invoke_m3F334D5FFB2B3C104C1E65A04B044138CE51DFAD (void);
// 0x0000006F System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_set_certificate_callback_t_BeginInvoke_m69D89510CE1C44BF29C88E2025C42F1ACD29605C (void);
// 0x00000070 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_set_certificate_callback_t_EndInvoke_mC3508D12AB7792789623E2CFAA028D214200C244 (void);
// 0x00000071 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_trace_callback_t__ctor_mAA8F0A3B039F2A5DA4EA77F6DDA2573BB5FDA80B (void);
// 0x00000072 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_trace_callback_t_Invoke_mFC61F57B75911E4A1B08221AB854D91F5F03D476 (void);
// 0x00000073 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_set_trace_callback_t_BeginInvoke_m03FCD2BF1AA2571CC4F2CFF59251EFA20421F156 (void);
// 0x00000074 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_set_trace_callback_t_EndInvoke_m07BE3163185F6B3B1D299589E648F7C571D324FE (void);
// 0x00000075 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_x509verify_callback_t__ctor_m78790E0190264955C6B51F3ACCAAA2C02FC1CB52 (void);
// 0x00000076 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_x509verify_callback_t_Invoke_m81E1B51C444B1074314AD55C22EC20E6AD8FA476 (void);
// 0x00000077 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_set_x509verify_callback_t_BeginInvoke_mA488C207261DAA26D3D5A81F3549B9B058382DD2 (void);
// 0x00000078 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_set_x509verify_callback_t_EndInvoke_m8BDF1F043AA55E4FAA727E67B544440ED316ED18 (void);
// 0x00000079 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_supported_ciphersuites_t__ctor_m46A364914173C343267CFDC8B61D7DF4197C6448 (void);
// 0x0000007A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_ciphersuite*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_supported_ciphersuites_t_Invoke_mE7E379E36B2B4719ECF97F375682CD0DBF407F1B (void);
// 0x0000007B System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_ciphersuite*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_set_supported_ciphersuites_t_BeginInvoke_m03D9AE30DA07EB020A31669DC158422A593329E9 (void);
// 0x0000007C System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_set_supported_ciphersuites_t_EndInvoke_mAB41900E507484AD23583DE18E853B9B6145EF4C (void);
// 0x0000007D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_get_ciphersuite_t__ctor_mE7AEF274ACD666FBA2C02F14DA38014EAD75F8E0 (void);
// 0x0000007E Mono.Unity.UnityTls/unitytls_ciphersuite Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_get_ciphersuite_t_Invoke_mDA134EC5BFA53F4985D9D10A8D4ACB971AE6D0A1 (void);
// 0x0000007F System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_get_ciphersuite_t_BeginInvoke_mA110391B7158B9BDC4F0597317AD70CDF0DF017F (void);
// 0x00000080 Mono.Unity.UnityTls/unitytls_ciphersuite Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_get_ciphersuite_t_EndInvoke_m9A477430340005FD37AFC45C377F3FBB8F60FF7D (void);
// 0x00000081 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_get_protocol_t__ctor_m42F49F551071AB0F91AB7810C8DC47A2A33F1384 (void);
// 0x00000082 Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_get_protocol_t_Invoke_m756BD8E367A9BF2872A3A2183366B5C5098A634C (void);
// 0x00000083 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_get_protocol_t_BeginInvoke_mEEAFA0B27A4655BA9729136FBB2A5383151E3169 (void);
// 0x00000084 Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_get_protocol_t_EndInvoke_mAB8A83B00C32C256F56E255EB9A683AE7924CE94 (void);
// 0x00000085 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_process_handshake_t__ctor_m5FCC62940BECF2001364EA925FF543E1F59EBC61 (void);
// 0x00000086 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_process_handshake_t_Invoke_mB249F948100B2752B2A6BF79C7F9038523C1C89B (void);
// 0x00000087 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_process_handshake_t_BeginInvoke_m8E4E264B100447C3590366B75F7C79E75D99EAA4 (void);
// 0x00000088 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_process_handshake_t_EndInvoke_m3144D076D4C10224C8BFF05671EBDB5F0EFA6FBB (void);
// 0x00000089 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_read_t__ctor_m292F01CA56EC409E7CDA69BE0AA10B19B3E20F4E (void);
// 0x0000008A System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_read_t_Invoke_m142B61FBEE88603BE95202B62762E92008324935 (void);
// 0x0000008B System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_read_t_BeginInvoke_mDE6D1E5ED970FB74D58A7C9D849D5CEF0A80066F (void);
// 0x0000008C System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_read_t_EndInvoke_m3BCF50CAB32A1EFADEB497D3A50694C018E285C5 (void);
// 0x0000008D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_write_t__ctor_m300C5AEFDFE22C96322EABE38FD2CA962350D96B (void);
// 0x0000008E System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_write_t_Invoke_m4365C50B81B1904232514233B8252D15E3059416 (void);
// 0x0000008F System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_write_t_BeginInvoke_m7DEACE7853FE244D613A77ABEC04AC821B31F503 (void);
// 0x00000090 System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_write_t_EndInvoke_mE16B80B19C507E3EDF89DA7971AB267BACDC5E86 (void);
// 0x00000091 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_notify_close_t__ctor_m9FBFA390FFA5F0E59EF1652BD1F8EC4BB579D787 (void);
// 0x00000092 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_notify_close_t_Invoke_m1DF2F894CC7D1DAC1ED86AB643EF4D9482DBDBDD (void);
// 0x00000093 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_notify_close_t_BeginInvoke_m73742B8B1BC173EC206ADC3CA492E3BEED2A67A1 (void);
// 0x00000094 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_notify_close_t_EndInvoke_mD5B659727C0CAD54F05D14BD3C1A554907695F1D (void);
// 0x00000095 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_free_t__ctor_mE457D4E43F47148D44E137E6C767DCD036DB34E9 (void);
// 0x00000096 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*)
extern void unitytls_tlsctx_free_t_Invoke_m54B2D3A510B87650E7AF041CC60A9FF44ECA9437 (void);
// 0x00000097 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_free_t_BeginInvoke_m4709DCB59DEDE7C1500CA164F5E304318ACB9025 (void);
// 0x00000098 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_free_t_EndInvoke_m016FC930E1F5CD52FF74DD4FB462C9613813F39E (void);
// 0x00000099 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_random_generate_bytes_t__ctor_m55CC9979ADA003BEFF41370469BB0A82DFAC67E8 (void);
// 0x0000009A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::Invoke(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_random_generate_bytes_t_Invoke_mA5EFE8A5F4D068BEC771CE12BD5BD26F9A86BB84 (void);
// 0x0000009B System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::BeginInvoke(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_random_generate_bytes_t_BeginInvoke_m27BF16ECBD2C66644B2626E3CFC61600491E7194 (void);
// 0x0000009C System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::EndInvoke(System.IAsyncResult)
extern void unitytls_random_generate_bytes_t_EndInvoke_m74F081B09F91875EF4AC852F58AAD04BCAC1D205 (void);
// 0x0000009D System.Void Mono.Unity.UnityTlsContext::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void UnityTlsContext__ctor_mC0C9DB6F5662F4076B3C4B21445826FFEB1C72D0 (void);
// 0x0000009E System.Void Mono.Unity.UnityTlsContext::ExtractNativeKeyAndChainFromManagedCertificate(System.Security.Cryptography.X509Certificates.X509Certificate,Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_x509list*&,Mono.Unity.UnityTls/unitytls_key*&)
extern void UnityTlsContext_ExtractNativeKeyAndChainFromManagedCertificate_mD5CE5AAE708D8F381231A674D62F255E2114F8DE (void);
// 0x0000009F System.Boolean Mono.Unity.UnityTlsContext::get_IsAuthenticated()
extern void UnityTlsContext_get_IsAuthenticated_m43044D90BF11D30EE6EEB2F4F5FFE470FE7B7231 (void);
// 0x000000A0 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Unity.UnityTlsContext::Read(System.Byte[],System.Int32,System.Int32)
extern void UnityTlsContext_Read_m4B2AC92721AEDAA58680B52E3E6D4EAA5E05FE13 (void);
// 0x000000A1 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Unity.UnityTlsContext::Write(System.Byte[],System.Int32,System.Int32)
extern void UnityTlsContext_Write_mB34B278D4ECAD5F44AF4E9B3BA9CEC68AED19D34 (void);
// 0x000000A2 System.Void Mono.Unity.UnityTlsContext::Shutdown()
extern void UnityTlsContext_Shutdown_m24BD0E633C03B67F07165229426415BE206782B0 (void);
// 0x000000A3 System.Void Mono.Unity.UnityTlsContext::Dispose(System.Boolean)
extern void UnityTlsContext_Dispose_mCD3E2E28B0A68F82020472033B246DA57444FD06 (void);
// 0x000000A4 System.Void Mono.Unity.UnityTlsContext::StartHandshake()
extern void UnityTlsContext_StartHandshake_m94C4C84918F93A3107DF9875206181C560C8550F (void);
// 0x000000A5 System.Boolean Mono.Unity.UnityTlsContext::ProcessHandshake()
extern void UnityTlsContext_ProcessHandshake_m0B483DA2D4468555E8B7F8FB7EF9DF1A926CC69A (void);
// 0x000000A6 System.Void Mono.Unity.UnityTlsContext::FinishHandshake()
extern void UnityTlsContext_FinishHandshake_mB88A2326E0464370EB0938B3204A566816CE1D69 (void);
// 0x000000A7 System.IntPtr Mono.Unity.UnityTlsContext::WriteCallback(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_WriteCallback_mE11815EF2287F4F9D27C94D0E5414DC1E2BCEFD8 (void);
// 0x000000A8 System.IntPtr Mono.Unity.UnityTlsContext::WriteCallback(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_WriteCallback_mB052756E2D187C3FCC59F9C90DC574444D88AAE1 (void);
// 0x000000A9 System.IntPtr Mono.Unity.UnityTlsContext::ReadCallback(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_ReadCallback_m761A4E7B983E40C8D727C2251158F22F762CD419 (void);
// 0x000000AA System.IntPtr Mono.Unity.UnityTlsContext::ReadCallback(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_ReadCallback_mE959A9C94E3AB908FD5AE20C21B4CB6FA46DE6FD (void);
// 0x000000AB Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTlsContext::VerifyCallback(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_VerifyCallback_m8367D8479B3FD1AA41D886446279FEE8246F04B2 (void);
// 0x000000AC Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTlsContext::VerifyCallback(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_VerifyCallback_m7A39B7F3311262CCC65B615F0B1841AEC3EBD6A2 (void);
// 0x000000AD System.Void Mono.Unity.UnityTlsContext::CertificateCallback(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_CertificateCallback_mCF0B5C35CA9C47C2FA5438BA3BA603911642333B (void);
// 0x000000AE System.Void Mono.Unity.UnityTlsContext::CertificateCallback(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_CertificateCallback_m7E54408ABCE341F31E4470746F9BFE2799B86297 (void);
// 0x000000AF Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTlsConversions::GetMinProtocol(System.Security.Authentication.SslProtocols)
extern void UnityTlsConversions_GetMinProtocol_mC0DC0BDE4898BF74374ED61ECC589590FC7476AD (void);
// 0x000000B0 Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTlsConversions::GetMaxProtocol(System.Security.Authentication.SslProtocols)
extern void UnityTlsConversions_GetMaxProtocol_m0F9734251AD599C97376A8926A88BCEEFC830D15 (void);
// 0x000000B1 Mono.Security.Interface.TlsProtocols Mono.Unity.UnityTlsConversions::ConvertProtocolVersion(Mono.Unity.UnityTls/unitytls_protocol)
extern void UnityTlsConversions_ConvertProtocolVersion_m0034F4C37220096119219667B4AFA4B3FFE3C115 (void);
// 0x000000B2 Mono.Security.Interface.AlertDescription Mono.Unity.UnityTlsConversions::VerifyResultToAlertDescription(Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Security.Interface.AlertDescription)
extern void UnityTlsConversions_VerifyResultToAlertDescription_m379EB4CECAABDE50EBE231860E452AF3B793933F (void);
// 0x000000B3 Mono.Security.Interface.MonoSslPolicyErrors Mono.Unity.UnityTlsConversions::VerifyResultToPolicyErrror(Mono.Unity.UnityTls/unitytls_x509verify_result)
extern void UnityTlsConversions_VerifyResultToPolicyErrror_m82132CA7804254909B19D3F789F6903C54A033E2 (void);
// 0x000000B4 System.Security.Cryptography.X509Certificates.X509ChainStatusFlags Mono.Unity.UnityTlsConversions::VerifyResultToChainStatus(Mono.Unity.UnityTls/unitytls_x509verify_result)
extern void UnityTlsConversions_VerifyResultToChainStatus_mE050899FF417020132E3282BFC6D10FEBB33EE28 (void);
// 0x000000B5 System.String Mono.Unity.UnityTlsProvider::get_Name()
extern void UnityTlsProvider_get_Name_mDDA55EE63A0B76B6E0E60A8BB24B2796A619C330 (void);
// 0x000000B6 System.Guid Mono.Unity.UnityTlsProvider::get_ID()
extern void UnityTlsProvider_get_ID_mB7896E12045D7FF2430DC7F9EAF15D706CB7744F (void);
// 0x000000B7 System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsSslStream()
extern void UnityTlsProvider_get_SupportsSslStream_mE4CB1384EF4F9EF0C96410AD2CB8C902F231B3F6 (void);
// 0x000000B8 System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsMonoExtensions()
extern void UnityTlsProvider_get_SupportsMonoExtensions_m8CA16CD7D8BFEB7520C3FC8AE4991D907E2844EF (void);
// 0x000000B9 System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsConnectionInfo()
extern void UnityTlsProvider_get_SupportsConnectionInfo_m9332B1DE0BD3C876B3AE3C6AD0057BC613564CE1 (void);
// 0x000000BA System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsCleanShutdown()
extern void UnityTlsProvider_get_SupportsCleanShutdown_mE9DF84BAD50C6616D0263C17CEE3A8145ADEBC8E (void);
// 0x000000BB System.Security.Authentication.SslProtocols Mono.Unity.UnityTlsProvider::get_SupportedProtocols()
extern void UnityTlsProvider_get_SupportedProtocols_mF4F9DC4EDA1444E22899C9A97A1DCCDC34C81EF2 (void);
// 0x000000BC Mono.Security.Interface.IMonoSslStream Mono.Unity.UnityTlsProvider::CreateSslStream(System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsSettings)
extern void UnityTlsProvider_CreateSslStream_mDC86FCB0F22309601707CF35B246839919298648 (void);
// 0x000000BD Mono.Security.Interface.IMonoSslStream Mono.Unity.UnityTlsProvider::CreateSslStreamInternal(System.Net.Security.SslStream,System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsSettings)
extern void UnityTlsProvider_CreateSslStreamInternal_mF1D7EA59B6FD86A48A26BB32EDC4FFE6E3E6E348 (void);
// 0x000000BE System.Boolean Mono.Unity.UnityTlsProvider::ValidateCertificate(Mono.Security.Interface.ICertificateValidator2,System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean,System.Security.Cryptography.X509Certificates.X509Chain&,Mono.Security.Interface.MonoSslPolicyErrors&,System.Int32&)
extern void UnityTlsProvider_ValidateCertificate_mA8A956114D6DA3186D05C8C19CB7032612199332 (void);
// 0x000000BF System.Void Mono.Unity.UnityTlsProvider::.ctor()
extern void UnityTlsProvider__ctor_m59FD632B779113F9605538F8F598A53D1AC6985B (void);
// 0x000000C0 System.Void Mono.Unity.UnityTlsStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.SslStream,Mono.Security.Interface.MonoTlsSettings,Mono.Security.Interface.MonoTlsProvider)
extern void UnityTlsStream__ctor_m729A992C4510BCCEA67907859E15ADD36EFF6A27 (void);
// 0x000000C1 Mono.Net.Security.MobileTlsContext Mono.Unity.UnityTlsStream::CreateContext(System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void UnityTlsStream_CreateContext_mA65D6D4D86EA24719CC88E657512544B22F97B75 (void);
// 0x000000C2 System.Void Mono.Unity.X509ChainImplUnityTls::.ctor(Mono.Unity.UnityTls/unitytls_x509list_ref)
extern void X509ChainImplUnityTls__ctor_mCB15EEDD1B74D120351A35284065CA25A7416BA2 (void);
// 0x000000C3 System.Boolean Mono.Unity.X509ChainImplUnityTls::get_IsValid()
extern void X509ChainImplUnityTls_get_IsValid_mA6540F1719A911C99CCEDADECDFAE0024D7AAB1D (void);
// 0x000000C4 Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.X509ChainImplUnityTls::get_NativeCertificateChain()
extern void X509ChainImplUnityTls_get_NativeCertificateChain_mCF317E093A598896E07D14E5F3818BD5AE1D59AB (void);
// 0x000000C5 System.Security.Cryptography.X509Certificates.X509ChainElementCollection Mono.Unity.X509ChainImplUnityTls::get_ChainElements()
extern void X509ChainImplUnityTls_get_ChainElements_m0D5D46E3941F2DE26FEFAFE94EFC8D83203185D3 (void);
// 0x000000C6 System.Void Mono.Unity.X509ChainImplUnityTls::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy)
extern void X509ChainImplUnityTls_set_ChainPolicy_m5F859F385256EDE337043A984EB7A85DDC3A3CBF (void);
// 0x000000C7 System.Void Mono.Unity.X509ChainImplUnityTls::AddStatus(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern void X509ChainImplUnityTls_AddStatus_m9B56480F6C492FED2C59E8A5AAAA30B74F061E10 (void);
// 0x000000C8 System.Void Mono.Unity.X509ChainImplUnityTls::Reset()
extern void X509ChainImplUnityTls_Reset_m888604968EB148EA0CB8D6205575BBC5F58F9B63 (void);
// 0x000000C9 System.Void Mono.Unity.X509ChainImplUnityTls::Dispose(System.Boolean)
extern void X509ChainImplUnityTls_Dispose_m35AB9FAEC54B7B74DB7C0BFCDEDCD3D7694CF77F (void);
// 0x000000CA System.IntPtr Mono.Net.CFObject::dlopen(System.String,System.Int32)
extern void CFObject_dlopen_m162A23B60207B39CC4012362A225FD24B659B5B2 (void);
// 0x000000CB System.IntPtr Mono.Net.CFObject::dlsym(System.IntPtr,System.String)
extern void CFObject_dlsym_m7C3E17F8024611F1F70B6FC9591D9810BB939C5B (void);
// 0x000000CC System.Void Mono.Net.CFObject::dlclose(System.IntPtr)
extern void CFObject_dlclose_m1209433F4B63168DBD89A88557DFBBB05C054412 (void);
// 0x000000CD System.IntPtr Mono.Net.CFObject::GetIndirect(System.IntPtr,System.String)
extern void CFObject_GetIndirect_mE2F05D123E2541A835A2AB7E959909270D48334A (void);
// 0x000000CE System.IntPtr Mono.Net.CFObject::GetCFObjectHandle(System.IntPtr,System.String)
extern void CFObject_GetCFObjectHandle_m463384D664D4AC01B44EACF8941B7725F4967090 (void);
// 0x000000CF System.Void Mono.Net.CFObject::.ctor(System.IntPtr,System.Boolean)
extern void CFObject__ctor_m07A15746456C8DD8E6E52905DFE5289178F079FD (void);
// 0x000000D0 System.Void Mono.Net.CFObject::Finalize()
extern void CFObject_Finalize_m643133D3B8DFAD68EF8A086BE25B3652563FA7C3 (void);
// 0x000000D1 System.IntPtr Mono.Net.CFObject::get_Handle()
extern void CFObject_get_Handle_mFE029493BB597D83A2BAC50BC506C8F7819336F7 (void);
// 0x000000D2 System.Void Mono.Net.CFObject::set_Handle(System.IntPtr)
extern void CFObject_set_Handle_m88C2472F18456CC638B63034B489EE76923098C4 (void);
// 0x000000D3 System.IntPtr Mono.Net.CFObject::CFRetain(System.IntPtr)
extern void CFObject_CFRetain_mE2D1F3DB4FC502AFA769F585136588C4E6D8CBCE (void);
// 0x000000D4 System.Void Mono.Net.CFObject::Retain()
extern void CFObject_Retain_m0F3DFD2CDD800D9BBF5543F954FD32FB3D71F989 (void);
// 0x000000D5 System.Void Mono.Net.CFObject::CFRelease(System.IntPtr)
extern void CFObject_CFRelease_mCD1D14E9087E57E21E30A862CCA4D7E8225F81B5 (void);
// 0x000000D6 System.Void Mono.Net.CFObject::Release()
extern void CFObject_Release_m6B6128DF1AED8B5F9D3B483696C1C49D0BFA7C76 (void);
// 0x000000D7 System.Void Mono.Net.CFObject::Dispose(System.Boolean)
extern void CFObject_Dispose_mF350A1FD7D3BA6BE7F0511B5EF9EB9F383940EBC (void);
// 0x000000D8 System.Void Mono.Net.CFObject::Dispose()
extern void CFObject_Dispose_m87063A0C278026A8E9B40F0FFE8E453A270CF73A (void);
// 0x000000D9 System.Void Mono.Net.CFArray::.ctor(System.IntPtr,System.Boolean)
extern void CFArray__ctor_mC4C9002848DD6098638622BFDA52BB77E8A021FB (void);
// 0x000000DA System.Void Mono.Net.CFArray::.cctor()
extern void CFArray__cctor_m0A7B955A75416455CFB9450481E01BC06584889A (void);
// 0x000000DB System.IntPtr Mono.Net.CFArray::CFArrayGetCount(System.IntPtr)
extern void CFArray_CFArrayGetCount_m320B0851C60D940FCD90E29D431D509F46BBE3AC (void);
// 0x000000DC System.Int32 Mono.Net.CFArray::get_Count()
extern void CFArray_get_Count_m200F3F3339CF874AE95DE987CB2AC3CFF6D40DE5 (void);
// 0x000000DD System.IntPtr Mono.Net.CFArray::CFArrayGetValueAtIndex(System.IntPtr,System.IntPtr)
extern void CFArray_CFArrayGetValueAtIndex_m4093C9E5B7267FBE80B4AB732A2B31E3C3A99E47 (void);
// 0x000000DE System.IntPtr Mono.Net.CFArray::get_Item(System.Int32)
extern void CFArray_get_Item_m18A8672B778744594ADDB29DFFB96224A686FE7C (void);
// 0x000000DF System.Boolean Mono.Net.CFNumber::CFNumberGetValue(System.IntPtr,System.IntPtr,System.Int32&)
extern void CFNumber_CFNumberGetValue_m3A4553C868ACAEFF4E34AC24C837EC11CFFFB96C (void);
// 0x000000E0 System.Int32 Mono.Net.CFNumber::AsInt32(System.IntPtr)
extern void CFNumber_AsInt32_m32194803F0B7FEEE62D596B7EDF5BEFE50B3EE8B (void);
// 0x000000E1 System.Void Mono.Net.CFRange::.ctor(System.Int32,System.Int32)
extern void CFRange__ctor_m47A3FC3DC70D9A9685171D0A666C21E9522EDC49 (void);
// 0x000000E2 System.Void Mono.Net.CFString::.ctor(System.IntPtr,System.Boolean)
extern void CFString__ctor_m6FC1151D49252BA6F14027DF6FC09D9ABBEC5140 (void);
// 0x000000E3 System.IntPtr Mono.Net.CFString::CFStringCreateWithCharacters(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFString_CFStringCreateWithCharacters_mA4EBC4A6C6E1CA713BC42197F237A6C7A3CB4FF2 (void);
// 0x000000E4 Mono.Net.CFString Mono.Net.CFString::Create(System.String)
extern void CFString_Create_m83EFBE783BF1D445A58E2A0EEBE5EB87A3AC2A6B (void);
// 0x000000E5 System.IntPtr Mono.Net.CFString::CFStringGetLength(System.IntPtr)
extern void CFString_CFStringGetLength_m32642580B50975703D751793CDBF51DDB32FBA5D (void);
// 0x000000E6 System.IntPtr Mono.Net.CFString::CFStringGetCharactersPtr(System.IntPtr)
extern void CFString_CFStringGetCharactersPtr_m64F0383D7FB2398CDCBEEFB5CAD5420F942B0DB7 (void);
// 0x000000E7 System.IntPtr Mono.Net.CFString::CFStringGetCharacters(System.IntPtr,Mono.Net.CFRange,System.IntPtr)
extern void CFString_CFStringGetCharacters_m3708E189F528838F2C8A1A49AC9D3B5088F22F98 (void);
// 0x000000E8 System.String Mono.Net.CFString::AsString(System.IntPtr)
extern void CFString_AsString_m90292BFFD1C7C51A157C4CCB6924CFB0BE1C164E (void);
// 0x000000E9 System.String Mono.Net.CFString::ToString()
extern void CFString_ToString_mC3C3C20058C738903A5A783ED91E0D8A6694D876 (void);
// 0x000000EA System.Void Mono.Net.CFDictionary::.cctor()
extern void CFDictionary__cctor_m7CDC709B4E40827C320C689A27070CC57713F5A8 (void);
// 0x000000EB System.Void Mono.Net.CFDictionary::.ctor(System.IntPtr,System.Boolean)
extern void CFDictionary__ctor_mE147DDB550455913714118F199EA136AB5FE2F92 (void);
// 0x000000EC System.IntPtr Mono.Net.CFDictionary::CFDictionaryGetValue(System.IntPtr,System.IntPtr)
extern void CFDictionary_CFDictionaryGetValue_m4067D619C714E4322FE968062D943A573BA2B622 (void);
// 0x000000ED System.IntPtr Mono.Net.CFDictionary::GetValue(System.IntPtr)
extern void CFDictionary_GetValue_m947C063E75C13525FD1214A89F23C5B05469891B (void);
// 0x000000EE System.IntPtr Mono.Net.CFDictionary::get_Item(System.IntPtr)
extern void CFDictionary_get_Item_m53003799E29C3F41B9C51927762F1D5921A5517F (void);
// 0x000000EF System.Void Mono.Net.CFUrl::.ctor(System.IntPtr,System.Boolean)
extern void CFUrl__ctor_m623159BA6C864641A77B1F59C8F09D4AE364163E (void);
// 0x000000F0 System.IntPtr Mono.Net.CFUrl::CFURLCreateWithString(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFUrl_CFURLCreateWithString_m40ED9137D94B0864E8F94708307191C6DC306764 (void);
// 0x000000F1 Mono.Net.CFUrl Mono.Net.CFUrl::Create(System.String)
extern void CFUrl_Create_m043A878A97AE4F64C07A530B0217A3B5F2AE0D25 (void);
// 0x000000F2 System.Void Mono.Net.CFRunLoop::CFRunLoopAddSource(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFRunLoop_CFRunLoopAddSource_m17B4F5A7F466FEC272B9413E97681A19775705AB (void);
// 0x000000F3 System.Void Mono.Net.CFRunLoop::CFRunLoopRemoveSource(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFRunLoop_CFRunLoopRemoveSource_mCE402DDB9644FE44C25E59D3B12267E40CB741B0 (void);
// 0x000000F4 System.Int32 Mono.Net.CFRunLoop::CFRunLoopRunInMode(System.IntPtr,System.Double,System.Boolean)
extern void CFRunLoop_CFRunLoopRunInMode_mF4139008B5413F50712C29D687EE69DA0123AE4E (void);
// 0x000000F5 System.IntPtr Mono.Net.CFRunLoop::CFRunLoopGetCurrent()
extern void CFRunLoop_CFRunLoopGetCurrent_mFC552486E887D2BF018DE3C6D7595661F2CD9B3B (void);
// 0x000000F6 System.Void Mono.Net.CFRunLoop::CFRunLoopStop(System.IntPtr)
extern void CFRunLoop_CFRunLoopStop_mF13BF6E5D2DABDA723DC5C447A046053F3D73FED (void);
// 0x000000F7 System.Void Mono.Net.CFRunLoop::.ctor(System.IntPtr,System.Boolean)
extern void CFRunLoop__ctor_m9DCFB09DC63118A1A8F61BF6ECACFE71C4B26974 (void);
// 0x000000F8 Mono.Net.CFRunLoop Mono.Net.CFRunLoop::get_CurrentRunLoop()
extern void CFRunLoop_get_CurrentRunLoop_mB8EAD6DAF214EF1424C249D1A597270698ADED07 (void);
// 0x000000F9 System.Void Mono.Net.CFRunLoop::AddSource(System.IntPtr,Mono.Net.CFString)
extern void CFRunLoop_AddSource_m15D6017176B691ABD72806F93C6D5D39FBC42245 (void);
// 0x000000FA System.Void Mono.Net.CFRunLoop::RemoveSource(System.IntPtr,Mono.Net.CFString)
extern void CFRunLoop_RemoveSource_m9F692D2493BC9B1F1E148C2CDA0C81A68D7D5CFE (void);
// 0x000000FB System.Int32 Mono.Net.CFRunLoop::RunInMode(Mono.Net.CFString,System.Double,System.Boolean)
extern void CFRunLoop_RunInMode_mC4178D0FA7C7CD3F5E89CF17C172811C732FAE8E (void);
// 0x000000FC System.Void Mono.Net.CFRunLoop::Stop()
extern void CFRunLoop_Stop_mA22B6E86795862E3BDE3A80D20C147EA6693076F (void);
// 0x000000FD System.Void Mono.Net.CFProxy::.cctor()
extern void CFProxy__cctor_m5FF7E5E4D6714ED573AB1AF7EEF0A3D420F2DFB3 (void);
// 0x000000FE System.Void Mono.Net.CFProxy::.ctor(Mono.Net.CFDictionary)
extern void CFProxy__ctor_m72AC01D0D722DB785752D822053E30566CC7F9F5 (void);
// 0x000000FF Mono.Net.CFProxyType Mono.Net.CFProxy::CFProxyTypeToEnum(System.IntPtr)
extern void CFProxy_CFProxyTypeToEnum_m620D71A9F8FC751F3FC5D16D2AA8E77DCFD61173 (void);
// 0x00000100 System.IntPtr Mono.Net.CFProxy::get_AutoConfigurationJavaScript()
extern void CFProxy_get_AutoConfigurationJavaScript_mE3D0B231DDF768976265EEFDF0CA5DDB124B8061 (void);
// 0x00000101 System.IntPtr Mono.Net.CFProxy::get_AutoConfigurationUrl()
extern void CFProxy_get_AutoConfigurationUrl_mCF8BA92EEDA1D578966BDC3750FFAD7E003F71C9 (void);
// 0x00000102 System.String Mono.Net.CFProxy::get_HostName()
extern void CFProxy_get_HostName_m2859802624D48ADB7150F996DFBF892D008883FC (void);
// 0x00000103 System.String Mono.Net.CFProxy::get_Password()
extern void CFProxy_get_Password_m496180D624F5A07E9452D3A784E071BE9A751006 (void);
// 0x00000104 System.Int32 Mono.Net.CFProxy::get_Port()
extern void CFProxy_get_Port_m63731A205673D95F61F15328B80A453E84189360 (void);
// 0x00000105 Mono.Net.CFProxyType Mono.Net.CFProxy::get_ProxyType()
extern void CFProxy_get_ProxyType_m9E4D8613B5A395CC0A8BDDD35EB01BFEF0EBB85A (void);
// 0x00000106 System.String Mono.Net.CFProxy::get_Username()
extern void CFProxy_get_Username_mDFD89DCA9925521628A2DF06656BF15AD4BD487E (void);
// 0x00000107 System.Void Mono.Net.CFProxySettings::.cctor()
extern void CFProxySettings__cctor_m9C82546638261EF8FEF331DE93D103AAF492F75F (void);
// 0x00000108 System.Void Mono.Net.CFProxySettings::.ctor(Mono.Net.CFDictionary)
extern void CFProxySettings__ctor_m5D794E284FA54939D08F650AB1F72E773E7E6069 (void);
// 0x00000109 Mono.Net.CFDictionary Mono.Net.CFProxySettings::get_Dictionary()
extern void CFProxySettings_get_Dictionary_m9D0C3AF7134C56AE377B8403594E5EEDE80B873D (void);
// 0x0000010A System.IntPtr Mono.Net.CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScriptSequential(System.IntPtr,System.IntPtr,System.IntPtr&)
extern void CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptSequential_mCCE61204DA25F2EB12E9D2DB81C4FB9F0E4EB66C (void);
// 0x0000010B System.IntPtr Mono.Net.CFNetwork::CFNetworkExecuteProxyAutoConfigurationURL(System.IntPtr,System.IntPtr,Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback,Mono.Net.CFStreamClientContext&)
extern void CFNetwork_CFNetworkExecuteProxyAutoConfigurationURL_m2C19627008A840624F169300B8A8B15E8308531A (void);
// 0x0000010C System.Void Mono.Net.CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScriptThread()
extern void CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptThread_m0FA50C4A883C268F5271D35B19A155185E4CB0F9 (void);
// 0x0000010D System.IntPtr Mono.Net.CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScript(System.IntPtr,System.IntPtr,System.IntPtr&)
extern void CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScript_m4A8476E607D73F7A39EF896805579DF7DA6C215B (void);
// 0x0000010E Mono.Net.CFArray Mono.Net.CFNetwork::CopyProxiesForAutoConfigurationScript(System.IntPtr,Mono.Net.CFUrl)
extern void CFNetwork_CopyProxiesForAutoConfigurationScript_mEFCA55DFB2092787EFC3953F2902F1177CB01C8A (void);
// 0x0000010F Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForAutoConfigurationScript(System.IntPtr,Mono.Net.CFUrl)
extern void CFNetwork_GetProxiesForAutoConfigurationScript_mAFB0CAFB5430D43D579338BDB23ED1D1579B8529 (void);
// 0x00000110 Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForAutoConfigurationScript(System.IntPtr,System.Uri)
extern void CFNetwork_GetProxiesForAutoConfigurationScript_mEF4B6C1622107767DDAD67BBD011D336402BBECB (void);
// 0x00000111 Mono.Net.CFProxy[] Mono.Net.CFNetwork::ExecuteProxyAutoConfigurationURL(System.IntPtr,System.Uri)
extern void CFNetwork_ExecuteProxyAutoConfigurationURL_m7F793CBFD3E989694815086423730623B48249DE (void);
// 0x00000112 System.IntPtr Mono.Net.CFNetwork::CFNetworkCopyProxiesForURL(System.IntPtr,System.IntPtr)
extern void CFNetwork_CFNetworkCopyProxiesForURL_mB3B26B2AE431B7BFB3B409992BC1AC74BB8DF87F (void);
// 0x00000113 Mono.Net.CFArray Mono.Net.CFNetwork::CopyProxiesForURL(Mono.Net.CFUrl,Mono.Net.CFDictionary)
extern void CFNetwork_CopyProxiesForURL_m2DF5F3D492E12D525EECB4080712AA5A780F20FD (void);
// 0x00000114 Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForURL(Mono.Net.CFUrl,Mono.Net.CFProxySettings)
extern void CFNetwork_GetProxiesForURL_m39DED6AAB04D798738164C6227A15E4995776C51 (void);
// 0x00000115 Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForUri(System.Uri,Mono.Net.CFProxySettings)
extern void CFNetwork_GetProxiesForUri_m132B589C370ACCD156AB18C53040B73AD7D9C2DA (void);
// 0x00000116 System.IntPtr Mono.Net.CFNetwork::CFNetworkCopySystemProxySettings()
extern void CFNetwork_CFNetworkCopySystemProxySettings_m247A4B11E4E556A195354C1FD128103F97133DAA (void);
// 0x00000117 Mono.Net.CFProxySettings Mono.Net.CFNetwork::GetSystemProxySettings()
extern void CFNetwork_GetSystemProxySettings_mD47A6DA9BA809B5C2C0210F4C02683F2EF8EC56B (void);
// 0x00000118 System.Net.IWebProxy Mono.Net.CFNetwork::GetDefaultProxy()
extern void CFNetwork_GetDefaultProxy_m8F0C4DDB1F8EE3C6078DF974CBC9E8CB17B80546 (void);
// 0x00000119 System.Void Mono.Net.CFNetwork::.cctor()
extern void CFNetwork__cctor_m03FE099AFAF340BF2F70C4646A473C1FAF085118 (void);
// 0x0000011A System.Void Mono.Net.CFNetwork/GetProxyData::Dispose()
extern void GetProxyData_Dispose_m213CC717483A7B2D24AE3844DC54623E3F491078 (void);
// 0x0000011B System.Void Mono.Net.CFNetwork/GetProxyData::.ctor()
extern void GetProxyData__ctor_m4EF170D9F1F5318953CE2A71DC027ECE787F8DB5 (void);
// 0x0000011C System.Void Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback::.ctor(System.Object,System.IntPtr)
extern void CFProxyAutoConfigurationResultCallback__ctor_mDFCC8D01E93178E2BA5E5CF392FBC96E4DD6CDC7 (void);
// 0x0000011D System.Void Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFProxyAutoConfigurationResultCallback_Invoke_m5DBA4F6E9D115DB335A5833A65B6D8E6C7556B71 (void);
// 0x0000011E System.IAsyncResult Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void CFProxyAutoConfigurationResultCallback_BeginInvoke_mDE3B00B8EA39CE1E5DA0DA857DBCDB0F25FE8FDE (void);
// 0x0000011F System.Void Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback::EndInvoke(System.IAsyncResult)
extern void CFProxyAutoConfigurationResultCallback_EndInvoke_m6DA3B409822D725A5C5E07B9888DDB3BBCFF23F9 (void);
// 0x00000120 System.Void Mono.Net.CFNetwork/CFWebProxy::.ctor()
extern void CFWebProxy__ctor_m4F5F4B6DA0F19F1C071E62625D54C20951EFFCEC (void);
// 0x00000121 System.Uri Mono.Net.CFNetwork/CFWebProxy::GetProxyUri(Mono.Net.CFProxy,System.Net.NetworkCredential&)
extern void CFWebProxy_GetProxyUri_mB61E5F8E1BB2B7CD671ADB04853245E8262BCA5B (void);
// 0x00000122 System.Uri Mono.Net.CFNetwork/CFWebProxy::GetProxyUriFromScript(System.IntPtr,System.Uri,System.Net.NetworkCredential&)
extern void CFWebProxy_GetProxyUriFromScript_m9836B35263DEF55012308E1D52CD1E92B3E493CA (void);
// 0x00000123 System.Uri Mono.Net.CFNetwork/CFWebProxy::ExecuteProxyAutoConfigurationURL(System.IntPtr,System.Uri,System.Net.NetworkCredential&)
extern void CFWebProxy_ExecuteProxyAutoConfigurationURL_m74995C92D9B761C2D0C45EE88F89276A0FE4B591 (void);
// 0x00000124 System.Uri Mono.Net.CFNetwork/CFWebProxy::SelectProxy(Mono.Net.CFProxy[],System.Uri,System.Net.NetworkCredential&)
extern void CFWebProxy_SelectProxy_m89A914F8A607D3CC9558A596BC1B441FBCF994FB (void);
// 0x00000125 System.Uri Mono.Net.CFNetwork/CFWebProxy::GetProxy(System.Uri)
extern void CFWebProxy_GetProxy_m6EC2C1590383170DD9387CF85FB5328C780789C4 (void);
// 0x00000126 System.Boolean Mono.Net.CFNetwork/CFWebProxy::IsBypassed(System.Uri)
extern void CFWebProxy_IsBypassed_m5F05D7C9302426EF280309DC04EFD106181A6B21 (void);
// 0x00000127 System.Void Mono.Net.CFNetwork/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_m0CC4FFF2BBFF2126104AAFAC94D0F6266AA40867 (void);
// 0x00000128 System.Void Mono.Net.CFNetwork/<>c__DisplayClass13_0::<ExecuteProxyAutoConfigurationURL>b__0(System.IntPtr,System.IntPtr,System.IntPtr)
extern void U3CU3Ec__DisplayClass13_0_U3CExecuteProxyAutoConfigurationURLU3Eb__0_m760B8D058BD2000E464142609711A90FAA7D71F7 (void);
// 0x00000129 System.Int32 Mono.Net.Security.BufferOffsetSize::get_EndOffset()
extern void BufferOffsetSize_get_EndOffset_m9EED7B6B6EF1F2518A735AF875F88A5E03F0881F (void);
// 0x0000012A System.Int32 Mono.Net.Security.BufferOffsetSize::get_Remaining()
extern void BufferOffsetSize_get_Remaining_m2DE18A3119D97C30B3EE54B9C6260030413B089D (void);
// 0x0000012B System.Void Mono.Net.Security.BufferOffsetSize::.ctor(System.Byte[],System.Int32,System.Int32)
extern void BufferOffsetSize__ctor_mB7C0B812CB8178BA614001251D5C5905C08029BE (void);
// 0x0000012C System.String Mono.Net.Security.BufferOffsetSize::ToString()
extern void BufferOffsetSize_ToString_mFB8CD5C4E6108A0C5B4717CFE1DF3A8E59138771 (void);
// 0x0000012D System.Void Mono.Net.Security.BufferOffsetSize2::.ctor(System.Int32)
extern void BufferOffsetSize2__ctor_mE4644CFB0D6AC7297E01282C7B898D119E18E8D2 (void);
// 0x0000012E System.Void Mono.Net.Security.BufferOffsetSize2::Reset()
extern void BufferOffsetSize2_Reset_mE4DE740467F990ED792FB4966B367091B27BBAB4 (void);
// 0x0000012F System.Void Mono.Net.Security.BufferOffsetSize2::MakeRoom(System.Int32)
extern void BufferOffsetSize2_MakeRoom_mBFDBCE08404ECEECBDDB499ED991000ED3A1F35B (void);
// 0x00000130 System.Void Mono.Net.Security.BufferOffsetSize2::AppendData(System.Byte[],System.Int32,System.Int32)
extern void BufferOffsetSize2_AppendData_m5AFEF21E75273C3BF7FCD4B4433A49D088587F29 (void);
// 0x00000131 System.Int32 Mono.Net.Security.AsyncProtocolResult::get_UserResult()
extern void AsyncProtocolResult_get_UserResult_m1CD0222DFEFC2B0738DF69529AE2C70E21AE54CC (void);
// 0x00000132 System.Runtime.ExceptionServices.ExceptionDispatchInfo Mono.Net.Security.AsyncProtocolResult::get_Error()
extern void AsyncProtocolResult_get_Error_mB3036D4EFA6404019E91C7500B2F52EBBCBB9315 (void);
// 0x00000133 System.Void Mono.Net.Security.AsyncProtocolResult::.ctor(System.Int32)
extern void AsyncProtocolResult__ctor_mC6F604D2F6820EC29A697EDB00315B5B8D6BF2F5 (void);
// 0x00000134 System.Void Mono.Net.Security.AsyncProtocolResult::.ctor(System.Runtime.ExceptionServices.ExceptionDispatchInfo)
extern void AsyncProtocolResult__ctor_mB7F0640C90963ABD9CC43C118AAB34DD13D5BBA0 (void);
// 0x00000135 Mono.Net.Security.MobileAuthenticatedStream Mono.Net.Security.AsyncProtocolRequest::get_Parent()
extern void AsyncProtocolRequest_get_Parent_mA503BE9C5CE0D06A001902DD63B892B8B86275CC (void);
// 0x00000136 System.Boolean Mono.Net.Security.AsyncProtocolRequest::get_RunSynchronously()
extern void AsyncProtocolRequest_get_RunSynchronously_m7733AC14F1950CD534E7CC150E42561B1C839638 (void);
// 0x00000137 System.String Mono.Net.Security.AsyncProtocolRequest::get_Name()
extern void AsyncProtocolRequest_get_Name_m07178E170DEB686F0F161446E8629B520E1DC168 (void);
// 0x00000138 System.Int32 Mono.Net.Security.AsyncProtocolRequest::get_UserResult()
extern void AsyncProtocolRequest_get_UserResult_mC442C9E965AE3D70B0DFECF862583217C20031FF (void);
// 0x00000139 System.Void Mono.Net.Security.AsyncProtocolRequest::set_UserResult(System.Int32)
extern void AsyncProtocolRequest_set_UserResult_mD03A2987E4DF573A2BB3425B9474BA6B341F5F01 (void);
// 0x0000013A System.Void Mono.Net.Security.AsyncProtocolRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean)
extern void AsyncProtocolRequest__ctor_m5ABB63E835263B21871583924C03A4568EBB67CF (void);
// 0x0000013B System.Void Mono.Net.Security.AsyncProtocolRequest::RequestRead(System.Int32)
extern void AsyncProtocolRequest_RequestRead_mD0C4C34F3D1602E8F138D93D6CF39A1CF89CB25A (void);
// 0x0000013C System.Void Mono.Net.Security.AsyncProtocolRequest::RequestWrite()
extern void AsyncProtocolRequest_RequestWrite_m75F0A9A2A611CC2BB267ADE4FF36E98148F413E7 (void);
// 0x0000013D System.Threading.Tasks.Task`1<Mono.Net.Security.AsyncProtocolResult> Mono.Net.Security.AsyncProtocolRequest::StartOperation(System.Threading.CancellationToken)
extern void AsyncProtocolRequest_StartOperation_m76C636186DB12B80876BF0E860C509E92D8289CC (void);
// 0x0000013E System.Threading.Tasks.Task Mono.Net.Security.AsyncProtocolRequest::ProcessOperation(System.Threading.CancellationToken)
extern void AsyncProtocolRequest_ProcessOperation_m5B89FD2B927FFAB28DCA26EFB4A4AA3922289E6B (void);
// 0x0000013F System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>> Mono.Net.Security.AsyncProtocolRequest::InnerRead(System.Threading.CancellationToken)
extern void AsyncProtocolRequest_InnerRead_m965447D1F8015D839DB325E48C1968E88612143B (void);
// 0x00000140 Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncProtocolRequest::Run(Mono.Net.Security.AsyncOperationStatus)
// 0x00000141 System.String Mono.Net.Security.AsyncProtocolRequest::ToString()
extern void AsyncProtocolRequest_ToString_m69F3FEBD3DE453E4CEC99DB49D1AD99B7AAC4260 (void);
// 0x00000142 System.Void Mono.Net.Security.AsyncProtocolRequest/<StartOperation>d__23::MoveNext()
extern void U3CStartOperationU3Ed__23_MoveNext_m63ACDC7CCB0E43A57BCC0D7BF6D14AADEA88150E (void);
// 0x00000143 System.Void Mono.Net.Security.AsyncProtocolRequest/<StartOperation>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CStartOperationU3Ed__23_SetStateMachine_m8A586353421C2670E8208AE140ED5DBEDD4122B8 (void);
// 0x00000144 System.Void Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24::MoveNext()
extern void U3CProcessOperationU3Ed__24_MoveNext_mB0D2D020C1DE94FFD5D78109BC37802780D26A0D (void);
// 0x00000145 System.Void Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CProcessOperationU3Ed__24_SetStateMachine_m19FCCEBF66308F920EF00C2C17E74BC4DE02094D (void);
// 0x00000146 System.Void Mono.Net.Security.AsyncProtocolRequest/<InnerRead>d__25::MoveNext()
extern void U3CInnerReadU3Ed__25_MoveNext_mE28E22197DC1A6A515E61B7EB9F17F9B41835B6F (void);
// 0x00000147 System.Void Mono.Net.Security.AsyncProtocolRequest/<InnerRead>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInnerReadU3Ed__25_SetStateMachine_mFF80981E4C6AB1765979F5A653446A0A081E9BAD (void);
// 0x00000148 System.Void Mono.Net.Security.AsyncHandshakeRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean)
extern void AsyncHandshakeRequest__ctor_m884A72725004810175F9D352326910C4EF6C73F6 (void);
// 0x00000149 Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncHandshakeRequest::Run(Mono.Net.Security.AsyncOperationStatus)
extern void AsyncHandshakeRequest_Run_m8FD00688379160E2E4FAB61C83A5023DC623F7A1 (void);
// 0x0000014A Mono.Net.Security.BufferOffsetSize Mono.Net.Security.AsyncReadOrWriteRequest::get_UserBuffer()
extern void AsyncReadOrWriteRequest_get_UserBuffer_m89C0D2E505281A6E13D354DD4310E0E7F940F5EF (void);
// 0x0000014B System.Int32 Mono.Net.Security.AsyncReadOrWriteRequest::get_CurrentSize()
extern void AsyncReadOrWriteRequest_get_CurrentSize_m35EC8070F5BFAA6BFE94C5D33F3A484F4AA59416 (void);
// 0x0000014C System.Void Mono.Net.Security.AsyncReadOrWriteRequest::set_CurrentSize(System.Int32)
extern void AsyncReadOrWriteRequest_set_CurrentSize_m03CB5D968A7AA61350B2C1F8F17319AD6C0E9B89 (void);
// 0x0000014D System.Void Mono.Net.Security.AsyncReadOrWriteRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.Byte[],System.Int32,System.Int32)
extern void AsyncReadOrWriteRequest__ctor_mB8BE7F0A1951FA42FE17EE113C7BA54D71EFEAFB (void);
// 0x0000014E System.String Mono.Net.Security.AsyncReadOrWriteRequest::ToString()
extern void AsyncReadOrWriteRequest_ToString_mD23C1D8B20669DBBA820AD426B0CB745E96D694B (void);
// 0x0000014F System.Void Mono.Net.Security.AsyncReadRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.Byte[],System.Int32,System.Int32)
extern void AsyncReadRequest__ctor_m97269914BB6F589C30C0B3580114757CD9BB6D0A (void);
// 0x00000150 Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncReadRequest::Run(Mono.Net.Security.AsyncOperationStatus)
extern void AsyncReadRequest_Run_m4C8492D18242E1B7B2D27E61E3E7747F81118632 (void);
// 0x00000151 System.Void Mono.Net.Security.AsyncWriteRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.Byte[],System.Int32,System.Int32)
extern void AsyncWriteRequest__ctor_m23D8ED46901F944741CD1EA551CF171421D16416 (void);
// 0x00000152 Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncWriteRequest::Run(Mono.Net.Security.AsyncOperationStatus)
extern void AsyncWriteRequest_Run_mACE37924F3AD1DC8D721789F1A59EF5894B8D3F5 (void);
// 0x00000153 System.Void Mono.Net.Security.ServerCertValidationCallbackWrapper::.ctor(System.Object,System.IntPtr)
extern void ServerCertValidationCallbackWrapper__ctor_mF25EEA31EB05C9C7C7745F9E4B4DB500A5EB7B34 (void);
// 0x00000154 System.Boolean Mono.Net.Security.ServerCertValidationCallbackWrapper::Invoke(System.Net.ServerCertValidationCallback,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,Mono.Security.Interface.MonoSslPolicyErrors)
extern void ServerCertValidationCallbackWrapper_Invoke_mBDF485AED0434BAE86AF712D014292266AA71C0C (void);
// 0x00000155 System.IAsyncResult Mono.Net.Security.ServerCertValidationCallbackWrapper::BeginInvoke(System.Net.ServerCertValidationCallback,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,Mono.Security.Interface.MonoSslPolicyErrors,System.AsyncCallback,System.Object)
extern void ServerCertValidationCallbackWrapper_BeginInvoke_m1C615BE2C9AB52861BF069787D0ECD4C7879913B (void);
// 0x00000156 System.Boolean Mono.Net.Security.ServerCertValidationCallbackWrapper::EndInvoke(System.IAsyncResult)
extern void ServerCertValidationCallbackWrapper_EndInvoke_mB61CE88402A67EA8F3ACDB5EF71355C868BB0813 (void);
// 0x00000157 Mono.Security.Interface.ICertificateValidator Mono.Net.Security.ChainValidationHelper::GetInternalValidator(Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings)
extern void ChainValidationHelper_GetInternalValidator_m43508ED2935C3133D8E3DF74A446BB67980B7958 (void);
// 0x00000158 System.Void Mono.Net.Security.ChainValidationHelper::.ctor(Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings,System.Boolean,Mono.Net.Security.MonoTlsStream,Mono.Net.Security.ServerCertValidationCallbackWrapper)
extern void ChainValidationHelper__ctor_m28263F9E95F112572E406F1ECC7FBBE7300A6CB8 (void);
// 0x00000159 System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.ChainValidationHelper::DefaultSelectionCallback(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void ChainValidationHelper_DefaultSelectionCallback_m49276FF688CE25C4F5F94232C5CC4D3CE34132D3 (void);
// 0x0000015A Mono.Security.Interface.MonoTlsSettings Mono.Net.Security.ChainValidationHelper::get_Settings()
extern void ChainValidationHelper_get_Settings_m3531570824A98D25FD20B667975B42D72B07CE18 (void);
// 0x0000015B System.Boolean Mono.Net.Security.ChainValidationHelper::SelectClientCertificate(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.Security.Cryptography.X509Certificates.X509Certificate&)
extern void ChainValidationHelper_SelectClientCertificate_mF386AA0C4CF842650473CCD90B1BA0D34695130E (void);
// 0x0000015C Mono.Security.Interface.ValidationResult Mono.Net.Security.ChainValidationHelper::ValidateCertificate(System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain)
extern void ChainValidationHelper_ValidateCertificate_mAB6BCD3C37B1ED5CA44B0DA7E3C7FE961D1F7A0C (void);
// 0x0000015D Mono.Security.Interface.ValidationResult Mono.Net.Security.ChainValidationHelper::ValidateChain(System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.Security.SslPolicyErrors)
extern void ChainValidationHelper_ValidateChain_mF930C960C8EA0CFEE7AE893486A11AB96CC5A958 (void);
// 0x0000015E Mono.Security.Interface.ValidationResult Mono.Net.Security.ChainValidationHelper::ValidateChain(System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain&,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.Security.SslPolicyErrors)
extern void ChainValidationHelper_ValidateChain_mFB4BC1CD513099E2156178A0F94663FAD1849EB2 (void);
// 0x0000015F System.Void Mono.Net.Security.MobileAuthenticatedStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.SslStream,Mono.Security.Interface.MonoTlsSettings,Mono.Security.Interface.MonoTlsProvider)
extern void MobileAuthenticatedStream__ctor_m0D8FB103726E0824BEFD3033D067F7F4EA13EF3B (void);
// 0x00000160 Mono.Security.Interface.MonoTlsSettings Mono.Net.Security.MobileAuthenticatedStream::get_Settings()
extern void MobileAuthenticatedStream_get_Settings_m12C7E669BE45126A55BADAB2B707BC0F722EB610 (void);
// 0x00000161 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MobileAuthenticatedStream::get_Provider()
extern void MobileAuthenticatedStream_get_Provider_mBAD82128219CDFBF15FB864B10C7B0028B3B5293 (void);
// 0x00000162 System.Void Mono.Net.Security.MobileAuthenticatedStream::CheckThrow(System.Boolean,System.Boolean)
extern void MobileAuthenticatedStream_CheckThrow_mC8397F4398D9B5675EC3DE5612E31C2CECE89080 (void);
// 0x00000163 System.Exception Mono.Net.Security.MobileAuthenticatedStream::GetSSPIException(System.Exception)
extern void MobileAuthenticatedStream_GetSSPIException_mB537031FBA16D66DA25143AFC929151C153DC51F (void);
// 0x00000164 System.Exception Mono.Net.Security.MobileAuthenticatedStream::GetIOException(System.Exception,System.String)
extern void MobileAuthenticatedStream_GetIOException_mD87AC8EB8C53986E371A40EF467AFC5DE233CA1D (void);
// 0x00000165 System.Runtime.ExceptionServices.ExceptionDispatchInfo Mono.Net.Security.MobileAuthenticatedStream::SetException(System.Exception)
extern void MobileAuthenticatedStream_SetException_m5B0A18C66D1431C6EF3A43BFA7964BD376F57896 (void);
// 0x00000166 System.Void Mono.Net.Security.MobileAuthenticatedStream::AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Security.Authentication.SslProtocols,System.Boolean)
extern void MobileAuthenticatedStream_AuthenticateAsServer_m56439CBBC738DB2BF3524068526D116B3F1647F5 (void);
// 0x00000167 System.Threading.Tasks.Task Mono.Net.Security.MobileAuthenticatedStream::ProcessAuthentication(System.Boolean,System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void MobileAuthenticatedStream_ProcessAuthentication_m178A7A98E02403F5CD941B3C49B580686643E373 (void);
// 0x00000168 Mono.Net.Security.MobileTlsContext Mono.Net.Security.MobileAuthenticatedStream::CreateContext(System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
// 0x00000169 System.IAsyncResult Mono.Net.Security.MobileAuthenticatedStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void MobileAuthenticatedStream_BeginRead_m2299EDE0D418F86FF6D7CA812B2DF4F3B07D82DA (void);
// 0x0000016A System.Int32 Mono.Net.Security.MobileAuthenticatedStream::EndRead(System.IAsyncResult)
extern void MobileAuthenticatedStream_EndRead_mF64C5AE2022C2E6E32FBD7DE9CAF6204488F42A8 (void);
// 0x0000016B System.IAsyncResult Mono.Net.Security.MobileAuthenticatedStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void MobileAuthenticatedStream_BeginWrite_m444A84556523CD3607B0C3811B07BF7AD4B6E466 (void);
// 0x0000016C System.Void Mono.Net.Security.MobileAuthenticatedStream::EndWrite(System.IAsyncResult)
extern void MobileAuthenticatedStream_EndWrite_mF32510E6ACF5029C4FFA0084687DBA67780935AD (void);
// 0x0000016D System.Int32 Mono.Net.Security.MobileAuthenticatedStream::Read(System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_Read_m91B1888817700E4B4D059CDE6FCD78A3DCAE6C19 (void);
// 0x0000016E System.Void Mono.Net.Security.MobileAuthenticatedStream::Write(System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_Write_m6E0F97F71B3E8EE7F188C2E75AFBFFE3C33C69FB (void);
// 0x0000016F System.Threading.Tasks.Task`1<System.Int32> Mono.Net.Security.MobileAuthenticatedStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_ReadAsync_m518A7BCD987093B19EB9CAAE57631CB0BAFE0C8F (void);
// 0x00000170 System.Threading.Tasks.Task Mono.Net.Security.MobileAuthenticatedStream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_WriteAsync_m4F9F9B8C926E8B5AACBA1B7DF15638A4055E7AA8 (void);
// 0x00000171 System.Threading.Tasks.Task`1<System.Int32> Mono.Net.Security.MobileAuthenticatedStream::StartOperation(Mono.Net.Security.MobileAuthenticatedStream/OperationType,Mono.Net.Security.AsyncProtocolRequest,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_StartOperation_mA2F6EF91539E13CC9FED2888148C9708ED563883 (void);
// 0x00000172 System.Int32 Mono.Net.Security.MobileAuthenticatedStream::InternalRead(System.Byte[],System.Int32,System.Int32,System.Boolean&)
extern void MobileAuthenticatedStream_InternalRead_mC430180F8FD5AA589FD7AE5044A89F9B6F1427D8 (void);
// 0x00000173 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileAuthenticatedStream::InternalRead(Mono.Net.Security.AsyncProtocolRequest,Mono.Net.Security.BufferOffsetSize,System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_InternalRead_m86C071DC37153DC3E055BCCD6E932CEB5AA65ED3 (void);
// 0x00000174 System.Boolean Mono.Net.Security.MobileAuthenticatedStream::InternalWrite(System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_InternalWrite_m272A619B00CBE6704AAD300536D176AF4BF4F76F (void);
// 0x00000175 System.Boolean Mono.Net.Security.MobileAuthenticatedStream::InternalWrite(Mono.Net.Security.AsyncProtocolRequest,Mono.Net.Security.BufferOffsetSize2,System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_InternalWrite_mAC3D67F3F2A6BE41320B01433AC26BFAD2063A74 (void);
// 0x00000176 System.Threading.Tasks.Task`1<System.Int32> Mono.Net.Security.MobileAuthenticatedStream::InnerRead(System.Boolean,System.Int32,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_InnerRead_m791585462E4A887702A9BF3650FCBE0BAC98FABF (void);
// 0x00000177 System.Threading.Tasks.Task Mono.Net.Security.MobileAuthenticatedStream::InnerWrite(System.Boolean,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_InnerWrite_m9B4A4FCF793834DCBF434ADFFBC43B4D215EB52F (void);
// 0x00000178 Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.MobileAuthenticatedStream::ProcessHandshake(Mono.Net.Security.AsyncOperationStatus)
extern void MobileAuthenticatedStream_ProcessHandshake_m49D890591613A8EBE1B80CBDB5056FAF501D1BF5 (void);
// 0x00000179 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileAuthenticatedStream::ProcessRead(Mono.Net.Security.BufferOffsetSize)
extern void MobileAuthenticatedStream_ProcessRead_m2DA627144AF178A8F0F54F58E6630C2F68202D12 (void);
// 0x0000017A System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileAuthenticatedStream::ProcessWrite(Mono.Net.Security.BufferOffsetSize)
extern void MobileAuthenticatedStream_ProcessWrite_m26B164259C3550E33F5CDF2C4CB491CFF3F4C9B9 (void);
// 0x0000017B System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_IsAuthenticated()
extern void MobileAuthenticatedStream_get_IsAuthenticated_mC3633B71C753DA01E8DBD81BF5298500662ECDDA (void);
// 0x0000017C System.Void Mono.Net.Security.MobileAuthenticatedStream::Dispose(System.Boolean)
extern void MobileAuthenticatedStream_Dispose_m26864896490F078C981103A7927BDF91A39B33B7 (void);
// 0x0000017D System.Void Mono.Net.Security.MobileAuthenticatedStream::Flush()
extern void MobileAuthenticatedStream_Flush_m199FE316A80E60239A917644253970986B9E7583 (void);
// 0x0000017E System.Int64 Mono.Net.Security.MobileAuthenticatedStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void MobileAuthenticatedStream_Seek_mE638919C187C89E8EEB4415565A1608C01100265 (void);
// 0x0000017F System.Void Mono.Net.Security.MobileAuthenticatedStream::SetLength(System.Int64)
extern void MobileAuthenticatedStream_SetLength_m50ED54093260F90E226AC7964C6A380F6C5C0955 (void);
// 0x00000180 System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_CanRead()
extern void MobileAuthenticatedStream_get_CanRead_mD5EE416A9C812C7A5BA93A3F3AC3F4CD3CD7D5E7 (void);
// 0x00000181 System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_CanWrite()
extern void MobileAuthenticatedStream_get_CanWrite_m6892AB7DA9B4EC279CFC64BABA5BC2F81E26E37F (void);
// 0x00000182 System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_CanSeek()
extern void MobileAuthenticatedStream_get_CanSeek_mF4B1F3F83D9B6EE8AF5984CA6911D42AE9181805 (void);
// 0x00000183 System.Int64 Mono.Net.Security.MobileAuthenticatedStream::get_Length()
extern void MobileAuthenticatedStream_get_Length_m26B4552100F40FE8CEF547787BDBACC469528599 (void);
// 0x00000184 System.Int64 Mono.Net.Security.MobileAuthenticatedStream::get_Position()
extern void MobileAuthenticatedStream_get_Position_mBADC7270050681E68FFDABCBB5EEC6D6C0B4171D (void);
// 0x00000185 System.Void Mono.Net.Security.MobileAuthenticatedStream::set_Position(System.Int64)
extern void MobileAuthenticatedStream_set_Position_m34CF317339FC45361ED4CFB074E5F1ADA4EE1FA5 (void);
// 0x00000186 System.Void Mono.Net.Security.MobileAuthenticatedStream::.cctor()
extern void MobileAuthenticatedStream__cctor_m4734B1B618B5FE689C1FDC350A69E134CA9BD634 (void);
// 0x00000187 System.Void Mono.Net.Security.MobileAuthenticatedStream::<InnerWrite>b__67_0()
extern void MobileAuthenticatedStream_U3CInnerWriteU3Eb__67_0_m63D62194859ED8623C24783D737CA11D06501E97 (void);
// 0x00000188 System.Void Mono.Net.Security.MobileAuthenticatedStream/<ProcessAuthentication>d__47::MoveNext()
extern void U3CProcessAuthenticationU3Ed__47_MoveNext_mF3762B503551276E4B49F05F7413012DF8D1CC84 (void);
// 0x00000189 System.Void Mono.Net.Security.MobileAuthenticatedStream/<ProcessAuthentication>d__47::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CProcessAuthenticationU3Ed__47_SetStateMachine_mDCBB12DB45E075AC256E54A1DFC35AD4C81912EC (void);
// 0x0000018A System.Void Mono.Net.Security.MobileAuthenticatedStream/<StartOperation>d__58::MoveNext()
extern void U3CStartOperationU3Ed__58_MoveNext_mA92EABD1F8F3CE91103E228A56D16BE2E7C3FA35 (void);
// 0x0000018B System.Void Mono.Net.Security.MobileAuthenticatedStream/<StartOperation>d__58::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CStartOperationU3Ed__58_SetStateMachine_m6896AA6F76C2DD0A407ADDFB40A574290873FFC8 (void);
// 0x0000018C System.Void Mono.Net.Security.MobileAuthenticatedStream/<>c__DisplayClass66_0::.ctor()
extern void U3CU3Ec__DisplayClass66_0__ctor_mCD2E2BE10E3708147749F093D9757B9B60DB4A85 (void);
// 0x0000018D System.Int32 Mono.Net.Security.MobileAuthenticatedStream/<>c__DisplayClass66_0::<InnerRead>b__0()
extern void U3CU3Ec__DisplayClass66_0_U3CInnerReadU3Eb__0_mF0041D575CFBB13F3CD792CDAB78B6E018B192BA (void);
// 0x0000018E System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerRead>d__66::MoveNext()
extern void U3CInnerReadU3Ed__66_MoveNext_m36DB7FB663A6047DA5B34FE62490F230C48DD070 (void);
// 0x0000018F System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerRead>d__66::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInnerReadU3Ed__66_SetStateMachine_m56B57971A776743CEADDCF710EA5777B89642D4D (void);
// 0x00000190 System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerWrite>d__67::MoveNext()
extern void U3CInnerWriteU3Ed__67_MoveNext_m39FA739B0AE2BDF2EF4122C92A31BE2D016CEEF0 (void);
// 0x00000191 System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerWrite>d__67::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInnerWriteU3Ed__67_SetStateMachine_m614328656FD99E8FC4FCEE4337F2043634F18D6B (void);
// 0x00000192 System.Void Mono.Net.Security.MobileTlsContext::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void MobileTlsContext__ctor_m656F47DCC938252723AFFDAE365DA1CA56A5C95B (void);
// 0x00000193 Mono.Net.Security.MobileAuthenticatedStream Mono.Net.Security.MobileTlsContext::get_Parent()
extern void MobileTlsContext_get_Parent_mA247FA590751030497F9B039ED3543748981EDC3 (void);
// 0x00000194 Mono.Security.Interface.MonoTlsSettings Mono.Net.Security.MobileTlsContext::get_Settings()
extern void MobileTlsContext_get_Settings_m960574D1AA3C5F8FA078E05662093E419195FF6E (void);
// 0x00000195 System.Boolean Mono.Net.Security.MobileTlsContext::get_IsAuthenticated()
// 0x00000196 System.Boolean Mono.Net.Security.MobileTlsContext::get_IsServer()
extern void MobileTlsContext_get_IsServer_m6BA80FEC5C2FF9BEA15AB24562DAB28E2082361B (void);
// 0x00000197 System.String Mono.Net.Security.MobileTlsContext::get_TargetHost()
extern void MobileTlsContext_get_TargetHost_m6054EE6F51F62C51B2479225DF80673B5FA47C42 (void);
// 0x00000198 System.String Mono.Net.Security.MobileTlsContext::get_ServerName()
extern void MobileTlsContext_get_ServerName_mDB9D97589ED6FF43DC54F753C4338691DA302B07 (void);
// 0x00000199 System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Net.Security.MobileTlsContext::get_ClientCertificates()
extern void MobileTlsContext_get_ClientCertificates_mC93FBAF7928EC1E3E1E4A47E99E6863FA8FAFBC6 (void);
// 0x0000019A System.Void Mono.Net.Security.MobileTlsContext::StartHandshake()
// 0x0000019B System.Boolean Mono.Net.Security.MobileTlsContext::ProcessHandshake()
// 0x0000019C System.Void Mono.Net.Security.MobileTlsContext::FinishHandshake()
// 0x0000019D System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileTlsContext::Read(System.Byte[],System.Int32,System.Int32)
// 0x0000019E System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileTlsContext::Write(System.Byte[],System.Int32,System.Int32)
// 0x0000019F System.Void Mono.Net.Security.MobileTlsContext::Shutdown()
// 0x000001A0 System.Boolean Mono.Net.Security.MobileTlsContext::ValidateCertificate(System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain)
extern void MobileTlsContext_ValidateCertificate_m54BB8BC9C5C0703F52BD92F73F32C9E29D7754BC (void);
// 0x000001A1 System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.MobileTlsContext::SelectClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void MobileTlsContext_SelectClientCertificate_m0BD84B3C86150115C8141884B98D78C95FA7ABBC (void);
// 0x000001A2 System.Void Mono.Net.Security.MobileTlsContext::Dispose()
extern void MobileTlsContext_Dispose_mDD54934F58E124A19D89712EA3524008E5CAC050 (void);
// 0x000001A3 System.Void Mono.Net.Security.MobileTlsContext::Dispose(System.Boolean)
extern void MobileTlsContext_Dispose_m8689020FD9EAEF86AA65046E9A8DF23239B9BADD (void);
// 0x000001A4 System.Void Mono.Net.Security.MobileTlsContext::Finalize()
extern void MobileTlsContext_Finalize_m530A5F255410FD4FE9D22182B9F26376C1FB5D55 (void);
// 0x000001A5 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::GetProviderInternal()
extern void MonoTlsProviderFactory_GetProviderInternal_m7B5217364D955B85B95F50EF271947F721EDFC38 (void);
// 0x000001A6 System.Void Mono.Net.Security.MonoTlsProviderFactory::InitializeInternal()
extern void MonoTlsProviderFactory_InitializeInternal_mE7081EBE541082D32462434FE7BD3B569D96B0EC (void);
// 0x000001A7 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::LookupProvider(System.String,System.Boolean)
extern void MonoTlsProviderFactory_LookupProvider_m550564BE02F6B880427139A7377290C9B99D9F63 (void);
// 0x000001A8 System.Void Mono.Net.Security.MonoTlsProviderFactory::InitializeProviderRegistration()
extern void MonoTlsProviderFactory_InitializeProviderRegistration_mF5C1469EC329E46E775B6C594EC83F84FC81F678 (void);
// 0x000001A9 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::CreateDefaultProviderImpl()
extern void MonoTlsProviderFactory_CreateDefaultProviderImpl_m57FEE39A54F9A68C419666C89CE4C08943971233 (void);
// 0x000001AA Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::GetProvider()
extern void MonoTlsProviderFactory_GetProvider_m464F894E37D5322B5F94EEAAECE25A62C9B7F12C (void);
// 0x000001AB System.Void Mono.Net.Security.MonoTlsProviderFactory::.cctor()
extern void MonoTlsProviderFactory__cctor_m4FFEEFA11353AAE8390E17B93046A60A85BFFDA0 (void);
// 0x000001AC System.Net.HttpWebRequest Mono.Net.Security.MonoTlsStream::get_Request()
extern void MonoTlsStream_get_Request_m5CE0E7D32A482AFFEA41907117E3519B23C92F83 (void);
// 0x000001AD System.Void Mono.Net.Security.MonoTlsStream::set_CertificateValidationFailed(System.Boolean)
extern void MonoTlsStream_set_CertificateValidationFailed_m0CB02DA5133C5B1D5E8CB9794A3BAEC3BDC5E0B9 (void);
// 0x000001AE System.Object Mono.Net.Security.NoReflectionHelper::GetInternalValidator(System.Object,System.Object)
extern void NoReflectionHelper_GetInternalValidator_m95884D0E1A26EE08C6B59E077FFE9AF50FC58B53 (void);
// 0x000001AF System.Object Mono.Net.Security.NoReflectionHelper::GetProvider()
extern void NoReflectionHelper_GetProvider_m8DE595987714C563BD61F4484406046CDE5246F7 (void);
// 0x000001B0 System.Void Mono.Net.Security.SystemCertificateValidator::.cctor()
extern void SystemCertificateValidator__cctor_m6CE9978D732EB324290EFD3B9548BD4B83D72285 (void);
// 0x000001B1 System.Security.Cryptography.X509Certificates.X509Chain Mono.Net.Security.SystemCertificateValidator::CreateX509Chain(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void SystemCertificateValidator_CreateX509Chain_mC69602AAD344A88C338A3DF8CAE71000D30B6264 (void);
// 0x000001B2 System.Boolean Mono.Net.Security.SystemCertificateValidator::NeedsChain(Mono.Security.Interface.MonoTlsSettings)
extern void SystemCertificateValidator_NeedsChain_m7638F13AC43F875790A5782D11D9D2DC073A267E (void);
// 0x000001B3 Mono.Security.Interface.MonoRemoteCertificateValidationCallback Mono.Net.Security.Private.CallbackHelpers::PublicToMono(System.Net.Security.RemoteCertificateValidationCallback)
extern void CallbackHelpers_PublicToMono_m128A38962B101EDD3C8248AAA4F07B4C015B2568 (void);
// 0x000001B4 System.Net.Security.RemoteCertificateValidationCallback Mono.Net.Security.Private.CallbackHelpers::MonoToPublic(Mono.Security.Interface.MonoRemoteCertificateValidationCallback)
extern void CallbackHelpers_MonoToPublic_mA9725CCDC76B7ED5BD3988E9E3EBC49DBC69EB02 (void);
// 0x000001B5 System.Net.Security.LocalCertSelectionCallback Mono.Net.Security.Private.CallbackHelpers::MonoToInternal(Mono.Security.Interface.MonoLocalCertificateSelectionCallback)
extern void CallbackHelpers_MonoToInternal_m0925AA94D5894632C4147F94C0D5822885FEB1DA (void);
// 0x000001B6 System.Void Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_m6432BE359B16F9AEA43A219271C3D713A37F2C48 (void);
// 0x000001B7 System.Boolean Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass0_0::<PublicToMono>b__0(System.String,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,Mono.Security.Interface.MonoSslPolicyErrors)
extern void U3CU3Ec__DisplayClass0_0_U3CPublicToMonoU3Eb__0_m2434134460D6262E13729DBFC73A7979A853A124 (void);
// 0x000001B8 System.Void Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m7807CD991EC4D16395E1278477E3317868E18200 (void);
// 0x000001B9 System.Boolean Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass5_0::<MonoToPublic>b__0(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void U3CU3Ec__DisplayClass5_0_U3CMonoToPublicU3Eb__0_m4103265ECFA6558EE594E7BC847723EB97443018 (void);
// 0x000001BA System.Void Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_mB77347EF574C2C51BBD1A7B1AF673B3D92B056E2 (void);
// 0x000001BB System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass8_0::<MonoToInternal>b__0(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void U3CU3Ec__DisplayClass8_0_U3CMonoToInternalU3Eb__0_m3AE731A20AB6B949B0584AB838DF089C80602F4C (void);
// 0x000001BC System.Boolean System.IriHelper::CheckIriUnicodeRange(System.Char,System.Boolean)
extern void IriHelper_CheckIriUnicodeRange_mB6188E33378F14F14241DF9BEC16504D8913C1DF (void);
// 0x000001BD System.Boolean System.IriHelper::CheckIriUnicodeRange(System.Char,System.Char,System.Boolean&,System.Boolean)
extern void IriHelper_CheckIriUnicodeRange_mFC301B32EBD30C5039D7FC366221539142925911 (void);
// 0x000001BE System.Boolean System.IriHelper::CheckIsReserved(System.Char,System.UriComponents)
extern void IriHelper_CheckIsReserved_m7AA6D0211099F95C92B6547A92E24D138178CEF1 (void);
// 0x000001BF System.String System.IriHelper::EscapeUnescapeIri(System.Char*,System.Int32,System.Int32,System.UriComponents)
extern void IriHelper_EscapeUnescapeIri_m846C85843F5A21CA5F152D328243E33C0266DFF5 (void);
// 0x000001C0 System.Boolean System.Uri::get_IsImplicitFile()
extern void Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA (void);
// 0x000001C1 System.Boolean System.Uri::get_IsUncOrDosPath()
extern void Uri_get_IsUncOrDosPath_mF197920D1C1DBDE10A3478855D89D36210D8CE94 (void);
// 0x000001C2 System.Boolean System.Uri::get_IsDosPath()
extern void Uri_get_IsDosPath_m3374B9D26D6B547862ACB2E617AB6F96CA31A5AF (void);
// 0x000001C3 System.Boolean System.Uri::get_IsUncPath()
extern void Uri_get_IsUncPath_m1004A84C83F38F40A4AD1334F22BDDE658EF8E99 (void);
// 0x000001C4 System.Uri/Flags System.Uri::get_HostType()
extern void Uri_get_HostType_m6C142BC37D44CF1F53D80627455BC6B1CB747820 (void);
// 0x000001C5 System.UriParser System.Uri::get_Syntax()
extern void Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9 (void);
// 0x000001C6 System.Boolean System.Uri::get_IsNotAbsoluteUri()
extern void Uri_get_IsNotAbsoluteUri_m7394FF83375B299BA634518D3104903AFEAE3177 (void);
// 0x000001C7 System.Boolean System.Uri::IriParsingStatic(System.UriParser)
extern void Uri_IriParsingStatic_mBC868691E0FEA5CBA45F4BD2A457D3D801C245CE (void);
// 0x000001C8 System.Boolean System.Uri::get_AllowIdn()
extern void Uri_get_AllowIdn_m4031E81D7D0E44FC81C6951D78B2C836EC8270D7 (void);
// 0x000001C9 System.Boolean System.Uri::AllowIdnStatic(System.UriParser,System.Uri/Flags)
extern void Uri_AllowIdnStatic_mF38FDCA5248AA93F8823A192D61E2180FEC9C41C (void);
// 0x000001CA System.Boolean System.Uri::IsIntranet(System.String)
extern void Uri_IsIntranet_m89BF3C395C8D960B103DF056976B7C369231270C (void);
// 0x000001CB System.Boolean System.Uri::get_UserDrivenParsing()
extern void Uri_get_UserDrivenParsing_mF09087D4DE9A0823EBF1FC0C14101335D01393F2 (void);
// 0x000001CC System.Void System.Uri::SetUserDrivenParsing()
extern void Uri_SetUserDrivenParsing_mDF0BFAFE946EAD9122ED2A542132902D7E47FD9C (void);
// 0x000001CD System.UInt16 System.Uri::get_SecuredPathIndex()
extern void Uri_get_SecuredPathIndex_m0BE7920E94AA002B4CD2D568BD6E0FD91F0D7F0B (void);
// 0x000001CE System.Boolean System.Uri::NotAny(System.Uri/Flags)
extern void Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969 (void);
// 0x000001CF System.Boolean System.Uri::InFact(System.Uri/Flags)
extern void Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4 (void);
// 0x000001D0 System.Boolean System.Uri::StaticNotAny(System.Uri/Flags,System.Uri/Flags)
extern void Uri_StaticNotAny_m4D46ED46C6C293479D37674FE7EEB2266BF362D3 (void);
// 0x000001D1 System.Boolean System.Uri::StaticInFact(System.Uri/Flags,System.Uri/Flags)
extern void Uri_StaticInFact_m9F44BF06099F60002C5D9CE07F72DD74D1404AA0 (void);
// 0x000001D2 System.Uri/UriInfo System.Uri::EnsureUriInfo()
extern void Uri_EnsureUriInfo_m5FA3DF1CD26867815CE1F247A47530E1D7E35F7E (void);
// 0x000001D3 System.Void System.Uri::EnsureParseRemaining()
extern void Uri_EnsureParseRemaining_m7BC86BEFE07F56D480C9ACBCE64983806F6789BB (void);
// 0x000001D4 System.Void System.Uri::EnsureHostString(System.Boolean)
extern void Uri_EnsureHostString_m47897EC94F83DFE1CA16CE71167DDD3CC986C22A (void);
// 0x000001D5 System.Void System.Uri::.ctor(System.String)
extern void Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C (void);
// 0x000001D6 System.Void System.Uri::.ctor(System.String,System.UriKind)
extern void Uri__ctor_m2D669E1153A700F9ED8BA31473565827AF8E39EF (void);
// 0x000001D7 System.Void System.Uri::.ctor(System.Uri,System.String)
extern void Uri__ctor_m0B44AFB01F3FEDE9319BA4556288340D16101F9D (void);
// 0x000001D8 System.Void System.Uri::CreateUri(System.Uri,System.String,System.Boolean)
extern void Uri_CreateUri_mCAE7D6A4588E2FF4507FF9198B856FD7354DBE0D (void);
// 0x000001D9 System.Void System.Uri::.ctor(System.Uri,System.Uri)
extern void Uri__ctor_m77D32DF0ABC88A040214913D87A07F2C522CCD18 (void);
// 0x000001DA System.ParsingError System.Uri::GetCombinedString(System.Uri,System.String,System.Boolean,System.String&)
extern void Uri_GetCombinedString_m044AB008E717A0FB16217B83C112AA38C54A409F (void);
// 0x000001DB System.UriFormatException System.Uri::GetException(System.ParsingError)
extern void Uri_GetException_m09A6668C52473C2B01ADB6FC52B1F64C98AA2F2B (void);
// 0x000001DC System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Uri__ctor_m8AEBDC795304F6C78A02BC41BB4C6BF93C4DE53B (void);
// 0x000001DD System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m42AA79366787600D266604222086BD6BDD28A36A (void);
// 0x000001DE System.Void System.Uri::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Uri_GetObjectData_mB720AACE3C54C5B104A7DF0658369C7F7914E895 (void);
// 0x000001DF System.String System.Uri::get_AbsolutePath()
extern void Uri_get_AbsolutePath_mB845A99D0CEB442AAF90B24A95EE7509C34C6306 (void);
// 0x000001E0 System.String System.Uri::get_PrivateAbsolutePath()
extern void Uri_get_PrivateAbsolutePath_mB480D22E4DBE280587D24BCF9A57D3C096C4A833 (void);
// 0x000001E1 System.String System.Uri::get_AbsoluteUri()
extern void Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA (void);
// 0x000001E2 System.String System.Uri::get_LocalPath()
extern void Uri_get_LocalPath_mED5287A7F9ADF1CCBAFD77221135A37C133F067E (void);
// 0x000001E3 System.String System.Uri::get_Authority()
extern void Uri_get_Authority_m453C817B1681F5FD99431A7FDF6F11CDB9FAC093 (void);
// 0x000001E4 System.Boolean System.Uri::get_IsDefaultPort()
extern void Uri_get_IsDefaultPort_mFDB9DC42A42C2D8C5ADFE5D590DEEE27D2918271 (void);
// 0x000001E5 System.Boolean System.Uri::get_IsFile()
extern void Uri_get_IsFile_mCFA022C6E4641EBD7285A01056B7E201CEFD2C73 (void);
// 0x000001E6 System.Boolean System.Uri::get_IsLoopback()
extern void Uri_get_IsLoopback_m6988313CE348064A6A068347D878DDC51594B710 (void);
// 0x000001E7 System.String System.Uri::get_PathAndQuery()
extern void Uri_get_PathAndQuery_m0FFF28F15DF953C5866C2A0DEEA2034ECE6A0F35 (void);
// 0x000001E8 System.Boolean System.Uri::get_IsUnc()
extern void Uri_get_IsUnc_m74CE69038E37D7F868EF3EFD9DCCD08AA11877CC (void);
// 0x000001E9 System.String System.Uri::get_Host()
extern void Uri_get_Host_m05E1D82C4E6B14A2369AEDED218F9089DE336E64 (void);
// 0x000001EA System.Boolean System.Uri::StaticIsFile(System.UriParser)
extern void Uri_StaticIsFile_mBE7D4186A7745C99605023A9F2299331B356410D (void);
// 0x000001EB System.Object System.Uri::get_InitializeLock()
extern void Uri_get_InitializeLock_m974D0E7509860787487C6D190475A0941ECC30D9 (void);
// 0x000001EC System.Void System.Uri::InitializeUriConfig()
extern void Uri_InitializeUriConfig_m02258702293F27DA769F17433E63799D93005C0B (void);
// 0x000001ED System.String System.Uri::GetLocalPath()
extern void Uri_GetLocalPath_mCEB791B43D5872D4D6230A21E2DFC93166CEDA1B (void);
// 0x000001EE System.Int32 System.Uri::get_Port()
extern void Uri_get_Port_m23A08BF55EC1DC7421B99E6E77544DDF5900099C (void);
// 0x000001EF System.String System.Uri::get_Query()
extern void Uri_get_Query_m5BFB32AA54D9F40585832BCA7F10B3DE3603E9EF (void);
// 0x000001F0 System.String System.Uri::get_Fragment()
extern void Uri_get_Fragment_m1734B2D3F27F38AA342CB65885DE732160501E72 (void);
// 0x000001F1 System.String System.Uri::get_Scheme()
extern void Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29 (void);
// 0x000001F2 System.Boolean System.Uri::get_OriginalStringSwitched()
extern void Uri_get_OriginalStringSwitched_m405404D361D84E268AED978DCE114F5E43583987 (void);
// 0x000001F3 System.String System.Uri::get_OriginalString()
extern void Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC (void);
// 0x000001F4 System.String System.Uri::get_DnsSafeHost()
extern void Uri_get_DnsSafeHost_m3A22E10619987FC8FED6CEDDCA5D9647AC5B6AC5 (void);
// 0x000001F5 System.Boolean System.Uri::get_IsAbsoluteUri()
extern void Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25 (void);
// 0x000001F6 System.Boolean System.Uri::get_UserEscaped()
extern void Uri_get_UserEscaped_m36B234B7081DFE3B3B6D7FCA2F9768C10DDD2807 (void);
// 0x000001F7 System.Boolean System.Uri::IsGenDelim(System.Char)
extern void Uri_IsGenDelim_mF469685EA7CA5F907AD5838A4E839F79CF2E6D0C (void);
// 0x000001F8 System.Boolean System.Uri::IsHexDigit(System.Char)
extern void Uri_IsHexDigit_m676840243947DC57375B30552D79F9A312048BA2 (void);
// 0x000001F9 System.Int32 System.Uri::FromHex(System.Char)
extern void Uri_FromHex_mA14A33DB60EBA018558CEF8F7EB5B1FBFECFAD8B (void);
// 0x000001FA System.Int32 System.Uri::GetHashCode()
extern void Uri_GetHashCode_mC0D119822A7E802B29C060B809048C5A1413E818 (void);
// 0x000001FB System.String System.Uri::ToString()
extern void Uri_ToString_m477A204846385EC6FF1DA9043B81B11512C3962E (void);
// 0x000001FC System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern void Uri_op_Equality_m4C2BAA8B8318A6C124AE18734B2872A983D5CC91 (void);
// 0x000001FD System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
extern void Uri_op_Inequality_m1CFADE0F122D3B996C7B1871646FA1570AF399E5 (void);
// 0x000001FE System.Boolean System.Uri::Equals(System.Object)
extern void Uri_Equals_mB02B478FE0FB77C8D853B051F798C8D978531C1C (void);
// 0x000001FF System.ParsingError System.Uri::ParseScheme(System.String,System.Uri/Flags&,System.UriParser&)
extern void Uri_ParseScheme_m39368D56F9846D64F08A9890B7B698B3E6226BCD (void);
// 0x00000200 System.UriFormatException System.Uri::ParseMinimal()
extern void Uri_ParseMinimal_m47FF7ACAEB543DE87332F9DEA79F92ADC575107F (void);
// 0x00000201 System.ParsingError System.Uri::PrivateParseMinimal()
extern void Uri_PrivateParseMinimal_m154A67FFA2FA8E2D9215163B56DF1BB88576A369 (void);
// 0x00000202 System.Void System.Uri::PrivateParseMinimalIri(System.String,System.UInt16)
extern void Uri_PrivateParseMinimalIri_m1A23B409BC4FE17A66599BFE0E0CD62C06D45E2B (void);
// 0x00000203 System.Void System.Uri::CreateUriInfo(System.Uri/Flags)
extern void Uri_CreateUriInfo_mD8864BD45B6397D4C3AED68BA2D3EAEB520DB9E6 (void);
// 0x00000204 System.Void System.Uri::CreateHostString()
extern void Uri_CreateHostString_m2C549411869B57ADE6595800B6493BDB0A52F124 (void);
// 0x00000205 System.String System.Uri::CreateHostStringHelper(System.String,System.UInt16,System.UInt16,System.Uri/Flags&,System.String&)
extern void Uri_CreateHostStringHelper_mF364FD1C0FBD46838557CAA1D35D74DF276F9038 (void);
// 0x00000206 System.Void System.Uri::GetHostViaCustomSyntax()
extern void Uri_GetHostViaCustomSyntax_mF2DABFE767AB49B8F8E0C9E19937AF900A1E4BC7 (void);
// 0x00000207 System.String System.Uri::GetParts(System.UriComponents,System.UriFormat)
extern void Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA (void);
// 0x00000208 System.String System.Uri::GetEscapedParts(System.UriComponents)
extern void Uri_GetEscapedParts_m61C2B2B898F8AA8B75AAEC38EF78C340BC1F5A20 (void);
// 0x00000209 System.String System.Uri::GetUnescapedParts(System.UriComponents,System.UriFormat)
extern void Uri_GetUnescapedParts_m6F106ECABBBAFA95C3F3CA86F540B9EE0B9D01D4 (void);
// 0x0000020A System.String System.Uri::ReCreateParts(System.UriComponents,System.UInt16,System.UriFormat)
extern void Uri_ReCreateParts_m3D0CD53477FBAB5E8988373B8D749E286399278E (void);
// 0x0000020B System.String System.Uri::GetUriPartsFromUserString(System.UriComponents)
extern void Uri_GetUriPartsFromUserString_m81B60C6E31AB8EA51438E391F7990334B96ACD29 (void);
// 0x0000020C System.Void System.Uri::ParseRemaining()
extern void Uri_ParseRemaining_m8C4350479C64906DDE464595F8BE5F8C14F2038D (void);
// 0x0000020D System.UInt16 System.Uri::ParseSchemeCheckImplicitFile(System.Char*,System.UInt16,System.ParsingError&,System.Uri/Flags&,System.UriParser&)
extern void Uri_ParseSchemeCheckImplicitFile_m54C6CFD37CC5A5C24E502E44AA44112AF7B50BFD (void);
// 0x0000020E System.Boolean System.Uri::CheckKnownSchemes(System.Int64*,System.UInt16,System.UriParser&)
extern void Uri_CheckKnownSchemes_m4E564FB55DD6924C057E758C6CEDB54614399B69 (void);
// 0x0000020F System.ParsingError System.Uri::CheckSchemeSyntax(System.Char*,System.UInt16,System.UriParser&)
extern void Uri_CheckSchemeSyntax_m2390F44FEDD9E7489EF8F607B862B6210A9DC404 (void);
// 0x00000210 System.UInt16 System.Uri::CheckAuthorityHelper(System.Char*,System.UInt16,System.UInt16,System.ParsingError&,System.Uri/Flags&,System.UriParser,System.String&)
extern void Uri_CheckAuthorityHelper_mC5010AEC19EED1968EDE7CB52C92AC0AC0869503 (void);
// 0x00000211 System.Void System.Uri::CheckAuthorityHelperHandleDnsIri(System.Char*,System.UInt16,System.Int32,System.Int32,System.Boolean,System.Boolean,System.UriParser,System.String,System.Uri/Flags&,System.Boolean&,System.String&,System.ParsingError&)
extern void Uri_CheckAuthorityHelperHandleDnsIri_m495861D9EEE706767F37270F316951E292C60B7A (void);
// 0x00000212 System.Void System.Uri::CheckAuthorityHelperHandleAnyHostIri(System.Char*,System.Int32,System.Int32,System.Boolean,System.Boolean,System.UriParser,System.Uri/Flags&,System.String&,System.ParsingError&)
extern void Uri_CheckAuthorityHelperHandleAnyHostIri_m25D24DA750D1E2D025C22CF6D2BAD269AB3FA21B (void);
// 0x00000213 System.Void System.Uri::FindEndOfComponent(System.String,System.UInt16&,System.UInt16,System.Char)
extern void Uri_FindEndOfComponent_m82D6E67E45114D23F403807E6D711C2A4E574567 (void);
// 0x00000214 System.Void System.Uri::FindEndOfComponent(System.Char*,System.UInt16&,System.UInt16,System.Char)
extern void Uri_FindEndOfComponent_mFFFB2266B9FDDB757E145586461BF46D26C509C9 (void);
// 0x00000215 System.Uri/Check System.Uri::CheckCanonical(System.Char*,System.UInt16&,System.UInt16,System.Char)
extern void Uri_CheckCanonical_mFD937A06DC3885481C374ACDD190A3B3E40152F3 (void);
// 0x00000216 System.Char[] System.Uri::GetCanonicalPath(System.Char[],System.Int32&,System.UriFormat)
extern void Uri_GetCanonicalPath_mA187EAD590C890FE0623CF7B1EFF4364B57FAF10 (void);
// 0x00000217 System.Void System.Uri::UnescapeOnly(System.Char*,System.Int32,System.Int32&,System.Char,System.Char,System.Char)
extern void Uri_UnescapeOnly_m92D3576A2907919173B7C8528642CA8FBF3E5EFC (void);
// 0x00000218 System.Char[] System.Uri::Compress(System.Char[],System.UInt16,System.Int32&,System.UriParser)
extern void Uri_Compress_m0AC629D11323C8DF4E6CCEDC31D737FEAA384D0D (void);
// 0x00000219 System.Int32 System.Uri::CalculateCaseInsensitiveHashCode(System.String)
extern void Uri_CalculateCaseInsensitiveHashCode_m2B4C02B5CBB139510BA6F9BCF1CB21768DA6614C (void);
// 0x0000021A System.String System.Uri::CombineUri(System.Uri,System.String,System.UriFormat)
extern void Uri_CombineUri_mC799BAF9A767DCE3A906D27DF1A947D0CB684E54 (void);
// 0x0000021B System.Boolean System.Uri::IsLWS(System.Char)
extern void Uri_IsLWS_mAE27963118FD3DA41FEC97493B2D9EFBF46E6C57 (void);
// 0x0000021C System.Boolean System.Uri::IsAsciiLetter(System.Char)
extern void Uri_IsAsciiLetter_mA7F74C96007004DB0184D149CA03949D5E18E244 (void);
// 0x0000021D System.Boolean System.Uri::IsAsciiLetterOrDigit(System.Char)
extern void Uri_IsAsciiLetterOrDigit_mC5604E1B62ED7337C5966CC6AD021DF841C90A83 (void);
// 0x0000021E System.Boolean System.Uri::IsBidiControlCharacter(System.Char)
extern void Uri_IsBidiControlCharacter_m7671F6F9F367BD504B78C686233ED322EF5BF10B (void);
// 0x0000021F System.String System.Uri::StripBidiControlCharacter(System.Char*,System.Int32,System.Int32)
extern void Uri_StripBidiControlCharacter_mEAACF380CC279ADFF5E318963C82CDABC9DE35C5 (void);
// 0x00000220 System.Void System.Uri::CreateThis(System.String,System.Boolean,System.UriKind)
extern void Uri_CreateThis_m86E72577BCB9A6FDF5A0EC8EDFDD5F41AD3256FC (void);
// 0x00000221 System.Void System.Uri::InitializeUri(System.ParsingError,System.UriKind,System.UriFormatException&)
extern void Uri_InitializeUri_m952665E18BE60CFAC5A6025FCD2A0BB9CCB5C567 (void);
// 0x00000222 System.Boolean System.Uri::CheckForConfigLoad(System.String)
extern void Uri_CheckForConfigLoad_m4AF9D27B5F62A0D4269B23FB3BEF4846E8D0983D (void);
// 0x00000223 System.Boolean System.Uri::CheckForUnicode(System.String)
extern void Uri_CheckForUnicode_m2A9DB97F3B384DADC1A274C8982404DDE17F6688 (void);
// 0x00000224 System.Boolean System.Uri::CheckForEscapedUnreserved(System.String)
extern void Uri_CheckForEscapedUnreserved_m5EC5EFE77E30B08708B49086DF72A659454B1A2F (void);
// 0x00000225 System.Boolean System.Uri::TryCreate(System.String,System.UriKind,System.Uri&)
extern void Uri_TryCreate_m4E7D41A8B62D8E964E0B73B67CD7A31BF3E65799 (void);
// 0x00000226 System.String System.Uri::GetComponents(System.UriComponents,System.UriFormat)
extern void Uri_GetComponents_mA614A98C35F2E5D924A10A8018A46606AFB6133E (void);
// 0x00000227 System.String System.Uri::UnescapeDataString(System.String)
extern void Uri_UnescapeDataString_mF503D862AFF8EFDC9394DE8052648DB59E9F96F2 (void);
// 0x00000228 System.String System.Uri::EscapeUnescapeIri(System.String,System.Int32,System.Int32,System.UriComponents)
extern void Uri_EscapeUnescapeIri_m606A69B7A76A131D0CA6F562E5DC0721C626E071 (void);
// 0x00000229 System.Void System.Uri::.ctor(System.Uri/Flags,System.UriParser,System.String)
extern void Uri__ctor_m899122920EF2C3DE3E7A620B823D43BDB54D3406 (void);
// 0x0000022A System.Uri System.Uri::CreateHelper(System.String,System.Boolean,System.UriKind,System.UriFormatException&)
extern void Uri_CreateHelper_m7119CDD68462AF01538A0E8010CF9421DA9FD321 (void);
// 0x0000022B System.Uri System.Uri::ResolveHelper(System.Uri,System.Uri,System.String&,System.Boolean&,System.UriFormatException&)
extern void Uri_ResolveHelper_mA18C06D627E72E81F0848DA4C02CE7675D139CD7 (void);
// 0x0000022C System.String System.Uri::GetRelativeSerializationString(System.UriFormat)
extern void Uri_GetRelativeSerializationString_mBCE8CC99C746B18A9DE0B2C6084C5B90A192130D (void);
// 0x0000022D System.String System.Uri::GetComponentsHelper(System.UriComponents,System.UriFormat)
extern void Uri_GetComponentsHelper_mAA39E421157735AAD7D93A187CCCAED5A122C8E8 (void);
// 0x0000022E System.Void System.Uri::CreateThisFromUri(System.Uri)
extern void Uri_CreateThisFromUri_mCD4CFC7C223ADB909C634DA7EAE279DCD9BF5C14 (void);
// 0x0000022F System.Void System.Uri::.cctor()
extern void Uri__cctor_m3F41AF0439E0B4BFD8C7D717DDE2D36A026BC557 (void);
// 0x00000230 System.Void System.Uri/UriInfo::.ctor()
extern void UriInfo__ctor_m990C9CA368096AFE12B92F3605FAA70EC0C69BB8 (void);
// 0x00000231 System.Void System.Uri/MoreInfo::.ctor()
extern void MoreInfo__ctor_mF8515B2BCCB5E7DC008164794946ADE7ADBCD2BD (void);
// 0x00000232 System.Void System.UriFormatException::.ctor()
extern void UriFormatException__ctor_m2B9D2DCA45C6A4C42CAC0DF830E3448E1F67D9DD (void);
// 0x00000233 System.Void System.UriFormatException::.ctor(System.String)
extern void UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F (void);
// 0x00000234 System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void UriFormatException__ctor_mE91E0D915423F0506A5C6AB2885ECA712669A02D (void);
// 0x00000235 System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m064FAD00616310EEE1CBA5BE4B438F73C9EF489B (void);
// 0x00000236 System.Char[] System.UriHelper::EscapeString(System.String,System.Int32,System.Int32,System.Char[],System.Int32&,System.Boolean,System.Char,System.Char,System.Char)
extern void UriHelper_EscapeString_m86812263CFCDD337B818CC7401499CCC67196147 (void);
// 0x00000237 System.Char[] System.UriHelper::EnsureDestinationSize(System.Char*,System.Char[],System.Int32,System.Int16,System.Int16,System.Int32&,System.Int32)
extern void UriHelper_EnsureDestinationSize_m5451D5091068288F6F361EA0BB64A6E5433A99E3 (void);
// 0x00000238 System.Char[] System.UriHelper::UnescapeString(System.String,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
extern void UriHelper_UnescapeString_m48AEEA101C2ED671FCC02656AAB8929F0435A591 (void);
// 0x00000239 System.Char[] System.UriHelper::UnescapeString(System.Char*,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
extern void UriHelper_UnescapeString_mFBF6EA6FBC25A465B680157F84CA1307A51EF65B (void);
// 0x0000023A System.Void System.UriHelper::MatchUTF8Sequence(System.Char*,System.Char[],System.Int32&,System.Char[],System.Int32,System.Byte[],System.Int32,System.Boolean,System.Boolean)
extern void UriHelper_MatchUTF8Sequence_mADC2C714DF505B425E34F2404F600955939A0BE4 (void);
// 0x0000023B System.Void System.UriHelper::EscapeAsciiChar(System.Char,System.Char[],System.Int32&)
extern void UriHelper_EscapeAsciiChar_m514B5A9B356DB789631EC00662F65EE43A5B7B97 (void);
// 0x0000023C System.Char System.UriHelper::EscapedAscii(System.Char,System.Char)
extern void UriHelper_EscapedAscii_m7AC352E3E869E7E5642C973397FA6C2696F9A573 (void);
// 0x0000023D System.Boolean System.UriHelper::IsNotSafeForUnescape(System.Char)
extern void UriHelper_IsNotSafeForUnescape_m033CF009114BEB2E119AE37C22DAF1EA04432E78 (void);
// 0x0000023E System.Boolean System.UriHelper::IsReservedUnreservedOrHash(System.Char)
extern void UriHelper_IsReservedUnreservedOrHash_m430460A215A6884D3736D156C0946ED5F8916A18 (void);
// 0x0000023F System.Boolean System.UriHelper::IsUnreserved(System.Char)
extern void UriHelper_IsUnreserved_m7036DEC07EA1D2204ECB4C1CBCB0E64716AFA50B (void);
// 0x00000240 System.Boolean System.UriHelper::Is3986Unreserved(System.Char)
extern void UriHelper_Is3986Unreserved_m7A17E1EAE5812BCFD4158BF65A75013B3A87E8A8 (void);
// 0x00000241 System.Void System.UriHelper::.cctor()
extern void UriHelper__cctor_m6B15F5023455DDBFBBF1FFE533F71F7969CBD223 (void);
// 0x00000242 System.String System.UriParser::get_SchemeName()
extern void UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80 (void);
// 0x00000243 System.Int32 System.UriParser::get_DefaultPort()
extern void UriParser_get_DefaultPort_m7ECA5BE839D36C7FF854FEA0795D8DE701487D33 (void);
// 0x00000244 System.UriParser System.UriParser::OnNewUri()
extern void UriParser_OnNewUri_m44FB81344517268B51B276DF7A9E236C04134ED5 (void);
// 0x00000245 System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern void UriParser_InitializeAndValidate_mE7C239F559C834F7C156FC21F175023D98E11A45 (void);
// 0x00000246 System.String System.UriParser::Resolve(System.Uri,System.Uri,System.UriFormatException&)
extern void UriParser_Resolve_m031E03AD4141D77F023345D8FB087FA06CEA41C0 (void);
// 0x00000247 System.String System.UriParser::GetComponents(System.Uri,System.UriComponents,System.UriFormat)
extern void UriParser_GetComponents_mEF92B7D8CD59B1C8502D195D775D02D2C844FC1B (void);
// 0x00000248 System.Boolean System.UriParser::get_ShouldUseLegacyV2Quirks()
extern void UriParser_get_ShouldUseLegacyV2Quirks_m999F115810F8CD526705FC7FE28DC78348BB6B58 (void);
// 0x00000249 System.Void System.UriParser::.cctor()
extern void UriParser__cctor_m3312BCD8E4C266FCBFAB0998FBC5D8EAD202598D (void);
// 0x0000024A System.UriSyntaxFlags System.UriParser::get_Flags()
extern void UriParser_get_Flags_mDAA0D828057CA2CA4493FD152D3760E975BAE7F0 (void);
// 0x0000024B System.Boolean System.UriParser::NotAny(System.UriSyntaxFlags)
extern void UriParser_NotAny_m6A42FAC623F0EBDE441782DAC3E3B2ED34756D91 (void);
// 0x0000024C System.Boolean System.UriParser::InFact(System.UriSyntaxFlags)
extern void UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D (void);
// 0x0000024D System.Boolean System.UriParser::IsAllSet(System.UriSyntaxFlags)
extern void UriParser_IsAllSet_m356BD044D8A53560B6A7AA9B81A20A364E015C18 (void);
// 0x0000024E System.Boolean System.UriParser::IsFullMatch(System.UriSyntaxFlags,System.UriSyntaxFlags)
extern void UriParser_IsFullMatch_m3967BB43AFB5C11B75DA3BD1CE18B8DAE8F0C32E (void);
// 0x0000024F System.Void System.UriParser::.ctor(System.UriSyntaxFlags)
extern void UriParser__ctor_m9A2C47C1F30EF65ADFBAEB0A569FB972F383825C (void);
// 0x00000250 System.UriParser System.UriParser::FindOrFetchAsUnknownV1Syntax(System.String)
extern void UriParser_FindOrFetchAsUnknownV1Syntax_m7E42C893EE2F8C29C3BAF9FBDAAEBD707311D63F (void);
// 0x00000251 System.Boolean System.UriParser::get_IsSimple()
extern void UriParser_get_IsSimple_m09BA6505FDD1AE0BF6C711AE9C2C3F9379B868F8 (void);
// 0x00000252 System.UriParser System.UriParser::InternalOnNewUri()
extern void UriParser_InternalOnNewUri_m0AC629BCCA398E9A193AC16A5E91D445B9B70D79 (void);
// 0x00000253 System.Void System.UriParser::InternalValidate(System.Uri,System.UriFormatException&)
extern void UriParser_InternalValidate_mB845C482B4B01EDFE012DD4C4CEF62C8F4FFE94F (void);
// 0x00000254 System.String System.UriParser::InternalResolve(System.Uri,System.Uri,System.UriFormatException&)
extern void UriParser_InternalResolve_m7EF249EAEFB9DDE866F9830E91CC61E09F1548E9 (void);
// 0x00000255 System.String System.UriParser::InternalGetComponents(System.Uri,System.UriComponents,System.UriFormat)
extern void UriParser_InternalGetComponents_mAB0A54E462724FA417D0EF3A2AD0BD24BC66DFF8 (void);
// 0x00000256 System.Void System.UriParser/BuiltInUriParser::.ctor(System.String,System.Int32,System.UriSyntaxFlags)
extern void BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA (void);
// 0x00000257 System.String System.DomainNameHelper::ParseCanonicalName(System.String,System.Int32,System.Int32,System.Boolean&)
extern void DomainNameHelper_ParseCanonicalName_mA709519F0A1E29FAA3E60D39059E60CEAAD9B503 (void);
// 0x00000258 System.Boolean System.DomainNameHelper::IsValid(System.Char*,System.UInt16,System.Int32&,System.Boolean&,System.Boolean)
extern void DomainNameHelper_IsValid_mEC6D655592BCCBA29341285C518B6CB1955D5C4C (void);
// 0x00000259 System.Boolean System.DomainNameHelper::IsValidByIri(System.Char*,System.UInt16,System.Int32&,System.Boolean&,System.Boolean)
extern void DomainNameHelper_IsValidByIri_m28C53F8ADFE505DC82BF940C5C7718E3175EE798 (void);
// 0x0000025A System.String System.DomainNameHelper::IdnEquivalent(System.Char*,System.Int32,System.Int32,System.Boolean&,System.Boolean&)
extern void DomainNameHelper_IdnEquivalent_m68FCBA0981064907EAD19342D1EB18D60347E7D1 (void);
// 0x0000025B System.String System.DomainNameHelper::IdnEquivalent(System.Char*,System.Int32,System.Int32,System.Boolean&,System.String&)
extern void DomainNameHelper_IdnEquivalent_mF90F6C70EDDD7744A622A8A8D8DBA8147B708CC1 (void);
// 0x0000025C System.Boolean System.DomainNameHelper::IsIdnAce(System.String,System.Int32)
extern void DomainNameHelper_IsIdnAce_m4527E020EB7F27D6F9329AAA930065740CA895AE (void);
// 0x0000025D System.Boolean System.DomainNameHelper::IsIdnAce(System.Char*,System.Int32)
extern void DomainNameHelper_IsIdnAce_m7C08B5B6F0AD15FCB707827359D3E1C788B78AC8 (void);
// 0x0000025E System.String System.DomainNameHelper::UnicodeEquivalent(System.String,System.Char*,System.Int32,System.Int32)
extern void DomainNameHelper_UnicodeEquivalent_mA16E3E4E5F5F4ABD58F288D655A61AF3457A8F38 (void);
// 0x0000025F System.String System.DomainNameHelper::UnicodeEquivalent(System.Char*,System.Int32,System.Int32,System.Boolean&,System.Boolean&)
extern void DomainNameHelper_UnicodeEquivalent_m34C183586CF46D7F8FB3ED34A3DCB205F7EF684E (void);
// 0x00000260 System.Boolean System.DomainNameHelper::IsASCIILetterOrDigit(System.Char,System.Boolean&)
extern void DomainNameHelper_IsASCIILetterOrDigit_m9B8B2BBF76139D354E1EE9C98E37A22D360F1829 (void);
// 0x00000261 System.Boolean System.DomainNameHelper::IsValidDomainLabelCharacter(System.Char,System.Boolean&)
extern void DomainNameHelper_IsValidDomainLabelCharacter_mC0C76A55C7926731B41BB0390EA6F270146B4873 (void);
// 0x00000262 System.String System.IPv4AddressHelper::ParseCanonicalName(System.String,System.Int32,System.Int32,System.Boolean&)
extern void IPv4AddressHelper_ParseCanonicalName_mA2417EA51555DA5053E4B52BEEB7E020235AA6EE (void);
// 0x00000263 System.Int32 System.IPv4AddressHelper::ParseHostNumber(System.String,System.Int32,System.Int32)
extern void IPv4AddressHelper_ParseHostNumber_m692F37F43732F30533E07772167EDBEF183BE00E (void);
// 0x00000264 System.Boolean System.IPv4AddressHelper::IsValid(System.Char*,System.Int32,System.Int32&,System.Boolean,System.Boolean,System.Boolean)
extern void IPv4AddressHelper_IsValid_mAECBB3F7A7CD2F4BF7553541394E8C1976EA56BF (void);
// 0x00000265 System.Boolean System.IPv4AddressHelper::IsValidCanonical(System.Char*,System.Int32,System.Int32&,System.Boolean,System.Boolean)
extern void IPv4AddressHelper_IsValidCanonical_mE0B40B0F2A0A12459B2F810B2106C596A8B25B76 (void);
// 0x00000266 System.Int64 System.IPv4AddressHelper::ParseNonCanonical(System.Char*,System.Int32,System.Int32&,System.Boolean)
extern void IPv4AddressHelper_ParseNonCanonical_m52E0023B7E5B939D26D9F0724E15CE4F7515A0F6 (void);
// 0x00000267 System.Boolean System.IPv4AddressHelper::Parse(System.String,System.Byte*,System.Int32,System.Int32)
extern void IPv4AddressHelper_Parse_m750A31F9765760704CA85B87BCD11118FFE20C51 (void);
// 0x00000268 System.Boolean System.IPv4AddressHelper::ParseCanonical(System.String,System.Byte*,System.Int32,System.Int32)
extern void IPv4AddressHelper_ParseCanonical_mC43B64CB8FA8C32DE76C5A268FED65F908206642 (void);
// 0x00000269 System.String System.IPv6AddressHelper::ParseCanonicalName(System.String,System.Int32,System.Boolean&,System.String&)
extern void IPv6AddressHelper_ParseCanonicalName_mC503B03E3789401C8ECF2DC00C0F8CE7AEDF6DD5 (void);
// 0x0000026A System.String System.IPv6AddressHelper::CreateCanonicalName(System.UInt16*)
extern void IPv6AddressHelper_CreateCanonicalName_mC4D2285C3C75F324F12D032512587F978C896DBB (void);
// 0x0000026B System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> System.IPv6AddressHelper::FindCompressionRange(System.UInt16*)
extern void IPv6AddressHelper_FindCompressionRange_mD237D50AD02FDF745AA24607A9A4912C2E72AC67 (void);
// 0x0000026C System.Boolean System.IPv6AddressHelper::ShouldHaveIpv4Embedded(System.UInt16*)
extern void IPv6AddressHelper_ShouldHaveIpv4Embedded_mE1C08E36D6A3F31AF7A22404F392DBCEC3D5C2A1 (void);
// 0x0000026D System.Boolean System.IPv6AddressHelper::InternalIsValid(System.Char*,System.Int32,System.Int32&,System.Boolean)
extern void IPv6AddressHelper_InternalIsValid_m5DCE3337321A00C53961888EA71C3A78F74F3B89 (void);
// 0x0000026E System.Boolean System.IPv6AddressHelper::IsValid(System.Char*,System.Int32,System.Int32&)
extern void IPv6AddressHelper_IsValid_m9FB7DFCDF16172F1399DA2D7F8553909528E2C7F (void);
// 0x0000026F System.Boolean System.IPv6AddressHelper::IsValidStrict(System.Char*,System.Int32,System.Int32&)
extern void IPv6AddressHelper_IsValidStrict_m27CCDE9F0DDD213D9E2DB927B19D0BFD9D479234 (void);
// 0x00000270 System.Boolean System.IPv6AddressHelper::Parse(System.String,System.UInt16*,System.Int32,System.String&)
extern void IPv6AddressHelper_Parse_mEE8034CEF61D227A11D95A1D386EAFE1C415F35E (void);
// 0x00000271 System.String System.UncNameHelper::ParseCanonicalName(System.String,System.Int32,System.Int32,System.Boolean&)
extern void UncNameHelper_ParseCanonicalName_m223F0202F60AC6F3EFE9A61D9F28EBEBB77BAB86 (void);
// 0x00000272 System.Boolean System.UncNameHelper::IsValid(System.Char*,System.UInt16,System.Int32&,System.Boolean)
extern void UncNameHelper_IsValid_mFE0F1C598686A9A6280A1ABDA5ED55414DFD0F5F (void);
// 0x00000273 System.Void System.IOAsyncCallback::.ctor(System.Object,System.IntPtr)
extern void IOAsyncCallback__ctor_mDB00FA0892C32A7922EA6D83F9B99B8BA89B9DD3 (void);
// 0x00000274 System.Void System.IOAsyncCallback::Invoke(System.IOAsyncResult)
extern void IOAsyncCallback_Invoke_mA74FD3E451CC9609430B5FBF1B2D25EEBE2F32BC (void);
// 0x00000275 System.IAsyncResult System.IOAsyncCallback::BeginInvoke(System.IOAsyncResult,System.AsyncCallback,System.Object)
extern void IOAsyncCallback_BeginInvoke_m8143A1DCA75368D887F3FD709BE437367EEF47CF (void);
// 0x00000276 System.Void System.IOAsyncCallback::EndInvoke(System.IAsyncResult)
extern void IOAsyncCallback_EndInvoke_m74C12B3991995B2357E2B709F77BF6A40CF16008 (void);
// 0x00000277 System.Void System.IOAsyncResult::.ctor()
extern void IOAsyncResult__ctor_mAB5F06CC29315A4C2DE550E5F9967C9F7EC43642 (void);
// 0x00000278 System.Void System.IOAsyncResult::Init(System.AsyncCallback,System.Object)
extern void IOAsyncResult_Init_m150A44EDC255E27EE3FEB40A1556FD798BBBDAA6 (void);
// 0x00000279 System.Void System.IOAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern void IOAsyncResult__ctor_m15A5D72B261B81BE2F8F7DA53FC0E476A3F18591 (void);
// 0x0000027A System.AsyncCallback System.IOAsyncResult::get_AsyncCallback()
extern void IOAsyncResult_get_AsyncCallback_m28F2ACED98F5AA2F05882EAD17000A26FA3DD5BD (void);
// 0x0000027B System.Object System.IOAsyncResult::get_AsyncState()
extern void IOAsyncResult_get_AsyncState_m4BA9096036268EB3E29A69E75C3E80D995C7E9A4 (void);
// 0x0000027C System.Threading.WaitHandle System.IOAsyncResult::get_AsyncWaitHandle()
extern void IOAsyncResult_get_AsyncWaitHandle_m8BBC83F5F781EE26F35A122B25331DACEB4E558C (void);
// 0x0000027D System.Boolean System.IOAsyncResult::get_CompletedSynchronously()
extern void IOAsyncResult_get_CompletedSynchronously_m5E49A06643ED2276D2443D4732349973DEFA25B3 (void);
// 0x0000027E System.Void System.IOAsyncResult::set_CompletedSynchronously(System.Boolean)
extern void IOAsyncResult_set_CompletedSynchronously_m4A31A9B8FEFC22E25A8DA81A338A05287487D1D9 (void);
// 0x0000027F System.Boolean System.IOAsyncResult::get_IsCompleted()
extern void IOAsyncResult_get_IsCompleted_m22B40C642B779F95E0D4997A336040E89C492291 (void);
// 0x00000280 System.Void System.IOAsyncResult::set_IsCompleted(System.Boolean)
extern void IOAsyncResult_set_IsCompleted_m66D2E977BD61DC754E0AE7C7B9CB630345905183 (void);
// 0x00000281 System.Void System.IOAsyncResult::CompleteDisposed()
// 0x00000282 System.Void System.IOSelectorJob::.ctor(System.IOOperation,System.IOAsyncCallback,System.IOAsyncResult)
extern void IOSelectorJob__ctor_m8047B29992961582F968FFB25D95662807C44B59 (void);
// 0x00000283 System.Void System.IOSelectorJob::System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
extern void IOSelectorJob_System_Threading_IThreadPoolWorkItem_ExecuteWorkItem_m3CF49929004EB3B060E4ED5DB237C109145C9459 (void);
// 0x00000284 System.Void System.IOSelectorJob::System.Threading.IThreadPoolWorkItem.MarkAborted(System.Threading.ThreadAbortException)
extern void IOSelectorJob_System_Threading_IThreadPoolWorkItem_MarkAborted_m14D2CEA6CC4C9E471B27035A45F73D3040AF3044 (void);
// 0x00000285 System.Void System.IOSelectorJob::MarkDisposed()
extern void IOSelectorJob_MarkDisposed_m59C7B222B7A2C93E838F2515F89A9BFD16CB6435 (void);
// 0x00000286 System.Void System.IOSelector::Add(System.IntPtr,System.IOSelectorJob)
extern void IOSelector_Add_m27D61E1068D6587F2A99B3F2751C87040CCC2157 (void);
// 0x00000287 System.Int32 System.Platform::uname(System.IntPtr)
extern void Platform_uname_m02F26556CE32C3C6B69939290C5CD91037E7F596 (void);
// 0x00000288 System.Void System.Platform::CheckOS()
extern void Platform_CheckOS_m420CC4422F29D7C37BC562EECF3DCD99441E4431 (void);
// 0x00000289 System.Boolean System.Platform::get_IsMacOS()
extern void Platform_get_IsMacOS_m578F96E7F600ACB067A77C168399FA14246CB071 (void);
// 0x0000028A System.Void System.UriTypeConverter::.ctor()
extern void UriTypeConverter__ctor_mA17261C142F48B539C7255CC50CA95F730854EAB (void);
// 0x0000028B System.Boolean System.UriTypeConverter::CanConvert(System.Type)
extern void UriTypeConverter_CanConvert_mA0211689C50AF82982D1A12135FA0CFB8548A392 (void);
// 0x0000028C System.Void System.Timers.ElapsedEventHandler::.ctor(System.Object,System.IntPtr)
extern void ElapsedEventHandler__ctor_m2B99031158D1FA06EBE73A025249B5C1955441F5 (void);
// 0x0000028D System.Void System.Timers.ElapsedEventHandler::Invoke(System.Object,System.Timers.ElapsedEventArgs)
extern void ElapsedEventHandler_Invoke_m4D269892FBC3DE224ACE0FAFE97F2304BE8B6502 (void);
// 0x0000028E System.IAsyncResult System.Timers.ElapsedEventHandler::BeginInvoke(System.Object,System.Timers.ElapsedEventArgs,System.AsyncCallback,System.Object)
extern void ElapsedEventHandler_BeginInvoke_m49B03DB77CEF0033A832F756E40473AF6B8DFF66 (void);
// 0x0000028F System.Void System.Timers.ElapsedEventHandler::EndInvoke(System.IAsyncResult)
extern void ElapsedEventHandler_EndInvoke_m2B52C86D96354EB2F5321672A862EA081ED5F176 (void);
// 0x00000290 System.Void System.Timers.Timer::.ctor()
extern void Timer__ctor_m8CD6E716B068F1BC15FE81D56671AB0A6D347EBD (void);
// 0x00000291 System.Void System.Timers.Timer::.ctor(System.Double)
extern void Timer__ctor_m34AD8659F161E420C4349C7ED5B4E54F5516D971 (void);
// 0x00000292 System.Void System.Timers.Timer::set_AutoReset(System.Boolean)
extern void Timer_set_AutoReset_mE39B03D4F8032BB39B5D09CBF4A13CE660A16619 (void);
// 0x00000293 System.Boolean System.Timers.Timer::get_Enabled()
extern void Timer_get_Enabled_mB4FA1932A26F7AAFDEA0E1C33533305F1AF9ED17 (void);
// 0x00000294 System.Void System.Timers.Timer::set_Enabled(System.Boolean)
extern void Timer_set_Enabled_m03648A71FC47FCE77C7382AED892E09ABE6C034C (void);
// 0x00000295 System.Int32 System.Timers.Timer::CalculateRoundedInterval(System.Double,System.Boolean)
extern void Timer_CalculateRoundedInterval_m00FF2D1ED01902A4F1DB5AB4A6DFB23EBF7A2407 (void);
// 0x00000296 System.Void System.Timers.Timer::UpdateTimer()
extern void Timer_UpdateTimer_m708B8F81518FA1BF0B047046F102A5B67F92719D (void);
// 0x00000297 System.Void System.Timers.Timer::add_Elapsed(System.Timers.ElapsedEventHandler)
extern void Timer_add_Elapsed_m3FDC03401E31156441DE48618493181329C31A1F (void);
// 0x00000298 System.Void System.Timers.Timer::remove_Elapsed(System.Timers.ElapsedEventHandler)
extern void Timer_remove_Elapsed_m788B169776E02C6BF94629B970115CA4AE6D8569 (void);
// 0x00000299 System.ComponentModel.ISynchronizeInvoke System.Timers.Timer::get_SynchronizingObject()
extern void Timer_get_SynchronizingObject_m1E077BDCAC9C362AD952DD7D966D9F8DAD347BC7 (void);
// 0x0000029A System.Void System.Timers.Timer::Close()
extern void Timer_Close_m11E3B3DB0ED2E09E67EC10C07FA9646938552392 (void);
// 0x0000029B System.Void System.Timers.Timer::Dispose(System.Boolean)
extern void Timer_Dispose_mA3F3E99853D4604113DD2289E1B7C98120E6ABB2 (void);
// 0x0000029C System.Void System.Timers.Timer::Start()
extern void Timer_Start_mF5E17482246B10FB111BA69520B84E5FD9F244EF (void);
// 0x0000029D System.Void System.Timers.Timer::Stop()
extern void Timer_Stop_m3BEC8E056443E8AC4525023B7CD786C8F1234FF3 (void);
// 0x0000029E System.Void System.Timers.Timer::MyTimerCallback(System.Object)
extern void Timer_MyTimerCallback_m439027CED7BB35E94A00D2E07D58999FBFB0DC78 (void);
// 0x0000029F System.Void System.Timers.TimersDescriptionAttribute::.ctor(System.String)
extern void TimersDescriptionAttribute__ctor_m79C886D1E15294CD0ECA0CA84FD0760EC37995DE (void);
// 0x000002A0 System.String System.Timers.TimersDescriptionAttribute::get_Description()
extern void TimersDescriptionAttribute_get_Description_mB079536EE7888C80B599361A92823A1A4C81977B (void);
// 0x000002A1 System.Void System.Timers.ElapsedEventArgs::.ctor(System.DateTime)
extern void ElapsedEventArgs__ctor_m011632FEB3E0DD777827925EBD080DF47FD28087 (void);
// 0x000002A2 System.Void System.Text.RegularExpressions.Regex::.ctor()
extern void Regex__ctor_mEF92EBB8A321ACF8E6D952D4211D447970641A82 (void);
// 0x000002A3 System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern void Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E (void);
// 0x000002A4 System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
extern void Regex__ctor_m5BA9C047FEB3C93AD388668FA855CB1A63FB62A4 (void);
// 0x000002A5 System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions,System.TimeSpan,System.Boolean)
extern void Regex__ctor_m554F01ECFC788141B8015EDE403CFC57DCF65F36 (void);
// 0x000002A6 System.Void System.Text.RegularExpressions.Regex::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Regex__ctor_m6B76356476FAEC104F6088C71C9659B5023AC010 (void);
// 0x000002A7 System.Void System.Text.RegularExpressions.Regex::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Regex_System_Runtime_Serialization_ISerializable_GetObjectData_m2ADC8012FEA27096E98EB9126BBE2553EFBEADDD (void);
// 0x000002A8 System.Void System.Text.RegularExpressions.Regex::ValidateMatchTimeout(System.TimeSpan)
extern void Regex_ValidateMatchTimeout_m19BB5E905A2AA19DFF54B707454312C249E8EB1C (void);
// 0x000002A9 System.TimeSpan System.Text.RegularExpressions.Regex::InitDefaultMatchTimeout()
extern void Regex_InitDefaultMatchTimeout_m59F33C35089C47C54703189F8DF4D5600A33F2DC (void);
// 0x000002AA System.String System.Text.RegularExpressions.Regex::Escape(System.String)
extern void Regex_Escape_mC3330125317F24FD8A08D5320845F89055BB52B7 (void);
// 0x000002AB System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::get_Options()
extern void Regex_get_Options_m96441AFDEDDDDC9AD8A21C54C1C05B63581154E2 (void);
// 0x000002AC System.TimeSpan System.Text.RegularExpressions.Regex::get_MatchTimeout()
extern void Regex_get_MatchTimeout_mA525D5C25A1DADC3AF1913D6E5FA6D8F0208309A (void);
// 0x000002AD System.Boolean System.Text.RegularExpressions.Regex::get_RightToLeft()
extern void Regex_get_RightToLeft_m14807D1228A43D322B2F7E4D82613ADE0C2DCA77 (void);
// 0x000002AE System.String System.Text.RegularExpressions.Regex::ToString()
extern void Regex_ToString_m7D4EE035485F8A09613A6A7D171CAB7FE3FA68A1 (void);
// 0x000002AF System.String System.Text.RegularExpressions.Regex::GroupNameFromNumber(System.Int32)
extern void Regex_GroupNameFromNumber_mEC9EA505C734A60A6D10397D5ABB37EED1C244B9 (void);
// 0x000002B0 System.Int32 System.Text.RegularExpressions.Regex::GroupNumberFromName(System.String)
extern void Regex_GroupNumberFromName_mC7A0648278EF384E09A1A1731A0703981D0ED14B (void);
// 0x000002B1 System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String)
extern void Regex_IsMatch_mD4663DC55CBEF7B987A8B57186689664EDD047C4 (void);
// 0x000002B2 System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String,System.Text.RegularExpressions.RegexOptions,System.TimeSpan)
extern void Regex_IsMatch_m402142BA0715504CCC15EB3DEC02B24246F0FDAA (void);
// 0x000002B3 System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
extern void Regex_IsMatch_m872C1D85AC5BF891AC3C3FC789BBC4E2393FB859 (void);
// 0x000002B4 System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.Int32)
extern void Regex_IsMatch_mDDCAABF0AAA48842BD96EE728A7A6732D579DB6D (void);
// 0x000002B5 System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.Int32)
extern void Regex_Match_m172D74CF011CD3C89EA61D47BE7DEA1E689B5C7C (void);
// 0x000002B6 System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.String,System.Text.RegularExpressions.RegexOptions)
extern void Regex_Matches_m87C2C3261D534D232EBF4C723601CEB4389BA5D4 (void);
// 0x000002B7 System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.String,System.Text.RegularExpressions.RegexOptions,System.TimeSpan)
extern void Regex_Matches_m02E1BDBF159F02D0B3C32F508FB771940D651F99 (void);
// 0x000002B8 System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String)
extern void Regex_Matches_mA3CAFBD1A581E7409F82E96AB033F62A5F305465 (void);
// 0x000002B9 System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.Int32)
extern void Regex_Matches_mE1B9FFC45683E3446029B8449C3361CDA2BD1B15 (void);
// 0x000002BA System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String)
extern void Regex_Replace_mCD44330608E58AC19EA636370704ACE7D314C440 (void);
// 0x000002BB System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String,System.Text.RegularExpressions.RegexOptions,System.TimeSpan)
extern void Regex_Replace_mEF467DF273712918A52245B3147C33898B1B5EB5 (void);
// 0x000002BC System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String)
extern void Regex_Replace_m47C8C4AF6A7F1D1A2728F9ADA7791F4EABA49E2F (void);
// 0x000002BD System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.Int32,System.Int32)
extern void Regex_Replace_mDCC89468106F966C02DF2A0D7B56B305E95463EE (void);
// 0x000002BE System.Void System.Text.RegularExpressions.Regex::InitializeReferences()
extern void Regex_InitializeReferences_mE235C9E46D78418A5D0C2D20AD885CA08A7963CC (void);
// 0x000002BF System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Run(System.Boolean,System.Int32,System.String,System.Int32,System.Int32,System.Int32)
extern void Regex_Run_m021AFCB24F51C103A7E8D1D59805B47FD582E3FB (void);
// 0x000002C0 System.Text.RegularExpressions.CachedCodeEntry System.Text.RegularExpressions.Regex::LookupCachedAndUpdate(System.String)
extern void Regex_LookupCachedAndUpdate_m803B5B2AB140ACE54596DE9BA6D1F2489B1D93AC (void);
// 0x000002C1 System.Text.RegularExpressions.CachedCodeEntry System.Text.RegularExpressions.Regex::CacheCode(System.String)
extern void Regex_CacheCode_m32FF18EDE0B858DB864C27480A11C5A1F752D419 (void);
// 0x000002C2 System.Boolean System.Text.RegularExpressions.Regex::UseOptionR()
extern void Regex_UseOptionR_m17558F506D3A7513656679A8F3DEEA0C50AAE90A (void);
// 0x000002C3 System.Boolean System.Text.RegularExpressions.Regex::UseOptionInvariant()
extern void Regex_UseOptionInvariant_m82E216D16CB2DA12B8B8DAA67CC2BE6BF4DF2470 (void);
// 0x000002C4 System.Void System.Text.RegularExpressions.Regex::.cctor()
extern void Regex__cctor_m8FA16E8BF8000BA6AE0A429945CC4F7C5EFD9FF9 (void);
// 0x000002C5 System.Void System.Text.RegularExpressions.CachedCodeEntry::.ctor(System.String,System.Collections.Hashtable,System.String[],System.Text.RegularExpressions.RegexCode,System.Collections.Hashtable,System.Int32,System.Text.RegularExpressions.ExclusiveReference,System.Text.RegularExpressions.SharedReference)
extern void CachedCodeEntry__ctor_mFBEEE67EEFD35764488134D428A6BCABE54E52FC (void);
// 0x000002C6 System.Object System.Text.RegularExpressions.ExclusiveReference::Get()
extern void ExclusiveReference_Get_mA02D838F3B8772B83AD45D47E8C8275F8EA2A48A (void);
// 0x000002C7 System.Void System.Text.RegularExpressions.ExclusiveReference::Release(System.Object)
extern void ExclusiveReference_Release_m3D5A9BB7FFB13DBB21386F811936EFC6A358C1FC (void);
// 0x000002C8 System.Void System.Text.RegularExpressions.ExclusiveReference::.ctor()
extern void ExclusiveReference__ctor_m67E39E008F143F07C22A8424E051F6798B917089 (void);
// 0x000002C9 System.Object System.Text.RegularExpressions.SharedReference::Get()
extern void SharedReference_Get_mABBA2F0DE65F82D90AAE425020F14676F313EB68 (void);
// 0x000002CA System.Void System.Text.RegularExpressions.SharedReference::Cache(System.Object)
extern void SharedReference_Cache_mA43A19BCE25BC113C767B8C3531B7A096C3B6262 (void);
// 0x000002CB System.Void System.Text.RegularExpressions.SharedReference::.ctor()
extern void SharedReference__ctor_mCD9987FD08CB61180CE190A8DEF05E5AAF5C1087 (void);
// 0x000002CC System.Void System.Text.RegularExpressions.RegexBoyerMoore::.ctor(System.String,System.Boolean,System.Boolean,System.Globalization.CultureInfo)
extern void RegexBoyerMoore__ctor_m7CFF1BFAA30CB9EC30B0E48B3321366E2C6EBE92 (void);
// 0x000002CD System.Boolean System.Text.RegularExpressions.RegexBoyerMoore::MatchPattern(System.String,System.Int32)
extern void RegexBoyerMoore_MatchPattern_m244689CC527B9B9EFB200E94FCC3C9A8B9210543 (void);
// 0x000002CE System.Boolean System.Text.RegularExpressions.RegexBoyerMoore::IsMatch(System.String,System.Int32,System.Int32,System.Int32)
extern void RegexBoyerMoore_IsMatch_m37FDC206D86DD3C91A745BE15731677FE01F624B (void);
// 0x000002CF System.Int32 System.Text.RegularExpressions.RegexBoyerMoore::Scan(System.String,System.Int32,System.Int32,System.Int32)
extern void RegexBoyerMoore_Scan_m8C2A8FE0B6CFE8C7844AF8F2FEA79532935BAE43 (void);
// 0x000002D0 System.String System.Text.RegularExpressions.RegexBoyerMoore::ToString()
extern void RegexBoyerMoore_ToString_m3D7727E2CB60CF2BED7C907CDD2B1584BDF95A5A (void);
// 0x000002D1 System.Void System.Text.RegularExpressions.Capture::.ctor(System.String,System.Int32,System.Int32)
extern void Capture__ctor_m5FB71B7ADA66B2D3AD6B681BEE846F0FD62F11C3 (void);
// 0x000002D2 System.Int32 System.Text.RegularExpressions.Capture::get_Index()
extern void Capture_get_Index_m2CAB876E4DE6099F9696D76176BA7539FA0D5EE7 (void);
// 0x000002D3 System.Int32 System.Text.RegularExpressions.Capture::get_Length()
extern void Capture_get_Length_m3D1F26419BF69FEA9EE1AE0DB46069686C53A6DF (void);
// 0x000002D4 System.String System.Text.RegularExpressions.Capture::get_Value()
extern void Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A (void);
// 0x000002D5 System.String System.Text.RegularExpressions.Capture::ToString()
extern void Capture_ToString_mA44E5E7488551081E648C851ABFFB796430EE5C1 (void);
// 0x000002D6 System.String System.Text.RegularExpressions.Capture::GetOriginalString()
extern void Capture_GetOriginalString_mBC838C19CCFF585AA3C797AEA21A51CE0911E8B3 (void);
// 0x000002D7 System.String System.Text.RegularExpressions.Capture::GetLeftSubstring()
extern void Capture_GetLeftSubstring_m514D11C56BC032F7317285FE6E22C522A879E1AA (void);
// 0x000002D8 System.String System.Text.RegularExpressions.Capture::GetRightSubstring()
extern void Capture_GetRightSubstring_m5AA1B92DA426764A6919117B3F9FF9416E4D7776 (void);
// 0x000002D9 System.Void System.Text.RegularExpressions.Capture::.ctor()
extern void Capture__ctor_m72C4D0A93638E338515B280A289285A064F064C1 (void);
// 0x000002DA System.Void System.Text.RegularExpressions.CaptureCollection::.ctor(System.Text.RegularExpressions.Group)
extern void CaptureCollection__ctor_m51AA3D1F3F645DB9A6B9002B7A971F46D0DA0089 (void);
// 0x000002DB System.Object System.Text.RegularExpressions.CaptureCollection::get_SyncRoot()
extern void CaptureCollection_get_SyncRoot_m6E9AD5A5F870020F1F278897056D3FC8B13582FF (void);
// 0x000002DC System.Boolean System.Text.RegularExpressions.CaptureCollection::get_IsSynchronized()
extern void CaptureCollection_get_IsSynchronized_mC977AFC32D3D3CC4F11F61AD477AB2061705904A (void);
// 0x000002DD System.Int32 System.Text.RegularExpressions.CaptureCollection::get_Count()
extern void CaptureCollection_get_Count_mC83C2AE60F245A995ED192450BB0660E4BFC73DF (void);
// 0x000002DE System.Text.RegularExpressions.Capture System.Text.RegularExpressions.CaptureCollection::get_Item(System.Int32)
extern void CaptureCollection_get_Item_m38FB912D78566BF8D926F85ABF06770E70B87E7C (void);
// 0x000002DF System.Void System.Text.RegularExpressions.CaptureCollection::CopyTo(System.Array,System.Int32)
extern void CaptureCollection_CopyTo_m9066DD9E35382427D284FF3F9E35BD2C99160108 (void);
// 0x000002E0 System.Collections.IEnumerator System.Text.RegularExpressions.CaptureCollection::GetEnumerator()
extern void CaptureCollection_GetEnumerator_mE3F6547C20D9A0EEA8C201DE903E1828F2CC6F8C (void);
// 0x000002E1 System.Text.RegularExpressions.Capture System.Text.RegularExpressions.CaptureCollection::GetCapture(System.Int32)
extern void CaptureCollection_GetCapture_m52D3C11680567CEE2196B35A76D75A7FFEBF617A (void);
// 0x000002E2 System.Void System.Text.RegularExpressions.CaptureCollection::.ctor()
extern void CaptureCollection__ctor_m99E1DDC528A7C23B30B7BD3557C3044CBC7E6043 (void);
// 0x000002E3 System.Void System.Text.RegularExpressions.CaptureEnumerator::.ctor(System.Text.RegularExpressions.CaptureCollection)
extern void CaptureEnumerator__ctor_mA4C64A5B5D69EA1E38B87E0DCF6CC3B18670A03E (void);
// 0x000002E4 System.Boolean System.Text.RegularExpressions.CaptureEnumerator::MoveNext()
extern void CaptureEnumerator_MoveNext_m24B6099142A5DC82DCF5711D2F6FE9252C9603E6 (void);
// 0x000002E5 System.Object System.Text.RegularExpressions.CaptureEnumerator::get_Current()
extern void CaptureEnumerator_get_Current_m9C74AA50A043E53A02EF56778A97BD3498D312E8 (void);
// 0x000002E6 System.Text.RegularExpressions.Capture System.Text.RegularExpressions.CaptureEnumerator::get_Capture()
extern void CaptureEnumerator_get_Capture_m02F94CD692952EC04026014A1879FB058E9CB0F1 (void);
// 0x000002E7 System.Void System.Text.RegularExpressions.CaptureEnumerator::Reset()
extern void CaptureEnumerator_Reset_m8513DDF2EFB58C87469D6159F825DD162A60AA14 (void);
// 0x000002E8 System.Void System.Text.RegularExpressions.RegexCharClass::.cctor()
extern void RegexCharClass__cctor_m218BCDD65D4FE46615654F47FAF4C9B2970BE1B9 (void);
// 0x000002E9 System.Void System.Text.RegularExpressions.RegexCharClass::.ctor()
extern void RegexCharClass__ctor_m70685392EB3C5808958E20C99E045F33E21C8192 (void);
// 0x000002EA System.Void System.Text.RegularExpressions.RegexCharClass::.ctor(System.Boolean,System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexCharClass/SingleRange>,System.Text.StringBuilder,System.Text.RegularExpressions.RegexCharClass)
extern void RegexCharClass__ctor_m1751FAC691E10689BB486E5525B3D19F9523C5DB (void);
// 0x000002EB System.Boolean System.Text.RegularExpressions.RegexCharClass::get_CanMerge()
extern void RegexCharClass_get_CanMerge_mE5B4778068AA81EB1B7D426C48EF0C5CFEA0021B (void);
// 0x000002EC System.Void System.Text.RegularExpressions.RegexCharClass::set_Negate(System.Boolean)
extern void RegexCharClass_set_Negate_mC3CA41B098CF6B47BBF9101619F1AC4EAA3FD131 (void);
// 0x000002ED System.Void System.Text.RegularExpressions.RegexCharClass::AddChar(System.Char)
extern void RegexCharClass_AddChar_mDDCFF2A0510737DEAE68DEE7E1359AA7F07D0609 (void);
// 0x000002EE System.Void System.Text.RegularExpressions.RegexCharClass::AddCharClass(System.Text.RegularExpressions.RegexCharClass)
extern void RegexCharClass_AddCharClass_m1E139F8FDC0E1A33E143A3A413255F6D521F7EB8 (void);
// 0x000002EF System.Void System.Text.RegularExpressions.RegexCharClass::AddSet(System.String)
extern void RegexCharClass_AddSet_mEE9EBABD3A66153DE53095A2ADD9AAE04F908DC6 (void);
// 0x000002F0 System.Void System.Text.RegularExpressions.RegexCharClass::AddSubtraction(System.Text.RegularExpressions.RegexCharClass)
extern void RegexCharClass_AddSubtraction_m1FEE4A4FA29196BF22FBDD7EF3A263010E7661D9 (void);
// 0x000002F1 System.Void System.Text.RegularExpressions.RegexCharClass::AddRange(System.Char,System.Char)
extern void RegexCharClass_AddRange_mD9FB543DC3B128104DBCFEA0B2E672E8A8669C5A (void);
// 0x000002F2 System.Void System.Text.RegularExpressions.RegexCharClass::AddCategoryFromName(System.String,System.Boolean,System.Boolean,System.String)
extern void RegexCharClass_AddCategoryFromName_m53A239A7DACD3D5A676505E6E296C4AB999BBA4C (void);
// 0x000002F3 System.Void System.Text.RegularExpressions.RegexCharClass::AddCategory(System.String)
extern void RegexCharClass_AddCategory_m75BF8C842C362F4D910FCB2BA59678BB71153C24 (void);
// 0x000002F4 System.Void System.Text.RegularExpressions.RegexCharClass::AddLowercase(System.Globalization.CultureInfo)
extern void RegexCharClass_AddLowercase_m4FAE0AB13B3DB076F711B6B06C2E61F40A115B40 (void);
// 0x000002F5 System.Void System.Text.RegularExpressions.RegexCharClass::AddLowercaseRange(System.Char,System.Char,System.Globalization.CultureInfo)
extern void RegexCharClass_AddLowercaseRange_m0715BCBBB26E5000E2F87CC555DFFD1EF97414B1 (void);
// 0x000002F6 System.Void System.Text.RegularExpressions.RegexCharClass::AddWord(System.Boolean,System.Boolean)
extern void RegexCharClass_AddWord_m977499503E6B5EB99106DF69247EBE65DDE301D9 (void);
// 0x000002F7 System.Void System.Text.RegularExpressions.RegexCharClass::AddSpace(System.Boolean,System.Boolean)
extern void RegexCharClass_AddSpace_mA542E2916FEB49051A7AA0490704466DA85326BD (void);
// 0x000002F8 System.Void System.Text.RegularExpressions.RegexCharClass::AddDigit(System.Boolean,System.Boolean,System.String)
extern void RegexCharClass_AddDigit_m7B6D6AA1D10B8D29D004D94FC26F9CA53B3306D7 (void);
// 0x000002F9 System.Char System.Text.RegularExpressions.RegexCharClass::SingletonChar(System.String)
extern void RegexCharClass_SingletonChar_m287352E084BDC6F832C03E5D0B11417E6CAB272A (void);
// 0x000002FA System.Boolean System.Text.RegularExpressions.RegexCharClass::IsMergeable(System.String)
extern void RegexCharClass_IsMergeable_m9E85A3FD3138B8A6F49DD90B48B8BB0F6B5A465A (void);
// 0x000002FB System.Boolean System.Text.RegularExpressions.RegexCharClass::IsEmpty(System.String)
extern void RegexCharClass_IsEmpty_m9D3193CCDCCD224C399FDE450DA72AF2E4FF8DF8 (void);
// 0x000002FC System.Boolean System.Text.RegularExpressions.RegexCharClass::IsSingleton(System.String)
extern void RegexCharClass_IsSingleton_m23C6087CC66E79952EDBE19176814AB87CAB7E1E (void);
// 0x000002FD System.Boolean System.Text.RegularExpressions.RegexCharClass::IsSingletonInverse(System.String)
extern void RegexCharClass_IsSingletonInverse_mC94D851A51FFD4DB90BFD7ADFA9545EA81A96307 (void);
// 0x000002FE System.Boolean System.Text.RegularExpressions.RegexCharClass::IsSubtraction(System.String)
extern void RegexCharClass_IsSubtraction_m442D7EB160CC33766FA9365B1BC0B705BB9C328B (void);
// 0x000002FF System.Boolean System.Text.RegularExpressions.RegexCharClass::IsNegated(System.String)
extern void RegexCharClass_IsNegated_m44BA8DC6E87254581A644FC420A31FBB7DF5E09E (void);
// 0x00000300 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsECMAWordChar(System.Char)
extern void RegexCharClass_IsECMAWordChar_mCA8AA9207304F384138565DDE5D73C771F4D958D (void);
// 0x00000301 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsWordChar(System.Char)
extern void RegexCharClass_IsWordChar_m197106A86C557CC422DFD4B274D6703250941C8E (void);
// 0x00000302 System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInClass(System.Char,System.String)
extern void RegexCharClass_CharInClass_mBF20B9E1805FA10D4F807E7C185C5ACC45CA62D9 (void);
// 0x00000303 System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInClassRecursive(System.Char,System.String,System.Int32)
extern void RegexCharClass_CharInClassRecursive_mC6D3AC73C05863813119E511F0D948F771E7010D (void);
// 0x00000304 System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInClassInternal(System.Char,System.String,System.Int32,System.Int32,System.Int32)
extern void RegexCharClass_CharInClassInternal_m6BBDF7CB36ADDEB42D06E72FDBED23A0AF9430C4 (void);
// 0x00000305 System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInCategory(System.Char,System.String,System.Int32,System.Int32,System.Int32)
extern void RegexCharClass_CharInCategory_m348268E60F423E6ACC9D3BEB62781F88B3D51310 (void);
// 0x00000306 System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInCategoryGroup(System.Char,System.Globalization.UnicodeCategory,System.String,System.Int32&)
extern void RegexCharClass_CharInCategoryGroup_mE9288352C87A9BE8258AB76C0D4F4D6FEF470367 (void);
// 0x00000307 System.String System.Text.RegularExpressions.RegexCharClass::NegateCategory(System.String)
extern void RegexCharClass_NegateCategory_m072F53A0339D3A8CE4E78305ED63514C2D677D23 (void);
// 0x00000308 System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexCharClass::Parse(System.String)
extern void RegexCharClass_Parse_mB1B505BEBEFA212048DAA271B315B5AAC7EB3002 (void);
// 0x00000309 System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexCharClass::ParseRecursive(System.String,System.Int32)
extern void RegexCharClass_ParseRecursive_m6B44210D734A59140B5DC06D0EBBE1D2D5072E0A (void);
// 0x0000030A System.Int32 System.Text.RegularExpressions.RegexCharClass::RangeCount()
extern void RegexCharClass_RangeCount_mDA7393449D38496B2598E7EF912AADF9A14842DF (void);
// 0x0000030B System.String System.Text.RegularExpressions.RegexCharClass::ToStringClass()
extern void RegexCharClass_ToStringClass_mFC6754E97F014AFE4B5138AD5386E9C76D1D3CD7 (void);
// 0x0000030C System.Text.RegularExpressions.RegexCharClass/SingleRange System.Text.RegularExpressions.RegexCharClass::GetRangeAt(System.Int32)
extern void RegexCharClass_GetRangeAt_m92D3897D77D2AD15415BA0DE4E8FB4FBBFFD092C (void);
// 0x0000030D System.Void System.Text.RegularExpressions.RegexCharClass::Canonicalize()
extern void RegexCharClass_Canonicalize_mFD09C33130AD6323D1AFA7944B02DD68A5731A66 (void);
// 0x0000030E System.String System.Text.RegularExpressions.RegexCharClass::SetFromProperty(System.String,System.Boolean,System.String)
extern void RegexCharClass_SetFromProperty_mCE940B1239E86E18385BC053D40EA74DB6E444DF (void);
// 0x0000030F System.Void System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::.ctor(System.Char,System.Char,System.Int32,System.Int32)
extern void LowerCaseMapping__ctor_m0236442CB5098331DEAE7CACFCAC42741945D3E8 (void);
// 0x00000310 System.Int32 System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::Compare(System.Text.RegularExpressions.RegexCharClass/SingleRange,System.Text.RegularExpressions.RegexCharClass/SingleRange)
extern void SingleRangeComparer_Compare_m54BB5AFA11BF2F18A0C2F9491CE48E409D64AD3E (void);
// 0x00000311 System.Void System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::.ctor()
extern void SingleRangeComparer__ctor_mCEFF5ECE77E53783E5B8EAC98A5E194B6C743E73 (void);
// 0x00000312 System.Void System.Text.RegularExpressions.RegexCharClass/SingleRange::.ctor(System.Char,System.Char)
extern void SingleRange__ctor_m886247FFB10501E4CDDC575B221D8CD1BC85E3B6 (void);
// 0x00000313 System.Void System.Text.RegularExpressions.RegexCode::.ctor(System.Int32[],System.Collections.Generic.List`1<System.String>,System.Int32,System.Collections.Hashtable,System.Int32,System.Text.RegularExpressions.RegexBoyerMoore,System.Text.RegularExpressions.RegexPrefix,System.Int32,System.Boolean)
extern void RegexCode__ctor_mEFC64ECB52D0D2735F99AC16BD6355D3A59499CE (void);
// 0x00000314 System.Boolean System.Text.RegularExpressions.RegexCode::OpcodeBacktracks(System.Int32)
extern void RegexCode_OpcodeBacktracks_mCBEBDD502268A02F7BB9846369C3E2435368C5F3 (void);
// 0x00000315 System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexFCD::FirstChars(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_FirstChars_m63F666A528F1A007228C498E6171D05034863108 (void);
// 0x00000316 System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexFCD::Prefix(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_Prefix_m6C6A6E2E08A2481AB6428293EA6D13CC9A792A4B (void);
// 0x00000317 System.Int32 System.Text.RegularExpressions.RegexFCD::Anchors(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_Anchors_m7E51BE740C271CE73D07F392C6A8F0D2AC13B0DB (void);
// 0x00000318 System.Int32 System.Text.RegularExpressions.RegexFCD::AnchorFromType(System.Int32)
extern void RegexFCD_AnchorFromType_mF141C4E77ADA1F5E2961088C52C01C397B1A1381 (void);
// 0x00000319 System.Void System.Text.RegularExpressions.RegexFCD::.ctor()
extern void RegexFCD__ctor_m81A680DE9EE0A7D9CB3F0245E4B584033ED7C299 (void);
// 0x0000031A System.Void System.Text.RegularExpressions.RegexFCD::PushInt(System.Int32)
extern void RegexFCD_PushInt_m2C075ABCE35D8B5F3AE842D0A79BEBBDF53E79E6 (void);
// 0x0000031B System.Boolean System.Text.RegularExpressions.RegexFCD::IntIsEmpty()
extern void RegexFCD_IntIsEmpty_m4CFF914DAAAF04747FD11B2740D47CD4A41F7321 (void);
// 0x0000031C System.Int32 System.Text.RegularExpressions.RegexFCD::PopInt()
extern void RegexFCD_PopInt_m15845F98455FA8320FCC484AD15CE5A55B43EA14 (void);
// 0x0000031D System.Void System.Text.RegularExpressions.RegexFCD::PushFC(System.Text.RegularExpressions.RegexFC)
extern void RegexFCD_PushFC_mC4174F9014750978ADB35B3E45DE43D740070B92 (void);
// 0x0000031E System.Boolean System.Text.RegularExpressions.RegexFCD::FCIsEmpty()
extern void RegexFCD_FCIsEmpty_m3FFF61F7B0567B2B1ABA23377742A6D0AC9DF016 (void);
// 0x0000031F System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::PopFC()
extern void RegexFCD_PopFC_mE67FE0664971894C6935632FD634207784EAE43F (void);
// 0x00000320 System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::TopFC()
extern void RegexFCD_TopFC_mC9A10E7061B6283532AF800971B26A7660036AF6 (void);
// 0x00000321 System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::RegexFCFromRegexTree(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_RegexFCFromRegexTree_m280F32208540ABB3B88FBA4BC3F7FE6A7E02DA40 (void);
// 0x00000322 System.Void System.Text.RegularExpressions.RegexFCD::SkipChild()
extern void RegexFCD_SkipChild_mE3F09E85EC04B345584A4268DDE28029B1493ABD (void);
// 0x00000323 System.Void System.Text.RegularExpressions.RegexFCD::CalculateFC(System.Int32,System.Text.RegularExpressions.RegexNode,System.Int32)
extern void RegexFCD_CalculateFC_m11BAAB103351C64BA06B41B999C2BAD670E3579F (void);
// 0x00000324 System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.Boolean)
extern void RegexFC__ctor_mA39AF7098BC1D63C19E316121CC854AACBE4CB59 (void);
// 0x00000325 System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern void RegexFC__ctor_mA9779C6F7E4B0B76041B34DF40F2B6DBA82761E2 (void);
// 0x00000326 System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.String,System.Boolean,System.Boolean)
extern void RegexFC__ctor_m8693359483B2128560FC374872CFC1382A0605B2 (void);
// 0x00000327 System.Boolean System.Text.RegularExpressions.RegexFC::AddFC(System.Text.RegularExpressions.RegexFC,System.Boolean)
extern void RegexFC_AddFC_m515C7808755FE89185D85B3C39184C2425B44629 (void);
// 0x00000328 System.String System.Text.RegularExpressions.RegexFC::GetFirstChars(System.Globalization.CultureInfo)
extern void RegexFC_GetFirstChars_mA929BEEE9D6186588C518891EB8CB416C31060FC (void);
// 0x00000329 System.Boolean System.Text.RegularExpressions.RegexFC::IsCaseInsensitive()
extern void RegexFC_IsCaseInsensitive_m522494DC3CF0587D7B65D57B4C14E1428A2E34CA (void);
// 0x0000032A System.Void System.Text.RegularExpressions.RegexPrefix::.ctor(System.String,System.Boolean)
extern void RegexPrefix__ctor_mC34F48A63A8A04942930B9FE236636E2AA745B24 (void);
// 0x0000032B System.String System.Text.RegularExpressions.RegexPrefix::get_Prefix()
extern void RegexPrefix_get_Prefix_m6806C1EEE5B8973606B320A9C4CD5A9E91466F34 (void);
// 0x0000032C System.Boolean System.Text.RegularExpressions.RegexPrefix::get_CaseInsensitive()
extern void RegexPrefix_get_CaseInsensitive_mB4CF8FBFABE26F206AF6324A0C87DFB34C051A95 (void);
// 0x0000032D System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexPrefix::get_Empty()
extern void RegexPrefix_get_Empty_m53283D80646B03BD2D0D2871226D6BC451B8CB01 (void);
// 0x0000032E System.Void System.Text.RegularExpressions.RegexPrefix::.cctor()
extern void RegexPrefix__cctor_m778851BD52EE0907A873BDF7B700BC9A536E8332 (void);
// 0x0000032F System.Void System.Text.RegularExpressions.Group::.ctor(System.String,System.Int32[],System.Int32,System.String)
extern void Group__ctor_m5FE82FDB5B4EE244EB46909ACC099806555EB32F (void);
// 0x00000330 System.Boolean System.Text.RegularExpressions.Group::get_Success()
extern void Group_get_Success_m917CA7077102642C3C24106F13B9F5F5D5130C1B (void);
// 0x00000331 System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::get_Captures()
extern void Group_get_Captures_mA6B7E2F62B90C44E74CC65F37A78FD1CFA1C06EF (void);
// 0x00000332 System.Void System.Text.RegularExpressions.Group::.cctor()
extern void Group__cctor_m5050F4FF6F99CD7AAEB74F9962BEED4B387CB72D (void);
// 0x00000333 System.Void System.Text.RegularExpressions.Group::.ctor()
extern void Group__ctor_m2EEFD01EAA4B135ED614049B00261D0736EF8107 (void);
// 0x00000334 System.Void System.Text.RegularExpressions.GroupCollection::.ctor(System.Text.RegularExpressions.Match,System.Collections.Hashtable)
extern void GroupCollection__ctor_m7DC940E706407EAE4AC45F297F021CD11F26CF6A (void);
// 0x00000335 System.Object System.Text.RegularExpressions.GroupCollection::get_SyncRoot()
extern void GroupCollection_get_SyncRoot_m9D32B2F5AE2C8968E660B524D678B806C79763E0 (void);
// 0x00000336 System.Boolean System.Text.RegularExpressions.GroupCollection::get_IsSynchronized()
extern void GroupCollection_get_IsSynchronized_m05B4F9773FBA0A24E9F851FC590ACF60F9DA0FAB (void);
// 0x00000337 System.Int32 System.Text.RegularExpressions.GroupCollection::get_Count()
extern void GroupCollection_get_Count_mAECC6108C576E7C3F0F6B8E0F9F0D5B742467A43 (void);
// 0x00000338 System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.Int32)
extern void GroupCollection_get_Item_mC96099D0350BD4846B66097F31D6B4DDDFE1CA97 (void);
// 0x00000339 System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.String)
extern void GroupCollection_get_Item_m58F451BF6490EB64CA9C1A05844A790967166A6D (void);
// 0x0000033A System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::GetGroup(System.Int32)
extern void GroupCollection_GetGroup_m8824F1E25823F06F2B060E64152E8AC3B8300236 (void);
// 0x0000033B System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::GetGroupImpl(System.Int32)
extern void GroupCollection_GetGroupImpl_mA161F33BBD5BC291025BAAD97458E02422B76348 (void);
// 0x0000033C System.Void System.Text.RegularExpressions.GroupCollection::CopyTo(System.Array,System.Int32)
extern void GroupCollection_CopyTo_mEBB026E2CE653D4797B1F3441D3CA1AF2FE4A06E (void);
// 0x0000033D System.Collections.IEnumerator System.Text.RegularExpressions.GroupCollection::GetEnumerator()
extern void GroupCollection_GetEnumerator_m2FA24AD194C005DEE73F1D16874A479728813DA9 (void);
// 0x0000033E System.Void System.Text.RegularExpressions.GroupCollection::.ctor()
extern void GroupCollection__ctor_m0E2105EC5E4078F03D98853239AC10219BFAE78B (void);
// 0x0000033F System.Void System.Text.RegularExpressions.GroupEnumerator::.ctor(System.Text.RegularExpressions.GroupCollection)
extern void GroupEnumerator__ctor_mFE577B10768A029DBC40A368D8A48B8F1D5479B2 (void);
// 0x00000340 System.Boolean System.Text.RegularExpressions.GroupEnumerator::MoveNext()
extern void GroupEnumerator_MoveNext_m1A95E15B99089341CC06EC0335B4444B43074D82 (void);
// 0x00000341 System.Object System.Text.RegularExpressions.GroupEnumerator::get_Current()
extern void GroupEnumerator_get_Current_m3DBEB28D71BCD80F013B392B8FB3FEC88A372206 (void);
// 0x00000342 System.Text.RegularExpressions.Capture System.Text.RegularExpressions.GroupEnumerator::get_Capture()
extern void GroupEnumerator_get_Capture_mA37A878E91115550F8F08147CE2CB6A30EBF602D (void);
// 0x00000343 System.Void System.Text.RegularExpressions.GroupEnumerator::Reset()
extern void GroupEnumerator_Reset_mCC8BAEE9E46DB67F36E1F4A49A38E87A8FEE8C22 (void);
// 0x00000344 System.Void System.Text.RegularExpressions.RegexInterpreter::.ctor(System.Text.RegularExpressions.RegexCode,System.Globalization.CultureInfo)
extern void RegexInterpreter__ctor_m58E5C9B14F78D108FC9277924C4A5DCC73AE832A (void);
// 0x00000345 System.Void System.Text.RegularExpressions.RegexInterpreter::InitTrackCount()
extern void RegexInterpreter_InitTrackCount_mF85CD3AACD0F8EFFF2D54ECE67DFA073503D978E (void);
// 0x00000346 System.Void System.Text.RegularExpressions.RegexInterpreter::Advance()
extern void RegexInterpreter_Advance_mC3549A945557AD11D80890E0DCBC6D53860A97FE (void);
// 0x00000347 System.Void System.Text.RegularExpressions.RegexInterpreter::Advance(System.Int32)
extern void RegexInterpreter_Advance_m47537FC4AB2CB92D2D9100C755D936DED76B03EE (void);
// 0x00000348 System.Void System.Text.RegularExpressions.RegexInterpreter::Goto(System.Int32)
extern void RegexInterpreter_Goto_mAB873EAF14CC58B684C91137D6E8817EB47FAB48 (void);
// 0x00000349 System.Void System.Text.RegularExpressions.RegexInterpreter::Textto(System.Int32)
extern void RegexInterpreter_Textto_m874B113DFF6381DFC1BF8A8F7E6D79B819CF06AE (void);
// 0x0000034A System.Void System.Text.RegularExpressions.RegexInterpreter::Trackto(System.Int32)
extern void RegexInterpreter_Trackto_m00A652840F4C1B3FE74527A910FB6BDE144F4CD2 (void);
// 0x0000034B System.Int32 System.Text.RegularExpressions.RegexInterpreter::Textstart()
extern void RegexInterpreter_Textstart_m635CAE9587982E8C88F98F7374460E742A7F5953 (void);
// 0x0000034C System.Int32 System.Text.RegularExpressions.RegexInterpreter::Textpos()
extern void RegexInterpreter_Textpos_mCCC8ABAE83D37BA6F060242E1ECAC7D91D8910F5 (void);
// 0x0000034D System.Int32 System.Text.RegularExpressions.RegexInterpreter::Trackpos()
extern void RegexInterpreter_Trackpos_mDA7F7A3B4A02FC45B46AF1FD47778E0C0C9A5F64 (void);
// 0x0000034E System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush()
extern void RegexInterpreter_TrackPush_mBE985076C7632B82D188C6484BD6C7980C392379 (void);
// 0x0000034F System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32)
extern void RegexInterpreter_TrackPush_m2DA2DB51ACD26004F4FB8B8D80EEC20D4AA14C49 (void);
// 0x00000350 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32,System.Int32)
extern void RegexInterpreter_TrackPush_m874CB8F853DD4EB0FAD4A2DEF9CC2EAC3DD5BA5E (void);
// 0x00000351 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32,System.Int32,System.Int32)
extern void RegexInterpreter_TrackPush_mEF674B57E2A8FC7E555803DE53EEE076EC0E5E75 (void);
// 0x00000352 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush2(System.Int32)
extern void RegexInterpreter_TrackPush2_m490912B4D5B2E19FA2739EA0211FA91DA6423634 (void);
// 0x00000353 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush2(System.Int32,System.Int32)
extern void RegexInterpreter_TrackPush2_m5B36C2B678F621B4BCF26D038E5AE40A55BC5884 (void);
// 0x00000354 System.Void System.Text.RegularExpressions.RegexInterpreter::Backtrack()
extern void RegexInterpreter_Backtrack_m30590074E633FAA50401BC2EFA74F6D6FF5371DA (void);
// 0x00000355 System.Void System.Text.RegularExpressions.RegexInterpreter::SetOperator(System.Int32)
extern void RegexInterpreter_SetOperator_m6F39391186CA54646ABAF1A8D3584533261E6A3F (void);
// 0x00000356 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPop()
extern void RegexInterpreter_TrackPop_m8E31A4201CD48C0888BE0DB6EB317036E7E7C4D8 (void);
// 0x00000357 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPop(System.Int32)
extern void RegexInterpreter_TrackPop_mBE47D7E983B6BD0C45F7F376AA0272B0827AB4E4 (void);
// 0x00000358 System.Int32 System.Text.RegularExpressions.RegexInterpreter::TrackPeek()
extern void RegexInterpreter_TrackPeek_mFB63C0E3D25EEEEC1DBD5FF5601E59C6F0414396 (void);
// 0x00000359 System.Int32 System.Text.RegularExpressions.RegexInterpreter::TrackPeek(System.Int32)
extern void RegexInterpreter_TrackPeek_m946313A941F42F58C555593B8CD2C00E702400AB (void);
// 0x0000035A System.Void System.Text.RegularExpressions.RegexInterpreter::StackPush(System.Int32)
extern void RegexInterpreter_StackPush_m488F7B4FABE6E66EF8D28F070303C7B344A9217F (void);
// 0x0000035B System.Void System.Text.RegularExpressions.RegexInterpreter::StackPush(System.Int32,System.Int32)
extern void RegexInterpreter_StackPush_m46ADD790ADB62A6FFFC56ACC93A5BFB11578A45B (void);
// 0x0000035C System.Void System.Text.RegularExpressions.RegexInterpreter::StackPop()
extern void RegexInterpreter_StackPop_m28CD98B18B8010F9398FAB5A1C0CB3E220FB0A13 (void);
// 0x0000035D System.Void System.Text.RegularExpressions.RegexInterpreter::StackPop(System.Int32)
extern void RegexInterpreter_StackPop_m1DBCCF39146C4C13FEBABCF7139CDAF89AB339ED (void);
// 0x0000035E System.Int32 System.Text.RegularExpressions.RegexInterpreter::StackPeek()
extern void RegexInterpreter_StackPeek_mE0B2D861B2A747936538EC83EDEBDC8C6424E3D0 (void);
// 0x0000035F System.Int32 System.Text.RegularExpressions.RegexInterpreter::StackPeek(System.Int32)
extern void RegexInterpreter_StackPeek_mFA8013A28365F539B9083C906BEB80008AE281A0 (void);
// 0x00000360 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Operator()
extern void RegexInterpreter_Operator_m9C06EB53FFBB6722B2ACB95057BC30E0A9F05DFF (void);
// 0x00000361 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Operand(System.Int32)
extern void RegexInterpreter_Operand_mB8AED0E2B8222A584A61D313DE9AB475724F50A0 (void);
// 0x00000362 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Leftchars()
extern void RegexInterpreter_Leftchars_mB50E0C06B5C05F48BBA69D21BFB6382705C696C4 (void);
// 0x00000363 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Rightchars()
extern void RegexInterpreter_Rightchars_m2DEB5D856E0BEC8CFE39B2546B504CB2FCC1DC2C (void);
// 0x00000364 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Bump()
extern void RegexInterpreter_Bump_m45DF8CEBA6E19FE27E10A87C89E5B2001FB37E85 (void);
// 0x00000365 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Forwardchars()
extern void RegexInterpreter_Forwardchars_mFD54A946FE00B2613D92F1CCAE7B53CDB4312420 (void);
// 0x00000366 System.Char System.Text.RegularExpressions.RegexInterpreter::Forwardcharnext()
extern void RegexInterpreter_Forwardcharnext_m39C5E9B8B3EDC556CE6A61C1957ACFD5F8ED025E (void);
// 0x00000367 System.Boolean System.Text.RegularExpressions.RegexInterpreter::Stringmatch(System.String)
extern void RegexInterpreter_Stringmatch_m81EA1913981000A8D944B5DA757813058F0F4ABD (void);
// 0x00000368 System.Boolean System.Text.RegularExpressions.RegexInterpreter::Refmatch(System.Int32,System.Int32)
extern void RegexInterpreter_Refmatch_m5F44A3C001E919895A5A2988F16187069E45D75B (void);
// 0x00000369 System.Void System.Text.RegularExpressions.RegexInterpreter::Backwardnext()
extern void RegexInterpreter_Backwardnext_m68F8015F83EA7DEBBDB6405A6EF9092E814D88EC (void);
// 0x0000036A System.Char System.Text.RegularExpressions.RegexInterpreter::CharAt(System.Int32)
extern void RegexInterpreter_CharAt_mBC8ABA0BE4AC926938A4A4F6DEFB89437AEC3F6E (void);
// 0x0000036B System.Boolean System.Text.RegularExpressions.RegexInterpreter::FindFirstChar()
extern void RegexInterpreter_FindFirstChar_m3112B4D64BF317FBEC9CD8DAE429A4199A3F6A93 (void);
// 0x0000036C System.Void System.Text.RegularExpressions.RegexInterpreter::Go()
extern void RegexInterpreter_Go_m32838D966B426A327995246847A272491F3359F2 (void);
// 0x0000036D System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::get_Empty()
extern void Match_get_Empty_m9A41D555DBBAA2134C3A722D16FB985E715FE31F (void);
// 0x0000036E System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Int32,System.String,System.Int32,System.Int32,System.Int32)
extern void Match__ctor_mB01F9576125C09E5DFAD425523FF0C0FF16000A5 (void);
// 0x0000036F System.Void System.Text.RegularExpressions.Match::Reset(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32,System.Int32)
extern void Match_Reset_m6C8293B576685831F43AACF255D2DAC5898662DB (void);
// 0x00000370 System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups()
extern void Match_get_Groups_m4FB7AAC1E08BF8710992FA9C07A8357115EFE6D2 (void);
// 0x00000371 System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::NextMatch()
extern void Match_NextMatch_m6C6550D7A4885CADF936BF856E0BDE28FAD77A63 (void);
// 0x00000372 System.String System.Text.RegularExpressions.Match::GroupToStringImpl(System.Int32)
extern void Match_GroupToStringImpl_mD4E730B7A61C21307E0047CD541968871B361067 (void);
// 0x00000373 System.String System.Text.RegularExpressions.Match::LastGroupToStringImpl()
extern void Match_LastGroupToStringImpl_mA8B7094C2B4A31D5ABBDCF575302E6731A2D3E05 (void);
// 0x00000374 System.Void System.Text.RegularExpressions.Match::AddMatch(System.Int32,System.Int32,System.Int32)
extern void Match_AddMatch_m5B128123CBA71A35E471CFF1AAE1013A7722DFA2 (void);
// 0x00000375 System.Void System.Text.RegularExpressions.Match::BalanceMatch(System.Int32)
extern void Match_BalanceMatch_mF04DF97CE9E41B8A85C54212B43B5DF381218BE5 (void);
// 0x00000376 System.Void System.Text.RegularExpressions.Match::RemoveMatch(System.Int32)
extern void Match_RemoveMatch_mF21E3166D8D461D44952E96C9CD7CFA8E776EA5F (void);
// 0x00000377 System.Boolean System.Text.RegularExpressions.Match::IsMatched(System.Int32)
extern void Match_IsMatched_m1491C04ADB99BCB81D84BC5D85C31B4F45965C3C (void);
// 0x00000378 System.Int32 System.Text.RegularExpressions.Match::MatchIndex(System.Int32)
extern void Match_MatchIndex_mFDD766CF18E4F508DEE3E2E24F6046DE66D1B808 (void);
// 0x00000379 System.Int32 System.Text.RegularExpressions.Match::MatchLength(System.Int32)
extern void Match_MatchLength_m9D6E7D98CC4B2EBE26070D3A8D88428B515D417A (void);
// 0x0000037A System.Void System.Text.RegularExpressions.Match::Tidy(System.Int32)
extern void Match_Tidy_mA9C76513AF185747A5F9E73790701ABD3D2B09A4 (void);
// 0x0000037B System.Void System.Text.RegularExpressions.Match::.cctor()
extern void Match__cctor_m7256E63C1A15FF54906616D058557E92802FBA95 (void);
// 0x0000037C System.Void System.Text.RegularExpressions.Match::.ctor()
extern void Match__ctor_mC2AE5A1EBC553A0E6BBA59603674183FF5E80CCC (void);
// 0x0000037D System.Void System.Text.RegularExpressions.MatchSparse::.ctor(System.Text.RegularExpressions.Regex,System.Collections.Hashtable,System.Int32,System.String,System.Int32,System.Int32,System.Int32)
extern void MatchSparse__ctor_mA6CA132A5DA7D9ADED1D0FF1D7AD786109D33624 (void);
// 0x0000037E System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.MatchSparse::get_Groups()
extern void MatchSparse_get_Groups_mAF4486FB3D52F65427B855B5F410192543B99DB3 (void);
// 0x0000037F System.Void System.Text.RegularExpressions.MatchCollection::.ctor(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32,System.Int32)
extern void MatchCollection__ctor_mB2FA3F30789018215F0D4C5FFF00379F5415AC37 (void);
// 0x00000380 System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::GetMatch(System.Int32)
extern void MatchCollection_GetMatch_m7C693363C6B2100ED58BD5B85C3CCCE1D858E342 (void);
// 0x00000381 System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count()
extern void MatchCollection_get_Count_m1476DA408DBD9D6EAD231F2AF1320E0990CF287D (void);
// 0x00000382 System.Object System.Text.RegularExpressions.MatchCollection::get_SyncRoot()
extern void MatchCollection_get_SyncRoot_m5E339388E782280CC9BBED40986AA360CA5BCDCC (void);
// 0x00000383 System.Boolean System.Text.RegularExpressions.MatchCollection::get_IsSynchronized()
extern void MatchCollection_get_IsSynchronized_m7A91B1D2CA86E9CF46615BAEE642BD04637BE5DB (void);
// 0x00000384 System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32)
extern void MatchCollection_get_Item_mF9C9E9247F1F04D8CEC0E14AC4BA3CEEAC1A2A8A (void);
// 0x00000385 System.Void System.Text.RegularExpressions.MatchCollection::CopyTo(System.Array,System.Int32)
extern void MatchCollection_CopyTo_mD72903F019CA31813B8A842A18CA4761484CFB21 (void);
// 0x00000386 System.Collections.IEnumerator System.Text.RegularExpressions.MatchCollection::GetEnumerator()
extern void MatchCollection_GetEnumerator_mB4DEC015B69A67D38E6F7E14D63C64047BDCF76F (void);
// 0x00000387 System.Void System.Text.RegularExpressions.MatchCollection::.cctor()
extern void MatchCollection__cctor_mE9CB46F2626FF50D3337193BB55A1B6C0BFC44BC (void);
// 0x00000388 System.Void System.Text.RegularExpressions.MatchCollection::.ctor()
extern void MatchCollection__ctor_mA95FE66298AA5AE593EE40B3A7ED76F1011829C1 (void);
// 0x00000389 System.Void System.Text.RegularExpressions.MatchEnumerator::.ctor(System.Text.RegularExpressions.MatchCollection)
extern void MatchEnumerator__ctor_mAC068C23A5E2366435764453E8E80C8B5803AD31 (void);
// 0x0000038A System.Boolean System.Text.RegularExpressions.MatchEnumerator::MoveNext()
extern void MatchEnumerator_MoveNext_m1088424FEAD89A2693A0CF9200041A5C5B9DC052 (void);
// 0x0000038B System.Object System.Text.RegularExpressions.MatchEnumerator::get_Current()
extern void MatchEnumerator_get_Current_m2FB7B386869A6C4F5EC5327603EF79E8135BDEC1 (void);
// 0x0000038C System.Void System.Text.RegularExpressions.MatchEnumerator::Reset()
extern void MatchEnumerator_Reset_m70B97522C32C01A38648D591B8BA3A8990186311 (void);
// 0x0000038D System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor(System.String,System.String,System.TimeSpan)
extern void RegexMatchTimeoutException__ctor_m157F8CEF5FDAC71E58B04773B3169BA093423866 (void);
// 0x0000038E System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor()
extern void RegexMatchTimeoutException__ctor_mC0DB6ADBF5008FD1DF623CE94E68C9F1BB875DF9 (void);
// 0x0000038F System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void RegexMatchTimeoutException__ctor_mA31059F9B50F01A0C9BEF9081CC22B0C0C332F6E (void);
// 0x00000390 System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void RegexMatchTimeoutException_System_Runtime_Serialization_ISerializable_GetObjectData_m32865670AB86CF7F44CBA24B649C5FC3035B6609 (void);
// 0x00000391 System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::Init()
extern void RegexMatchTimeoutException_Init_m6D59100CBBC91F436D6878CDF3AC18BD86DC2787 (void);
// 0x00000392 System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::Init(System.String,System.String,System.TimeSpan)
extern void RegexMatchTimeoutException_Init_mA320EBB663A318B596D95349F5F0DE92623D5C1C (void);
// 0x00000393 System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions)
extern void RegexNode__ctor_mD8966EDCD7AA48AC8AAD5B156C513671843F6D49 (void);
// 0x00000394 System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Char)
extern void RegexNode__ctor_m2E85CE2AB0812A86EE61448DEACBA68E329D3325 (void);
// 0x00000395 System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.String)
extern void RegexNode__ctor_m5A3AA31155A359CC8462AF0AB55DE0D5B7C435B4 (void);
// 0x00000396 System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Int32)
extern void RegexNode__ctor_mD4B2FB6044880AC4DDF035FFE6254A13807A34BC (void);
// 0x00000397 System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Int32,System.Int32)
extern void RegexNode__ctor_m0E000C0421213F15341C9B74C3ADA8F4963CA511 (void);
// 0x00000398 System.Boolean System.Text.RegularExpressions.RegexNode::UseOptionR()
extern void RegexNode_UseOptionR_mBD8EBE8396F51A7DA491FFFAFDB09A148F62E484 (void);
// 0x00000399 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReverseLeft()
extern void RegexNode_ReverseLeft_m8507E98BFA6C9F78200B8297811C3EE815724A19 (void);
// 0x0000039A System.Void System.Text.RegularExpressions.RegexNode::MakeRep(System.Int32,System.Int32,System.Int32)
extern void RegexNode_MakeRep_m23A10A13942B83BDF596DE595718B9BD701E8A60 (void);
// 0x0000039B System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::Reduce()
extern void RegexNode_Reduce_m2EAE287E7E9FE547B38FEC40BE3E316920B53471 (void);
// 0x0000039C System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::StripEnation(System.Int32)
extern void RegexNode_StripEnation_m1DF9C3A86A4B73CCE7F86C2D121DCACED3DCC4C7 (void);
// 0x0000039D System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceGroup()
extern void RegexNode_ReduceGroup_m3067AEB5BDEF6951832CB84B2F4857848E898236 (void);
// 0x0000039E System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceRep()
extern void RegexNode_ReduceRep_mA3BDCA09CFB2DFB083CF9BEA7E9A64DB27F6B94E (void);
// 0x0000039F System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceSet()
extern void RegexNode_ReduceSet_m0B5361189FC2E71384DA9A107969CB401FD6ED01 (void);
// 0x000003A0 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceAlternation()
extern void RegexNode_ReduceAlternation_m08295B9D7A82E1D1CB97B716C068F7D740C2E18F (void);
// 0x000003A1 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceConcatenation()
extern void RegexNode_ReduceConcatenation_mFE1E6366025CB9A114C275B74193CF62BC0AF903 (void);
// 0x000003A2 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::MakeQuantifier(System.Boolean,System.Int32,System.Int32)
extern void RegexNode_MakeQuantifier_mB84818E8D93FEB4AE45E224C09EE46BE238ECD20 (void);
// 0x000003A3 System.Void System.Text.RegularExpressions.RegexNode::AddChild(System.Text.RegularExpressions.RegexNode)
extern void RegexNode_AddChild_mD5F9848916D55A0DF36CE5460D149E1024005C85 (void);
// 0x000003A4 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::Child(System.Int32)
extern void RegexNode_Child_mAE38F2EF7289FE455686B7BEEF81C39A9D25E960 (void);
// 0x000003A5 System.Int32 System.Text.RegularExpressions.RegexNode::ChildCount()
extern void RegexNode_ChildCount_m15D92C9740BA92B2E78B392F7215B8D7D0242172 (void);
// 0x000003A6 System.Int32 System.Text.RegularExpressions.RegexNode::Type()
extern void RegexNode_Type_m3C72321B307C77AF12F294F366D57D2C77832F27 (void);
// 0x000003A7 System.Text.RegularExpressions.RegexTree System.Text.RegularExpressions.RegexParser::Parse(System.String,System.Text.RegularExpressions.RegexOptions)
extern void RegexParser_Parse_mCBCAFB2D38EC68B245352E8DE699FE0F3C973A60 (void);
// 0x000003A8 System.Text.RegularExpressions.RegexReplacement System.Text.RegularExpressions.RegexParser::ParseReplacement(System.String,System.Collections.Hashtable,System.Int32,System.Collections.Hashtable,System.Text.RegularExpressions.RegexOptions)
extern void RegexParser_ParseReplacement_mCA7BD2139851BCD09934067473195341E2F19E1F (void);
// 0x000003A9 System.String System.Text.RegularExpressions.RegexParser::Escape(System.String)
extern void RegexParser_Escape_m2FECFE2501B55F7AF6B1FAE4AD8A59806545ED09 (void);
// 0x000003AA System.Void System.Text.RegularExpressions.RegexParser::.ctor(System.Globalization.CultureInfo)
extern void RegexParser__ctor_m9058798A864D0200A16F15E995B6B9AA8A189E58 (void);
// 0x000003AB System.Void System.Text.RegularExpressions.RegexParser::SetPattern(System.String)
extern void RegexParser_SetPattern_mA620864CAC4211AE79F80DF9F19B2A40863E9DBE (void);
// 0x000003AC System.Void System.Text.RegularExpressions.RegexParser::Reset(System.Text.RegularExpressions.RegexOptions)
extern void RegexParser_Reset_m1D0DAF8942A2A980D3944600893CEF969053F2EE (void);
// 0x000003AD System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanRegex()
extern void RegexParser_ScanRegex_mE0EF23CF2A462063119E2D5046512A1960A11718 (void);
// 0x000003AE System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanReplacement()
extern void RegexParser_ScanReplacement_mB61772A7FA7B76D522BFA9639F96962EE197747A (void);
// 0x000003AF System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexParser::ScanCharClass(System.Boolean)
extern void RegexParser_ScanCharClass_mD4A465FEDA75BF5820D5B0C9A95EAEA3D99DB831 (void);
// 0x000003B0 System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexParser::ScanCharClass(System.Boolean,System.Boolean)
extern void RegexParser_ScanCharClass_mADFDEFF75B3C880E692ED8411B7154CF3130401E (void);
// 0x000003B1 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanGroupOpen()
extern void RegexParser_ScanGroupOpen_m1DE2AA1EFA786C58869EF4025705449871F33D59 (void);
// 0x000003B2 System.Void System.Text.RegularExpressions.RegexParser::ScanBlank()
extern void RegexParser_ScanBlank_m2ACFA5BAF5FA14554D74C5DE4FE3893483D6F33D (void);
// 0x000003B3 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanBackslash()
extern void RegexParser_ScanBackslash_m2598C224286A4826DEB2D1189CCB73C9A363DFBD (void);
// 0x000003B4 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanBasicBackslash()
extern void RegexParser_ScanBasicBackslash_m3DAD88630B04CE794414919D65F325197CB15C3D (void);
// 0x000003B5 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanDollar()
extern void RegexParser_ScanDollar_mA9E832CADC410B1ECBF303405F955980903D2DAC (void);
// 0x000003B6 System.String System.Text.RegularExpressions.RegexParser::ScanCapname()
extern void RegexParser_ScanCapname_mC34B52A5BDE9DB0AB0A9691F52D45D0B7D4AD377 (void);
// 0x000003B7 System.Char System.Text.RegularExpressions.RegexParser::ScanOctal()
extern void RegexParser_ScanOctal_m7767731DCDBED3AFE2CF6A24D4A6E7FB448062F6 (void);
// 0x000003B8 System.Int32 System.Text.RegularExpressions.RegexParser::ScanDecimal()
extern void RegexParser_ScanDecimal_mC7374D132F506C5D7EEB868C32C4959B1C672017 (void);
// 0x000003B9 System.Char System.Text.RegularExpressions.RegexParser::ScanHex(System.Int32)
extern void RegexParser_ScanHex_m273E9DA24C7455F701730E65B90DAA5C0D0210C2 (void);
// 0x000003BA System.Int32 System.Text.RegularExpressions.RegexParser::HexDigit(System.Char)
extern void RegexParser_HexDigit_mA37CD4C4844C9EB9B2568F092A34A2FBFDA7F3BA (void);
// 0x000003BB System.Char System.Text.RegularExpressions.RegexParser::ScanControl()
extern void RegexParser_ScanControl_m9EC29A03B8B1C8323D3E67F0D43F7A5960FFD816 (void);
// 0x000003BC System.Boolean System.Text.RegularExpressions.RegexParser::IsOnlyTopOption(System.Text.RegularExpressions.RegexOptions)
extern void RegexParser_IsOnlyTopOption_m7C4B2E37C797EEB8C5878365C25EDE72E2EBE404 (void);
// 0x000003BD System.Void System.Text.RegularExpressions.RegexParser::ScanOptions()
extern void RegexParser_ScanOptions_mE9C5126433FD0A2576B402A07941114AB468D79F (void);
// 0x000003BE System.Char System.Text.RegularExpressions.RegexParser::ScanCharEscape()
extern void RegexParser_ScanCharEscape_m7A3FDDAF73AB029CB6EA7BB8058E3FD2AEDD63D6 (void);
// 0x000003BF System.String System.Text.RegularExpressions.RegexParser::ParseProperty()
extern void RegexParser_ParseProperty_m32F8C5F94C55BFF814FBAD3189A25F3CAB76B3C3 (void);
// 0x000003C0 System.Int32 System.Text.RegularExpressions.RegexParser::TypeFromCode(System.Char)
extern void RegexParser_TypeFromCode_m9B5F0CD85CECC83F17C2A37B5A0A396478A668B8 (void);
// 0x000003C1 System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.RegexParser::OptionFromCode(System.Char)
extern void RegexParser_OptionFromCode_m6AC76995E0F827E63BC01EBF0D2C767B08D096CF (void);
// 0x000003C2 System.Void System.Text.RegularExpressions.RegexParser::CountCaptures()
extern void RegexParser_CountCaptures_mE1F7E2BFAE6D599A2F71D217A078B385A9408700 (void);
// 0x000003C3 System.Void System.Text.RegularExpressions.RegexParser::NoteCaptureSlot(System.Int32,System.Int32)
extern void RegexParser_NoteCaptureSlot_m0A4A75BC5BB740A63EE0D41BDBB25A1FADFBF53C (void);
// 0x000003C4 System.Void System.Text.RegularExpressions.RegexParser::NoteCaptureName(System.String,System.Int32)
extern void RegexParser_NoteCaptureName_m8673E32280A278603401C24BFCD7C65F42881FA8 (void);
// 0x000003C5 System.Void System.Text.RegularExpressions.RegexParser::NoteCaptures(System.Collections.Hashtable,System.Int32,System.Collections.Hashtable)
extern void RegexParser_NoteCaptures_m8281BB827D68F1A4E2A30C5A5189E72A92FE6F78 (void);
// 0x000003C6 System.Void System.Text.RegularExpressions.RegexParser::AssignNameSlots()
extern void RegexParser_AssignNameSlots_m7478C18338D1440B8422BD849CCF1E3C33169EDB (void);
// 0x000003C7 System.Int32 System.Text.RegularExpressions.RegexParser::CaptureSlotFromName(System.String)
extern void RegexParser_CaptureSlotFromName_mF8279E16DB2733EE3712214CFC57DA3D48BD717B (void);
// 0x000003C8 System.Boolean System.Text.RegularExpressions.RegexParser::IsCaptureSlot(System.Int32)
extern void RegexParser_IsCaptureSlot_mE462763928C28561B761AFCE14D30C6A31CD1C15 (void);
// 0x000003C9 System.Boolean System.Text.RegularExpressions.RegexParser::IsCaptureName(System.String)
extern void RegexParser_IsCaptureName_mF09CBBD2AEAD4D1BAAE4E4E803C3F4916DBA479D (void);
// 0x000003CA System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionN()
extern void RegexParser_UseOptionN_m9B82FA2012348674AC4E62205FE205CF2DB0ED35 (void);
// 0x000003CB System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionI()
extern void RegexParser_UseOptionI_m46AAF2DBCC08EE8F3E8ECA1A5E37160C4E5C7B04 (void);
// 0x000003CC System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionM()
extern void RegexParser_UseOptionM_mBCB459C99D9BD541A68ADF86C1FD437169A8352E (void);
// 0x000003CD System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionS()
extern void RegexParser_UseOptionS_m079D720F7300CEEBB4800B8CB5F7DE450E00FC6D (void);
// 0x000003CE System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionX()
extern void RegexParser_UseOptionX_m7944C5C44AEAA4D69ABA991320A6B960F8EEC284 (void);
// 0x000003CF System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionE()
extern void RegexParser_UseOptionE_m442360F28425CC127273FA1B10737E2AB3A70762 (void);
// 0x000003D0 System.Boolean System.Text.RegularExpressions.RegexParser::IsSpecial(System.Char)
extern void RegexParser_IsSpecial_m4A1E4E74B35C055B7D6A3B0DD5BF0441EFE7D49A (void);
// 0x000003D1 System.Boolean System.Text.RegularExpressions.RegexParser::IsStopperX(System.Char)
extern void RegexParser_IsStopperX_m1809A5DE319FEF8B59B1A2D6370ED7FD394851A1 (void);
// 0x000003D2 System.Boolean System.Text.RegularExpressions.RegexParser::IsQuantifier(System.Char)
extern void RegexParser_IsQuantifier_m4A22A38BD961AE0E4055CCD9226C4A292562502D (void);
// 0x000003D3 System.Boolean System.Text.RegularExpressions.RegexParser::IsTrueQuantifier()
extern void RegexParser_IsTrueQuantifier_m190312723B9D3A48FA41FED5A4DC5D9C055EB627 (void);
// 0x000003D4 System.Boolean System.Text.RegularExpressions.RegexParser::IsSpace(System.Char)
extern void RegexParser_IsSpace_m84BC9FE11F2A587EBB48D4C88DEC96D20B51300D (void);
// 0x000003D5 System.Boolean System.Text.RegularExpressions.RegexParser::IsMetachar(System.Char)
extern void RegexParser_IsMetachar_mE2F7FC38020D8F2BB03FB3AD5D880B654FD9D345 (void);
// 0x000003D6 System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate(System.Int32,System.Int32,System.Boolean)
extern void RegexParser_AddConcatenate_m308E5EB5C42CF795225A0FDBACCF647B57BE425B (void);
// 0x000003D7 System.Void System.Text.RegularExpressions.RegexParser::PushGroup()
extern void RegexParser_PushGroup_m30EE1A2FFE88FBA12DB8B4D929F6122D8001EAF9 (void);
// 0x000003D8 System.Void System.Text.RegularExpressions.RegexParser::PopGroup()
extern void RegexParser_PopGroup_m461057BFDD1D1CFD70CF3DFE70693E429FCF0FA9 (void);
// 0x000003D9 System.Boolean System.Text.RegularExpressions.RegexParser::EmptyStack()
extern void RegexParser_EmptyStack_mCDC440C4B29CD14F4A0D9D6E3BE105869F246E2E (void);
// 0x000003DA System.Void System.Text.RegularExpressions.RegexParser::StartGroup(System.Text.RegularExpressions.RegexNode)
extern void RegexParser_StartGroup_m715D16765A3808F41A0DDFB46AE99F7982BA9E87 (void);
// 0x000003DB System.Void System.Text.RegularExpressions.RegexParser::AddAlternate()
extern void RegexParser_AddAlternate_m2C8BA28D8A58FB9CA6FE75F9D5875BF748305AB0 (void);
// 0x000003DC System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate()
extern void RegexParser_AddConcatenate_m1B223D215058DA19724BD379C2BC0557EA24B48A (void);
// 0x000003DD System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate(System.Boolean,System.Int32,System.Int32)
extern void RegexParser_AddConcatenate_m47774C08F0EF3E4B83BD52C777019D63BE718AE6 (void);
// 0x000003DE System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::Unit()
extern void RegexParser_Unit_m88B751E79E4DE41D295805439EE6D1D5B7170D7F (void);
// 0x000003DF System.Void System.Text.RegularExpressions.RegexParser::AddUnitOne(System.Char)
extern void RegexParser_AddUnitOne_mDEC722E078B3E61126F56718AF7FED159C616CDC (void);
// 0x000003E0 System.Void System.Text.RegularExpressions.RegexParser::AddUnitNotone(System.Char)
extern void RegexParser_AddUnitNotone_m14CA5BBABCE627507923A6BE373BEC032167801F (void);
// 0x000003E1 System.Void System.Text.RegularExpressions.RegexParser::AddUnitSet(System.String)
extern void RegexParser_AddUnitSet_mF7CEA4892737145E04E8ECD6DCD3B2A8F809C58B (void);
// 0x000003E2 System.Void System.Text.RegularExpressions.RegexParser::AddUnitNode(System.Text.RegularExpressions.RegexNode)
extern void RegexParser_AddUnitNode_m84299A7BCF95B87B5B4672759DE2D8D863FA80E2 (void);
// 0x000003E3 System.Void System.Text.RegularExpressions.RegexParser::AddUnitType(System.Int32)
extern void RegexParser_AddUnitType_m39738056CFFB37E7036AF626829033D6052E6FD8 (void);
// 0x000003E4 System.Void System.Text.RegularExpressions.RegexParser::AddGroup()
extern void RegexParser_AddGroup_m3771097F1B4F1F6AA10104D28B663026F7B7326F (void);
// 0x000003E5 System.Void System.Text.RegularExpressions.RegexParser::PushOptions()
extern void RegexParser_PushOptions_mC0047ADAB396BC1643AA63B2C395F09FCBE726BC (void);
// 0x000003E6 System.Void System.Text.RegularExpressions.RegexParser::PopOptions()
extern void RegexParser_PopOptions_m186A6537DA0481481E59C5BED015B577508271C7 (void);
// 0x000003E7 System.Boolean System.Text.RegularExpressions.RegexParser::EmptyOptionsStack()
extern void RegexParser_EmptyOptionsStack_m9B5B4501C296662175648E458F9EAAADEE3A2B44 (void);
// 0x000003E8 System.Void System.Text.RegularExpressions.RegexParser::PopKeepOptions()
extern void RegexParser_PopKeepOptions_mBCC70CBFDC2A6DD07FE090D4E546B6AEA5644500 (void);
// 0x000003E9 System.ArgumentException System.Text.RegularExpressions.RegexParser::MakeException(System.String)
extern void RegexParser_MakeException_mA573DC3F94B98F328A9B87673A2CF8A15120DEB1 (void);
// 0x000003EA System.Int32 System.Text.RegularExpressions.RegexParser::Textpos()
extern void RegexParser_Textpos_m5A18C75CE7F3A5AE17373DA09A20070D988308C5 (void);
// 0x000003EB System.Void System.Text.RegularExpressions.RegexParser::Textto(System.Int32)
extern void RegexParser_Textto_mE4BCC8608BF006D283A32F9C5811264467EEB806 (void);
// 0x000003EC System.Char System.Text.RegularExpressions.RegexParser::MoveRightGetChar()
extern void RegexParser_MoveRightGetChar_mE98852DD0B33AE818B01A7CC7A9C301C2226F81C (void);
// 0x000003ED System.Void System.Text.RegularExpressions.RegexParser::MoveRight()
extern void RegexParser_MoveRight_mE4C6D41AFE3F585C0B8E7CD0AF3CF4DBA8791AB4 (void);
// 0x000003EE System.Void System.Text.RegularExpressions.RegexParser::MoveRight(System.Int32)
extern void RegexParser_MoveRight_m905DCF65EF6BA6736100751DE932753BC99B8D68 (void);
// 0x000003EF System.Void System.Text.RegularExpressions.RegexParser::MoveLeft()
extern void RegexParser_MoveLeft_mBE0128B08B61C1306954528C799F2F1F1B803391 (void);
// 0x000003F0 System.Char System.Text.RegularExpressions.RegexParser::CharAt(System.Int32)
extern void RegexParser_CharAt_mEA865F2B6DC4EF1B81F8D80ABF989F395BEC0B84 (void);
// 0x000003F1 System.Char System.Text.RegularExpressions.RegexParser::RightChar()
extern void RegexParser_RightChar_mA977C61B98B8BB88C2A66AEBBFDA6826C58ED66A (void);
// 0x000003F2 System.Char System.Text.RegularExpressions.RegexParser::RightChar(System.Int32)
extern void RegexParser_RightChar_mE6728D67C4F9FE227ECD6BED46FFC94518EAD9B4 (void);
// 0x000003F3 System.Int32 System.Text.RegularExpressions.RegexParser::CharsRight()
extern void RegexParser_CharsRight_m808A213FCB975D42C6E6270E7A0FAEB1E496B07A (void);
// 0x000003F4 System.Void System.Text.RegularExpressions.RegexParser::.cctor()
extern void RegexParser__cctor_mF7A4882AF6E6DD795EC9073B52D729D099632D19 (void);
// 0x000003F5 System.Void System.Text.RegularExpressions.RegexReplacement::.ctor(System.String,System.Text.RegularExpressions.RegexNode,System.Collections.Hashtable)
extern void RegexReplacement__ctor_mAF9D6E1EBA04EE087CA7E2525BFC1537E8B60836 (void);
// 0x000003F6 System.Void System.Text.RegularExpressions.RegexReplacement::ReplacementImpl(System.Text.StringBuilder,System.Text.RegularExpressions.Match)
extern void RegexReplacement_ReplacementImpl_mC760289E275859F64DAC5EFE3E03D406762534E6 (void);
// 0x000003F7 System.Void System.Text.RegularExpressions.RegexReplacement::ReplacementImplRTL(System.Collections.Generic.List`1<System.String>,System.Text.RegularExpressions.Match)
extern void RegexReplacement_ReplacementImplRTL_m71F89242E5770437D6996723BED015BA05DD74A0 (void);
// 0x000003F8 System.String System.Text.RegularExpressions.RegexReplacement::get_Pattern()
extern void RegexReplacement_get_Pattern_m15AB0E06009DB144BE40253F76F4C09D1AA865BA (void);
// 0x000003F9 System.String System.Text.RegularExpressions.RegexReplacement::Replace(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern void RegexReplacement_Replace_mE66A1F2D387B2ABA21E0BCEEA2DEA9BAEDEDCC60 (void);
// 0x000003FA System.Void System.Text.RegularExpressions.RegexRunner::.ctor()
extern void RegexRunner__ctor_m6925516B4C16AC95CFAAFCCDB5CFEAD505B7920B (void);
// 0x000003FB System.Text.RegularExpressions.Match System.Text.RegularExpressions.RegexRunner::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.TimeSpan)
extern void RegexRunner_Scan_m2ADEF871B8873041D1224B4FE362BD4A943AC536 (void);
// 0x000003FC System.Void System.Text.RegularExpressions.RegexRunner::StartTimeoutWatch()
extern void RegexRunner_StartTimeoutWatch_m22AE778FF5C52047138151B3A61B118DC6E9B685 (void);
// 0x000003FD System.Void System.Text.RegularExpressions.RegexRunner::CheckTimeout()
extern void RegexRunner_CheckTimeout_mBE5718B5085C46A4B1B9498DE83B7C4D22E4C27C (void);
// 0x000003FE System.Void System.Text.RegularExpressions.RegexRunner::DoCheckTimeout()
extern void RegexRunner_DoCheckTimeout_mFA5F588F7FA54123CFDFF4C26562E05DADFB675F (void);
// 0x000003FF System.Void System.Text.RegularExpressions.RegexRunner::Go()
// 0x00000400 System.Boolean System.Text.RegularExpressions.RegexRunner::FindFirstChar()
// 0x00000401 System.Void System.Text.RegularExpressions.RegexRunner::InitTrackCount()
// 0x00000402 System.Void System.Text.RegularExpressions.RegexRunner::InitMatch()
extern void RegexRunner_InitMatch_mAB83B2D2F56A1E5438AA6AF68F175F4E0DFE6346 (void);
// 0x00000403 System.Text.RegularExpressions.Match System.Text.RegularExpressions.RegexRunner::TidyMatch(System.Boolean)
extern void RegexRunner_TidyMatch_mC554804E829E5C96600A9FF3C0855FD1A48FE4FA (void);
// 0x00000404 System.Void System.Text.RegularExpressions.RegexRunner::EnsureStorage()
extern void RegexRunner_EnsureStorage_mA28C2C957E9C94A1EB89424D837A87114E38325E (void);
// 0x00000405 System.Boolean System.Text.RegularExpressions.RegexRunner::IsBoundary(System.Int32,System.Int32,System.Int32)
extern void RegexRunner_IsBoundary_mBC555EC9574974908A1B0CEA3D1853D54BD10D62 (void);
// 0x00000406 System.Boolean System.Text.RegularExpressions.RegexRunner::IsECMABoundary(System.Int32,System.Int32,System.Int32)
extern void RegexRunner_IsECMABoundary_m151787CEE018DB6D42182AF4464485CDC4CEAFAB (void);
// 0x00000407 System.Void System.Text.RegularExpressions.RegexRunner::DoubleTrack()
extern void RegexRunner_DoubleTrack_m4C316CA544695119D1DC025CD7C7E2E754F23A62 (void);
// 0x00000408 System.Void System.Text.RegularExpressions.RegexRunner::DoubleStack()
extern void RegexRunner_DoubleStack_m6D5CD187C3C40D33AD36764202D810D3C354CB4B (void);
// 0x00000409 System.Void System.Text.RegularExpressions.RegexRunner::DoubleCrawl()
extern void RegexRunner_DoubleCrawl_m562BC4766311883EF65FC3BC69C7555EF5C6A3D0 (void);
// 0x0000040A System.Void System.Text.RegularExpressions.RegexRunner::Crawl(System.Int32)
extern void RegexRunner_Crawl_mC989F917E324EBE03B0DBECC42531C9ADBF0C742 (void);
// 0x0000040B System.Int32 System.Text.RegularExpressions.RegexRunner::Popcrawl()
extern void RegexRunner_Popcrawl_mE325EFA925EE9D80AF98FD04ACE7050A9D4F8C21 (void);
// 0x0000040C System.Int32 System.Text.RegularExpressions.RegexRunner::Crawlpos()
extern void RegexRunner_Crawlpos_mBFE7A9D83990B8CF829D66CD088414F96A03B49F (void);
// 0x0000040D System.Void System.Text.RegularExpressions.RegexRunner::Capture(System.Int32,System.Int32,System.Int32)
extern void RegexRunner_Capture_mAC8B534A534941D5003730CA28B41F4082CF45C0 (void);
// 0x0000040E System.Void System.Text.RegularExpressions.RegexRunner::TransferCapture(System.Int32,System.Int32,System.Int32,System.Int32)
extern void RegexRunner_TransferCapture_mBD3BA00B949753D1C0A142776C4EF3796DBC627B (void);
// 0x0000040F System.Void System.Text.RegularExpressions.RegexRunner::Uncapture()
extern void RegexRunner_Uncapture_mAEA536C22A1DD0BCE123A04A4BCFD1A8BE8D1F7B (void);
// 0x00000410 System.Boolean System.Text.RegularExpressions.RegexRunner::IsMatched(System.Int32)
extern void RegexRunner_IsMatched_mCC5330346DACE22EAA86DD072CD36752023C66E9 (void);
// 0x00000411 System.Int32 System.Text.RegularExpressions.RegexRunner::MatchIndex(System.Int32)
extern void RegexRunner_MatchIndex_m9FBD010C648C8BBD087FFF4C470FE82494A72ACB (void);
// 0x00000412 System.Int32 System.Text.RegularExpressions.RegexRunner::MatchLength(System.Int32)
extern void RegexRunner_MatchLength_mE1EFA365EAA84B7CDC515A4DEC99CF6D8581A1E8 (void);
// 0x00000413 System.Text.RegularExpressions.RegexRunner System.Text.RegularExpressions.RegexRunnerFactory::CreateInstance()
// 0x00000414 System.Void System.Text.RegularExpressions.RegexTree::.ctor(System.Text.RegularExpressions.RegexNode,System.Collections.Hashtable,System.Int32[],System.Int32,System.Collections.Hashtable,System.String[],System.Text.RegularExpressions.RegexOptions)
extern void RegexTree__ctor_m71E8231B91BF289104B933268B2CEF0AA02CF092 (void);
// 0x00000415 System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.RegexWriter::Write(System.Text.RegularExpressions.RegexTree)
extern void RegexWriter_Write_m14AFCCD08A706F09258DB3758B3C78F04B87929E (void);
// 0x00000416 System.Void System.Text.RegularExpressions.RegexWriter::.ctor()
extern void RegexWriter__ctor_mC1384070ECBCB1A54E56F5460388E7C4CDC5856A (void);
// 0x00000417 System.Void System.Text.RegularExpressions.RegexWriter::PushInt(System.Int32)
extern void RegexWriter_PushInt_m82B0216AFF641DE9547BE17FA115C2CED44A840C (void);
// 0x00000418 System.Boolean System.Text.RegularExpressions.RegexWriter::EmptyStack()
extern void RegexWriter_EmptyStack_mE95F9FABB37AB87D28C240E3A9306BD6F188B00B (void);
// 0x00000419 System.Int32 System.Text.RegularExpressions.RegexWriter::PopInt()
extern void RegexWriter_PopInt_mB767C9611DB654060F684D5E09231CAEFFDF7551 (void);
// 0x0000041A System.Int32 System.Text.RegularExpressions.RegexWriter::CurPos()
extern void RegexWriter_CurPos_m771D864668683B9DCF98150DBAEEBE17703C2E5D (void);
// 0x0000041B System.Void System.Text.RegularExpressions.RegexWriter::PatchJump(System.Int32,System.Int32)
extern void RegexWriter_PatchJump_m99AEA835C283697F20D7F9CC16E6371BF681B70B (void);
// 0x0000041C System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32)
extern void RegexWriter_Emit_m0F2DFD7C6ED8AB199B3E8845A02A09F295A00E54 (void);
// 0x0000041D System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32,System.Int32)
extern void RegexWriter_Emit_mDCE0A2DF541B5FC6554C965A1C799ADCF6B4C55F (void);
// 0x0000041E System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32,System.Int32,System.Int32)
extern void RegexWriter_Emit_m9360B7E84BA94A432C3C9AB5427A30D81E0B2739 (void);
// 0x0000041F System.Int32 System.Text.RegularExpressions.RegexWriter::StringCode(System.String)
extern void RegexWriter_StringCode_m10DB52A16488268DF01C52E8163E899FA568FBC9 (void);
// 0x00000420 System.ArgumentException System.Text.RegularExpressions.RegexWriter::MakeException(System.String)
extern void RegexWriter_MakeException_mD2A13E8F5A67D36CAEE67D74C35A5D2B35111C26 (void);
// 0x00000421 System.Int32 System.Text.RegularExpressions.RegexWriter::MapCapnum(System.Int32)
extern void RegexWriter_MapCapnum_mEF8C8E6F9916122D0FAE18A7B560F65738D004E6 (void);
// 0x00000422 System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.RegexWriter::RegexCodeFromRegexTree(System.Text.RegularExpressions.RegexTree)
extern void RegexWriter_RegexCodeFromRegexTree_mB8946AD1D077152C85D0D32CDABC5FBE37C80A80 (void);
// 0x00000423 System.Void System.Text.RegularExpressions.RegexWriter::EmitFragment(System.Int32,System.Text.RegularExpressions.RegexNode,System.Int32)
extern void RegexWriter_EmitFragment_m7692CDAFDAC6BE7D8BB2DD1EC225B6456047DE0B (void);
// 0x00000424 System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
extern void Stopwatch_GetTimestamp_m8BDD632ACE5FF704F108290DC1864032B9B1C0BF (void);
// 0x00000425 System.Diagnostics.Stopwatch System.Diagnostics.Stopwatch::StartNew()
extern void Stopwatch_StartNew_mF95D6B5C76012FE9D25753BB28E776972AC3F05E (void);
// 0x00000426 System.Void System.Diagnostics.Stopwatch::.ctor()
extern void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (void);
// 0x00000427 System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
extern void Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6 (void);
// 0x00000428 System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
extern void Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5 (void);
// 0x00000429 System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
extern void Stopwatch_get_ElapsedTicks_mEA2271BCCE37E6615EFC0B377D33C9DB63CA09E8 (void);
// 0x0000042A System.Void System.Diagnostics.Stopwatch::Reset()
extern void Stopwatch_Reset_m79B1D65568465AE5B1A68EF3A2A65218590ABD14 (void);
// 0x0000042B System.Void System.Diagnostics.Stopwatch::Start()
extern void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (void);
// 0x0000042C System.Void System.Diagnostics.Stopwatch::.cctor()
extern void Stopwatch__cctor_m83EC9C206940254F92A0E270B4E48348DA7C1062 (void);
// 0x0000042D System.Void System.Diagnostics.CodeAnalysis.ExcludeFromCodeCoverageAttribute::.ctor()
extern void ExcludeFromCodeCoverageAttribute__ctor_mC4864A7299B691B672E31F543BEFD61DEB7C2832 (void);
// 0x0000042E System.Void System.ComponentModel.ArrayConverter::.ctor()
extern void ArrayConverter__ctor_m3B1E6D184D835FE896DE2E83F2F5C9410E745F93 (void);
// 0x0000042F System.Void System.ComponentModel.BooleanConverter::.ctor()
extern void BooleanConverter__ctor_m9F0A8757BAD0E551843A5A6FCC3366842A6C6D2C (void);
// 0x00000430 System.Void System.ComponentModel.BrowsableAttribute::.ctor(System.Boolean)
extern void BrowsableAttribute__ctor_m67F6E4C4B28C23E90D4C0527D1BA41555D1B0DDE (void);
// 0x00000431 System.Boolean System.ComponentModel.BrowsableAttribute::get_Browsable()
extern void BrowsableAttribute_get_Browsable_mEAD0188E3748DDB36677CC3F523B001145FE1288 (void);
// 0x00000432 System.Boolean System.ComponentModel.BrowsableAttribute::Equals(System.Object)
extern void BrowsableAttribute_Equals_mC10C854D4D59E13FDF9DB3CF45FC08F213BABF05 (void);
// 0x00000433 System.Int32 System.ComponentModel.BrowsableAttribute::GetHashCode()
extern void BrowsableAttribute_GetHashCode_mBDD907C2D06C6BD998999FE77F6A621DE620F308 (void);
// 0x00000434 System.Void System.ComponentModel.BrowsableAttribute::.cctor()
extern void BrowsableAttribute__cctor_mB8B4350843F9B541B602DB2FE3E232DD45A00361 (void);
// 0x00000435 System.Void System.ComponentModel.CategoryAttribute::.ctor(System.String)
extern void CategoryAttribute__ctor_m0E9177ECFA96BBB3A2716039CB4A9F2E2149E706 (void);
// 0x00000436 System.String System.ComponentModel.CategoryAttribute::get_Category()
extern void CategoryAttribute_get_Category_m02F82210B41F101E8745B7994C1169802D8D0E39 (void);
// 0x00000437 System.Boolean System.ComponentModel.CategoryAttribute::Equals(System.Object)
extern void CategoryAttribute_Equals_m044A2C25BA905793AC32FF56B71ACC3D9E5919E3 (void);
// 0x00000438 System.Int32 System.ComponentModel.CategoryAttribute::GetHashCode()
extern void CategoryAttribute_GetHashCode_m97FE93C13D77F55B642C14CF200206655EC445CF (void);
// 0x00000439 System.String System.ComponentModel.CategoryAttribute::GetLocalizedString(System.String)
extern void CategoryAttribute_GetLocalizedString_m05A2661BFCDD8951D57FA3A2B4C76B482893FC02 (void);
// 0x0000043A System.Void System.ComponentModel.CollectionConverter::.ctor()
extern void CollectionConverter__ctor_mA6E78367ED2C94B1B80B6E3314AB4854D275613F (void);
// 0x0000043B System.Void System.ComponentModel.Component::Finalize()
extern void Component_Finalize_mDBE707310C79EAC9D78A1A6B8CBC58B1D85FFD6C (void);
// 0x0000043C System.Boolean System.ComponentModel.Component::get_CanRaiseEvents()
extern void Component_get_CanRaiseEvents_m5C347D156A4E54A1DB24C045FDD43E74B66E4295 (void);
// 0x0000043D System.Boolean System.ComponentModel.Component::get_CanRaiseEventsInternal()
extern void Component_get_CanRaiseEventsInternal_mF1CE3CBC6ECADC117635E96EA0A7316AC8361C12 (void);
// 0x0000043E System.Void System.ComponentModel.Component::Dispose()
extern void Component_Dispose_mC05DA7EBB2CA50E4854BED0FC992770E81771593 (void);
// 0x0000043F System.Void System.ComponentModel.Component::Dispose(System.Boolean)
extern void Component_Dispose_m41A6868E474C0937E68618E171C8169ECE2A9347 (void);
// 0x00000440 System.Object System.ComponentModel.Component::GetService(System.Type)
extern void Component_GetService_mD7AC529C9E9E316E058150D360F2EF94644614F8 (void);
// 0x00000441 System.Boolean System.ComponentModel.Component::get_DesignMode()
extern void Component_get_DesignMode_m734BA2B9442EB0294B051D6DECC56272135EA36C (void);
// 0x00000442 System.String System.ComponentModel.Component::ToString()
extern void Component_ToString_m281811936682E090CB59313B17FDD92D21C6A0DF (void);
// 0x00000443 System.Void System.ComponentModel.Component::.ctor()
extern void Component__ctor_m840837E8F38EF7547938BF0E23F7D5847B8C4F48 (void);
// 0x00000444 System.Void System.ComponentModel.Component::.cctor()
extern void Component__cctor_mBA66CB61DF5297C3A9C98865469935605A42E4F7 (void);
// 0x00000445 System.Void System.ComponentModel.ComponentConverter::.ctor(System.Type)
extern void ComponentConverter__ctor_mDD36736AF6F3957D4E50C9F87959838DEE128D9D (void);
// 0x00000446 System.Void System.ComponentModel.DecimalConverter::.ctor()
extern void DecimalConverter__ctor_m4E225E243DED7F45B5176296A297D668FBA7FC4C (void);
// 0x00000447 System.Void System.ComponentModel.DefaultEventAttribute::.ctor(System.String)
extern void DefaultEventAttribute__ctor_mA045F88D2A5062B94A1EC75281D843826FEA26CD (void);
// 0x00000448 System.String System.ComponentModel.DefaultEventAttribute::get_Name()
extern void DefaultEventAttribute_get_Name_m11E61BAB620E1340BDD23F2098AD8A2B212C788F (void);
// 0x00000449 System.Boolean System.ComponentModel.DefaultEventAttribute::Equals(System.Object)
extern void DefaultEventAttribute_Equals_m077B138A0812DE6905B5EA81B102738D26271BFA (void);
// 0x0000044A System.Int32 System.ComponentModel.DefaultEventAttribute::GetHashCode()
extern void DefaultEventAttribute_GetHashCode_mC64256EB07720846B232CC270F2683D244730037 (void);
// 0x0000044B System.Void System.ComponentModel.DefaultEventAttribute::.cctor()
extern void DefaultEventAttribute__cctor_m107EE26A46C36F3DC2DB4051484072C0ABC0ACAF (void);
// 0x0000044C System.Void System.ComponentModel.DefaultPropertyAttribute::.ctor(System.String)
extern void DefaultPropertyAttribute__ctor_mEBD1AB6A6D4DEC77344B2FBF0DD8AD68BDE605E7 (void);
// 0x0000044D System.String System.ComponentModel.DefaultPropertyAttribute::get_Name()
extern void DefaultPropertyAttribute_get_Name_mDF5CFECE56F9957F683545D2B8C9DE560EF4EA7E (void);
// 0x0000044E System.Boolean System.ComponentModel.DefaultPropertyAttribute::Equals(System.Object)
extern void DefaultPropertyAttribute_Equals_m777E989ED27C0AF576BA026C482C74DD9467F295 (void);
// 0x0000044F System.Int32 System.ComponentModel.DefaultPropertyAttribute::GetHashCode()
extern void DefaultPropertyAttribute_GetHashCode_m8FC07D3C6C6B3DD78CBEF22A1AFB8F909F6B76EC (void);
// 0x00000450 System.Void System.ComponentModel.DefaultPropertyAttribute::.cctor()
extern void DefaultPropertyAttribute__cctor_m28F873F1872729D7D93A4E0865604DE995A3BF58 (void);
// 0x00000451 System.Void System.ComponentModel.DefaultValueAttribute::.ctor(System.Boolean)
extern void DefaultValueAttribute__ctor_m78FFD0C313E546C33C761F79E544E6FA5ADCB4D0 (void);
// 0x00000452 System.Void System.ComponentModel.DefaultValueAttribute::.ctor(System.String)
extern void DefaultValueAttribute__ctor_m65DBADCDC3A7BBD4AA6871023D36B91FC1772ADF (void);
// 0x00000453 System.Object System.ComponentModel.DefaultValueAttribute::get_Value()
extern void DefaultValueAttribute_get_Value_m5430873D9E44294065E1F6FCDC3B425A0011CCBA (void);
// 0x00000454 System.Boolean System.ComponentModel.DefaultValueAttribute::Equals(System.Object)
extern void DefaultValueAttribute_Equals_mD25A5203F3679D9D6B2216769E933FEA95972B13 (void);
// 0x00000455 System.Int32 System.ComponentModel.DefaultValueAttribute::GetHashCode()
extern void DefaultValueAttribute_GetHashCode_mC5D187012FD8EA385F0A5D3946B20C9A8CEEA5D9 (void);
// 0x00000456 System.Void System.ComponentModel.DescriptionAttribute::.ctor()
extern void DescriptionAttribute__ctor_m0E146E17D89AF14C7390CA02D1725CA5114E2A40 (void);
// 0x00000457 System.Void System.ComponentModel.DescriptionAttribute::.ctor(System.String)
extern void DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E (void);
// 0x00000458 System.String System.ComponentModel.DescriptionAttribute::get_Description()
extern void DescriptionAttribute_get_Description_m0FA1D4D963B0CC6430641650EAFC0A28EF5D7567 (void);
// 0x00000459 System.String System.ComponentModel.DescriptionAttribute::get_DescriptionValue()
extern void DescriptionAttribute_get_DescriptionValue_mC1DBBA2D084E17E4062C81318C1D5D5295E4C97C (void);
// 0x0000045A System.Void System.ComponentModel.DescriptionAttribute::set_DescriptionValue(System.String)
extern void DescriptionAttribute_set_DescriptionValue_m7690BF55F40A7C26BBDF62BEBC2728EC9A16A91B (void);
// 0x0000045B System.Boolean System.ComponentModel.DescriptionAttribute::Equals(System.Object)
extern void DescriptionAttribute_Equals_m07C0B8787F3D42DDB8E726E4658705AAF19D0E0F (void);
// 0x0000045C System.Int32 System.ComponentModel.DescriptionAttribute::GetHashCode()
extern void DescriptionAttribute_GetHashCode_m6C0A71F2ED2EBE6A2846DC87E3FD8CEBBABD4CE9 (void);
// 0x0000045D System.Void System.ComponentModel.DescriptionAttribute::.cctor()
extern void DescriptionAttribute__cctor_mFE44BD593B03A490156C91DF97854A08A4D1AB05 (void);
// 0x0000045E System.Void System.ComponentModel.DesignTimeVisibleAttribute::.ctor(System.Boolean)
extern void DesignTimeVisibleAttribute__ctor_m5FEE8039EADC36835B17FC69C6F9302D98D17B3F (void);
// 0x0000045F System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::get_Visible()
extern void DesignTimeVisibleAttribute_get_Visible_mEDEAE4216F7BBE283BAB2F714D23691E909766B5 (void);
// 0x00000460 System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::Equals(System.Object)
extern void DesignTimeVisibleAttribute_Equals_m5EE5DF6FF3122FD7415C18192AB0F72E173FC334 (void);
// 0x00000461 System.Int32 System.ComponentModel.DesignTimeVisibleAttribute::GetHashCode()
extern void DesignTimeVisibleAttribute_GetHashCode_m517CECA16068CA5B18C14D3FADCCB0F594243E56 (void);
// 0x00000462 System.Void System.ComponentModel.DesignTimeVisibleAttribute::.cctor()
extern void DesignTimeVisibleAttribute__cctor_m24A5997203245ABA97D12C948AC3A3212B6C701F (void);
// 0x00000463 System.Void System.ComponentModel.DesignerAttribute::.ctor(System.String,System.Type)
extern void DesignerAttribute__ctor_mB3667C64A5316ADF52C89FD6C11896A74D3F12FC (void);
// 0x00000464 System.Boolean System.ComponentModel.DesignerAttribute::Equals(System.Object)
extern void DesignerAttribute_Equals_m0A794D27ACBFF6C7D4E99F0A8A9F22B9DB10E0CA (void);
// 0x00000465 System.Int32 System.ComponentModel.DesignerAttribute::GetHashCode()
extern void DesignerAttribute_GetHashCode_m17B9DAB29926C21682434E9A77E31651B9BDD80D (void);
// 0x00000466 System.Void System.ComponentModel.DesignerCategoryAttribute::.ctor()
extern void DesignerCategoryAttribute__ctor_m56E7C4D9708E648D47D4A9EA65AFF2A597039FF4 (void);
// 0x00000467 System.Void System.ComponentModel.DesignerCategoryAttribute::.ctor(System.String)
extern void DesignerCategoryAttribute__ctor_m60F54A81AA457206EA8336100BF1CB0FC2817EF3 (void);
// 0x00000468 System.Boolean System.ComponentModel.DesignerCategoryAttribute::Equals(System.Object)
extern void DesignerCategoryAttribute_Equals_m8032A91A1B7406D5D3497BDCBA94341706A0A113 (void);
// 0x00000469 System.Int32 System.ComponentModel.DesignerCategoryAttribute::GetHashCode()
extern void DesignerCategoryAttribute_GetHashCode_m97577A9BBB14BCF5045EF0ED1A7DCD19BE591DEF (void);
// 0x0000046A System.Void System.ComponentModel.DesignerCategoryAttribute::.cctor()
extern void DesignerCategoryAttribute__cctor_mDF88D82AD77F5A36F8840725ED6EF775991CC162 (void);
// 0x0000046B System.Void System.ComponentModel.DesignerSerializationVisibilityAttribute::.ctor(System.ComponentModel.DesignerSerializationVisibility)
extern void DesignerSerializationVisibilityAttribute__ctor_mAEEE7613ABFC1F58770FA563450E24976E4CEB49 (void);
// 0x0000046C System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::get_Visibility()
extern void DesignerSerializationVisibilityAttribute_get_Visibility_m8BF8E684ABAB85A14343D269EF8EFC493D17F49E (void);
// 0x0000046D System.Boolean System.ComponentModel.DesignerSerializationVisibilityAttribute::Equals(System.Object)
extern void DesignerSerializationVisibilityAttribute_Equals_m4604EDC514EE6CB9C907A9556BA93B8374CBCF8E (void);
// 0x0000046E System.Int32 System.ComponentModel.DesignerSerializationVisibilityAttribute::GetHashCode()
extern void DesignerSerializationVisibilityAttribute_GetHashCode_m50CE561D387EC4F63493C70FD9D57C58AF29737A (void);
// 0x0000046F System.Void System.ComponentModel.DesignerSerializationVisibilityAttribute::.cctor()
extern void DesignerSerializationVisibilityAttribute__cctor_m8A8D658E4037EF2FB2D901090C08BFC9C4E059E3 (void);
// 0x00000470 System.Void System.ComponentModel.DisplayNameAttribute::.ctor()
extern void DisplayNameAttribute__ctor_m7704A0296C35314F464640AD079794A8D2D5CFA3 (void);
// 0x00000471 System.Void System.ComponentModel.DisplayNameAttribute::.ctor(System.String)
extern void DisplayNameAttribute__ctor_m44CB3F48C86138F3E381AF9FE560B959DD73E845 (void);
// 0x00000472 System.String System.ComponentModel.DisplayNameAttribute::get_DisplayName()
extern void DisplayNameAttribute_get_DisplayName_mDF5FA07C8671BE6969CB4F1BF212CD7A03359F4F (void);
// 0x00000473 System.String System.ComponentModel.DisplayNameAttribute::get_DisplayNameValue()
extern void DisplayNameAttribute_get_DisplayNameValue_m8A787A996D7C752C9F79E3724A5A39EAF94A9F48 (void);
// 0x00000474 System.Boolean System.ComponentModel.DisplayNameAttribute::Equals(System.Object)
extern void DisplayNameAttribute_Equals_m11D68B64FB208336B9F91FDC4FFA93B51290539B (void);
// 0x00000475 System.Int32 System.ComponentModel.DisplayNameAttribute::GetHashCode()
extern void DisplayNameAttribute_GetHashCode_mF0C77356C5E1C5B6836A9E15BE9009CB6397B25A (void);
// 0x00000476 System.Void System.ComponentModel.DisplayNameAttribute::.cctor()
extern void DisplayNameAttribute__cctor_mB28475EB5D6C98D3D0796496A57B359A56051044 (void);
// 0x00000477 System.Void System.ComponentModel.DoubleConverter::.ctor()
extern void DoubleConverter__ctor_mBACD8291617A72E36D9E161918D86D1714F68E85 (void);
// 0x00000478 System.Void System.ComponentModel.EditorBrowsableAttribute::.ctor(System.ComponentModel.EditorBrowsableState)
extern void EditorBrowsableAttribute__ctor_mC77290C5157BDA154F1D03BD1551223B07A851D4 (void);
// 0x00000479 System.Boolean System.ComponentModel.EditorBrowsableAttribute::Equals(System.Object)
extern void EditorBrowsableAttribute_Equals_m79C775014595BC1A2B15301D3F5A27AE17EF8230 (void);
// 0x0000047A System.Int32 System.ComponentModel.EditorBrowsableAttribute::GetHashCode()
extern void EditorBrowsableAttribute_GetHashCode_mFC4240C87EB67E54729CA999187AE8AA0041B0EC (void);
// 0x0000047B System.Void System.ComponentModel.EnumConverter::.ctor(System.Type)
extern void EnumConverter__ctor_m2A61E754D52D9A89E479DD3F23AE49B839F6E613 (void);
// 0x0000047C System.Delegate System.ComponentModel.EventHandlerList::get_Item(System.Object)
extern void EventHandlerList_get_Item_mC9E8B2F3D48DB323CA19FB87B2DBB7240AE03334 (void);
// 0x0000047D System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList::Find(System.Object)
extern void EventHandlerList_Find_m0D055017D24E6BE23466BFC8392A49CE1695499E (void);
// 0x0000047E System.Void System.ComponentModel.IContainer::Remove(System.ComponentModel.IComponent)
// 0x0000047F System.Void System.ComponentModel.INotifyPropertyChanged::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
// 0x00000480 System.Void System.ComponentModel.INotifyPropertyChanged::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
// 0x00000481 System.ComponentModel.IContainer System.ComponentModel.ISite::get_Container()
// 0x00000482 System.Boolean System.ComponentModel.ISite::get_DesignMode()
// 0x00000483 System.String System.ComponentModel.ISite::get_Name()
// 0x00000484 System.Boolean System.ComponentModel.ISynchronizeInvoke::get_InvokeRequired()
// 0x00000485 System.IAsyncResult System.ComponentModel.ISynchronizeInvoke::BeginInvoke(System.Delegate,System.Object[])
// 0x00000486 System.Void System.ComponentModel.Int16Converter::.ctor()
extern void Int16Converter__ctor_m4F4E6E68FBDBC778F893D30D9A63F3086D0C87FD (void);
// 0x00000487 System.Void System.ComponentModel.Int32Converter::.ctor()
extern void Int32Converter__ctor_m3A8A43E94E6267B6978193DA829E2F84189F03B1 (void);
// 0x00000488 System.Void System.ComponentModel.Int64Converter::.ctor()
extern void Int64Converter__ctor_m50555C51D87CC6D5E48252B0356968B0F457C3B7 (void);
// 0x00000489 System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor()
extern void InvalidEnumArgumentException__ctor_m2F90ECAD9B02CAA483C6D5CE2951210DF2960942 (void);
// 0x0000048A System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String)
extern void InvalidEnumArgumentException__ctor_m9F82770D492E88AD5D679EE8A52400E5993CD2C9 (void);
// 0x0000048B System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String,System.Int32,System.Type)
extern void InvalidEnumArgumentException__ctor_mAE5068B990F9D8AD596FE95B591CA6441048D25E (void);
// 0x0000048C System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void InvalidEnumArgumentException__ctor_mD66B8D9407ABD1314AAC88CDDD9F73CC4FAED3A1 (void);
// 0x0000048D System.Void System.ComponentModel.PropertyChangedEventArgs::.ctor(System.String)
extern void PropertyChangedEventArgs__ctor_m6E395F75E8DBD0CFDF38DA0AAAF9B593CB1163CD (void);
// 0x0000048E System.Void System.ComponentModel.PropertyChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern void PropertyChangedEventHandler__ctor_m09E1DEFF4AE926B1D9EECA15D8BFF32E41EEF307 (void);
// 0x0000048F System.Void System.ComponentModel.PropertyChangedEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern void PropertyChangedEventHandler_Invoke_m12B212E1A923C9C0541719CA5365B8DCF0044837 (void);
// 0x00000490 System.IAsyncResult System.ComponentModel.PropertyChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.PropertyChangedEventArgs,System.AsyncCallback,System.Object)
extern void PropertyChangedEventHandler_BeginInvoke_m39ADB5AED85097C8579FFCB0F2C3299983BF089B (void);
// 0x00000491 System.Void System.ComponentModel.PropertyChangedEventHandler::EndInvoke(System.IAsyncResult)
extern void PropertyChangedEventHandler_EndInvoke_m342E010F7B159A3F7BD35CCA3E59D7D32A66F973 (void);
// 0x00000492 System.Void System.ComponentModel.ReferenceConverter::.ctor(System.Type)
extern void ReferenceConverter__ctor_m2BF20339AD66B73F51C54F05BCD4C6229CECA08B (void);
// 0x00000493 System.Void System.ComponentModel.ReferenceConverter::.cctor()
extern void ReferenceConverter__cctor_mEB60FFBED545D08DC2EF96EC1982D64566961806 (void);
// 0x00000494 System.Void System.ComponentModel.SingleConverter::.ctor()
extern void SingleConverter__ctor_m497283A0BDBBBE713A71C8A2E4A89D2B58627365 (void);
// 0x00000495 System.Void System.ComponentModel.StringConverter::.ctor()
extern void StringConverter__ctor_m078D8E99B4F9B0F2EF7A2D3857A6F044B7A16118 (void);
// 0x00000496 System.Void System.ComponentModel.TimeSpanConverter::.ctor()
extern void TimeSpanConverter__ctor_m8CCA5F7E15DAB96C97CF600394E637A9876AFB83 (void);
// 0x00000497 System.Void System.ComponentModel.TypeConverter::.ctor()
extern void TypeConverter__ctor_mCD87E569A2C4CB1331A069396FFA98E65726A16C (void);
// 0x00000498 System.Void System.ComponentModel.TypeConverterAttribute::.ctor()
extern void TypeConverterAttribute__ctor_m23863863F742A02AA8914FB5527AFBC15DCAFA8A (void);
// 0x00000499 System.Void System.ComponentModel.TypeConverterAttribute::.ctor(System.Type)
extern void TypeConverterAttribute__ctor_mE0B270E39E657178B253AB6F56FCA24E644868F4 (void);
// 0x0000049A System.String System.ComponentModel.TypeConverterAttribute::get_ConverterTypeName()
extern void TypeConverterAttribute_get_ConverterTypeName_m699652BD16C42823BE283EA769647F676122EB6B (void);
// 0x0000049B System.Boolean System.ComponentModel.TypeConverterAttribute::Equals(System.Object)
extern void TypeConverterAttribute_Equals_mED3025C0A24E6809AA6E31FE5F498D18558584FB (void);
// 0x0000049C System.Int32 System.ComponentModel.TypeConverterAttribute::GetHashCode()
extern void TypeConverterAttribute_GetHashCode_mFBABA9E1D19DC64BAAF3C9D0F1B82E42B5F66769 (void);
// 0x0000049D System.Void System.ComponentModel.TypeConverterAttribute::.cctor()
extern void TypeConverterAttribute__cctor_m326E14273BE20A6BEF921C2C326EE5ABFE89D9C3 (void);
// 0x0000049E System.Void System.ComponentModel.Win32Exception::.ctor()
extern void Win32Exception__ctor_m0DCDDC4BEF1DCC24190F7AAE8BB309FB5A8A9474 (void);
// 0x0000049F System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
extern void Win32Exception__ctor_mF8FAD9681BA8B2EFBD1EDA7C690764FF60E85A6F (void);
// 0x000004A0 System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32,System.String)
extern void Win32Exception__ctor_mC836B11093135ABE3B7F402DCD0564E58B8CDA02 (void);
// 0x000004A1 System.Void System.ComponentModel.Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Win32Exception__ctor_m712FC6079EE6F92FAB0B3DDAFD652B24FF163CC6 (void);
// 0x000004A2 System.Int32 System.ComponentModel.Win32Exception::get_NativeErrorCode()
extern void Win32Exception_get_NativeErrorCode_m15E3962B1D49FBA685728CB83758C6A3AF6F93E9 (void);
// 0x000004A3 System.Void System.ComponentModel.Win32Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Win32Exception_GetObjectData_mFB1F75CC318DB1FA595ECA5466F331AEC686BB07 (void);
// 0x000004A4 System.String System.ComponentModel.Win32Exception::GetErrorMessage(System.Int32)
extern void Win32Exception_GetErrorMessage_mDC9E7FFB79375D315529475B7CB31CC9359028AE (void);
// 0x000004A5 System.Void System.ComponentModel.Win32Exception::InitializeErrorMessages()
extern void Win32Exception_InitializeErrorMessages_m982FBC4AE608A6F0C4DE31266AC699A4CA21141C (void);
// 0x000004A6 System.Void System.ComponentModel.Win32Exception::InitializeErrorMessages1()
extern void Win32Exception_InitializeErrorMessages1_m752D604DD07B403536022D9309D57110628CE95E (void);
// 0x000004A7 System.Void System.ComponentModel.Win32Exception::.cctor()
extern void Win32Exception__cctor_m568A08FB0C09BA8B3EAAC9A30EBE8151C6956718 (void);
// 0x000004A8 System.Void System.ComponentModel.BaseNumberConverter::.ctor()
extern void BaseNumberConverter__ctor_m18967D5B511402093936893A249438FB94D5BDA3 (void);
// 0x000004A9 System.ComponentModel.IComponent System.ComponentModel.Design.IDesignerHost::get_RootComponent()
// 0x000004AA System.Void System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::.ctor(System.String,System.String,System.Boolean)
extern void RootDesignerSerializerAttribute__ctor_m2EA1453B85C10A3D2CFDB7F9802EB5525350B211 (void);
// 0x000004AB System.Void System.Security.Authentication.AuthenticationException::.ctor()
extern void AuthenticationException__ctor_mCD04EFFAE657FB7E895429E7EA6DCBDF76947E6C (void);
// 0x000004AC System.Void System.Security.Authentication.AuthenticationException::.ctor(System.String,System.Exception)
extern void AuthenticationException__ctor_mA0752219534B87AA44CA1F8F65920A91F2D5E513 (void);
// 0x000004AD System.Void System.Security.Authentication.AuthenticationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void AuthenticationException__ctor_m3AC884A3C280888AA0385F2B9CF77A4F095616EB (void);
// 0x000004AE System.Void System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy::.ctor(System.Security.Authentication.ExtendedProtection.PolicyEnforcement)
extern void ExtendedProtectionPolicy__ctor_m67EC248101C05040B16EF70600557AB1F67D5DC4 (void);
// 0x000004AF System.Void System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ExtendedProtectionPolicy__ctor_mE2798AC751EBABD43726A408726AD685C3DF9A02 (void);
// 0x000004B0 System.String System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy::ToString()
extern void ExtendedProtectionPolicy_ToString_m4048C353D32E535D25279ECCA7C86F8CE1EC7519 (void);
// 0x000004B1 System.Void System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ExtendedProtectionPolicy_System_Runtime_Serialization_ISerializable_GetObjectData_m82A2764FEC26F07C39AC6AEFE0806A7F491D0474 (void);
// 0x000004B2 System.Void System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicyTypeConverter::.ctor()
extern void ExtendedProtectionPolicyTypeConverter__ctor_m5A3243F8CBBD854965EA89D9853BFCFD5D475079 (void);
// 0x000004B3 System.Void System.Security.Cryptography.Oid::.ctor(System.String)
extern void Oid__ctor_mDB319C52BC09ED73F02F5BEC5950F728059405C2 (void);
// 0x000004B4 System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.Security.Cryptography.OidGroup,System.Boolean)
extern void Oid__ctor_m74A51E6D07E4EF2AEC66B6CAC03CFF60D072D3FF (void);
// 0x000004B5 System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.String)
extern void Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E (void);
// 0x000004B6 System.Void System.Security.Cryptography.Oid::.ctor(System.Security.Cryptography.Oid)
extern void Oid__ctor_m8C4B7AE0D9207BCF03960553182B43B8D1536ED0 (void);
// 0x000004B7 System.String System.Security.Cryptography.Oid::get_Value()
extern void Oid_get_Value_mD6F4D8AC1A3821D5DA263728C2DC0C208D084A78 (void);
// 0x000004B8 System.Void System.Security.Cryptography.Oid::set_Value(System.String)
extern void Oid_set_Value_mE13751778D2AC00F1CC962E42B35339BAEE45825 (void);
// 0x000004B9 System.String System.Security.Cryptography.Oid::get_FriendlyName()
extern void Oid_get_FriendlyName_mF93E7A679CA55F2D2E694814BF3B38532FF44B41 (void);
// 0x000004BA System.Void System.Security.Cryptography.OidCollection::.ctor()
extern void OidCollection__ctor_m99E1CCEB955F4BB57DEAE0BF8E7326380F93E111 (void);
// 0x000004BB System.Int32 System.Security.Cryptography.OidCollection::Add(System.Security.Cryptography.Oid)
extern void OidCollection_Add_m13C7466BB24E047C88F27AC6AB5E9439AA491EF1 (void);
// 0x000004BC System.Security.Cryptography.Oid System.Security.Cryptography.OidCollection::get_Item(System.Int32)
extern void OidCollection_get_Item_mB8F51EB0825BDE39504BC7090B8AEEE13D0A9967 (void);
// 0x000004BD System.Int32 System.Security.Cryptography.OidCollection::get_Count()
extern void OidCollection_get_Count_m35D85FFEC009FD8195DA9E0EE0CD5B66290FA3C6 (void);
// 0x000004BE System.Collections.IEnumerator System.Security.Cryptography.OidCollection::System.Collections.IEnumerable.GetEnumerator()
extern void OidCollection_System_Collections_IEnumerable_GetEnumerator_m550967A294FF63F004D855F019235DE15A046B3E (void);
// 0x000004BF System.Void System.Security.Cryptography.OidCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void OidCollection_System_Collections_ICollection_CopyTo_mC02E6211EC33878C50BEA5914193F038EE2E9CB7 (void);
// 0x000004C0 System.Boolean System.Security.Cryptography.OidCollection::get_IsSynchronized()
extern void OidCollection_get_IsSynchronized_m36C9F73515DA6834B85F9C8F9446E080CFA4C291 (void);
// 0x000004C1 System.Object System.Security.Cryptography.OidCollection::get_SyncRoot()
extern void OidCollection_get_SyncRoot_mB10B680D12CB8AC9C0F32C3C1217FA4345552174 (void);
// 0x000004C2 System.Void System.Security.Cryptography.OidEnumerator::.ctor(System.Security.Cryptography.OidCollection)
extern void OidEnumerator__ctor_m3BA079690E9B01B02B76FB694DCF279DAEC8E9D6 (void);
// 0x000004C3 System.Object System.Security.Cryptography.OidEnumerator::System.Collections.IEnumerator.get_Current()
extern void OidEnumerator_System_Collections_IEnumerator_get_Current_m21F1C975D9A97369DA0D3CEAADFA69D64214CEB3 (void);
// 0x000004C4 System.Boolean System.Security.Cryptography.OidEnumerator::MoveNext()
extern void OidEnumerator_MoveNext_m8CA45F7B39B4FEF9399379DAA1A6AAF4FFB8DCD8 (void);
// 0x000004C5 System.Void System.Security.Cryptography.OidEnumerator::Reset()
extern void OidEnumerator_Reset_mBCBE7C78E389E7D9794F44111832013583FB1F4C (void);
// 0x000004C6 System.String System.Security.Cryptography.CAPI::CryptFindOIDInfoNameFromKey(System.String,System.Security.Cryptography.OidGroup)
extern void CAPI_CryptFindOIDInfoNameFromKey_m81614B2DE702F23532452DFB95EC03DE6A5FBC80 (void);
// 0x000004C7 System.String System.Security.Cryptography.CAPI::CryptFindOIDInfoKeyFromName(System.String,System.Security.Cryptography.OidGroup)
extern void CAPI_CryptFindOIDInfoKeyFromName_mD4D690CEC8B4CFFDF5F530B1DD6B8F019026362A (void);
// 0x000004C8 System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
extern void AsnEncodedData__ctor_m0CF86C874705C96B224222BEBB6BF5703EAB29E2 (void);
// 0x000004C9 System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.Security.Cryptography.Oid,System.Byte[])
extern void AsnEncodedData__ctor_m0F04E7F12ED0BD74616EF4451F1EDDE6622E01EA (void);
// 0x000004CA System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
extern void AsnEncodedData_set_Oid_mA72203D23B0F93CD9ECD507EB878502EEBA99322 (void);
// 0x000004CB System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
extern void AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278 (void);
// 0x000004CC System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
extern void AsnEncodedData_set_RawData_m867F92C32F87E4D8932D17EDF21785CA0FDA3BEA (void);
// 0x000004CD System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void AsnEncodedData_CopyFrom_mA350785B8AF676AB7856E705FA2F2D20FD54CC46 (void);
// 0x000004CE System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean)
extern void AsnEncodedData_ToString_mD65B64466F8AC07960AE0AA01466D9D80F8A105E (void);
// 0x000004CF System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
extern void AsnEncodedData_Default_m4A9014D9B85AB114168577AD5DEE7FA2AFAB4EB6 (void);
// 0x000004D0 System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
extern void AsnEncodedData_BasicConstraintsExtension_mC9DE1C0199EA0714150CAD960FD88361763DE03A (void);
// 0x000004D1 System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
extern void AsnEncodedData_EnhancedKeyUsageExtension_m2ED1895CE72319E5E3B06F8BD76963BD6FF6263D (void);
// 0x000004D2 System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
extern void AsnEncodedData_KeyUsageExtension_m8F8D43DECE8B70E86FAF2B498204D3FC9E866ACD (void);
// 0x000004D3 System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
extern void AsnEncodedData_SubjectKeyIdentifierExtension_mE8BF30141FD478244F98363669282B9C26F74B9A (void);
// 0x000004D4 System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
extern void AsnEncodedData_SubjectAltName_m33180412765B9BC62F17B87F63964F89937C0467 (void);
// 0x000004D5 System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
extern void AsnEncodedData_NetscapeCertType_mBF9894A8993D137AEEC8919FEF582DF17EE5F652 (void);
// 0x000004D6 System.String System.Security.Cryptography.X509Certificates.X509Utils::FindOidInfo(System.UInt32,System.String,System.Security.Cryptography.OidGroup)
extern void X509Utils_FindOidInfo_m087A01CA38FDEA562172988FD3F84CEEA8046547 (void);
// 0x000004D7 System.String System.Security.Cryptography.X509Certificates.X509Utils::FindOidInfoWithFallback(System.UInt32,System.String,System.Security.Cryptography.OidGroup)
extern void X509Utils_FindOidInfoWithFallback_mCC7071A350EE1EA714F8FA28AA78E5AECEC89F77 (void);
// 0x000004D8 System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern void PublicKey__ctor_mB96189563F51185F4D44F2E9B570481CE7F63BE7 (void);
// 0x000004D9 System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern void PublicKey_get_EncodedKeyValue_m0294AF8C29C7329BEB243543D8FDA98B60FDB291 (void);
// 0x000004DA System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern void PublicKey_get_EncodedParameters_mFF4F9A39D91C0A00D1B36C93944816154C7255B3 (void);
// 0x000004DB System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern void PublicKey_get_Key_mF430DCB9952B3B936420D1F3CAE486DBF7570ECF (void);
// 0x000004DC System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern void PublicKey_get_Oid_mE3207B84A9090EC5404F6CD4AEABB1F37EC1F988 (void);
// 0x000004DD System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern void PublicKey_GetUnsignedBigInteger_m9F5E097A1ECF5CC31BBA476E4BE92CA5B4EDED1C (void);
// 0x000004DE System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern void PublicKey_DecodeDSA_mACDFC1AD42B734E6144955146731BC6CFE9793E8 (void);
// 0x000004DF System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern void PublicKey_DecodeRSA_mAFA51DF5F4A97F2AEF8E5F84815D79B2366A105A (void);
// 0x000004E0 System.Void System.Security.Cryptography.X509Certificates.PublicKey::.cctor()
extern void PublicKey__cctor_mFB84C561EADA19EDA00A2F29D2F0369D9686352F (void);
// 0x000004E1 System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor()
extern void X509BasicConstraintsExtension__ctor_mBFE792A93883E704745E589380F1DD7F12ECB36E (void);
// 0x000004E2 System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509BasicConstraintsExtension__ctor_m67462D9110118C82677CE42C2685C05C0767EB00 (void);
// 0x000004E3 System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
extern void X509BasicConstraintsExtension__ctor_m27365A2183995553C17661A9C5E6CFF474AEB33D (void);
// 0x000004E4 System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_CertificateAuthority()
extern void X509BasicConstraintsExtension_get_CertificateAuthority_mF7C866A45B3DE24A06EA3256B8FC0BA1989D038D (void);
// 0x000004E5 System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_HasPathLengthConstraint()
extern void X509BasicConstraintsExtension_get_HasPathLengthConstraint_m04C1B45C4FF2FF902B45A5B1AE309D3816A3457A (void);
// 0x000004E6 System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_PathLengthConstraint()
extern void X509BasicConstraintsExtension_get_PathLengthConstraint_m9401525125A220F1D51F130E3CC6E4C938E45566 (void);
// 0x000004E7 System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509BasicConstraintsExtension_CopyFrom_mB87E2C5337CEE107018289CF81AD4ED7956A6ECD (void);
// 0x000004E8 System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
extern void X509BasicConstraintsExtension_Decode_m02EECEF97728108FE014735EDAD8C74B8461B384 (void);
// 0x000004E9 System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
extern void X509BasicConstraintsExtension_Encode_mC5E34F1B66DE0BCBD7C524C968C2C010B566843C (void);
// 0x000004EA System.String System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::ToString(System.Boolean)
extern void X509BasicConstraintsExtension_ToString_m4ABD6F1E1B7271403EA6250EFDCF400D68B8256D (void);
// 0x000004EB System.Security.Cryptography.X509Certificates.X509Certificate2Impl System.Security.Cryptography.X509Certificates.X509Certificate2::get_Impl()
extern void X509Certificate2_get_Impl_mAD55B5116FFD751B1963259C04E8F5F81517C465 (void);
// 0x000004EC System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor()
extern void X509Certificate2__ctor_m95D16A7EB76393C591CA0E93FA331B931504C9BA (void);
// 0x000004ED System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
extern void X509Certificate2__ctor_mBFFAA9446A805AF8E5B5A76F4D2375815A854ABA (void);
// 0x000004EE System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.String)
extern void X509Certificate2__ctor_m5EFF697A4FBB02A5D86C2C475FB86576A4FE8DF8 (void);
// 0x000004EF System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void X509Certificate2__ctor_m9BED4BE32997E4EF930C8D66CCF7C429265A6D42 (void);
// 0x000004F0 System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
extern void X509Certificate2_get_NotAfter_m6A8FF55FBA82F3B04C23E30E21BF8F64693C8565 (void);
// 0x000004F1 System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotBefore()
extern void X509Certificate2_get_NotBefore_mDC4BB64A4D8A295BD1021C43D58DD43EBA4883B0 (void);
// 0x000004F2 System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
extern void X509Certificate2_get_PrivateKey_m49B88B09C59D2453F8BFC96CDAFC290948A8E581 (void);
// 0x000004F3 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::set_PrivateKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern void X509Certificate2_set_PrivateKey_mE45715F8D406274A7F7B7635494F6DE49FCB4E48 (void);
// 0x000004F4 System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::get_PublicKey()
extern void X509Certificate2_get_PublicKey_m8AC9C95FA651768945AFF1EF0FEBE2F22F8AA889 (void);
// 0x000004F5 System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
extern void X509Certificate2_get_SerialNumber_mBAE78C9FC3C5080CB782B1734497E83D4282D12A (void);
// 0x000004F6 System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::get_SignatureAlgorithm()
extern void X509Certificate2_get_SignatureAlgorithm_mF10C8153EED8633549FDB22006CFAABAC1B26931 (void);
// 0x000004F7 System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_Thumbprint()
extern void X509Certificate2_get_Thumbprint_m974E38E6838673D52D4672218325E45AE8636383 (void);
// 0x000004F8 System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2::get_Version()
extern void X509Certificate2_get_Version_mAA8C8DCAA6E046FAFD7C3DE665665C8FEC28EF9C (void);
// 0x000004F9 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern void X509Certificate2_Import_mB8CE3F497DC540159206373283627C58C95D200F (void);
// 0x000004FA System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.String,System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern void X509Certificate2_Import_mEA556AEB39FCB533A2F9F927EA66DD2D84639EAB (void);
// 0x000004FB System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Reset()
extern void X509Certificate2_Reset_mC64732F1FEE53D8C0478B164AD5B9A7C99C50AC0 (void);
// 0x000004FC System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString()
extern void X509Certificate2_ToString_mA04C0490966DDB6242954B9C556E7AB650DF80F5 (void);
// 0x000004FD System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString(System.Boolean)
extern void X509Certificate2_ToString_m8E889E21183273EE06D65DF4DC32AD8953505639 (void);
// 0x000004FE System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::AppendBuffer(System.Text.StringBuilder,System.Byte[])
extern void X509Certificate2_AppendBuffer_m3597EA44AD17C46000D5A761BAF157564AEFB5EF (void);
// 0x000004FF System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.cctor()
extern void X509Certificate2__cctor_m9EDDBF4AEEB46FB2121A004E4D4C6C1602232B22 (void);
// 0x00000500 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor()
extern void X509Certificate2Collection__ctor_m4674349C139499C3BBFB6E8295A202DFE466CEB7 (void);
// 0x00000501 System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern void X509Certificate2Collection_Add_mB0B0DEB3E16EEBE0C7445041E35E0C587D6EC001 (void);
// 0x00000502 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.cctor()
extern void X509Certificate2Collection__cctor_mA60C0BD51F8C9A395AF3FF4AAB24BF6F07BC4C81 (void);
// 0x00000503 System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_PrivateKey()
// 0x00000504 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Impl::set_PrivateKey(System.Security.Cryptography.AsymmetricAlgorithm)
// 0x00000505 System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_PublicKey()
// 0x00000506 System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_SignatureAlgorithm()
// 0x00000507 System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_Version()
// 0x00000508 System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_IntermediateCertificates()
// 0x00000509 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Impl::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
// 0x0000050A System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Impl::Reset()
// 0x0000050B System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Impl::.ctor()
extern void X509Certificate2Impl__ctor_mB6CCF2EA294D53A594FFB7CAB55962E920D1BB28 (void);
// 0x0000050C System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_IsValid()
extern void X509Certificate2ImplMono_get_IsValid_m8EA0498434746DCD902D85379F00A21245E4F11C (void);
// 0x0000050D System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor(Mono.Security.X509.X509Certificate)
extern void X509Certificate2ImplMono__ctor_mBDF5F03F3BC955CCFD3AFB740B60D5869431702E (void);
// 0x0000050E System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono)
extern void X509Certificate2ImplMono__ctor_mBCD25943158CBDCBD55E24A19AACDC47B4F6C46A (void);
// 0x0000050F System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Clone()
extern void X509Certificate2ImplMono_Clone_mC55211F100A5F0F9B5B8B609D65FC0B3F0BAEB9B (void);
// 0x00000510 System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetIssuerName(System.Boolean)
extern void X509Certificate2ImplMono_GetIssuerName_m4BD00FBE8A745B2DB2704AF7AAA5F48099354511 (void);
// 0x00000511 System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetSubjectName(System.Boolean)
extern void X509Certificate2ImplMono_GetSubjectName_m7058BA456600F52DC12B20A3E426F3CBEFC22891 (void);
// 0x00000512 System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetRawCertData()
extern void X509Certificate2ImplMono_GetRawCertData_m8E5EE16FD23AA6F170CC78DD63AE1C25AE3A7C0F (void);
// 0x00000513 System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetCertHash(System.Boolean)
extern void X509Certificate2ImplMono_GetCertHash_m1D19FAD20F230EC3AB882804775F5111A93C3EFB (void);
// 0x00000514 System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetValidFrom()
extern void X509Certificate2ImplMono_GetValidFrom_mF14444E8277382677378B2E3FDDEE929BC080539 (void);
// 0x00000515 System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetValidUntil()
extern void X509Certificate2ImplMono_GetValidUntil_m33AA78A101D5C6FDCB83A45D77DD0E2F5ABA5E9E (void);
// 0x00000516 System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Equals(System.Security.Cryptography.X509Certificates.X509CertificateImpl,System.Boolean&)
extern void X509Certificate2ImplMono_Equals_m5B0557C1274E4ACE12917539CEB51B88F0A8855C (void);
// 0x00000517 System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetSerialNumber()
extern void X509Certificate2ImplMono_GetSerialNumber_m1A6C4BC02159AED090856870E30309A41F620B39 (void);
// 0x00000518 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor()
extern void X509Certificate2ImplMono__ctor_m6A63CE786DD033AAF667CE9E928B2470425E1010 (void);
// 0x00000519 System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_PrivateKey()
extern void X509Certificate2ImplMono_get_PrivateKey_m4F96338A12FDEDCCC6B6B8C3F263C5E0E0329327 (void);
// 0x0000051A System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::set_PrivateKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern void X509Certificate2ImplMono_set_PrivateKey_m23C6D7F4CFEA17D7EB993E3C44F7560E2E50955B (void);
// 0x0000051B System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_PublicKey()
extern void X509Certificate2ImplMono_get_PublicKey_m266BB633193C454E99BDE12F087ADDD931F0E1A9 (void);
// 0x0000051C System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_SignatureAlgorithm()
extern void X509Certificate2ImplMono_get_SignatureAlgorithm_m98B9DD7FEFE52F865DEE68E4FDDA592747DE5A19 (void);
// 0x0000051D System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_Version()
extern void X509Certificate2ImplMono_get_Version_m1E24884D49422A8DD3152FF62B2F9588D8CC4B2B (void);
// 0x0000051E Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::ImportPkcs12(System.Byte[],System.String)
extern void X509Certificate2ImplMono_ImportPkcs12_mB87D6BE13939DCD628BC979FFF63671CA23E0A86 (void);
// 0x0000051F System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern void X509Certificate2ImplMono_Import_m49505FDD390700DF03D6C298C7870C5269255F24 (void);
// 0x00000520 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Reset()
extern void X509Certificate2ImplMono_Reset_m64DEBBA05762E41390F084DD9BF35C617C64C3E4 (void);
// 0x00000521 System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::ToString()
extern void X509Certificate2ImplMono_ToString_m243DD8D5CD86BA7F1F5FD047AECFA90A30C28E66 (void);
// 0x00000522 System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::ToString(System.Boolean)
extern void X509Certificate2ImplMono_ToString_m255BB5C223E59F719FD598D427C3BB11F474E8EC (void);
// 0x00000523 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::AppendBuffer(System.Text.StringBuilder,System.Byte[])
extern void X509Certificate2ImplMono_AppendBuffer_mB2A153E772FE093A7B6D35BA32348D1E36799150 (void);
// 0x00000524 System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_IntermediateCertificates()
extern void X509Certificate2ImplMono_get_IntermediateCertificates_m86F36AF08247DCBB2C4919BB3E3607C6EA88E6CF (void);
// 0x00000525 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.cctor()
extern void X509Certificate2ImplMono__cctor_m246C5CB1140C353C9979A95EDF981463CB0C18B7 (void);
// 0x00000526 System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor()
extern void X509CertificateCollection__ctor_m038CE3FFE670E8DC426728EE334DF915BC3F1644 (void);
// 0x00000527 System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void X509CertificateCollection__ctor_mA8D824BD5C4CFF13989F01F182F9D09CDE3A92C2 (void);
// 0x00000528 System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection::get_Item(System.Int32)
extern void X509CertificateCollection_get_Item_mF0F62ACA6DB4482B2F055563F3A88CFDB92377FA (void);
// 0x00000529 System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::AddRange(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void X509CertificateCollection_AddRange_m7856434D39CA3D6AB751C25CEB509A04E252722B (void);
// 0x0000052A System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetEnumerator()
extern void X509CertificateCollection_GetEnumerator_mB2D27CFCAA973ED96A90743270506B721358A29F (void);
// 0x0000052B System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetHashCode()
extern void X509CertificateCollection_GetHashCode_mF20BA3BA9E01B2533463FF2F26173FE0DBBC04BE (void);
// 0x0000052C System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void X509CertificateEnumerator__ctor_m52095CF67A4A192364C30FF8B0E17FC89BB58640 (void);
// 0x0000052D System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::get_Current()
extern void X509CertificateEnumerator_get_Current_m073AF75A4FCD3173200FF90AB6539B9D82C9EA90 (void);
// 0x0000052E System.Object System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
extern void X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_mBE4F1A9CE8C97F506D8F7FDA6F9C18135BA9AE15 (void);
// 0x0000052F System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
extern void X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m2B17A1E25AB322A73AFA8E8A368A5B1968F48F71 (void);
// 0x00000530 System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
extern void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m5A185825A08CCA0ED7D6419FA6F6E180061B9555 (void);
// 0x00000531 System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
extern void X509CertificateEnumerator_MoveNext_mD24E317796AFDCEE1C381C30AEC85B5B3A486F8C (void);
// 0x00000532 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::.ctor()
extern void X509CertificateImplCollection__ctor_m186BDD732AB7A82E47606E244A0B2A82860A8F5B (void);
// 0x00000533 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateImplCollection)
extern void X509CertificateImplCollection__ctor_m670BE04FD8D99C60BC8A862CACC2DF15744B70AC (void);
// 0x00000534 System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::get_Count()
extern void X509CertificateImplCollection_get_Count_m6C92C5AA558F2ECBD17BB5E743443FF353F1C29E (void);
// 0x00000535 System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::get_Item(System.Int32)
extern void X509CertificateImplCollection_get_Item_m8BC2DE13F2E914AC2290C5F015A00DA0562EC628 (void);
// 0x00000536 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Add(System.Security.Cryptography.X509Certificates.X509CertificateImpl,System.Boolean)
extern void X509CertificateImplCollection_Add_mB07BB408F414BD2A54BAE33C467C6211A0F565FF (void);
// 0x00000537 System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Clone()
extern void X509CertificateImplCollection_Clone_m574D3070FCFCD00BA41E3517111BB55158E85590 (void);
// 0x00000538 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Dispose()
extern void X509CertificateImplCollection_Dispose_m921A22D3FBCF1551AD058E4A69EF5DE82F217662 (void);
// 0x00000539 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Dispose(System.Boolean)
extern void X509CertificateImplCollection_Dispose_m0AFF1F469149E71D985C307B9C779E08088AAFEE (void);
// 0x0000053A System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Finalize()
extern void X509CertificateImplCollection_Finalize_m36BECC904589560DD13C165E380A25A7052C22F2 (void);
// 0x0000053B System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::get_Impl()
extern void X509Chain_get_Impl_mDFDF83101E18C675FBA93E833DDBC458D8427E7E (void);
// 0x0000053C System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor()
extern void X509Chain__ctor_m55DBE2D3727F0AAD25C34A7DCA654AA6218145E4 (void);
// 0x0000053D System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
extern void X509Chain__ctor_m246DB394D17776D7769D04FF0EE0B4B9F8518DE0 (void);
// 0x0000053E System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Security.Cryptography.X509Certificates.X509ChainImpl)
extern void X509Chain__ctor_m3406D90977BB9160C7275CF5EA0FA629CEE4F386 (void);
// 0x0000053F System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509Chain::get_ChainElements()
extern void X509Chain_get_ChainElements_mEA079D18934C900F8AE7E24CC8B143C27A7365DD (void);
// 0x00000540 System.Void System.Security.Cryptography.X509Certificates.X509Chain::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy)
extern void X509Chain_set_ChainPolicy_mBCA34300EEA4783253A7B8DC281F9B858B207C92 (void);
// 0x00000541 System.Void System.Security.Cryptography.X509Certificates.X509Chain::Dispose()
extern void X509Chain_Dispose_mCFA2A24CDD151F681BA0A24B2CE814696217A1E3 (void);
// 0x00000542 System.Void System.Security.Cryptography.X509Certificates.X509Chain::Dispose(System.Boolean)
extern void X509Chain_Dispose_mBD3D48BC042C872B530302CBA9121D67C6A488C6 (void);
// 0x00000543 System.Void System.Security.Cryptography.X509Certificates.X509Chain::Finalize()
extern void X509Chain_Finalize_m23EF4947D8018EECD79F91B850C65939F42A6BC7 (void);
// 0x00000544 System.Void System.Security.Cryptography.X509Certificates.X509ChainElement::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern void X509ChainElement__ctor_m0345BD8FA64DFC6F1B0B7F3298E7E0A93A29805F (void);
// 0x00000545 System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509ChainElement::get_Certificate()
extern void X509ChainElement_get_Certificate_m586BA432D80368AAE40A0524D4770C39BDC640C9 (void);
// 0x00000546 System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::.ctor()
extern void X509ChainElementCollection__ctor_m63CF4401F3A9F06018F89DE0F5CD0B401AF3F516 (void);
// 0x00000547 System.Int32 System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Count()
extern void X509ChainElementCollection_get_Count_m61A068A8B5783C37B5835E67E157066A1438821C (void);
// 0x00000548 System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_IsSynchronized()
extern void X509ChainElementCollection_get_IsSynchronized_m3EB9623F37326704E9F247D769C7CF090470D3D7 (void);
// 0x00000549 System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Item(System.Int32)
extern void X509ChainElementCollection_get_Item_m87736EDD3B7649BCC883759FA1CEB61705B9BDD6 (void);
// 0x0000054A System.Object System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_SyncRoot()
extern void X509ChainElementCollection_get_SyncRoot_mE954E1ACE08270ED865B7A6686856CFC448358D7 (void);
// 0x0000054B System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void X509ChainElementCollection_System_Collections_ICollection_CopyTo_m54291E0447BC978834408CF6709695723C57F99A (void);
// 0x0000054C System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.IEnumerable.GetEnumerator()
extern void X509ChainElementCollection_System_Collections_IEnumerable_GetEnumerator_m9BAE4B33C287703E64F97D23F8AAEB0E3121EF8D (void);
// 0x0000054D System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern void X509ChainElementCollection_Add_m6089CEC31B6F33B5E7A18C18A6FB92BFDAE4AC70 (void);
// 0x0000054E System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Clear()
extern void X509ChainElementCollection_Clear_m16FFA49F7E1F08419E6BB6D0F348A6ECD21FF06D (void);
// 0x0000054F System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::.ctor(System.Collections.IEnumerable)
extern void X509ChainElementEnumerator__ctor_mDCF28D8FD9D18A200A31294DB23C5697E97954F7 (void);
// 0x00000550 System.Object System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::System.Collections.IEnumerator.get_Current()
extern void X509ChainElementEnumerator_System_Collections_IEnumerator_get_Current_mB1ED81C9DBD230BA46B8BF9C1EE60C0EB02FD72C (void);
// 0x00000551 System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::MoveNext()
extern void X509ChainElementEnumerator_MoveNext_m92880AD08574A13CF5097F800CAB6834A9C01BFE (void);
// 0x00000552 System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::Reset()
extern void X509ChainElementEnumerator_Reset_m88A53B2C249FFB257054D874F189EAFFA256E108 (void);
// 0x00000553 System.Boolean System.Security.Cryptography.X509Certificates.X509ChainImpl::get_IsValid()
// 0x00000554 System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::ThrowIfContextInvalid()
extern void X509ChainImpl_ThrowIfContextInvalid_mB4BB36FE66E507EF9A505F5D8B81F546E822C2F0 (void);
// 0x00000555 System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509ChainImpl::get_ChainElements()
// 0x00000556 System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy)
// 0x00000557 System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Reset()
// 0x00000558 System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose()
extern void X509ChainImpl_Dispose_mBBC758892307733F67FDD74E54A1AA7EF14FC917 (void);
// 0x00000559 System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose(System.Boolean)
extern void X509ChainImpl_Dispose_m826F0D317D9B289A03CE7129D6FB2677ABDD47AC (void);
// 0x0000055A System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Finalize()
extern void X509ChainImpl_Finalize_m18B174F1E86BE1A17C0EAB764F2A65ED1A4CE838 (void);
// 0x0000055B System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::.ctor()
extern void X509ChainImpl__ctor_mC306F06EB416D53AC39137E23FD072E8DC87E8E1 (void);
// 0x0000055C System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::.ctor(System.Boolean)
extern void X509ChainImplMono__ctor_m82E3F7D2ED531977F1C07B3DC2E6921408F095D3 (void);
// 0x0000055D System.Boolean System.Security.Cryptography.X509Certificates.X509ChainImplMono::get_IsValid()
extern void X509ChainImplMono_get_IsValid_mB5550DBA70129AC130A14F03AF67AC120196E431 (void);
// 0x0000055E System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509ChainImplMono::get_ChainElements()
extern void X509ChainImplMono_get_ChainElements_m481D94CE76D18173FC1176D5BC464B94B055C7F3 (void);
// 0x0000055F System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy)
extern void X509ChainImplMono_set_ChainPolicy_mBBE85DCBD0B487DB7180415F8B96255CA7F4B729 (void);
// 0x00000560 System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::Reset()
extern void X509ChainImplMono_Reset_mF4895F7B729040623E341CF56D752F44E3DA05DC (void);
// 0x00000561 System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::.cctor()
extern void X509ChainImplMono__cctor_m96C72ED26C1B06CE7293CE353FE0550BD7EBB1B8 (void);
// 0x00000562 System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::.ctor()
extern void X509ChainPolicy__ctor_m3BE053A8A6F6A59E283062E09FABA64AF98EB7D9 (void);
// 0x00000563 System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void X509ChainPolicy__ctor_m17F37BC42389FFA54D34961E22624F615D7A2094 (void);
// 0x00000564 System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::Reset()
extern void X509ChainPolicy_Reset_m523357E1A74D1DD2018768BD3FAC786517AD9EC1 (void);
// 0x00000565 System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::.ctor(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern void X509ChainStatus__ctor_mA41DF127E7EEF7B59204118C5C48F695F2C6DECC (void);
// 0x00000566 System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::GetInformation(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern void X509ChainStatus_GetInformation_m567616CB63B98B727B901FE93AE1D89F13ABB68C (void);
// 0x00000567 System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509EnhancedKeyUsageExtension__ctor_m64F507CB1938AA4BC20287D731B74DF5CC99A96C (void);
// 0x00000568 System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509EnhancedKeyUsageExtension_CopyFrom_mDD12A69F6804BA6B137A459CD941B367274C2B25 (void);
// 0x00000569 System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
extern void X509EnhancedKeyUsageExtension_Decode_m610C0C741966205F6DC0492BD17B28E1FED8D648 (void);
// 0x0000056A System.String System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::ToString(System.Boolean)
extern void X509EnhancedKeyUsageExtension_ToString_m12992C4F3BE30FC9662680B8CDAC07F7F7C67134 (void);
// 0x0000056B System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
extern void X509Extension__ctor_m4DF31A0909F64A47F2F8E64E814FE16E022794E7 (void);
// 0x0000056C System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
extern void X509Extension_get_Critical_m56CF11BDF0C2D2917C326013630709C7709DCF12 (void);
// 0x0000056D System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
extern void X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0 (void);
// 0x0000056E System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509Extension_CopyFrom_m1D101C0A8E17FDC25EF1D7645F2A07E5AB7A3D1C (void);
// 0x0000056F System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
extern void X509Extension_FormatUnkownData_mEF1E719F7AD312B099351C581F4A06925AD9F18A (void);
// 0x00000570 System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::.cctor()
extern void X509ExtensionCollection__cctor_mC99A8E7D956FAE85B026B679EB60D4D69293C17E (void);
// 0x00000571 System.Void System.Security.Cryptography.X509Certificates.X509Helper2::Initialize()
extern void X509Helper2_Initialize_mC5FBA7005CCE51EDAB017099F372F0BD0D55A4FD (void);
// 0x00000572 System.Void System.Security.Cryptography.X509Certificates.X509Helper2::ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509CertificateImpl)
extern void X509Helper2_ThrowIfContextInvalid_m4C790ADB9E395978A1E98D341C08059D611A7554 (void);
// 0x00000573 System.Security.Cryptography.X509Certificates.X509Certificate2Impl System.Security.Cryptography.X509Certificates.X509Helper2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags,System.Boolean)
extern void X509Helper2_Import_mC26B4A8627F5A312DC7A0DC5D505D71A6E1C48C0 (void);
// 0x00000574 System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Helper2::CreateChainImpl(System.Boolean)
extern void X509Helper2_CreateChainImpl_m5A619F5A495B81CAAAB2D9F3EA1472ECAE2386B9 (void);
// 0x00000575 System.Boolean System.Security.Cryptography.X509Certificates.X509Helper2::IsValid(System.Security.Cryptography.X509Certificates.X509ChainImpl)
extern void X509Helper2_IsValid_m95197F0F36FA869279EC89843AF4047ED7F29E25 (void);
// 0x00000576 System.Void System.Security.Cryptography.X509Certificates.X509Helper2::ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509ChainImpl)
extern void X509Helper2_ThrowIfContextInvalid_m14776A4BB277B5033E572D162F84DD33DF8BA2D9 (void);
// 0x00000577 System.Exception System.Security.Cryptography.X509Certificates.X509Helper2::GetInvalidChainContextException()
extern void X509Helper2_GetInvalidChainContextException_m5B99E13491617F93AC875A36D23180F3A883200B (void);
// 0x00000578 System.Void System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper::.ctor()
extern void MyNativeHelper__ctor_m3C33DA045EB050BE747AD1E3B10DA0C350678EA7 (void);
// 0x00000579 System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor()
extern void X509KeyUsageExtension__ctor_mE735C27BA5C2BBEA264B0FDB229E7DA7A2E3416D (void);
// 0x0000057A System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509KeyUsageExtension__ctor_m6D2F83567A69553296EB7CC93466B20C7884C54E (void);
// 0x0000057B System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags,System.Boolean)
extern void X509KeyUsageExtension__ctor_m0E105A1E8A7ED901E90E53B33EF86DFB3D2F3B9C (void);
// 0x0000057C System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::get_KeyUsages()
extern void X509KeyUsageExtension_get_KeyUsages_mD2ADFD4CC335B85D453BCA75A8541D3DF099A8FB (void);
// 0x0000057D System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509KeyUsageExtension_CopyFrom_m029A26C577528A8DF077CF68AD2787DC1E76FA7F (void);
// 0x0000057E System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
extern void X509KeyUsageExtension_GetValidFlags_m3141215EE841412F2C65E9CD7C90AE26E4D05C9A (void);
// 0x0000057F System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
extern void X509KeyUsageExtension_Decode_m8D2236720B86833EAFCB87C19BF616E84A15A385 (void);
// 0x00000580 System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
extern void X509KeyUsageExtension_Encode_m14D2F2E0777C7CFA424399E66349940A923764E5 (void);
// 0x00000581 System.String System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::ToString(System.Boolean)
extern void X509KeyUsageExtension_ToString_m16FC486E9C54EBAEF7CA8C62C820DE7F0BE1E084 (void);
// 0x00000582 System.Void System.Security.Cryptography.X509Certificates.X509Store::Close()
extern void X509Store_Close_m2FA715DD72AEE3DD1CA06128AB5D3925EAD8E29A (void);
// 0x00000583 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
extern void X509SubjectKeyIdentifierExtension__ctor_m0A09F64706823AF7D0494B62B041FF11AFA587CF (void);
// 0x00000584 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m6D7E57ECBE71290733F6658D8197F034A615DB02 (void);
// 0x00000585 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m178F0928E93C151B64754E82C9613687D80671A0 (void);
// 0x00000586 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_mDEF8BD36D2A43B1BDC54760AC6E57458E5ECBFE6 (void);
// 0x00000587 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m50305847B96BE3F6CB0816EB143AB89108DA493A (void);
// 0x00000588 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m7CE599E8BEFBF176243E07100E2B9D1AD40E109E (void);
// 0x00000589 System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
extern void X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_mD90F985708EE4E69C37AA8B09AEBBE64A4002601 (void);
// 0x0000058A System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509SubjectKeyIdentifierExtension_CopyFrom_mA94CE978304FA27C3CD9719F34D85CD34FC3695D (void);
// 0x0000058B System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
extern void X509SubjectKeyIdentifierExtension_FromHexChar_m20658FF901ABAB59012E4E0749D000DFD5064C82 (void);
// 0x0000058C System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
extern void X509SubjectKeyIdentifierExtension_FromHexChars_mFCF146774B2FD3757B3228BC6991A4CFDFB5BCCF (void);
// 0x0000058D System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
extern void X509SubjectKeyIdentifierExtension_FromHex_m66F3F235B6F034AE84E9C2B969E78BF07559BFD6 (void);
// 0x0000058E System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
extern void X509SubjectKeyIdentifierExtension_Decode_m6ED45FB642F2A5EDAD51EE357CAB8EB95BC8EBA9 (void);
// 0x0000058F System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
extern void X509SubjectKeyIdentifierExtension_Encode_m6BEC26EF891B31FF98EF4FDF96CC0E9CEDF0B208 (void);
// 0x00000590 System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
extern void X509SubjectKeyIdentifierExtension_ToString_mBD5BE20274B5B56104E6ECD3137DE0718DE50537 (void);
// 0x00000591 System.Void System.Collections.Specialized.HybridDictionary::.ctor()
extern void HybridDictionary__ctor_m9FC8D443AABAEC8D67ADF072437D2B364B08B7F1 (void);
// 0x00000592 System.Object System.Collections.Specialized.HybridDictionary::get_Item(System.Object)
extern void HybridDictionary_get_Item_m7185EEEAFC226096E70344C925C0E878B6BB355C (void);
// 0x00000593 System.Void System.Collections.Specialized.HybridDictionary::set_Item(System.Object,System.Object)
extern void HybridDictionary_set_Item_mE42268AAEEFAC3C809899E1BC62251985E731079 (void);
// 0x00000594 System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::get_List()
extern void HybridDictionary_get_List_m04D20BE02A5E09BE885C0780E74435ACCD56D78C (void);
// 0x00000595 System.Void System.Collections.Specialized.HybridDictionary::ChangeOver()
extern void HybridDictionary_ChangeOver_m720F3CC680ABE10D68E6E5D67EE646435498EC8B (void);
// 0x00000596 System.Int32 System.Collections.Specialized.HybridDictionary::get_Count()
extern void HybridDictionary_get_Count_m9105DDBF52049FDB3664818E8883EDF06646C28A (void);
// 0x00000597 System.Boolean System.Collections.Specialized.HybridDictionary::get_IsSynchronized()
extern void HybridDictionary_get_IsSynchronized_mEDB978DB4DD87B56D2111BFD618E9B93563C8020 (void);
// 0x00000598 System.Object System.Collections.Specialized.HybridDictionary::get_SyncRoot()
extern void HybridDictionary_get_SyncRoot_m6E4080330F28495CDEB87CB61DAE35C24028AA88 (void);
// 0x00000599 System.Void System.Collections.Specialized.HybridDictionary::Add(System.Object,System.Object)
extern void HybridDictionary_Add_mAD439BE2C4F44AF8A43EC7491E26478EDDF7DFBC (void);
// 0x0000059A System.Boolean System.Collections.Specialized.HybridDictionary::Contains(System.Object)
extern void HybridDictionary_Contains_m4D83965011E01C6992097DD64AC0F5C3C0E2C765 (void);
// 0x0000059B System.Void System.Collections.Specialized.HybridDictionary::CopyTo(System.Array,System.Int32)
extern void HybridDictionary_CopyTo_m14080EC1FA3FC4736A5EBA8B4B9CC49DD4E673D3 (void);
// 0x0000059C System.Collections.IDictionaryEnumerator System.Collections.Specialized.HybridDictionary::GetEnumerator()
extern void HybridDictionary_GetEnumerator_m6A951136F415F6AA36DD93755EDE5873D6D66117 (void);
// 0x0000059D System.Collections.IEnumerator System.Collections.Specialized.HybridDictionary::System.Collections.IEnumerable.GetEnumerator()
extern void HybridDictionary_System_Collections_IEnumerable_GetEnumerator_m51EE25513E0F719E34095133BD0C11379464A6EA (void);
// 0x0000059E System.Void System.Collections.Specialized.INotifyCollectionChanged::add_CollectionChanged(System.Collections.Specialized.NotifyCollectionChangedEventHandler)
// 0x0000059F System.Void System.Collections.Specialized.INotifyCollectionChanged::remove_CollectionChanged(System.Collections.Specialized.NotifyCollectionChangedEventHandler)
// 0x000005A0 System.Void System.Collections.Specialized.ListDictionary::.ctor()
extern void ListDictionary__ctor_m9B69C39CDA7C506487D47DFE0AD7CF59B0C4C82F (void);
// 0x000005A1 System.Void System.Collections.Specialized.ListDictionary::.ctor(System.Collections.IComparer)
extern void ListDictionary__ctor_mEF3028294A42FC5771EBED7DC1DCB104E284A79A (void);
// 0x000005A2 System.Object System.Collections.Specialized.ListDictionary::get_Item(System.Object)
extern void ListDictionary_get_Item_m234AF1C6B763954DA1EC8BD5C74BA2D16E8D74DC (void);
// 0x000005A3 System.Void System.Collections.Specialized.ListDictionary::set_Item(System.Object,System.Object)
extern void ListDictionary_set_Item_m68050184A6FE6BB7B33891F19FE8D87D458499AD (void);
// 0x000005A4 System.Int32 System.Collections.Specialized.ListDictionary::get_Count()
extern void ListDictionary_get_Count_m63B5332C669C858EBC423472A502528612C890F1 (void);
// 0x000005A5 System.Boolean System.Collections.Specialized.ListDictionary::get_IsSynchronized()
extern void ListDictionary_get_IsSynchronized_m98323278519FFC7DF7206C42568B3C0E1724F5B9 (void);
// 0x000005A6 System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot()
extern void ListDictionary_get_SyncRoot_m44040160ADB660B10684A95305CB08F56AF029E8 (void);
// 0x000005A7 System.Void System.Collections.Specialized.ListDictionary::Add(System.Object,System.Object)
extern void ListDictionary_Add_mD622807A74E5FF8AF27DFF445307D81DFCFADB28 (void);
// 0x000005A8 System.Boolean System.Collections.Specialized.ListDictionary::Contains(System.Object)
extern void ListDictionary_Contains_m06D47395FA7A1B7379C8BBFD38D7A8CFEB721D08 (void);
// 0x000005A9 System.Void System.Collections.Specialized.ListDictionary::CopyTo(System.Array,System.Int32)
extern void ListDictionary_CopyTo_mBF4FD9B59407ABF719E2565E788A2DC9A4769564 (void);
// 0x000005AA System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator()
extern void ListDictionary_GetEnumerator_m6B44040F7259D5F7F1E15F4A4FA0FAE38BFEE236 (void);
// 0x000005AB System.Collections.IEnumerator System.Collections.Specialized.ListDictionary::System.Collections.IEnumerable.GetEnumerator()
extern void ListDictionary_System_Collections_IEnumerable_GetEnumerator_m6412355259E0F0D8959F9785D34F0748511F3783 (void);
// 0x000005AC System.Void System.Collections.Specialized.ListDictionary/NodeEnumerator::.ctor(System.Collections.Specialized.ListDictionary)
extern void NodeEnumerator__ctor_m96E6D528E4C4D03DF5FE2C904501B77246EE5B17 (void);
// 0x000005AD System.Object System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Current()
extern void NodeEnumerator_get_Current_m19DF983FA469D5832AC53B7841D278980859DE59 (void);
// 0x000005AE System.Collections.DictionaryEntry System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Entry()
extern void NodeEnumerator_get_Entry_m58F1425F47017D32E7F781CBA78E37C355F596AA (void);
// 0x000005AF System.Object System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Key()
extern void NodeEnumerator_get_Key_mFB4422BD5607790768C310AA7715CDC47799E5AD (void);
// 0x000005B0 System.Object System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Value()
extern void NodeEnumerator_get_Value_m01AD97761452577C6F66680DE74BBDDE898B8F72 (void);
// 0x000005B1 System.Boolean System.Collections.Specialized.ListDictionary/NodeEnumerator::MoveNext()
extern void NodeEnumerator_MoveNext_m8615D4B81CA7F5D17919BE7BFF0A688B192A67DD (void);
// 0x000005B2 System.Void System.Collections.Specialized.ListDictionary/NodeEnumerator::Reset()
extern void NodeEnumerator_Reset_m9992FAC9825E8D6692B6FCEDF8E47E941C1875FC (void);
// 0x000005B3 System.Void System.Collections.Specialized.ListDictionary/DictionaryNode::.ctor()
extern void DictionaryNode__ctor_m38EC4C8C8EF2A5ABDD91B178DDB0CF0E0D7D15E2 (void);
// 0x000005B4 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
extern void NameObjectCollectionBase__ctor_mA74DFF0CE0FB59430A786082F414813F276F130D (void);
// 0x000005B5 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer)
extern void NameObjectCollectionBase__ctor_m684256D394079487B0AA79F96D82FC1EF34A2123 (void);
// 0x000005B6 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern void NameObjectCollectionBase__ctor_m9100CD7C0C24135A887EC01FCAA69EC0DBF0D463 (void);
// 0x000005B7 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32)
extern void NameObjectCollectionBase__ctor_m2F55149BDCE98E37B1FFFC720F8CEF922F90E609 (void);
// 0x000005B8 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.DBNull)
extern void NameObjectCollectionBase__ctor_m4BF6C086BA110F79E817D1F307D0B912E32BCA55 (void);
// 0x000005B9 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NameObjectCollectionBase__ctor_mAF5575543B8D937C34D00E9D7B6642BFAD74F37C (void);
// 0x000005BA System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NameObjectCollectionBase_GetObjectData_mF4EA432DCE051F52DD8CA3C091F606D8C216D9DA (void);
// 0x000005BB System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
extern void NameObjectCollectionBase_OnDeserialization_m8C86FE5E896571CDA1C4335CFC799F20ACFBC3B5 (void);
// 0x000005BC System.Void System.Collections.Specialized.NameObjectCollectionBase::Reset()
extern void NameObjectCollectionBase_Reset_m7D346054B961190F3799970BC8C4F8EBD3689986 (void);
// 0x000005BD System.Void System.Collections.Specialized.NameObjectCollectionBase::Reset(System.Int32)
extern void NameObjectCollectionBase_Reset_m1A5701DA2CE23C171A59DDCE5EE8166528C1081E (void);
// 0x000005BE System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry System.Collections.Specialized.NameObjectCollectionBase::FindEntry(System.String)
extern void NameObjectCollectionBase_FindEntry_m5D2C7207AF84D9CFAE79399387115E44C5348C8F (void);
// 0x000005BF System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
extern void NameObjectCollectionBase_get_IsReadOnly_mFCB376BE86332546D47A4B983FD91FFF23558709 (void);
// 0x000005C0 System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
extern void NameObjectCollectionBase_BaseAdd_m1A0CA51397D274B23B10ECE78D2EE923C4FDC07F (void);
// 0x000005C1 System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
extern void NameObjectCollectionBase_BaseGet_m9ADF3F54E9A5D8151837C6E4652ED27CD1C06CFF (void);
// 0x000005C2 System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.String,System.Object)
extern void NameObjectCollectionBase_BaseSet_mDAD4979940B3ACC47B77A64AECCD0C69C2F9A015 (void);
// 0x000005C3 System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
extern void NameObjectCollectionBase_BaseGet_mDEFD71E2644E7080FBE6E79B9221673D02F64202 (void);
// 0x000005C4 System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
extern void NameObjectCollectionBase_BaseGetKey_m0ED9A3D47A2808BF98BCBEAFB51D175127B9CFB1 (void);
// 0x000005C5 System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
extern void NameObjectCollectionBase_GetEnumerator_m02D0640D271E51652CC9E1B50C6795CA19761E88 (void);
// 0x000005C6 System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
extern void NameObjectCollectionBase_get_Count_mA6E8285C71420239BF891DF0FFCC60E68E660D25 (void);
// 0x000005C7 System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mE984B0745168F2F0FCAD2F9CC36E525592EDFC20 (void);
// 0x000005C8 System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
extern void NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_m5BA819A3EBE9BDD6B7ECB55E9C4D767D85EAF641 (void);
// 0x000005C9 System.Boolean System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_IsSynchronized()
extern void NameObjectCollectionBase_System_Collections_ICollection_get_IsSynchronized_mC079154D099C5C60910FF6B003AC60D196B65309 (void);
// 0x000005CA System.Void System.Collections.Specialized.NameObjectCollectionBase::.cctor()
extern void NameObjectCollectionBase__cctor_m8F6F233008097CCECEC2D8092C44C704A3F5A6CE (void);
// 0x000005CB System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::.ctor(System.String,System.Object)
extern void NameObjectEntry__ctor_mB4018B4F844A8F7F3308B10CB017D6008DB0736B (void);
// 0x000005CC System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::.ctor(System.Collections.Specialized.NameObjectCollectionBase)
extern void NameObjectKeysEnumerator__ctor_m684F9F2CC2934708B3F198D7F750D5030AD9CC80 (void);
// 0x000005CD System.Boolean System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::MoveNext()
extern void NameObjectKeysEnumerator_MoveNext_m602677D8FC9EE3BC87755FB0EAC1BACA518CA240 (void);
// 0x000005CE System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::Reset()
extern void NameObjectKeysEnumerator_Reset_m291D728258A95AEB8BE6697D0E1DADC24AE1A977 (void);
// 0x000005CF System.Object System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::get_Current()
extern void NameObjectKeysEnumerator_get_Current_mEA737C3649050A481FEE567F163E4D5C7A328B2A (void);
// 0x000005D0 System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::GetEnumerator()
extern void KeysCollection_GetEnumerator_m68647B824C2407655C56DA53277DEA9394E87513 (void);
// 0x000005D1 System.Int32 System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::get_Count()
extern void KeysCollection_get_Count_mD741DA67E73F0BA452A446434E0D9C534DD5BDE0 (void);
// 0x000005D2 System.Void System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void KeysCollection_System_Collections_ICollection_CopyTo_m5D1521EAEE522DA4A5A7613EB1A9414CA6BAA9C6 (void);
// 0x000005D3 System.Object System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::System.Collections.ICollection.get_SyncRoot()
extern void KeysCollection_System_Collections_ICollection_get_SyncRoot_mCC5B71720FAC222DA73D44426BD39CC4E3F04A0F (void);
// 0x000005D4 System.Boolean System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::System.Collections.ICollection.get_IsSynchronized()
extern void KeysCollection_System_Collections_ICollection_get_IsSynchronized_m71F83C4E82744749A4F715E8BBFBAEC93829C914 (void);
// 0x000005D5 System.Void System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::.ctor()
extern void KeysCollection__ctor_m4B44446641DDF84B5883D2B12AA11555CD87B8A5 (void);
// 0x000005D6 System.Void System.Collections.Specialized.CompatibleComparer::.ctor(System.Collections.IComparer,System.Collections.IHashCodeProvider)
extern void CompatibleComparer__ctor_mFAA5DFD1F5D8A144CBE12E74E8557CF5653A2DB0 (void);
// 0x000005D7 System.Boolean System.Collections.Specialized.CompatibleComparer::Equals(System.Object,System.Object)
extern void CompatibleComparer_Equals_m08DCF183451A42F14345B5F615F4BE790565EB38 (void);
// 0x000005D8 System.Int32 System.Collections.Specialized.CompatibleComparer::GetHashCode(System.Object)
extern void CompatibleComparer_GetHashCode_mEFB12FFF3B0A76548DF481D6922F2F21D31B30FA (void);
// 0x000005D9 System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_Comparer()
extern void CompatibleComparer_get_Comparer_m556DC9797B932664AA69CDC71F0C7EF8E669AF79 (void);
// 0x000005DA System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_HashCodeProvider()
extern void CompatibleComparer_get_HashCodeProvider_mE92F98439CCB3AFCFFA472631B45AC8CA8686F0D (void);
// 0x000005DB System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_DefaultComparer()
extern void CompatibleComparer_get_DefaultComparer_m4AB0D4BF050F498E9CC959059EA4BC251ED6F631 (void);
// 0x000005DC System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_DefaultHashCodeProvider()
extern void CompatibleComparer_get_DefaultHashCodeProvider_mE46DC30844F61CA73DE162E5B9F04C0E0B85F6A0 (void);
// 0x000005DD System.Void System.Collections.Specialized.NameValueCollection::.ctor()
extern void NameValueCollection__ctor_m78B698FEF3EFEE917D0EBAA0DEDCFD1BD9AA6323 (void);
// 0x000005DE System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32)
extern void NameValueCollection__ctor_m443C8997E1C12077D3FBCB5701916C1A07BD0D6B (void);
// 0x000005DF System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern void NameValueCollection__ctor_m3FB82F83A2B13FC647CECDF8610D53B52F52170F (void);
// 0x000005E0 System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.DBNull)
extern void NameValueCollection__ctor_mA7D338E7E6795829EE4E64D8834A41C2CE898FBB (void);
// 0x000005E1 System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NameValueCollection__ctor_m69DC8832F5EC7DD21DE701866B84A639570AC8D5 (void);
// 0x000005E2 System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
extern void NameValueCollection_InvalidateCachedArrays_mA7CA9F8B09DDFA9163FB77563C6FCB07762D23C8 (void);
// 0x000005E3 System.String System.Collections.Specialized.NameValueCollection::GetAsOneString(System.Collections.ArrayList)
extern void NameValueCollection_GetAsOneString_m3ADC3CAE35EB61CE55BC8D781C14EAFEE237DE68 (void);
// 0x000005E4 System.String[] System.Collections.Specialized.NameValueCollection::GetAsStringArray(System.Collections.ArrayList)
extern void NameValueCollection_GetAsStringArray_m79210BFB2A2F0094D4601BE3FD7FF2EC097303F4 (void);
// 0x000005E5 System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
extern void NameValueCollection_Add_m2058D4136F9DC4A11836DF6B1AB4853387898B2C (void);
// 0x000005E6 System.String System.Collections.Specialized.NameValueCollection::Get(System.String)
extern void NameValueCollection_Get_mDEC8EB5C5FAA1B34B99C6AAA50F0F575296DB1F1 (void);
// 0x000005E7 System.Void System.Collections.Specialized.NameValueCollection::Set(System.String,System.String)
extern void NameValueCollection_Set_mE479F82E6045A7447D4CFA7040FF63CC5CCD1329 (void);
// 0x000005E8 System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
extern void NameValueCollection_get_Item_mCA21B55D4454D35073475B2966BA0F9207D16FED (void);
// 0x000005E9 System.Void System.Collections.Specialized.NameValueCollection::set_Item(System.String,System.String)
extern void NameValueCollection_set_Item_m068F8AB7B8D0EDFD8A9DA582E80A20ACF9E8D692 (void);
// 0x000005EA System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
extern void NameValueCollection_Get_m0CF4D7CB8B22A2B269CFD472A17494F592E470E7 (void);
// 0x000005EB System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.Int32)
extern void NameValueCollection_GetValues_mD28BFDED15CE8F19B3554CD40C7D7DAE22714323 (void);
// 0x000005EC System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
extern void NameValueCollection_GetKey_m56EE50398F41A0A52AA2E7759B511BFAC068125D (void);
// 0x000005ED System.Void System.Collections.Specialized.NotifyCollectionChangedEventArgs::.ctor(System.Collections.Specialized.NotifyCollectionChangedAction)
extern void NotifyCollectionChangedEventArgs__ctor_m4DF9A3B338385B107E9AB642418EF9CD133176C8 (void);
// 0x000005EE System.Void System.Collections.Specialized.NotifyCollectionChangedEventArgs::.ctor(System.Collections.Specialized.NotifyCollectionChangedAction,System.Object,System.Int32)
extern void NotifyCollectionChangedEventArgs__ctor_m740EF6211C01BEFC72940AF522E6B59FEB0C0278 (void);
// 0x000005EF System.Void System.Collections.Specialized.NotifyCollectionChangedEventArgs::.ctor(System.Collections.Specialized.NotifyCollectionChangedAction,System.Object,System.Object,System.Int32)
extern void NotifyCollectionChangedEventArgs__ctor_m38284F986548E34AF877744D5D80CC5510FA9AF8 (void);
// 0x000005F0 System.Void System.Collections.Specialized.NotifyCollectionChangedEventArgs::InitializeAddOrRemove(System.Collections.Specialized.NotifyCollectionChangedAction,System.Collections.IList,System.Int32)
extern void NotifyCollectionChangedEventArgs_InitializeAddOrRemove_m54AB5E1F30737022F2DE9C4E421E1A6B72082C06 (void);
// 0x000005F1 System.Void System.Collections.Specialized.NotifyCollectionChangedEventArgs::InitializeAdd(System.Collections.Specialized.NotifyCollectionChangedAction,System.Collections.IList,System.Int32)
extern void NotifyCollectionChangedEventArgs_InitializeAdd_m96D1A2D845EE3A1CDBC7567B1E736F33F96FCC0B (void);
// 0x000005F2 System.Void System.Collections.Specialized.NotifyCollectionChangedEventArgs::InitializeRemove(System.Collections.Specialized.NotifyCollectionChangedAction,System.Collections.IList,System.Int32)
extern void NotifyCollectionChangedEventArgs_InitializeRemove_m7FBC5F964DAF767FBE70D5DF124A01D8EE337530 (void);
// 0x000005F3 System.Void System.Collections.Specialized.NotifyCollectionChangedEventArgs::InitializeMoveOrReplace(System.Collections.Specialized.NotifyCollectionChangedAction,System.Collections.IList,System.Collections.IList,System.Int32,System.Int32)
extern void NotifyCollectionChangedEventArgs_InitializeMoveOrReplace_m36B46F9A8C223932E845ADED2896EEB976F96DE3 (void);
// 0x000005F4 System.Void System.Collections.Specialized.NotifyCollectionChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern void NotifyCollectionChangedEventHandler__ctor_mF25C1F41D0B942C2B78006C32C9BE89A1D4758C0 (void);
// 0x000005F5 System.Void System.Collections.Specialized.NotifyCollectionChangedEventHandler::Invoke(System.Object,System.Collections.Specialized.NotifyCollectionChangedEventArgs)
extern void NotifyCollectionChangedEventHandler_Invoke_mC124A6BB0AEFF734D28ABB2860F4A1A473A53552 (void);
// 0x000005F6 System.IAsyncResult System.Collections.Specialized.NotifyCollectionChangedEventHandler::BeginInvoke(System.Object,System.Collections.Specialized.NotifyCollectionChangedEventArgs,System.AsyncCallback,System.Object)
extern void NotifyCollectionChangedEventHandler_BeginInvoke_mF9DA40CD098B06E3829516F85D69D33158348D52 (void);
// 0x000005F7 System.Void System.Collections.Specialized.NotifyCollectionChangedEventHandler::EndInvoke(System.IAsyncResult)
extern void NotifyCollectionChangedEventHandler_EndInvoke_m23189F8E2638877F0EEB1E26A1621BFE0DD102A3 (void);
// 0x000005F8 System.String System.Collections.Specialized.StringCollection::get_Item(System.Int32)
extern void StringCollection_get_Item_m1C00F274B95C72B7802386E253AEFD63BBF0ABC6 (void);
// 0x000005F9 System.Void System.Collections.Specialized.StringCollection::set_Item(System.Int32,System.String)
extern void StringCollection_set_Item_m9C39150B3F7E7707087939A667608314F7B7396A (void);
// 0x000005FA System.Int32 System.Collections.Specialized.StringCollection::get_Count()
extern void StringCollection_get_Count_mC75C516535FA84F1F00EA0B8080DA833F2668B6E (void);
// 0x000005FB System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsReadOnly()
extern void StringCollection_System_Collections_IList_get_IsReadOnly_m5F7F83F7BE95960C9214087A57F2BDE25D623D2E (void);
// 0x000005FC System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsFixedSize()
extern void StringCollection_System_Collections_IList_get_IsFixedSize_m0DF42F48B682BCFAD27BDE97B54789A7AF31CB65 (void);
// 0x000005FD System.Int32 System.Collections.Specialized.StringCollection::Add(System.String)
extern void StringCollection_Add_m74C07154AC7259B8219DF6A79B76EF5B7E12A6EE (void);
// 0x000005FE System.Void System.Collections.Specialized.StringCollection::Clear()
extern void StringCollection_Clear_mF6342AADBD52C49020E567138B9E0F479B38A357 (void);
// 0x000005FF System.Boolean System.Collections.Specialized.StringCollection::Contains(System.String)
extern void StringCollection_Contains_mFA733702D3C6B9BFA95AD34B74C5A0AD9DB3B30C (void);
// 0x00000600 System.Void System.Collections.Specialized.StringCollection::CopyTo(System.String[],System.Int32)
extern void StringCollection_CopyTo_m4AEACC92E456EE1A0CA6AE045E1CF3739216A5E4 (void);
// 0x00000601 System.Int32 System.Collections.Specialized.StringCollection::IndexOf(System.String)
extern void StringCollection_IndexOf_m0CCDCB4898AEF6BD74168E2FE480CEA739AB926F (void);
// 0x00000602 System.Void System.Collections.Specialized.StringCollection::Insert(System.Int32,System.String)
extern void StringCollection_Insert_m899372FA6CD26D46C1773350C67A5B7DD390F455 (void);
// 0x00000603 System.Boolean System.Collections.Specialized.StringCollection::get_IsSynchronized()
extern void StringCollection_get_IsSynchronized_m050BFCB6A4192E924D209B7CFAFC4F6EB6621CF0 (void);
// 0x00000604 System.Void System.Collections.Specialized.StringCollection::Remove(System.String)
extern void StringCollection_Remove_mC6A3DD305A3DFD39CB2EB0B150633F774FE93E78 (void);
// 0x00000605 System.Void System.Collections.Specialized.StringCollection::RemoveAt(System.Int32)
extern void StringCollection_RemoveAt_m2774DD6AD7D2A1D26B119D06E5E6210CDD1DBA07 (void);
// 0x00000606 System.Object System.Collections.Specialized.StringCollection::get_SyncRoot()
extern void StringCollection_get_SyncRoot_m8EB8D6F913B12F3B9FBEC7056B85520F63107C9F (void);
// 0x00000607 System.Object System.Collections.Specialized.StringCollection::System.Collections.IList.get_Item(System.Int32)
extern void StringCollection_System_Collections_IList_get_Item_mC52C13B373A2121AC1643931A253135DE68AA72E (void);
// 0x00000608 System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern void StringCollection_System_Collections_IList_set_Item_m854335ED059049299A185117DED7BBB255E18EAD (void);
// 0x00000609 System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.Add(System.Object)
extern void StringCollection_System_Collections_IList_Add_mB44F92FE4734B08FECBC698551D3C8494BC9B472 (void);
// 0x0000060A System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.Contains(System.Object)
extern void StringCollection_System_Collections_IList_Contains_mE745AC2B0A9AF7F1A1A2508446F62DA61ACDB419 (void);
// 0x0000060B System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.IndexOf(System.Object)
extern void StringCollection_System_Collections_IList_IndexOf_m22D689D7E4AD87F7BF760176137F81D454AD394A (void);
// 0x0000060C System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern void StringCollection_System_Collections_IList_Insert_m6DE39B04ADDE5A0309BC68E3350A2D6E7031D984 (void);
// 0x0000060D System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Remove(System.Object)
extern void StringCollection_System_Collections_IList_Remove_mF7FFE6D6A2B875139AF595D5BCC5894D521D500D (void);
// 0x0000060E System.Void System.Collections.Specialized.StringCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void StringCollection_System_Collections_ICollection_CopyTo_m1C3B0352FAA40B2BC8C570B6B67A63D6293258A0 (void);
// 0x0000060F System.Collections.IEnumerator System.Collections.Specialized.StringCollection::System.Collections.IEnumerable.GetEnumerator()
extern void StringCollection_System_Collections_IEnumerable_GetEnumerator_m3D00F20127AEB0490F6F594D72E077B2B37AE182 (void);
// 0x00000610 System.Void System.Collections.Specialized.StringCollection::.ctor()
extern void StringCollection__ctor_m9E4F5359AEFDC2281D4E651A948F6EAE1B812488 (void);
// 0x00000611 System.Void System.Collections.ObjectModel.ObservableCollection`1::.ctor()
// 0x00000612 System.Void System.Collections.ObjectModel.ObservableCollection`1::System.ComponentModel.INotifyPropertyChanged.add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
// 0x00000613 System.Void System.Collections.ObjectModel.ObservableCollection`1::System.ComponentModel.INotifyPropertyChanged.remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
// 0x00000614 System.Void System.Collections.ObjectModel.ObservableCollection`1::add_CollectionChanged(System.Collections.Specialized.NotifyCollectionChangedEventHandler)
// 0x00000615 System.Void System.Collections.ObjectModel.ObservableCollection`1::remove_CollectionChanged(System.Collections.Specialized.NotifyCollectionChangedEventHandler)
// 0x00000616 System.Void System.Collections.ObjectModel.ObservableCollection`1::ClearItems()
// 0x00000617 System.Void System.Collections.ObjectModel.ObservableCollection`1::RemoveItem(System.Int32)
// 0x00000618 System.Void System.Collections.ObjectModel.ObservableCollection`1::InsertItem(System.Int32,T)
// 0x00000619 System.Void System.Collections.ObjectModel.ObservableCollection`1::SetItem(System.Int32,T)
// 0x0000061A System.Void System.Collections.ObjectModel.ObservableCollection`1::OnPropertyChanged(System.ComponentModel.PropertyChangedEventArgs)
// 0x0000061B System.Void System.Collections.ObjectModel.ObservableCollection`1::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
// 0x0000061C System.Void System.Collections.ObjectModel.ObservableCollection`1::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
// 0x0000061D System.Void System.Collections.ObjectModel.ObservableCollection`1::OnCollectionChanged(System.Collections.Specialized.NotifyCollectionChangedEventArgs)
// 0x0000061E System.IDisposable System.Collections.ObjectModel.ObservableCollection`1::BlockReentrancy()
// 0x0000061F System.Void System.Collections.ObjectModel.ObservableCollection`1::CheckReentrancy()
// 0x00000620 System.Void System.Collections.ObjectModel.ObservableCollection`1::OnPropertyChanged(System.String)
// 0x00000621 System.Void System.Collections.ObjectModel.ObservableCollection`1::OnCollectionChanged(System.Collections.Specialized.NotifyCollectionChangedAction,System.Object,System.Int32)
// 0x00000622 System.Void System.Collections.ObjectModel.ObservableCollection`1::OnCollectionChanged(System.Collections.Specialized.NotifyCollectionChangedAction,System.Object,System.Object,System.Int32)
// 0x00000623 System.Void System.Collections.ObjectModel.ObservableCollection`1::OnCollectionReset()
// 0x00000624 System.Void System.Collections.ObjectModel.ObservableCollection`1/SimpleMonitor::Enter()
// 0x00000625 System.Void System.Collections.ObjectModel.ObservableCollection`1/SimpleMonitor::Dispose()
// 0x00000626 System.Boolean System.Collections.ObjectModel.ObservableCollection`1/SimpleMonitor::get_Busy()
// 0x00000627 System.Void System.Collections.ObjectModel.ObservableCollection`1/SimpleMonitor::.ctor()
// 0x00000628 System.Void System.Collections.Generic.LinkedList`1::.ctor()
// 0x00000629 System.Void System.Collections.Generic.LinkedList`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000062A System.Int32 System.Collections.Generic.LinkedList`1::get_Count()
// 0x0000062B System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::get_First()
// 0x0000062C System.Boolean System.Collections.Generic.LinkedList`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000062D System.Void System.Collections.Generic.LinkedList`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000062E System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::AddFirst(T)
// 0x0000062F System.Void System.Collections.Generic.LinkedList`1::AddFirst(System.Collections.Generic.LinkedListNode`1<T>)
// 0x00000630 System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::AddLast(T)
// 0x00000631 System.Void System.Collections.Generic.LinkedList`1::Clear()
// 0x00000632 System.Boolean System.Collections.Generic.LinkedList`1::Contains(T)
// 0x00000633 System.Void System.Collections.Generic.LinkedList`1::CopyTo(T[],System.Int32)
// 0x00000634 System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::Find(T)
// 0x00000635 System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1::GetEnumerator()
// 0x00000636 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000637 System.Boolean System.Collections.Generic.LinkedList`1::Remove(T)
// 0x00000638 System.Void System.Collections.Generic.LinkedList`1::Remove(System.Collections.Generic.LinkedListNode`1<T>)
// 0x00000639 System.Void System.Collections.Generic.LinkedList`1::RemoveLast()
// 0x0000063A System.Void System.Collections.Generic.LinkedList`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000063B System.Void System.Collections.Generic.LinkedList`1::OnDeserialization(System.Object)
// 0x0000063C System.Void System.Collections.Generic.LinkedList`1::InternalInsertNodeBefore(System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
// 0x0000063D System.Void System.Collections.Generic.LinkedList`1::InternalInsertNodeToEmptyList(System.Collections.Generic.LinkedListNode`1<T>)
// 0x0000063E System.Void System.Collections.Generic.LinkedList`1::InternalRemoveNode(System.Collections.Generic.LinkedListNode`1<T>)
// 0x0000063F System.Void System.Collections.Generic.LinkedList`1::ValidateNewNode(System.Collections.Generic.LinkedListNode`1<T>)
// 0x00000640 System.Void System.Collections.Generic.LinkedList`1::ValidateNode(System.Collections.Generic.LinkedListNode`1<T>)
// 0x00000641 System.Boolean System.Collections.Generic.LinkedList`1::System.Collections.ICollection.get_IsSynchronized()
// 0x00000642 System.Object System.Collections.Generic.LinkedList`1::System.Collections.ICollection.get_SyncRoot()
// 0x00000643 System.Void System.Collections.Generic.LinkedList`1::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// 0x00000644 System.Collections.IEnumerator System.Collections.Generic.LinkedList`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000645 System.Void System.Collections.Generic.LinkedList`1/Enumerator::.ctor(System.Collections.Generic.LinkedList`1<T>)
// 0x00000646 System.Void System.Collections.Generic.LinkedList`1/Enumerator::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000647 T System.Collections.Generic.LinkedList`1/Enumerator::get_Current()
// 0x00000648 System.Object System.Collections.Generic.LinkedList`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000649 System.Boolean System.Collections.Generic.LinkedList`1/Enumerator::MoveNext()
// 0x0000064A System.Void System.Collections.Generic.LinkedList`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x0000064B System.Void System.Collections.Generic.LinkedList`1/Enumerator::Dispose()
// 0x0000064C System.Void System.Collections.Generic.LinkedList`1/Enumerator::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000064D System.Void System.Collections.Generic.LinkedList`1/Enumerator::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
// 0x0000064E System.Void System.Collections.Generic.LinkedListNode`1::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
// 0x0000064F System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::get_Next()
// 0x00000650 T System.Collections.Generic.LinkedListNode`1::get_Value()
// 0x00000651 System.Void System.Collections.Generic.LinkedListNode`1::Invalidate()
// 0x00000652 System.Void System.Collections.Generic.Queue`1::.ctor()
// 0x00000653 System.Int32 System.Collections.Generic.Queue`1::get_Count()
// 0x00000654 System.Boolean System.Collections.Generic.Queue`1::System.Collections.ICollection.get_IsSynchronized()
// 0x00000655 System.Object System.Collections.Generic.Queue`1::System.Collections.ICollection.get_SyncRoot()
// 0x00000656 System.Void System.Collections.Generic.Queue`1::Clear()
// 0x00000657 System.Void System.Collections.Generic.Queue`1::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// 0x00000658 System.Void System.Collections.Generic.Queue`1::Enqueue(T)
// 0x00000659 System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1::GetEnumerator()
// 0x0000065A System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000065B System.Collections.IEnumerator System.Collections.Generic.Queue`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000065C T System.Collections.Generic.Queue`1::Dequeue()
// 0x0000065D T System.Collections.Generic.Queue`1::Peek()
// 0x0000065E System.Void System.Collections.Generic.Queue`1::SetCapacity(System.Int32)
// 0x0000065F System.Void System.Collections.Generic.Queue`1::MoveNext(System.Int32&)
// 0x00000660 System.Void System.Collections.Generic.Queue`1::ThrowForEmptyQueue()
// 0x00000661 System.Void System.Collections.Generic.Queue`1/Enumerator::.ctor(System.Collections.Generic.Queue`1<T>)
// 0x00000662 System.Void System.Collections.Generic.Queue`1/Enumerator::Dispose()
// 0x00000663 System.Boolean System.Collections.Generic.Queue`1/Enumerator::MoveNext()
// 0x00000664 T System.Collections.Generic.Queue`1/Enumerator::get_Current()
// 0x00000665 System.Void System.Collections.Generic.Queue`1/Enumerator::ThrowEnumerationNotStartedOrEnded()
// 0x00000666 System.Object System.Collections.Generic.Queue`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000667 System.Void System.Collections.Generic.Queue`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x00000668 System.Void System.Collections.Generic.Stack`1::.ctor()
// 0x00000669 System.Int32 System.Collections.Generic.Stack`1::get_Count()
// 0x0000066A System.Boolean System.Collections.Generic.Stack`1::System.Collections.ICollection.get_IsSynchronized()
// 0x0000066B System.Object System.Collections.Generic.Stack`1::System.Collections.ICollection.get_SyncRoot()
// 0x0000066C System.Void System.Collections.Generic.Stack`1::Clear()
// 0x0000066D System.Void System.Collections.Generic.Stack`1::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// 0x0000066E System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000066F System.Collections.IEnumerator System.Collections.Generic.Stack`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000670 T System.Collections.Generic.Stack`1::Peek()
// 0x00000671 T System.Collections.Generic.Stack`1::Pop()
// 0x00000672 System.Void System.Collections.Generic.Stack`1::Push(T)
// 0x00000673 System.Void System.Collections.Generic.Stack`1::ThrowForEmptyStack()
// 0x00000674 System.Void System.Collections.Generic.Stack`1/Enumerator::.ctor(System.Collections.Generic.Stack`1<T>)
// 0x00000675 System.Void System.Collections.Generic.Stack`1/Enumerator::Dispose()
// 0x00000676 System.Boolean System.Collections.Generic.Stack`1/Enumerator::MoveNext()
// 0x00000677 T System.Collections.Generic.Stack`1/Enumerator::get_Current()
// 0x00000678 System.Void System.Collections.Generic.Stack`1/Enumerator::ThrowEnumerationNotStartedOrEnded()
// 0x00000679 System.Object System.Collections.Generic.Stack`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000067A System.Void System.Collections.Generic.Stack`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x0000067B System.String System.Net.HttpStatusDescription::Get(System.Int32)
extern void HttpStatusDescription_Get_mF0B15BBA155ED517B074D80D666C9E896C791A0B (void);
// 0x0000067C System.Void System.Net.AuthenticationSchemeSelector::.ctor(System.Object,System.IntPtr)
extern void AuthenticationSchemeSelector__ctor_m75F66A513A4DC9D09841988FD347847252FEAD87 (void);
// 0x0000067D System.Net.AuthenticationSchemes System.Net.AuthenticationSchemeSelector::Invoke(System.Net.HttpListenerRequest)
extern void AuthenticationSchemeSelector_Invoke_mD25A94C6ACB9C5F8143A77F432B1F89793A0C453 (void);
// 0x0000067E System.IAsyncResult System.Net.AuthenticationSchemeSelector::BeginInvoke(System.Net.HttpListenerRequest,System.AsyncCallback,System.Object)
extern void AuthenticationSchemeSelector_BeginInvoke_m335E7FE3DA74827BA432BA727E36484F0D4E4839 (void);
// 0x0000067F System.Net.AuthenticationSchemes System.Net.AuthenticationSchemeSelector::EndInvoke(System.IAsyncResult)
extern void AuthenticationSchemeSelector_EndInvoke_m636157A8B26E37A1A0804A93806392DE0BDE1FE3 (void);
// 0x00000680 System.Net.ICredentials System.Net.CredentialCache::get_DefaultCredentials()
extern void CredentialCache_get_DefaultCredentials_m8D19BE934420E5771A272702035D37FAB50B7A29 (void);
// 0x00000681 System.Void System.Net.SystemNetworkCredential::.ctor()
extern void SystemNetworkCredential__ctor_m1578DB215E2E9C785748EA49BA5E6FF9F145EAE5 (void);
// 0x00000682 System.Void System.Net.SystemNetworkCredential::.cctor()
extern void SystemNetworkCredential__cctor_mD0DBEC2194189822021412CACE2870EB684A36A4 (void);
// 0x00000683 System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily()
extern void EndPoint_get_AddressFamily_m62AEE9F373979E52C77ED321CCDE62B724BE94A3 (void);
// 0x00000684 System.Net.SocketAddress System.Net.EndPoint::Serialize()
extern void EndPoint_Serialize_m10480668BCAFD0C28C1AA1A1DCC7F4CE4506969F (void);
// 0x00000685 System.Net.EndPoint System.Net.EndPoint::Create(System.Net.SocketAddress)
extern void EndPoint_Create_m3E7712702ADC0C6CCAC317C4613B67FC3A870AE5 (void);
// 0x00000686 System.Void System.Net.EndPoint::.ctor()
extern void EndPoint__ctor_m128E616435E17A62A3DD7D0BC759FB0CF7F87C29 (void);
// 0x00000687 System.Net.IWebProxy System.Net.GlobalProxySelection::get_Select()
extern void GlobalProxySelection_get_Select_mBC68CE6E9D9878A211B57496173ED0B02543FB29 (void);
// 0x00000688 System.Net.IWebProxy System.Net.GlobalProxySelection::GetEmptyWebProxy()
extern void GlobalProxySelection_GetEmptyWebProxy_m9912A99BC83CED420E44706D9F373000FE1C4AF7 (void);
// 0x00000689 System.Void System.Net.HttpListenerException::.ctor()
extern void HttpListenerException__ctor_mADB8CAEDAAB8E4FE628116A92AAE8BA0020E0ED8 (void);
// 0x0000068A System.Void System.Net.HttpListenerException::.ctor(System.Int32,System.String)
extern void HttpListenerException__ctor_mD581020C8FB4AB492DBA584E891AF9439126B236 (void);
// 0x0000068B System.Void System.Net.HttpListenerException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpListenerException__ctor_m45C2BF19C9796005E301C8061CD415F64E583DB9 (void);
// 0x0000068C System.Void System.Net.HttpListenerRequestUriBuilder::.cctor()
extern void HttpListenerRequestUriBuilder__cctor_m99B85B60E9B6CDAE09B494795C12A94703E52292 (void);
// 0x0000068D System.Void System.Net.HttpListenerRequestUriBuilder::.ctor(System.String,System.String,System.String,System.String,System.String)
extern void HttpListenerRequestUriBuilder__ctor_mBE10320D93401DAEA663F5716D294828A4C7F443 (void);
// 0x0000068E System.Uri System.Net.HttpListenerRequestUriBuilder::GetRequestUri(System.String,System.String,System.String,System.String,System.String)
extern void HttpListenerRequestUriBuilder_GetRequestUri_m042AB83A0B20F12335F10E6E6B23B5F2590D40CF (void);
// 0x0000068F System.Uri System.Net.HttpListenerRequestUriBuilder::Build()
extern void HttpListenerRequestUriBuilder_Build_m84FB866A31DA70C66661E1DD8F4A41C1EE62E5BA (void);
// 0x00000690 System.Void System.Net.HttpListenerRequestUriBuilder::BuildRequestUriUsingCookedPath()
extern void HttpListenerRequestUriBuilder_BuildRequestUriUsingCookedPath_m7C2D172FA0C0907E090F03747C5CA606AA8FD8C2 (void);
// 0x00000691 System.Void System.Net.HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath()
extern void HttpListenerRequestUriBuilder_BuildRequestUriUsingRawPath_mB127BF3DEE99C7DCDB8C5B0A903B837A80E481B0 (void);
// 0x00000692 System.Text.Encoding System.Net.HttpListenerRequestUriBuilder::GetEncoding(System.Net.HttpListenerRequestUriBuilder/EncodingType)
extern void HttpListenerRequestUriBuilder_GetEncoding_m0DFB0395BFD82C5365FC78051EECE0EAFF603745 (void);
// 0x00000693 System.Net.HttpListenerRequestUriBuilder/ParsingResult System.Net.HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath(System.Text.Encoding)
extern void HttpListenerRequestUriBuilder_BuildRequestUriUsingRawPath_m983F297A36C02E08FA2C63150ECF63CCD361FE3E (void);
// 0x00000694 System.Net.HttpListenerRequestUriBuilder/ParsingResult System.Net.HttpListenerRequestUriBuilder::ParseRawPath(System.Text.Encoding)
extern void HttpListenerRequestUriBuilder_ParseRawPath_mACF2E204C92D4EE4132F690A00CA42D37211F158 (void);
// 0x00000695 System.Boolean System.Net.HttpListenerRequestUriBuilder::AppendUnicodeCodePointValuePercentEncoded(System.String)
extern void HttpListenerRequestUriBuilder_AppendUnicodeCodePointValuePercentEncoded_m2E1FB3DB4F810607DE74A7959C9865F914487F0B (void);
// 0x00000696 System.Boolean System.Net.HttpListenerRequestUriBuilder::AddPercentEncodedOctetToRawOctetsList(System.Text.Encoding,System.String)
extern void HttpListenerRequestUriBuilder_AddPercentEncodedOctetToRawOctetsList_m89418333005EA98F78FB7E239C03FA10850665CB (void);
// 0x00000697 System.Boolean System.Net.HttpListenerRequestUriBuilder::EmptyDecodeAndAppendRawOctetsList(System.Text.Encoding)
extern void HttpListenerRequestUriBuilder_EmptyDecodeAndAppendRawOctetsList_m793D71F79B4F7D9B9A237A82E8B564973ADDB7F1 (void);
// 0x00000698 System.Void System.Net.HttpListenerRequestUriBuilder::AppendOctetsPercentEncoded(System.Text.StringBuilder,System.Collections.Generic.IEnumerable`1<System.Byte>)
extern void HttpListenerRequestUriBuilder_AppendOctetsPercentEncoded_mEB07CFBBE66A418F31486E8F71D55D575168B22F (void);
// 0x00000699 System.String System.Net.HttpListenerRequestUriBuilder::GetOctetsAsString(System.Collections.Generic.IEnumerable`1<System.Byte>)
extern void HttpListenerRequestUriBuilder_GetOctetsAsString_mECABD4C776E35DDD3896A4824307B9A4A63BBF2A (void);
// 0x0000069A System.String System.Net.HttpListenerRequestUriBuilder::GetPath(System.String)
extern void HttpListenerRequestUriBuilder_GetPath_m8513484A8858AFBABDD7D87F0349C4A4E00DB52E (void);
// 0x0000069B System.String System.Net.HttpListenerRequestUriBuilder::AddSlashToAsteriskOnlyPath(System.String)
extern void HttpListenerRequestUriBuilder_AddSlashToAsteriskOnlyPath_m0F2CDD2040A837B1C0822BC99FBCB80117361F2F (void);
// 0x0000069C System.Void System.Net.HttpListenerRequestUriBuilder::LogWarning(System.String,System.String,System.Object[])
extern void HttpListenerRequestUriBuilder_LogWarning_mB3CA0A03D2E120F81E8D4889B0248CB08AB1F5F2 (void);
// 0x0000069D System.Void System.Net.HttpVersion::.cctor()
extern void HttpVersion__cctor_mBF5A353BCFB50CAFC1D86A4348F0AB047AFB1AAB (void);
// 0x0000069E System.Boolean System.Net.ICertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
// 0x0000069F System.Void System.Net.IPAddress::.ctor(System.Int64)
extern void IPAddress__ctor_mA672DA31F082CC6E8B10BEC436D94450E630E16F (void);
// 0x000006A0 System.Void System.Net.IPAddress::.ctor(System.Byte[],System.Int64)
extern void IPAddress__ctor_m1E185EFDA876C940958AF536535E2E4C16C0D1D2 (void);
// 0x000006A1 System.Void System.Net.IPAddress::.ctor(System.UInt16[],System.UInt32)
extern void IPAddress__ctor_mEE088A7E8AE4F63C519837672A2EA0650E6A9B1C (void);
// 0x000006A2 System.Void System.Net.IPAddress::.ctor(System.Int32)
extern void IPAddress__ctor_m75238FEA3E8B108639752167DBE53DDD799CD7B8 (void);
// 0x000006A3 System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
extern void IPAddress_TryParse_m7FCC3E7337CD37145C3DA7DBB6996AB39A2DF94C (void);
// 0x000006A4 System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
extern void IPAddress_Parse_m8AEF3CFE902C389DB899F2948EF83217D10CB6C7 (void);
// 0x000006A5 System.Net.IPAddress System.Net.IPAddress::InternalParse(System.String,System.Boolean)
extern void IPAddress_InternalParse_m7FB3E417CD68B714D4FECF1F662F6D9E7DFBC70F (void);
// 0x000006A6 System.Byte[] System.Net.IPAddress::GetAddressBytes()
extern void IPAddress_GetAddressBytes_m7ED0924E8259B6D2426B3B570B25EE7CE9B789C7 (void);
// 0x000006A7 System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
extern void IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D (void);
// 0x000006A8 System.Int64 System.Net.IPAddress::get_ScopeId()
extern void IPAddress_get_ScopeId_mEDF9FA0FCEFAC4109AEDAD316DC18C5EE841CE5B (void);
// 0x000006A9 System.String System.Net.IPAddress::ToString()
extern void IPAddress_ToString_m4CFA8A08819BEDF5293C486AF623F5A4014AF8AC (void);
// 0x000006AA System.Boolean System.Net.IPAddress::IsLoopback(System.Net.IPAddress)
extern void IPAddress_IsLoopback_m253AA92222F77C0EF7C2B90A6A5E1E14E8DC1079 (void);
// 0x000006AB System.Boolean System.Net.IPAddress::Equals(System.Object,System.Boolean)
extern void IPAddress_Equals_m4B1CA27458D8182146569D0BC82A2D3A23346516 (void);
// 0x000006AC System.Boolean System.Net.IPAddress::Equals(System.Object)
extern void IPAddress_Equals_mA898722519C090D557CA585C2FDB496D92D3CEB3 (void);
// 0x000006AD System.Int32 System.Net.IPAddress::GetHashCode()
extern void IPAddress_GetHashCode_m3A6682B1FAA8754BB7AF27913FFE319ABFED9D50 (void);
// 0x000006AE System.Net.IPAddress System.Net.IPAddress::MapToIPv6()
extern void IPAddress_MapToIPv6_mA99938E0BDF716543A4C890FB694C54FBDE70B4F (void);
// 0x000006AF System.Void System.Net.IPAddress::.cctor()
extern void IPAddress__cctor_m2E3DF94B7FF773BFA501B2DBF811E50DBABA99D8 (void);
// 0x000006B0 System.Net.Sockets.AddressFamily System.Net.IPEndPoint::get_AddressFamily()
extern void IPEndPoint_get_AddressFamily_m3D6AC423AA5E8BEBEA8E3324D9BAC3A89A279127 (void);
// 0x000006B1 System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
extern void IPEndPoint__ctor_m22783A215BA0B38674F6A6CB6803804268561321 (void);
// 0x000006B2 System.Net.IPAddress System.Net.IPEndPoint::get_Address()
extern void IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95 (void);
// 0x000006B3 System.Int32 System.Net.IPEndPoint::get_Port()
extern void IPEndPoint_get_Port_m442D84417A9E8942514FFBB9714FEE6BD094C6C3 (void);
// 0x000006B4 System.String System.Net.IPEndPoint::ToString()
extern void IPEndPoint_ToString_mBFC4822326C1A86698C64FF3992CB295911866C5 (void);
// 0x000006B5 System.Net.SocketAddress System.Net.IPEndPoint::Serialize()
extern void IPEndPoint_Serialize_m6DCCD4B0D381396E0E7638C240167A2A8B0EC585 (void);
// 0x000006B6 System.Net.EndPoint System.Net.IPEndPoint::Create(System.Net.SocketAddress)
extern void IPEndPoint_Create_m807F89A5752C1E5F09D1AB32F6E60D243F06398A (void);
// 0x000006B7 System.Boolean System.Net.IPEndPoint::Equals(System.Object)
extern void IPEndPoint_Equals_m2F4B8B1F77EBFAA516EE1B6AB75836C928682EBE (void);
// 0x000006B8 System.Int32 System.Net.IPEndPoint::GetHashCode()
extern void IPEndPoint_GetHashCode_m02C37BD0E617B964B02EB2F19F0F7CA1A337C3A0 (void);
// 0x000006B9 System.Void System.Net.IPEndPoint::.cctor()
extern void IPEndPoint__cctor_mC310297F0DD730546F960C651993EEE162204BC1 (void);
// 0x000006BA System.String System.Net.IPHostEntry::get_HostName()
extern void IPHostEntry_get_HostName_m93399E3B7017D91869B47746BD9EDF74BF347FD1 (void);
// 0x000006BB System.Void System.Net.IPHostEntry::set_HostName(System.String)
extern void IPHostEntry_set_HostName_mDAF37AF72EB14AC6C63DE863DAF1C71E7DA2AA21 (void);
// 0x000006BC System.Void System.Net.IPHostEntry::set_Aliases(System.String[])
extern void IPHostEntry_set_Aliases_mBEA9E40249BEC29743421885964A0A76A9D34BB4 (void);
// 0x000006BD System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
extern void IPHostEntry_get_AddressList_m466AC33C136531F42A5EDCD3A75E5B392075186F (void);
// 0x000006BE System.Void System.Net.IPHostEntry::set_AddressList(System.Net.IPAddress[])
extern void IPHostEntry_set_AddressList_m5D661027187141E20D78AE4795EA8DABA42BEF38 (void);
// 0x000006BF System.Void System.Net.IPHostEntry::.ctor()
extern void IPHostEntry__ctor_mE110DE1F81AC6E1174418A6EE3C266E60BD06B9A (void);
// 0x000006C0 System.Void System.Net.InternalException::.ctor()
extern void InternalException__ctor_mD1CD1128C58BBD0C276E4218668A3840DB16E2BE (void);
// 0x000006C1 System.Boolean System.Net.NclUtilities::IsAddressLocal(System.Net.IPAddress)
extern void NclUtilities_IsAddressLocal_m4474A84AC878C3CCEB22885291F2FFB0FF3FE474 (void);
// 0x000006C2 System.Net.IPHostEntry System.Net.NclUtilities::GetLocalHost()
extern void NclUtilities_GetLocalHost_m83AC9B72133A7BD39161AFD55F092133AAADFA54 (void);
// 0x000006C3 System.Net.IPAddress[] System.Net.NclUtilities::get_LocalAddresses()
extern void NclUtilities_get_LocalAddresses_m7239F4DB692B12FD203F7ACF7FD74340542BBCB6 (void);
// 0x000006C4 System.Object System.Net.NclUtilities::get_LocalAddressesLock()
extern void NclUtilities_get_LocalAddressesLock_mEFB560D71DD9D220AB2E30D27325D9FDBC7D8BFB (void);
// 0x000006C5 System.Boolean System.Net.ValidationHelper::IsBlankString(System.String)
extern void ValidationHelper_IsBlankString_m6AD6EA4A3A18A43F7D0E619A814E1C8805B80BE1 (void);
// 0x000006C6 System.Boolean System.Net.ValidationHelper::ValidateTcpPort(System.Int32)
extern void ValidationHelper_ValidateTcpPort_m4FB59C10D4979D7CA8E203EB6E2DBB5BC872119B (void);
// 0x000006C7 System.Void System.Net.ValidationHelper::.cctor()
extern void ValidationHelper__cctor_m993F18C10E319E867D83A56DEA3EDD28A10E0281 (void);
// 0x000006C8 System.NotImplementedException System.Net.ExceptionHelper::get_MethodNotImplementedException()
extern void ExceptionHelper_get_MethodNotImplementedException_mA0B9CCC73FE2B6B457B6E9E7472ECB9797B79756 (void);
// 0x000006C9 System.NotImplementedException System.Net.ExceptionHelper::get_PropertyNotImplementedException()
extern void ExceptionHelper_get_PropertyNotImplementedException_m1375C7CD0DF5A682975F623DD461DC96DE7735F4 (void);
// 0x000006CA System.Void System.Net.NetworkCredential::.ctor(System.String,System.String)
extern void NetworkCredential__ctor_mBB62CCEBA2D6C5AE946F2D3F4A26FD3B718E312E (void);
// 0x000006CB System.Void System.Net.NetworkCredential::.ctor(System.String,System.String,System.String)
extern void NetworkCredential__ctor_mFBBBBCA94F91EA965A2B3DD6DD52554245B6B41B (void);
// 0x000006CC System.Void System.Net.NetworkCredential::set_UserName(System.String)
extern void NetworkCredential_set_UserName_m0906CE0D5CFA7972CD2DA08D9D2DD5ABEEEE55C8 (void);
// 0x000006CD System.Void System.Net.NetworkCredential::set_Password(System.String)
extern void NetworkCredential_set_Password_mD3D1EF31B8A2C9011A2439B249E3B2D55D1144F4 (void);
// 0x000006CE System.Void System.Net.NetworkCredential::set_Domain(System.String)
extern void NetworkCredential_set_Domain_m122C82F6B1E78A1F0A86B9B314F479EB336DC354 (void);
// 0x000006CF System.Void System.Net.ProtocolViolationException::.ctor()
extern void ProtocolViolationException__ctor_mBFDA5DBCACD716BB63ED4055B66E6AD41240889E (void);
// 0x000006D0 System.Void System.Net.ProtocolViolationException::.ctor(System.String)
extern void ProtocolViolationException__ctor_mDD18BFEE8140195ECBAD99A4E8079FE063A92D79 (void);
// 0x000006D1 System.Void System.Net.ProtocolViolationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ProtocolViolationException__ctor_m1E566889EEC9659072DB826E7E6BBECD8747ECBD (void);
// 0x000006D2 System.Void System.Net.ProtocolViolationException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ProtocolViolationException_System_Runtime_Serialization_ISerializable_GetObjectData_m29C4C22EFB8EDB208F01C9477A72F1CD1C442245 (void);
// 0x000006D3 System.Void System.Net.ProtocolViolationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ProtocolViolationException_GetObjectData_m85FE8C0B309D2870767DE4AEDEDAC089A0E5F4E6 (void);
// 0x000006D4 System.Net.Sockets.AddressFamily System.Net.SocketAddress::get_Family()
extern void SocketAddress_get_Family_m415D59360C9C2E480D2D98775983A573CCD9D7E0 (void);
// 0x000006D5 System.Int32 System.Net.SocketAddress::get_Size()
extern void SocketAddress_get_Size_m6383C5C4F9200464ACB6D583020F81019602CFA4 (void);
// 0x000006D6 System.Byte System.Net.SocketAddress::get_Item(System.Int32)
extern void SocketAddress_get_Item_m4ED599B209C73DFB72212B7B3621B1703A26C5FD (void);
// 0x000006D7 System.Void System.Net.SocketAddress::.ctor(System.Net.Sockets.AddressFamily,System.Int32)
extern void SocketAddress__ctor_m6684EAD0CA7CDDE9DB6E406FE1F32E6DC6B92A4E (void);
// 0x000006D8 System.Void System.Net.SocketAddress::.ctor(System.Net.IPAddress)
extern void SocketAddress__ctor_mBE5E81FAB07F2E45BCACF1D97E1DBAAFB5E50511 (void);
// 0x000006D9 System.Void System.Net.SocketAddress::.ctor(System.Net.IPAddress,System.Int32)
extern void SocketAddress__ctor_m9738A4ADE5808D768AE732070C89F7ABA6BED994 (void);
// 0x000006DA System.Net.IPAddress System.Net.SocketAddress::GetIPAddress()
extern void SocketAddress_GetIPAddress_mB16652A595F005C45F9F8F085C995659E33D1B07 (void);
// 0x000006DB System.Net.IPEndPoint System.Net.SocketAddress::GetIPEndPoint()
extern void SocketAddress_GetIPEndPoint_m251711A31597B8B2702F9212292CB699B84771AE (void);
// 0x000006DC System.Boolean System.Net.SocketAddress::Equals(System.Object)
extern void SocketAddress_Equals_m4E7AA4FFB7FF19A0323168642F3E4F1631726FFC (void);
// 0x000006DD System.Int32 System.Net.SocketAddress::GetHashCode()
extern void SocketAddress_GetHashCode_mA54234C51687C63132D9C9D326433FBB001C5B33 (void);
// 0x000006DE System.String System.Net.SocketAddress::ToString()
extern void SocketAddress_ToString_m8326F21A4A05F551EAF40323D4AFBDFA84E74C45 (void);
// 0x000006DF System.Void System.Net.WebException::.ctor()
extern void WebException__ctor_m98277D0386F066DFF058573C69663D488749DB17 (void);
// 0x000006E0 System.Void System.Net.WebException::.ctor(System.String,System.Exception)
extern void WebException__ctor_mE0703A9CEA00C199E48C0FAC3174771E9614CEC7 (void);
// 0x000006E1 System.Void System.Net.WebException::.ctor(System.String,System.Net.WebExceptionStatus)
extern void WebException__ctor_m4D8BF7D61087F7AA4018215A6DCF7578AEA4DB08 (void);
// 0x000006E2 System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse)
extern void WebException__ctor_m7C17EA99B1FE182295AF99B968D67080AD4E2CCE (void);
// 0x000006E3 System.Void System.Net.WebException::.ctor(System.String,System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse)
extern void WebException__ctor_m56E04F240E37B9AA72D7A6ACB611807E1EFD2A99 (void);
// 0x000006E4 System.Void System.Net.WebException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebException__ctor_m7EE3F748EF90DC6004CD094BC4CC203369FFE1F7 (void);
// 0x000006E5 System.Void System.Net.WebException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebException_System_Runtime_Serialization_ISerializable_GetObjectData_mCF19A0A1F0BE4A6B87369ADC32B4811F63BA8639 (void);
// 0x000006E6 System.Void System.Net.WebException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebException_GetObjectData_mB7123EB9D9EEA2C93A8C2F47E785E7A3437FF78E (void);
// 0x000006E7 System.String System.Net.WebExceptionMapping::GetWebStatusString(System.Net.WebExceptionStatus)
extern void WebExceptionMapping_GetWebStatusString_m95F105F6FBAFB410936E90EFAD6373521C921335 (void);
// 0x000006E8 System.Void System.Net.WebExceptionMapping::.cctor()
extern void WebExceptionMapping__cctor_m4DF947DD31ABFB8C410E33FD5EB239D8210B989A (void);
// 0x000006E9 System.Void System.Net.WebHeaderCollection::NormalizeCommonHeaders()
extern void WebHeaderCollection_NormalizeCommonHeaders_m7CF89E01004789D42D5BCB5CF60DD065F489F5BF (void);
// 0x000006EA System.Collections.Specialized.NameValueCollection System.Net.WebHeaderCollection::get_InnerCollection()
extern void WebHeaderCollection_get_InnerCollection_m6600DA73765180C37B0B0F802D3B7E4728B1A970 (void);
// 0x000006EB System.Boolean System.Net.WebHeaderCollection::AllowMultiValues(System.String)
extern void WebHeaderCollection_AllowMultiValues_mB9DCFBAD6F54FC4A0AF5D8E5BD8575FEE9E4DCA2 (void);
// 0x000006EC System.Void System.Net.WebHeaderCollection::AddInternal(System.String,System.String)
extern void WebHeaderCollection_AddInternal_m6B83E38C739FBD15C7F70C6304C786A1C3BA0B04 (void);
// 0x000006ED System.String System.Net.WebHeaderCollection::CheckBadChars(System.String,System.Boolean)
extern void WebHeaderCollection_CheckBadChars_m9994449495F8EA604B174519042DA00AF40B2E48 (void);
// 0x000006EE System.Boolean System.Net.WebHeaderCollection::ContainsNonAsciiChars(System.String)
extern void WebHeaderCollection_ContainsNonAsciiChars_m1507B05D93DB8D98F9921AEDFBB920A864E55256 (void);
// 0x000006EF System.Void System.Net.WebHeaderCollection::ThrowOnRestrictedHeader(System.String)
extern void WebHeaderCollection_ThrowOnRestrictedHeader_mCF5ED2B63250571375A2697DAC28F07EC847256E (void);
// 0x000006F0 System.Void System.Net.WebHeaderCollection::Add(System.String,System.String)
extern void WebHeaderCollection_Add_m55E340EE0B48470ECF8E265973CA7597C72AB98B (void);
// 0x000006F1 System.Void System.Net.WebHeaderCollection::Add(System.String)
extern void WebHeaderCollection_Add_m2001A99A04978C4DE11DAC26540C04C5EF5CC776 (void);
// 0x000006F2 System.Void System.Net.WebHeaderCollection::Set(System.String,System.String)
extern void WebHeaderCollection_Set_m4D27314894A7B6FF691EE3283565BE259530E4AF (void);
// 0x000006F3 System.Void System.Net.WebHeaderCollection::SetInternal(System.String,System.String)
extern void WebHeaderCollection_SetInternal_mD14173DCCD03148462674B04D44BCD60E32BAEB8 (void);
// 0x000006F4 System.String System.Net.WebHeaderCollection::ToString()
extern void WebHeaderCollection_ToString_m247DD774337889E2CA464E8CED9854095342DC43 (void);
// 0x000006F5 System.String System.Net.WebHeaderCollection::GetAsString(System.Collections.Specialized.NameValueCollection,System.Boolean,System.Boolean)
extern void WebHeaderCollection_GetAsString_mC36899DE6A05C75AEB6A7DBF0E4147128AD01C44 (void);
// 0x000006F6 System.Void System.Net.WebHeaderCollection::.ctor()
extern void WebHeaderCollection__ctor_mA79C59CAE93CD777F7B475AE4C74FFAF48892263 (void);
// 0x000006F7 System.Void System.Net.WebHeaderCollection::.ctor(System.Net.WebHeaderCollectionType)
extern void WebHeaderCollection__ctor_m6D0F9AAA2847C2E88504774B186D7187253FA463 (void);
// 0x000006F8 System.Void System.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebHeaderCollection__ctor_mFADC65A9D6FFCA2888E38168C8B567F52D9062E2 (void);
// 0x000006F9 System.Void System.Net.WebHeaderCollection::OnDeserialization(System.Object)
extern void WebHeaderCollection_OnDeserialization_m51FBDB1DFDC1D0F1F8A1C00F7950AAFF0F9CE278 (void);
// 0x000006FA System.Void System.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebHeaderCollection_GetObjectData_m4D4C3DA409886C6BD1166CEB9D92A8E45FBF349D (void);
// 0x000006FB System.Void System.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_mDE59C6575C21AF468D3F2DCC38108B7F03CE2AA6 (void);
// 0x000006FC System.String System.Net.WebHeaderCollection::Get(System.String)
extern void WebHeaderCollection_Get_mEA01975EBD0236751F846A75C3C5F2B303BD1BB7 (void);
// 0x000006FD System.Collections.IEnumerator System.Net.WebHeaderCollection::GetEnumerator()
extern void WebHeaderCollection_GetEnumerator_mFFE41B272347B4A4555E2D70BF5F70149638A33E (void);
// 0x000006FE System.Int32 System.Net.WebHeaderCollection::get_Count()
extern void WebHeaderCollection_get_Count_m70B69DE18877ED7AE912CC9E938F7764128A78E4 (void);
// 0x000006FF System.String System.Net.WebHeaderCollection::Get(System.Int32)
extern void WebHeaderCollection_Get_m32C6BBFEBE1281E17259CDCAD3727139FDF68C83 (void);
// 0x00000700 System.String[] System.Net.WebHeaderCollection::GetValues(System.Int32)
extern void WebHeaderCollection_GetValues_mA58AF8D08AF3C4C2BFB73662FEB4C0D2EBE7B3FB (void);
// 0x00000701 System.String System.Net.WebHeaderCollection::GetKey(System.Int32)
extern void WebHeaderCollection_GetKey_m09DC31BEBDCE41D15F8EC7CBF4086E004AA9880A (void);
// 0x00000702 System.Void System.Net.WebHeaderCollection::.cctor()
extern void WebHeaderCollection__cctor_m665BE270DF3734C72A5EF29FCAD2FB5DC30B9512 (void);
// 0x00000703 System.Int32 System.Net.CaseInsensitiveAscii::GetHashCode(System.Object)
extern void CaseInsensitiveAscii_GetHashCode_m2EE81D1BD0AC3190BAA74A8D4868F92462ABB003 (void);
// 0x00000704 System.Int32 System.Net.CaseInsensitiveAscii::Compare(System.Object,System.Object)
extern void CaseInsensitiveAscii_Compare_mB139A59D797F341DD9ADFF052699317DE534431B (void);
// 0x00000705 System.Int32 System.Net.CaseInsensitiveAscii::FastGetHashCode(System.String)
extern void CaseInsensitiveAscii_FastGetHashCode_m306A0F307E96AA75691B6E4EC161157798931F2D (void);
// 0x00000706 System.Boolean System.Net.CaseInsensitiveAscii::Equals(System.Object,System.Object)
extern void CaseInsensitiveAscii_Equals_m23F3B8CBE2DD24C2240CDB8523A21D63129BAE3E (void);
// 0x00000707 System.Void System.Net.CaseInsensitiveAscii::.ctor()
extern void CaseInsensitiveAscii__ctor_m5AD65BBE763EC356D1DC91FBFE3B546650978C3B (void);
// 0x00000708 System.Void System.Net.CaseInsensitiveAscii::.cctor()
extern void CaseInsensitiveAscii__cctor_m39F489001DB8C119F2DDBC1E3D0102D6164908BB (void);
// 0x00000709 System.Object System.Net.WebRequest::get_InternalSyncObject()
extern void WebRequest_get_InternalSyncObject_mD25BECC7D6A345FAB61DEF7AAE39BF1EB1FB3A1A (void);
// 0x0000070A System.Void System.Net.WebRequest::.ctor()
extern void WebRequest__ctor_m3ACCFDB5F433B9BC39C8A0E7A6629AB4DFF67B9A (void);
// 0x0000070B System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebRequest__ctor_m2F0B777F71CBFCF400006179866A234A1335B0E0 (void);
// 0x0000070C System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m590FC06E76B37C3F6D7A6451B41747936064B430 (void);
// 0x0000070D System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebRequest_GetObjectData_m544C55A909B7230FB2C133C9C5D3F6A17FB55777 (void);
// 0x0000070E System.Net.IWebProxy System.Net.WebRequest::get_InternalDefaultWebProxy()
extern void WebRequest_get_InternalDefaultWebProxy_m7A27D4AE00C96C6113CC8D1663CB2111045D1F3B (void);
// 0x0000070F System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
extern void WebRequest_get_DefaultWebProxy_m15A55F202BD3109A4198223B87D8E9B28487DFDA (void);
// 0x00000710 System.Void System.Net.WebRequest::.cctor()
extern void WebRequest__cctor_mE0E372CA994FDDE64FB09FA654787BDD52D9330B (void);
// 0x00000711 System.Void System.Net.WebRequest/DesignerWebRequestCreate::.ctor()
extern void DesignerWebRequestCreate__ctor_mFDCC5B7F2462FAC2DB6E7C412FE894F1B00F65AA (void);
// 0x00000712 System.Uri System.Net.WebRequest/WebProxyWrapperOpaque::GetProxy(System.Uri)
extern void WebProxyWrapperOpaque_GetProxy_mF87834EC1C4105EC385C9A489FD2107777F206E5 (void);
// 0x00000713 System.Boolean System.Net.WebRequest/WebProxyWrapperOpaque::IsBypassed(System.Uri)
extern void WebProxyWrapperOpaque_IsBypassed_m8AFC7BB3B774D3C5E8E17A88AD09EC00BFE61E2D (void);
// 0x00000714 System.Net.WebProxy System.Net.WebRequest/WebProxyWrapper::get_WebProxy()
extern void WebProxyWrapper_get_WebProxy_m64E0A52B9081B75ACED10724A2805F6ECE3C89AB (void);
// 0x00000715 System.Void System.Net.WebResponse::.ctor()
extern void WebResponse__ctor_mDD72EDEB98B8AFA20480EE261E74EAAE10CB63E0 (void);
// 0x00000716 System.Void System.Net.WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebResponse__ctor_m601D6CE25BA0FAA154142B9AA7A5E188409B0D1C (void);
// 0x00000717 System.Void System.Net.WebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m3B1AF8144A5E9368310A362667CC0870C77BA547 (void);
// 0x00000718 System.Void System.Net.WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebResponse_GetObjectData_mD4CAAA6BABDE03797E98E93985D3096630CDEC10 (void);
// 0x00000719 System.Void System.Net.WebResponse::Close()
extern void WebResponse_Close_mB7B37D2ED64992C6D94AE2547420DFE340C4BC08 (void);
// 0x0000071A System.Void System.Net.WebResponse::Dispose()
extern void WebResponse_Dispose_m4C4678024B930AD077E47EAD64B426D4F03F029A (void);
// 0x0000071B System.Void System.Net.WebResponse::Dispose(System.Boolean)
extern void WebResponse_Dispose_mD8EDE43B78CFB8B192059E92EFBE98E459A96E40 (void);
// 0x0000071C System.String System.Net.WebUtility::HtmlEncode(System.String)
extern void WebUtility_HtmlEncode_m45F1BC4F173DF8FE7C20510AD9C289F22DD1F373 (void);
// 0x0000071D System.Void System.Net.WebUtility::HtmlEncode(System.String,System.IO.TextWriter)
extern void WebUtility_HtmlEncode_m7DECB4086635D39BC77A461BC9513F92E4436376 (void);
// 0x0000071E System.Int32 System.Net.WebUtility::IndexOfHtmlEncodingChars(System.String,System.Int32)
extern void WebUtility_IndexOfHtmlEncodingChars_mC500E4298304E4DD0D5DDC056AD86C6BFCABF856 (void);
// 0x0000071F System.Net.Configuration.UnicodeEncodingConformance System.Net.WebUtility::get_HtmlEncodeConformance()
extern void WebUtility_get_HtmlEncodeConformance_m9BB06B049D0698E58CFEF9470B4D8BCE1E9F71DA (void);
// 0x00000720 System.String System.Net.WebUtility::UrlDecodeInternal(System.String,System.Text.Encoding)
extern void WebUtility_UrlDecodeInternal_mEEC587B6467DDAD5112854BC48D3F6A6E555E006 (void);
// 0x00000721 System.String System.Net.WebUtility::UrlDecode(System.String)
extern void WebUtility_UrlDecode_m40F70AE5F799BF3F87B8533E26EF30E82D22EDFD (void);
// 0x00000722 System.Int32 System.Net.WebUtility::GetNextUnicodeScalarValueFromUtf16Surrogate(System.Char*&,System.Int32&)
extern void WebUtility_GetNextUnicodeScalarValueFromUtf16Surrogate_m322E5E36F052EFEF221F14D1BF79C0B18B18FA3B (void);
// 0x00000723 System.Int32 System.Net.WebUtility::HexToInt(System.Char)
extern void WebUtility_HexToInt_mAE044F1E1C0D06937F85C2A489259EA585D647D8 (void);
// 0x00000724 System.Void System.Net.WebUtility::.cctor()
extern void WebUtility__cctor_mC2EB801BF2A61A981A47060F45D432A11DB0371D (void);
// 0x00000725 System.Void System.Net.WebUtility/UrlDecoder::FlushBytes()
extern void UrlDecoder_FlushBytes_m29F10CAB85096F63BE84CE9467E8DC30C9865713 (void);
// 0x00000726 System.Void System.Net.WebUtility/UrlDecoder::.ctor(System.Int32,System.Text.Encoding)
extern void UrlDecoder__ctor_mCE5B81B6D6EB85606C33863FC5BE174907FD8FBB (void);
// 0x00000727 System.Void System.Net.WebUtility/UrlDecoder::AddChar(System.Char)
extern void UrlDecoder_AddChar_mCD77056E6A59A38DE4D074F1F668DB3793A9388B (void);
// 0x00000728 System.Void System.Net.WebUtility/UrlDecoder::AddByte(System.Byte)
extern void UrlDecoder_AddByte_m3A0CDDE7BB085D0D9353DE864D768D73E10AC3D6 (void);
// 0x00000729 System.String System.Net.WebUtility/UrlDecoder::GetString()
extern void UrlDecoder_GetString_m8A69E835EE2E8C7CAF68272BA3FC0EC1E58D033B (void);
// 0x0000072A System.Void System.Net.HeaderParser::.ctor(System.Object,System.IntPtr)
extern void HeaderParser__ctor_m472893312CE6499CF0B133E43208D60D8F045642 (void);
// 0x0000072B System.String[] System.Net.HeaderParser::Invoke(System.String)
extern void HeaderParser_Invoke_m3A5FC4D267C12585E1869DFB57D913613380D813 (void);
// 0x0000072C System.IAsyncResult System.Net.HeaderParser::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern void HeaderParser_BeginInvoke_mF6C5E5287D994844EC4A01DBAA7B579334A1B157 (void);
// 0x0000072D System.String[] System.Net.HeaderParser::EndInvoke(System.IAsyncResult)
extern void HeaderParser_EndInvoke_mD28C9565D9B34BF5E04ED602DFA2F0ED3794820B (void);
// 0x0000072E System.Void System.Net.HeaderInfo::.ctor(System.String,System.Boolean,System.Boolean,System.Boolean,System.Net.HeaderParser)
extern void HeaderInfo__ctor_m9B515C741E98093173780BC724C0AD044B395393 (void);
// 0x0000072F System.String[] System.Net.HeaderInfoTable::ParseSingleValue(System.String)
extern void HeaderInfoTable_ParseSingleValue_mD45E4F27F4CEBF7C568DAC66B0E3166EE7FDDD96 (void);
// 0x00000730 System.String[] System.Net.HeaderInfoTable::ParseMultiValue(System.String)
extern void HeaderInfoTable_ParseMultiValue_mA8F0E79DADB77F206D8F0603AF53D307E760AF4A (void);
// 0x00000731 System.Void System.Net.HeaderInfoTable::.cctor()
extern void HeaderInfoTable__cctor_m2C579C8E09EC8024F202C843818DF8F323D0A397 (void);
// 0x00000732 System.Net.HeaderInfo System.Net.HeaderInfoTable::get_Item(System.String)
extern void HeaderInfoTable_get_Item_m13EB127C357A9276F74C65C0EEDEA3A1EF5E8D5F (void);
// 0x00000733 System.Void System.Net.HeaderInfoTable::.ctor()
extern void HeaderInfoTable__ctor_mA44867F178E91B5FB9540ECB02A129F2868FC82E (void);
// 0x00000734 System.Void System.Net.ICloseEx::CloseEx(System.Net.CloseExState)
// 0x00000735 System.Net.LazyAsyncResult/ThreadContext System.Net.LazyAsyncResult::get_CurrentThreadContext()
extern void LazyAsyncResult_get_CurrentThreadContext_mD04A3FE7D38E5DEC8BADF5B95877279D09B96188 (void);
// 0x00000736 System.Object System.Net.LazyAsyncResult::get_AsyncObject()
extern void LazyAsyncResult_get_AsyncObject_m8ACB19F0E9711613E0984A2605A7CD3B7ACEE37C (void);
// 0x00000737 System.Void System.Net.LazyAsyncResult::ProtectedInvokeCallback(System.Object,System.IntPtr)
extern void LazyAsyncResult_ProtectedInvokeCallback_mB9317AC9B30205D1D84B82F8F4C0674928EFC19E (void);
// 0x00000738 System.Void System.Net.LazyAsyncResult::InvokeCallback(System.Object)
extern void LazyAsyncResult_InvokeCallback_m3AD664A494F2821C00A7E07BCE9B4FD63A2BC369 (void);
// 0x00000739 System.Void System.Net.LazyAsyncResult::Complete(System.IntPtr)
extern void LazyAsyncResult_Complete_m65AC5DCDD0B1EAF8702194A03D24B415F99A6E49 (void);
// 0x0000073A System.Void System.Net.LazyAsyncResult::WorkerThreadComplete(System.Object)
extern void LazyAsyncResult_WorkerThreadComplete_m5F2BECD93B121A2BDFBE3AD9C8E60460FA1C7ACC (void);
// 0x0000073B System.Void System.Net.LazyAsyncResult::Cleanup()
extern void LazyAsyncResult_Cleanup_m5382F96236C1F0ED05304E68A0136C19AC870AB5 (void);
// 0x0000073C System.Void System.Net.LazyAsyncResult/ThreadContext::.ctor()
extern void ThreadContext__ctor_mE89CF3AF57457840698C5046CD32EF8B02CDC40A (void);
// 0x0000073D System.String System.Net.NetRes::GetWebStatusString(System.String,System.Net.WebExceptionStatus)
extern void NetRes_GetWebStatusString_m6E2428C203EDAB9380F19ADBD0F55FCFA59C31A0 (void);
// 0x0000073E System.Void System.Net.ServiceNameStore::.ctor()
extern void ServiceNameStore__ctor_m0F79A15E62738E8A5B978935C4E96AA73735043B (void);
// 0x0000073F System.Void System.Net.TimerThread::.cctor()
extern void TimerThread__cctor_m6BED81C173667FF27FC2DE60A8362BFDAE38B0A3 (void);
// 0x00000740 System.Net.TimerThread/Queue System.Net.TimerThread::CreateQueue(System.Int32)
extern void TimerThread_CreateQueue_m3AC5A9C86D35BECBB838DFF5DAAE2FCA75D141BE (void);
// 0x00000741 System.Void System.Net.TimerThread::StopTimerThread()
extern void TimerThread_StopTimerThread_mF21D32E1712AE8052A36EAC8729A2755B4AA4FBF (void);
// 0x00000742 System.Void System.Net.TimerThread::OnDomainUnload(System.Object,System.EventArgs)
extern void TimerThread_OnDomainUnload_m594B6D256C11A7B1FEFD61BDA0A567058F4517C4 (void);
// 0x00000743 System.Void System.Net.TimerThread/Queue::.ctor(System.Int32)
extern void Queue__ctor_mC89D29D512FC164F6B5A4C9FD5DE574328FC99CC (void);
// 0x00000744 System.Void System.Net.TimerThread/Timer::.ctor(System.Int32)
extern void Timer__ctor_m4540393393A01B07D912FFFD47EE37BAD97D8DD0 (void);
// 0x00000745 System.Boolean System.Net.TimerThread/Timer::Cancel()
// 0x00000746 System.Void System.Net.TimerThread/Timer::Dispose()
extern void Timer_Dispose_m14AC12E37E52871D2FEC402F8D2F78BF8101C32B (void);
// 0x00000747 System.Void System.Net.TimerThread/Callback::.ctor(System.Object,System.IntPtr)
extern void Callback__ctor_m6DECF0EA1ECE944021384E1D04CF4931C89353FC (void);
// 0x00000748 System.Void System.Net.TimerThread/Callback::Invoke(System.Net.TimerThread/Timer,System.Int32,System.Object)
extern void Callback_Invoke_m5CF1B13973F36016D5A95A11766B53018849FC0B (void);
// 0x00000749 System.IAsyncResult System.Net.TimerThread/Callback::BeginInvoke(System.Net.TimerThread/Timer,System.Int32,System.Object,System.AsyncCallback,System.Object)
extern void Callback_BeginInvoke_mAE44EE87C3A42CE9EE94B437D3FCB03C743CF2F9 (void);
// 0x0000074A System.Void System.Net.TimerThread/Callback::EndInvoke(System.IAsyncResult)
extern void Callback_EndInvoke_mD9EB2BA9D74B86A5A84275D63BAFD884CA639C7E (void);
// 0x0000074B System.Void System.Net.TimerThread/TimerQueue::.ctor(System.Int32)
extern void TimerQueue__ctor_m43203205D39CB2175B0E5832A359AFB952AEA9D6 (void);
// 0x0000074C System.Void System.Net.TimerThread/InfiniteTimerQueue::.ctor()
extern void InfiniteTimerQueue__ctor_m0615ECE53786982AB9CE17517821090EAA4875FE (void);
// 0x0000074D System.Void System.Net.TimerThread/TimerNode::.ctor()
extern void TimerNode__ctor_mD6B740263A99B51737831DE7F0400AF236C5A39E (void);
// 0x0000074E System.Net.TimerThread/TimerNode System.Net.TimerThread/TimerNode::get_Next()
extern void TimerNode_get_Next_m3960D4407C100E026C6F7EF316B07F8BB2C26517 (void);
// 0x0000074F System.Void System.Net.TimerThread/TimerNode::set_Next(System.Net.TimerThread/TimerNode)
extern void TimerNode_set_Next_m0C74401BC133D94AEDB40E1CB0A24F2C1F52FC68 (void);
// 0x00000750 System.Net.TimerThread/TimerNode System.Net.TimerThread/TimerNode::get_Prev()
extern void TimerNode_get_Prev_m6A2D3FA9F1ED71F25B05D72A81DB7A8B368AAA62 (void);
// 0x00000751 System.Void System.Net.TimerThread/TimerNode::set_Prev(System.Net.TimerThread/TimerNode)
extern void TimerNode_set_Prev_m3D69D7AED0406834FFFFBE21804DF522B8FB14B6 (void);
// 0x00000752 System.Boolean System.Net.TimerThread/TimerNode::Cancel()
extern void TimerNode_Cancel_m6EB166DFE1E2E01BBBAA1FA4C35457DB111D951B (void);
// 0x00000753 System.Void System.Net.EmptyWebProxy::.ctor()
extern void EmptyWebProxy__ctor_m5EC0BA8242BECE3F0E67CC143135CBE8670BFFFD (void);
// 0x00000754 System.Uri System.Net.EmptyWebProxy::GetProxy(System.Uri)
extern void EmptyWebProxy_GetProxy_mB0FAC789C4DD283E803F72B38F22ED5EA25535AC (void);
// 0x00000755 System.Boolean System.Net.EmptyWebProxy::IsBypassed(System.Uri)
extern void EmptyWebProxy_IsBypassed_m9A64B556EC9A174EBF75652A1C274A437E1CC99B (void);
// 0x00000756 System.Void System.Net.Cookie::.ctor()
extern void Cookie__ctor_m4C7C1E7E0DCE68AC143F44630AEE2D385480DE48 (void);
// 0x00000757 System.String System.Net.Cookie::get_Domain()
extern void Cookie_get_Domain_m278E7B0428D3194F5C38175134F7C3D5788A69FE (void);
// 0x00000758 System.Void System.Net.Cookie::set_Domain(System.String)
extern void Cookie_set_Domain_mFAA0D7FAB346C34A3ADF865A6F531A948E4E9DBA (void);
// 0x00000759 System.String System.Net.Cookie::get__Domain()
extern void Cookie_get__Domain_m3B7DDACA37D03838CA3C94460AA300D4E2D81C7C (void);
// 0x0000075A System.String System.Net.Cookie::get_Name()
extern void Cookie_get_Name_mC233F7C69F3A7FE643C75F4289BE2F7A8E84D8FD (void);
// 0x0000075B System.Void System.Net.Cookie::set_Name(System.String)
extern void Cookie_set_Name_m26EA3F39B9C1C3EB1EF9C51209D3EFED1CDF00F6 (void);
// 0x0000075C System.Boolean System.Net.Cookie::InternalSetName(System.String)
extern void Cookie_InternalSetName_m866D7004C1F40D6F1247918DD747C08F71986B42 (void);
// 0x0000075D System.String System.Net.Cookie::get_Path()
extern void Cookie_get_Path_m8B56312681A7D76C09C012AE84004D2FE15AFE2A (void);
// 0x0000075E System.Void System.Net.Cookie::set_Path(System.String)
extern void Cookie_set_Path_mEA8D095CDCC6D19456E1F24C43F143080EF577E8 (void);
// 0x0000075F System.String System.Net.Cookie::get__Path()
extern void Cookie_get__Path_m78788CA8B87C93C7C22828F97BA8F1AF022908B1 (void);
// 0x00000760 System.Boolean System.Net.Cookie::get_Plain()
extern void Cookie_get_Plain_m640F05F7E1F4600F56769459C1FE15548512E2E2 (void);
// 0x00000761 System.String System.Net.Cookie::get_Port()
extern void Cookie_get_Port_m1ADDA2D709AD33FC6693C575C07E86BA94F50EE9 (void);
// 0x00000762 System.Void System.Net.Cookie::set_Port(System.String)
extern void Cookie_set_Port_m8BA5AD268A143AE02AC42EB6457AECA645C2C298 (void);
// 0x00000763 System.String System.Net.Cookie::get__Port()
extern void Cookie_get__Port_m867588A59661398C9AC64EB223387B42048D280A (void);
// 0x00000764 System.String System.Net.Cookie::get_Value()
extern void Cookie_get_Value_mEFF804AC5A0D1252E626903FE0B45706D4F3A453 (void);
// 0x00000765 System.Void System.Net.Cookie::set_Value(System.String)
extern void Cookie_set_Value_mB71BD8E33373029251A2C55533A8A4417BDB8767 (void);
// 0x00000766 System.Net.CookieVariant System.Net.Cookie::get_Variant()
extern void Cookie_get_Variant_m5453D977C7AAF6B634E5B31CB2DE7D66BD323551 (void);
// 0x00000767 System.Int32 System.Net.Cookie::get_Version()
extern void Cookie_get_Version_m061640FE8C0F64A0FA003BF8D3391CC1FCD153A4 (void);
// 0x00000768 System.Void System.Net.Cookie::set_Version(System.Int32)
extern void Cookie_set_Version_m4D43603189124EA1FDE4E8D45D65C60F1EB9B64E (void);
// 0x00000769 System.String System.Net.Cookie::get__Version()
extern void Cookie_get__Version_mE3C0E366E86DFAAB2EEA66561B74C4E8B284B854 (void);
// 0x0000076A System.Collections.IComparer System.Net.Cookie::GetComparer()
extern void Cookie_GetComparer_m626622B01059F3912F25478B1A1B38AFFB6BA7EF (void);
// 0x0000076B System.Boolean System.Net.Cookie::Equals(System.Object)
extern void Cookie_Equals_mB07B0CC36C9FA37BD7F8DE25DD5BF11BEF65B7D4 (void);
// 0x0000076C System.Int32 System.Net.Cookie::GetHashCode()
extern void Cookie_GetHashCode_mC355FA3D045BA3A216583AEA99C8D448A45215BE (void);
// 0x0000076D System.String System.Net.Cookie::ToString()
extern void Cookie_ToString_m50C477C29C14B822B6867B4B6F877BC0120EFC4E (void);
// 0x0000076E System.Void System.Net.Cookie::.cctor()
extern void Cookie__cctor_mA3983453AA0BDB2D9620CCB97569AF512BAF7F1A (void);
// 0x0000076F System.Int32 System.Net.Comparer::System.Collections.IComparer.Compare(System.Object,System.Object)
extern void Comparer_System_Collections_IComparer_Compare_m83E8F9A164E78CC74ADA62FF0EB4F7AEBE08B902 (void);
// 0x00000770 System.Void System.Net.Comparer::.ctor()
extern void Comparer__ctor_mB9048FB4377C7FE872A4ACD9A0173FEDA37554F3 (void);
// 0x00000771 System.Void System.Net.CookieCollection::.ctor()
extern void CookieCollection__ctor_m6F7AC5879C514DAD6EE967A7FC18C3F28DAC4B11 (void);
// 0x00000772 System.Net.Cookie System.Net.CookieCollection::get_Item(System.Int32)
extern void CookieCollection_get_Item_m811D5D88284ADADB6200D9B6CE5BE74B7324A597 (void);
// 0x00000773 System.Void System.Net.CookieCollection::Add(System.Net.Cookie)
extern void CookieCollection_Add_m81852BE25115EA44DEA8AC788666350ACBFF13E9 (void);
// 0x00000774 System.Int32 System.Net.CookieCollection::get_Count()
extern void CookieCollection_get_Count_m329458A1D5426014346F371D1B86AB4678FF34AE (void);
// 0x00000775 System.Boolean System.Net.CookieCollection::get_IsSynchronized()
extern void CookieCollection_get_IsSynchronized_mF0FA5ADB5DDFC0DA4FAE1D06BE5F0A28A35309DD (void);
// 0x00000776 System.Object System.Net.CookieCollection::get_SyncRoot()
extern void CookieCollection_get_SyncRoot_m4761E1233AAB107D61A409A106A117751A42A6FF (void);
// 0x00000777 System.Void System.Net.CookieCollection::CopyTo(System.Array,System.Int32)
extern void CookieCollection_CopyTo_m1C053D1F041D227716D6D7D472A31B9E65A1C871 (void);
// 0x00000778 System.Int32 System.Net.CookieCollection::IndexOf(System.Net.Cookie)
extern void CookieCollection_IndexOf_m775D41262A22744C845245D4B6574B6AE5983DBC (void);
// 0x00000779 System.Collections.IEnumerator System.Net.CookieCollection::GetEnumerator()
extern void CookieCollection_GetEnumerator_m98DE8A53502E0AA6C428F564D6EDE38A007D22C9 (void);
// 0x0000077A System.Void System.Net.CookieCollection/CookieCollectionEnumerator::.ctor(System.Net.CookieCollection)
extern void CookieCollectionEnumerator__ctor_m1171DDC5103451BF97CD71F062D1D46F73A82E24 (void);
// 0x0000077B System.Object System.Net.CookieCollection/CookieCollectionEnumerator::System.Collections.IEnumerator.get_Current()
extern void CookieCollectionEnumerator_System_Collections_IEnumerator_get_Current_mAA94D3E326A7361A173810EF7FEF6ED5C5050E18 (void);
// 0x0000077C System.Boolean System.Net.CookieCollection/CookieCollectionEnumerator::System.Collections.IEnumerator.MoveNext()
extern void CookieCollectionEnumerator_System_Collections_IEnumerator_MoveNext_m654F79FEDDFEE6946815223DF2EFFF20B25F5871 (void);
// 0x0000077D System.Void System.Net.CookieCollection/CookieCollectionEnumerator::System.Collections.IEnumerator.Reset()
extern void CookieCollectionEnumerator_System_Collections_IEnumerator_Reset_m303622E6840FA17ADFF40CC74DDAC1EB5480C3CC (void);
// 0x0000077E System.Void System.Net.CookieException::.ctor()
extern void CookieException__ctor_m5E53613191A7B09E274C5250669847B30A2AEA0D (void);
// 0x0000077F System.Void System.Net.CookieException::.ctor(System.String)
extern void CookieException__ctor_m8D6130D80CE467495A4DED747A392B3911258566 (void);
// 0x00000780 System.Void System.Net.CookieException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void CookieException__ctor_m617F1512B36DE1EA3650DE76353F8A386F788327 (void);
// 0x00000781 System.Void System.Net.CookieException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void CookieException_System_Runtime_Serialization_ISerializable_GetObjectData_mA95ECBFCDBBE4D5881077E40D1DD3CDEDC9E07CD (void);
// 0x00000782 System.Void System.Net.CookieException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void CookieException_GetObjectData_mF1CE13806E7D8D065C369D5149DD63197257D599 (void);
// 0x00000783 System.Void System.Net.FileWebRequest::.ctor(System.Uri)
extern void FileWebRequest__ctor_m3BD0B632AAAA9A6314A48EAEA261D6C49A29CC87 (void);
// 0x00000784 System.Void System.Net.FileWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebRequest__ctor_m4D6FACD86407B7910DCB5708F13796534DE54DFD (void);
// 0x00000785 System.Void System.Net.FileWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m1DC998628B76190A2F606178371548237516B256 (void);
// 0x00000786 System.Void System.Net.FileWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebRequest_GetObjectData_mCCC968CB9501E785DDF897B35DCD0848931D1582 (void);
// 0x00000787 System.Boolean System.Net.FileWebRequest::get_Aborted()
extern void FileWebRequest_get_Aborted_m687CEE80919037332B61F2C449D9EBA8A4E7C587 (void);
// 0x00000788 System.Void System.Net.FileWebRequest::GetRequestStreamCallback(System.Object)
extern void FileWebRequest_GetRequestStreamCallback_m48649B4261BBDDB95536989690D28D2D97257E46 (void);
// 0x00000789 System.Void System.Net.FileWebRequest::GetResponseCallback(System.Object)
extern void FileWebRequest_GetResponseCallback_m4DCB2FCD829F1CED62A53002E8DE88C81B487CC3 (void);
// 0x0000078A System.Void System.Net.FileWebRequest::UnblockReader()
extern void FileWebRequest_UnblockReader_m71733AFB64CCAE0043F76194EE532B48ADB3E955 (void);
// 0x0000078B System.Void System.Net.FileWebRequest::.cctor()
extern void FileWebRequest__cctor_mED169DCB124B8F2825E56289DF278CB89662D0EB (void);
// 0x0000078C System.Void System.Net.FileWebRequestCreator::.ctor()
extern void FileWebRequestCreator__ctor_mC9309A7E8AEF2B32E4596F499FA2C1AFF26FCC8B (void);
// 0x0000078D System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern void FileWebRequestCreator_Create_m4A009337FA6E4113EB05A0D9B8A68DC562F6CD11 (void);
// 0x0000078E System.Void System.Net.FileWebStream::.ctor(System.Net.FileWebRequest,System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern void FileWebStream__ctor_mAC5E31F61865C55A0BCB1EAB7CA5D6EB1E4E9536 (void);
// 0x0000078F System.Void System.Net.FileWebStream::.ctor(System.Net.FileWebRequest,System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean)
extern void FileWebStream__ctor_m5E2038F8FB3B8C052A66B461A4AEAD763EC72523 (void);
// 0x00000790 System.Void System.Net.FileWebStream::Dispose(System.Boolean)
extern void FileWebStream_Dispose_m3761A400830205DF54493ED2E0B5479ACE5E09D3 (void);
// 0x00000791 System.Void System.Net.FileWebStream::System.Net.ICloseEx.CloseEx(System.Net.CloseExState)
extern void FileWebStream_System_Net_ICloseEx_CloseEx_mD34DB9FF876566D364B3AC2720DAA67BEFB5494F (void);
// 0x00000792 System.Int32 System.Net.FileWebStream::Read(System.Byte[],System.Int32,System.Int32)
extern void FileWebStream_Read_m99E1D1597138ADD46D0546BD9C963F8EF4345D62 (void);
// 0x00000793 System.Void System.Net.FileWebStream::Write(System.Byte[],System.Int32,System.Int32)
extern void FileWebStream_Write_mAB0472EB14D00B4BA51EA364A99E051D2FA8F2E6 (void);
// 0x00000794 System.IAsyncResult System.Net.FileWebStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void FileWebStream_BeginRead_mFF1D75843A5A82C1034547CC48968C8C05145ED7 (void);
// 0x00000795 System.Int32 System.Net.FileWebStream::EndRead(System.IAsyncResult)
extern void FileWebStream_EndRead_m6C8AC6E7D6FB618390B27853BF32C70C0E6258E1 (void);
// 0x00000796 System.IAsyncResult System.Net.FileWebStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void FileWebStream_BeginWrite_m5CDA5FF4DC3E9DBFD6FD4E091860247D3921A088 (void);
// 0x00000797 System.Void System.Net.FileWebStream::EndWrite(System.IAsyncResult)
extern void FileWebStream_EndWrite_m2A4EBAF99FA675BA834D20C7D23F1925A37510AF (void);
// 0x00000798 System.Void System.Net.FileWebStream::CheckError()
extern void FileWebStream_CheckError_m5373399E1C7A5036852A3495F5B3C04640BB0F51 (void);
// 0x00000799 System.Void System.Net.FileWebResponse::.ctor(System.Net.FileWebRequest,System.Uri,System.IO.FileAccess,System.Boolean)
extern void FileWebResponse__ctor_m937A38D5CC20434EEC6F27DE580B8F7418FD6B46 (void);
// 0x0000079A System.Void System.Net.FileWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebResponse__ctor_m31F0F51C0F5CDCF773499E41FD29C002C230B483 (void);
// 0x0000079B System.Void System.Net.FileWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m50547639BE9A06AF71C19D4F6E2B7C9DF3897DAC (void);
// 0x0000079C System.Void System.Net.FileWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebResponse_GetObjectData_m62702AE7EAE842946B45BE26D5E492D9598FC920 (void);
// 0x0000079D System.Void System.Net.FileWebResponse::Close()
extern void FileWebResponse_Close_mA4570F39B91740DFF95E0050E9C13BC5C527FC84 (void);
// 0x0000079E System.Void System.Net.FileWebResponse::System.Net.ICloseEx.CloseEx(System.Net.CloseExState)
extern void FileWebResponse_System_Net_ICloseEx_CloseEx_mF5CE52E9F3E81C407E93786BAC6018B597C7DA00 (void);
// 0x0000079F System.Uri System.Net.IWebProxy::GetProxy(System.Uri)
// 0x000007A0 System.Boolean System.Net.IWebProxy::IsBypassed(System.Uri)
// 0x000007A1 System.Void System.Net.WebProxy::.ctor()
extern void WebProxy__ctor_m9DAD546F80ACD9479C786D5C66CF841B7D2F31E8 (void);
// 0x000007A2 System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern void WebProxy__ctor_m88D1B551CA157B4190F7082F3496388DB41B892C (void);
// 0x000007A3 System.Net.ICredentials System.Net.WebProxy::get_Credentials()
extern void WebProxy_get_Credentials_m457E5BD941E4AEA6DB65859123F33B3C1614C68A (void);
// 0x000007A4 System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern void WebProxy_get_UseDefaultCredentials_m03D6385937D10D5E2B971852E81196FC1281CDC6 (void);
// 0x000007A5 System.Void System.Net.WebProxy::set_UseDefaultCredentials(System.Boolean)
extern void WebProxy_set_UseDefaultCredentials_mBD6A789873DFF09C584F1E1F78F2D286D6FA990C (void);
// 0x000007A6 System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern void WebProxy_GetProxy_m8FDE265E6B9973E022EA8970C9B1DAD0B2CCC25F (void);
// 0x000007A7 System.Void System.Net.WebProxy::UpdateRegExList(System.Boolean)
extern void WebProxy_UpdateRegExList_mB499E94B5CB70B08BBFD2D9DA9EFC2B128CC26DD (void);
// 0x000007A8 System.Boolean System.Net.WebProxy::IsMatchInBypassList(System.Uri)
extern void WebProxy_IsMatchInBypassList_m065FB89DE3BC59171195D70D96B4D36733189226 (void);
// 0x000007A9 System.Boolean System.Net.WebProxy::IsLocal(System.Uri)
extern void WebProxy_IsLocal_m502074ED102B252CF88AF725230AA3FA2D97A21F (void);
// 0x000007AA System.Boolean System.Net.WebProxy::IsLocalInProxyHash(System.Uri)
extern void WebProxy_IsLocalInProxyHash_m7F46FAA47C841E1E0CD0127973C45EDD72DCFD7E (void);
// 0x000007AB System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern void WebProxy_IsBypassed_m8F90EF89CB55CAE69CA92B25A737849F0C2B6449 (void);
// 0x000007AC System.Boolean System.Net.WebProxy::IsBypassedManual(System.Uri)
extern void WebProxy_IsBypassedManual_mB2A24F5F65C1D5E4C7F9312D09C6A6DB4A7B6F1E (void);
// 0x000007AD System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebProxy__ctor_m1C58101578A4CE7D939641C97BFD8E0203AD3F14 (void);
// 0x000007AE System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m55E9EC6188F26F2762C669DEB2BAFF297BB98787 (void);
// 0x000007AF System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebProxy_GetObjectData_m6F158918E51572F668D8E13E4271E8A3D8C6E70E (void);
// 0x000007B0 System.Net.AutoWebProxyScriptEngine System.Net.WebProxy::get_ScriptEngine()
extern void WebProxy_get_ScriptEngine_mF28F919839AC16984BAF19EF7884DDADEC1186E4 (void);
// 0x000007B1 System.Net.IWebProxy System.Net.WebProxy::CreateDefaultProxy()
extern void WebProxy_CreateDefaultProxy_m83288C2048B45C283D7A797E5EA858314B552F0E (void);
// 0x000007B2 System.Void System.Net.WebProxy::.ctor(System.Boolean)
extern void WebProxy__ctor_m8A57A31FD52C935A1C493001DC32FC2F17166DD2 (void);
// 0x000007B3 System.Void System.Net.WebProxy::UnsafeUpdateFromRegistry()
extern void WebProxy_UnsafeUpdateFromRegistry_m520E026082667505E562985E6101A550DD59D0A0 (void);
// 0x000007B4 System.Boolean System.Net.WebProxy::GetProxyAuto(System.Uri,System.Uri&)
extern void WebProxy_GetProxyAuto_mF31E6F0E78FABA247E2FC4E69BF9EFD68F2ABF61 (void);
// 0x000007B5 System.Boolean System.Net.WebProxy::IsBypassedAuto(System.Uri,System.Boolean&)
extern void WebProxy_IsBypassedAuto_mE488794EEDC4F991CA1DE691217CD89F66C6BEF0 (void);
// 0x000007B6 System.Boolean System.Net.WebProxy::AreAllBypassed(System.Collections.Generic.IEnumerable`1<System.String>,System.Boolean)
extern void WebProxy_AreAllBypassed_m1A4A8E469860E3F507377434686208375B58A050 (void);
// 0x000007B7 System.Uri System.Net.WebProxy::ProxyUri(System.String)
extern void WebProxy_ProxyUri_m13899818E2D75D56820A64C02A3F2ABC80EF0A22 (void);
// 0x000007B8 System.Boolean System.Net.AutoWebProxyScriptEngine::GetProxies(System.Uri,System.Collections.Generic.IList`1<System.String>&)
extern void AutoWebProxyScriptEngine_GetProxies_m37C7A2CAEB8CD280B45518559965B518519D007F (void);
// 0x000007B9 System.Boolean System.Net.AutoWebProxyScriptEngine::GetProxies(System.Uri,System.Collections.Generic.IList`1<System.String>&,System.Int32&)
extern void AutoWebProxyScriptEngine_GetProxies_mE4E0E75E060B5347A17D354889CF1613F3A7FD19 (void);
// 0x000007BA System.Security.SecureString System.Net.UnsafeNclNativeMethods/SecureStringHelper::CreateSecureString(System.String)
extern void SecureStringHelper_CreateSecureString_mD0C2BF056673EB4D998FB43FFD8B619BA3C56788 (void);
// 0x000007BB System.Void System.Net.ServerCertValidationCallback::.ctor(System.Net.Security.RemoteCertificateValidationCallback)
extern void ServerCertValidationCallback__ctor_m74FA8CDC1C3AD2BAE782BFD55EC0AA62A18E7DE0 (void);
// 0x000007BC System.Void System.Net.ServerCertValidationCallback::Callback(System.Object)
extern void ServerCertValidationCallback_Callback_m70F2E0E1A3C556EFADA5F1AFC56B43A65E0E7FBD (void);
// 0x000007BD System.Boolean System.Net.ServerCertValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void ServerCertValidationCallback_Invoke_m88F7CC8E8BAE6F501FB49ECE5DC9026120DA3857 (void);
// 0x000007BE System.Void System.Net.ServerCertValidationCallback/CallbackContext::.ctor(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void CallbackContext__ctor_mC3F2B967B65649E6A2FC12CC30EFDAA5631E1BAC (void);
// 0x000007BF System.Void System.Net.ChunkedInputStream::.ctor(System.Net.HttpListenerContext,System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern void ChunkedInputStream__ctor_m4881383104676360DFEE920A5A9C8D9B7A3A0CC7 (void);
// 0x000007C0 System.Int32 System.Net.ChunkedInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern void ChunkedInputStream_Read_m0B90CA9A27BDBDCEB6D5D5F6449464EE34B6A00D (void);
// 0x000007C1 System.IAsyncResult System.Net.ChunkedInputStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void ChunkedInputStream_BeginRead_m7D54ECB79F6DCAD88391AD7649C04F835D85DFA0 (void);
// 0x000007C2 System.Void System.Net.ChunkedInputStream::OnRead(System.IAsyncResult)
extern void ChunkedInputStream_OnRead_mCEEEBC0648DFFA337C09FAF3911145ED2EC5F610 (void);
// 0x000007C3 System.Int32 System.Net.ChunkedInputStream::EndRead(System.IAsyncResult)
extern void ChunkedInputStream_EndRead_mCF8EE2908D23548AD52BC09C76834D6692AFB0ED (void);
// 0x000007C4 System.Void System.Net.ChunkedInputStream::Close()
extern void ChunkedInputStream_Close_mF1099B1C86674DF436FF6422541C435FB0681448 (void);
// 0x000007C5 System.Void System.Net.ChunkedInputStream/ReadBufferState::.ctor(System.Byte[],System.Int32,System.Int32,System.Net.HttpStreamAsyncResult)
extern void ReadBufferState__ctor_m112DE2557DD17168A5BE6BD691ADD4186A2F4B04 (void);
// 0x000007C6 System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&,System.Int32)
extern void Dns_GetHostByName_internal_m26A891C2889762F2C8178F5D7C69F8054B6A008C (void);
// 0x000007C7 System.Boolean System.Net.Dns::GetHostName_internal(System.String&)
extern void Dns_GetHostName_internal_mAD5618245A645A5CBCC392DFAE266148569FFB1C (void);
// 0x000007C8 System.Void System.Net.Dns::Error_11001(System.String)
extern void Dns_Error_11001_m9BE914794C941E89851DAFED4058718C37D7C612 (void);
// 0x000007C9 System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String,System.String[],System.String[])
extern void Dns_hostent_to_IPHostEntry_mEF4DE4F30A1F6F3634D06C3AB826949C91C56BD0 (void);
// 0x000007CA System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
extern void Dns_GetHostByName_m072CBDF5FD14C53FB28738920C62F05B6A63ED67 (void);
// 0x000007CB System.String System.Net.Dns::GetHostName()
extern void Dns_GetHostName_m235D1E0FD888CE88E816294B8E687773E016E77E (void);
// 0x000007CC System.Void System.Net.EndPointListener::.ctor(System.Net.HttpListener,System.Net.IPAddress,System.Int32,System.Boolean)
extern void EndPointListener__ctor_m06FAC47BB19DC95E233725D30FAC27D50EDB529F (void);
// 0x000007CD System.Net.HttpListener System.Net.EndPointListener::get_Listener()
extern void EndPointListener_get_Listener_mC490794B0495B4C673CA839597035B9430DAA4F3 (void);
// 0x000007CE System.Void System.Net.EndPointListener::Accept(System.Net.Sockets.Socket,System.Net.Sockets.SocketAsyncEventArgs,System.Net.Sockets.Socket&)
extern void EndPointListener_Accept_mBEA0AD18EB290AC9A70D389731AA11C5C0464BAB (void);
// 0x000007CF System.Void System.Net.EndPointListener::ProcessAccept(System.Net.Sockets.SocketAsyncEventArgs)
extern void EndPointListener_ProcessAccept_m3167FEDB04A867ED9448CF0C1FE771B223E8EFE3 (void);
// 0x000007D0 System.Void System.Net.EndPointListener::OnAccept(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
extern void EndPointListener_OnAccept_m587CB7DF248766CAD150D8DBD3495E7126CE56F4 (void);
// 0x000007D1 System.Void System.Net.EndPointListener::RemoveConnection(System.Net.HttpConnection)
extern void EndPointListener_RemoveConnection_m0C19818AFA2847A9324B6F9B023C2266D37A554F (void);
// 0x000007D2 System.Boolean System.Net.EndPointListener::BindContext(System.Net.HttpListenerContext)
extern void EndPointListener_BindContext_mADF40CED37944EDE900CDD6F2FDC4FC7DAB410C9 (void);
// 0x000007D3 System.Void System.Net.EndPointListener::UnbindContext(System.Net.HttpListenerContext)
extern void EndPointListener_UnbindContext_mE21F25A7B9BD69165A075F6FDEC6A20FA8A4BF2A (void);
// 0x000007D4 System.Net.HttpListener System.Net.EndPointListener::SearchListener(System.Uri,System.Net.ListenerPrefix&)
extern void EndPointListener_SearchListener_mC3441C72E5908ED6AF9CA4665B743D70CD51C338 (void);
// 0x000007D5 System.Net.HttpListener System.Net.EndPointListener::MatchFromList(System.String,System.String,System.Collections.ArrayList,System.Net.ListenerPrefix&)
extern void EndPointListener_MatchFromList_mE82CC7B8492FA44651101ABE65E8A376F7E3287B (void);
// 0x000007D6 System.Void System.Net.EndPointListener::AddSpecial(System.Collections.ArrayList,System.Net.ListenerPrefix)
extern void EndPointListener_AddSpecial_mDBD1B26D49973740FF67A8B0E83779BB4189243E (void);
// 0x000007D7 System.Boolean System.Net.EndPointListener::RemoveSpecial(System.Collections.ArrayList,System.Net.ListenerPrefix)
extern void EndPointListener_RemoveSpecial_m66E47FE3E6970DC7D49E26A3C176CD79C50F78DC (void);
// 0x000007D8 System.Void System.Net.EndPointListener::CheckIfRemove()
extern void EndPointListener_CheckIfRemove_mA965A1EA52E12C55B21459B88424F19A404F651E (void);
// 0x000007D9 System.Void System.Net.EndPointListener::Close()
extern void EndPointListener_Close_mBE10FCF7B4B139047C1940CEED4852C9CB5D0941 (void);
// 0x000007DA System.Void System.Net.EndPointListener::AddPrefix(System.Net.ListenerPrefix,System.Net.HttpListener)
extern void EndPointListener_AddPrefix_mE4470615B84C5BF59DBF1A267FF6C74E1ADAE36E (void);
// 0x000007DB System.Void System.Net.EndPointListener::RemovePrefix(System.Net.ListenerPrefix,System.Net.HttpListener)
extern void EndPointListener_RemovePrefix_m47437560CE2053AEB6D5AEB820D24CDEAF162320 (void);
// 0x000007DC System.Void System.Net.EndPointManager::AddListener(System.Net.HttpListener)
extern void EndPointManager_AddListener_m9468DED5A3833723E5FD5599F403053ACDDD8B45 (void);
// 0x000007DD System.Void System.Net.EndPointManager::AddPrefix(System.String,System.Net.HttpListener)
extern void EndPointManager_AddPrefix_mB14837B4028AB2234280E3A5B8CE90E5AA09B76A (void);
// 0x000007DE System.Void System.Net.EndPointManager::AddPrefixInternal(System.String,System.Net.HttpListener)
extern void EndPointManager_AddPrefixInternal_mBBEA5034DBF1CFF75FB1D7F3FFED42F903CE7E33 (void);
// 0x000007DF System.Net.EndPointListener System.Net.EndPointManager::GetEPListener(System.String,System.Int32,System.Net.HttpListener,System.Boolean)
extern void EndPointManager_GetEPListener_m3CD4CFA7D69455180FDEC3DD2F17600D7B15F989 (void);
// 0x000007E0 System.Void System.Net.EndPointManager::RemoveEndPoint(System.Net.EndPointListener,System.Net.IPEndPoint)
extern void EndPointManager_RemoveEndPoint_mDD750E0F8A47B9B336E3BF614B1328E5EDE0DF28 (void);
// 0x000007E1 System.Void System.Net.EndPointManager::RemoveListener(System.Net.HttpListener)
extern void EndPointManager_RemoveListener_mED973E5FD207B496C0B0711381C445E5BCC8CDDF (void);
// 0x000007E2 System.Void System.Net.EndPointManager::RemovePrefix(System.String,System.Net.HttpListener)
extern void EndPointManager_RemovePrefix_mD4C3F4FE4AE3D0D451BB8D951396591B0FF7693D (void);
// 0x000007E3 System.Void System.Net.EndPointManager::RemovePrefixInternal(System.String,System.Net.HttpListener)
extern void EndPointManager_RemovePrefixInternal_m5C057367A55FAE23A726FDFCFAACEFB7112AC1A2 (void);
// 0x000007E4 System.Void System.Net.EndPointManager::.cctor()
extern void EndPointManager__cctor_m2C0A06697FC2CC3BFC39464000133C25615E6FB5 (void);
// 0x000007E5 System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern void FtpRequestCreator_Create_m5CA2D4FFF5B62CB6FCBBCB62603714EB3661160D (void);
// 0x000007E6 System.Void System.Net.FtpRequestCreator::.ctor()
extern void FtpRequestCreator__ctor_m67E38F5A154B50C28349321A03CA0A0A8BA1FC5A (void);
// 0x000007E7 System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
extern void FtpWebRequest__ctor_m1C444C1A347BC343DFA3743C7091F6C15DB57388 (void);
// 0x000007E8 System.Void System.Net.FtpWebRequest::.cctor()
extern void FtpWebRequest__cctor_m3CD2399DB0B2BF9D8349514C0E8F0FE9FAA42211 (void);
// 0x000007E9 System.Void System.Net.HttpConnection::.ctor(System.Net.Sockets.Socket,System.Net.EndPointListener,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate)
extern void HttpConnection__ctor_mA9D70F84C132137E97F44A0370E20CA3D8811FD9 (void);
// 0x000007EA System.Void System.Net.HttpConnection::Init()
extern void HttpConnection_Init_m07013EC738D7A16C287AC3ABE6E1CA20A468AEE8 (void);
// 0x000007EB System.Int32 System.Net.HttpConnection::get_Reuses()
extern void HttpConnection_get_Reuses_m3349269F67FC4A37B34B4069E85ADA002A59328C (void);
// 0x000007EC System.Net.IPEndPoint System.Net.HttpConnection::get_LocalEndPoint()
extern void HttpConnection_get_LocalEndPoint_m0434C23A2834BE0ADE09BD415D29EE52BEF7A1E7 (void);
// 0x000007ED System.Boolean System.Net.HttpConnection::get_IsSecure()
extern void HttpConnection_get_IsSecure_mDBA150F62B0E174850CAF56792B62C43D8AC83BD (void);
// 0x000007EE System.Void System.Net.HttpConnection::set_Prefix(System.Net.ListenerPrefix)
extern void HttpConnection_set_Prefix_mFF3A414A70F40DC675BE3E38D13EBD573809ED47 (void);
// 0x000007EF System.Void System.Net.HttpConnection::OnTimeout(System.Object)
extern void HttpConnection_OnTimeout_m04CEE943DA79156A94EEB28C0C2FAB94D3DD00A2 (void);
// 0x000007F0 System.Void System.Net.HttpConnection::BeginReadRequest()
extern void HttpConnection_BeginReadRequest_m8B5AB93648FEAD2CADE00E30621A21A8D7F9CC2D (void);
// 0x000007F1 System.Net.RequestStream System.Net.HttpConnection::GetRequestStream(System.Boolean,System.Int64)
extern void HttpConnection_GetRequestStream_m8DA5932B7D735BD6CA1BDF29FDA6E85EF99DAC7A (void);
// 0x000007F2 System.Net.ResponseStream System.Net.HttpConnection::GetResponseStream()
extern void HttpConnection_GetResponseStream_mC3D75FD104BF0C8CD0666F93518EC2FEAD6C71AA (void);
// 0x000007F3 System.Void System.Net.HttpConnection::OnRead(System.IAsyncResult)
extern void HttpConnection_OnRead_m586FCDC6DC50E064373CEBDFCFFF66B8C9DF13B4 (void);
// 0x000007F4 System.Void System.Net.HttpConnection::OnReadInternal(System.IAsyncResult)
extern void HttpConnection_OnReadInternal_mD407AD1A0BA348E023CF3F48A7534815F38B7A6C (void);
// 0x000007F5 System.Void System.Net.HttpConnection::RemoveConnection()
extern void HttpConnection_RemoveConnection_m4A3FFBB14DF1BFF27FA613B286278C0A08C91B19 (void);
// 0x000007F6 System.Boolean System.Net.HttpConnection::ProcessInput(System.IO.MemoryStream)
extern void HttpConnection_ProcessInput_m3CC36A48AFC2C361F9738CA1D037C81796C2E59C (void);
// 0x000007F7 System.String System.Net.HttpConnection::ReadLine(System.Byte[],System.Int32,System.Int32,System.Int32&)
extern void HttpConnection_ReadLine_mA67E81F1FCD26D9786E42F0ABFFEA3F26765F826 (void);
// 0x000007F8 System.Void System.Net.HttpConnection::SendError(System.String,System.Int32)
extern void HttpConnection_SendError_mD145D6E48E7EC811EC73AB70B91E1556CB3F4875 (void);
// 0x000007F9 System.Void System.Net.HttpConnection::SendError()
extern void HttpConnection_SendError_m100E1F2F97108F9A17BEBB9F2FFF6955DC954D45 (void);
// 0x000007FA System.Void System.Net.HttpConnection::Unbind()
extern void HttpConnection_Unbind_m61C2E110F77FA3410F67407D1C8231CA262F3DC4 (void);
// 0x000007FB System.Void System.Net.HttpConnection::CloseSocket()
extern void HttpConnection_CloseSocket_m8680B3B269134A9055480E0AF32A522FF9F84B48 (void);
// 0x000007FC System.Void System.Net.HttpConnection::Close(System.Boolean)
extern void HttpConnection_Close_m9712606FB42670D5A9948679FA7507F1FEB2105A (void);
// 0x000007FD System.Void System.Net.HttpConnection::.cctor()
extern void HttpConnection__cctor_mB866D0D3F144D3B76DEEDDD7AA7552136D262C99 (void);
// 0x000007FE System.Boolean System.Net.HttpConnection::<.ctor>b__24_0(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void HttpConnection_U3C_ctorU3Eb__24_0_m67A8D80B78C7A83F211A9D3F7B89A94F0EBF1D85 (void);
// 0x000007FF System.Security.Cryptography.X509Certificates.X509Certificate System.Net.HttpListener::LoadCertificateAndKey(System.Net.IPAddress,System.Int32)
extern void HttpListener_LoadCertificateAndKey_mE5DB60E34263026634CB7216A267344ABD5A0F95 (void);
// 0x00000800 System.Net.Security.SslStream System.Net.HttpListener::CreateSslStream(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback)
extern void HttpListener_CreateSslStream_m6EB2EE1051C588E01569503F6DB8302768B37495 (void);
// 0x00000801 System.Void System.Net.HttpListener::.ctor()
extern void HttpListener__ctor_mEC74365C9DA5CB7E29E0A1EE5B55DEE6E510E60E (void);
// 0x00000802 System.Net.AuthenticationSchemes System.Net.HttpListener::get_AuthenticationSchemes()
extern void HttpListener_get_AuthenticationSchemes_m89ACE8EA71B878354D3D7F4962E616562FB32761 (void);
// 0x00000803 System.Net.AuthenticationSchemeSelector System.Net.HttpListener::get_AuthenticationSchemeSelectorDelegate()
extern void HttpListener_get_AuthenticationSchemeSelectorDelegate_m9C6F21968CA23189AD2D78FA9F38E24FCB2F2D26 (void);
// 0x00000804 System.Boolean System.Net.HttpListener::get_IgnoreWriteExceptions()
extern void HttpListener_get_IgnoreWriteExceptions_m597F67DDFC3A9CD7B02B39DBCE134A66E118180D (void);
// 0x00000805 System.Boolean System.Net.HttpListener::get_IsListening()
extern void HttpListener_get_IsListening_m1F6E2251B1F45E3D99FD3E02D6425B7BC5ADB482 (void);
// 0x00000806 System.Boolean System.Net.HttpListener::get_IsSupported()
extern void HttpListener_get_IsSupported_m15E776806CC7FF442284ABEE848A901FC85AB7E7 (void);
// 0x00000807 System.Net.HttpListenerPrefixCollection System.Net.HttpListener::get_Prefixes()
extern void HttpListener_get_Prefixes_m9632A8FF20E68DC9770668813E57345354144298 (void);
// 0x00000808 System.String System.Net.HttpListener::get_Realm()
extern void HttpListener_get_Realm_m40FA293601A0BAF262FBEBBEBEF4DBC9D33CDC10 (void);
// 0x00000809 System.Void System.Net.HttpListener::Close()
extern void HttpListener_Close_m68187AD4709225864350614001D2C79EFE403A0B (void);
// 0x0000080A System.Void System.Net.HttpListener::Close(System.Boolean)
extern void HttpListener_Close_mC3BC2E486F763740D912313E23175DBEAC9E60BF (void);
// 0x0000080B System.Void System.Net.HttpListener::Cleanup(System.Boolean)
extern void HttpListener_Cleanup_mCEEBC87F991518382DA9DE8990C92C6E02591C86 (void);
// 0x0000080C System.IAsyncResult System.Net.HttpListener::BeginGetContext(System.AsyncCallback,System.Object)
extern void HttpListener_BeginGetContext_m65201E066F3BB8375C5CD139C90B8A14EF690AFC (void);
// 0x0000080D System.Net.HttpListenerContext System.Net.HttpListener::EndGetContext(System.IAsyncResult)
extern void HttpListener_EndGetContext_m0CD191F115FCA16DFF3934067D145D0B7B018A37 (void);
// 0x0000080E System.Net.AuthenticationSchemes System.Net.HttpListener::SelectAuthenticationScheme(System.Net.HttpListenerContext)
extern void HttpListener_SelectAuthenticationScheme_m1096AA8287AB6E25A926D04D55161BBE46BA4455 (void);
// 0x0000080F System.Net.HttpListenerContext System.Net.HttpListener::GetContext()
extern void HttpListener_GetContext_mDEC9B204A58E6867E9D7EDAEEFE4782DBCDAE2DF (void);
// 0x00000810 System.Void System.Net.HttpListener::Start()
extern void HttpListener_Start_m0A043055653F94400CC94661D972C84C30E86043 (void);
// 0x00000811 System.Void System.Net.HttpListener::Stop()
extern void HttpListener_Stop_mABB7F03F625A82DDBC12144F864078AA1266B815 (void);
// 0x00000812 System.Void System.Net.HttpListener::System.IDisposable.Dispose()
extern void HttpListener_System_IDisposable_Dispose_mF314B449EE9B677ECE13C08FC90FC9143AB02A1D (void);
// 0x00000813 System.Void System.Net.HttpListener::CheckDisposed()
extern void HttpListener_CheckDisposed_m959EC0D25D21FD19426E2CC5C200A9F6F3ED6FDA (void);
// 0x00000814 System.Net.HttpListenerContext System.Net.HttpListener::GetContextFromQueue()
extern void HttpListener_GetContextFromQueue_mCBA3439C77DBF16B9ABC70A3672C4835584D4740 (void);
// 0x00000815 System.Void System.Net.HttpListener::RegisterContext(System.Net.HttpListenerContext)
extern void HttpListener_RegisterContext_m8F0C0A5E85407B2FA820168D10A759EC741DDB54 (void);
// 0x00000816 System.Void System.Net.HttpListener::UnregisterContext(System.Net.HttpListenerContext)
extern void HttpListener_UnregisterContext_mF3C542C27973BD0EC26EBF88760C54B2853A462A (void);
// 0x00000817 System.Void System.Net.HttpListener::AddConnection(System.Net.HttpConnection)
extern void HttpListener_AddConnection_mE873F00D206DCAFC185E317C72CD39E923656997 (void);
// 0x00000818 System.Void System.Net.HttpListener::RemoveConnection(System.Net.HttpConnection)
extern void HttpListener_RemoveConnection_mCFA66DF2787C0AC8FA8278AB837C1707CF9F97CF (void);
// 0x00000819 System.Void System.Net.HttpListener/ExtendedProtectionSelector::.ctor(System.Object,System.IntPtr)
extern void ExtendedProtectionSelector__ctor_mE5F4B1382EE26035E9120945E6F08FB66859483D (void);
// 0x0000081A System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy System.Net.HttpListener/ExtendedProtectionSelector::Invoke(System.Net.HttpListenerRequest)
extern void ExtendedProtectionSelector_Invoke_mB5265D81D3E08C64ECB738641A1A752812163451 (void);
// 0x0000081B System.IAsyncResult System.Net.HttpListener/ExtendedProtectionSelector::BeginInvoke(System.Net.HttpListenerRequest,System.AsyncCallback,System.Object)
extern void ExtendedProtectionSelector_BeginInvoke_m4DDBA714B5253E6D79E2A0C1B436758037697747 (void);
// 0x0000081C System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy System.Net.HttpListener/ExtendedProtectionSelector::EndInvoke(System.IAsyncResult)
extern void ExtendedProtectionSelector_EndInvoke_m3607FDD321DD177DA867776FE990B9B69558BE2E (void);
// 0x0000081D System.Void System.Net.HttpListenerBasicIdentity::.ctor(System.String,System.String)
extern void HttpListenerBasicIdentity__ctor_m7389C3CA31297365FBF109E690DE4F85FF541B92 (void);
// 0x0000081E System.Void System.Net.HttpListenerContext::.ctor(System.Net.HttpConnection)
extern void HttpListenerContext__ctor_m367331ABC874B2EFFC23DD44B6278E9F03A2658F (void);
// 0x0000081F System.Int32 System.Net.HttpListenerContext::get_ErrorStatus()
extern void HttpListenerContext_get_ErrorStatus_m88701EBE2CC6E21D4C0D38C94F60FADC380A8980 (void);
// 0x00000820 System.Void System.Net.HttpListenerContext::set_ErrorStatus(System.Int32)
extern void HttpListenerContext_set_ErrorStatus_m829434FB87C906D173BAC795BB336524A53034A3 (void);
// 0x00000821 System.String System.Net.HttpListenerContext::get_ErrorMessage()
extern void HttpListenerContext_get_ErrorMessage_m616454CE05854CB5CA7D56F53EA2E4D83E083C1E (void);
// 0x00000822 System.Void System.Net.HttpListenerContext::set_ErrorMessage(System.String)
extern void HttpListenerContext_set_ErrorMessage_m2E737D2A662511521F8DB103268F64C03FF087E7 (void);
// 0x00000823 System.Boolean System.Net.HttpListenerContext::get_HaveError()
extern void HttpListenerContext_get_HaveError_m71E1DABD9C4C822C512A87CD89AEFAEEB7206A3B (void);
// 0x00000824 System.Net.HttpConnection System.Net.HttpListenerContext::get_Connection()
extern void HttpListenerContext_get_Connection_m9F4EEAE8B2CCCE7E530997EBFB84289D8A376B5F (void);
// 0x00000825 System.Net.HttpListenerRequest System.Net.HttpListenerContext::get_Request()
extern void HttpListenerContext_get_Request_m63B499D96B2563728DC97E0141BE2DA02B498232 (void);
// 0x00000826 System.Net.HttpListenerResponse System.Net.HttpListenerContext::get_Response()
extern void HttpListenerContext_get_Response_m95961FFF89EF78A6FB7A174B66BF225C95120756 (void);
// 0x00000827 System.Void System.Net.HttpListenerContext::ParseAuthentication(System.Net.AuthenticationSchemes)
extern void HttpListenerContext_ParseAuthentication_mA57B589313A831B13673F5C31F01760DA195EC5E (void);
// 0x00000828 System.Security.Principal.IPrincipal System.Net.HttpListenerContext::ParseBasicAuthentication(System.String)
extern void HttpListenerContext_ParseBasicAuthentication_mD8154202BAB956507FFDFDE3470B1E8A605B76D9 (void);
// 0x00000829 System.Void System.Net.HttpListenerPrefixCollection::.ctor(System.Net.HttpListener)
extern void HttpListenerPrefixCollection__ctor_m5F46452B637DBFDB431658BFC2503321ADE111D1 (void);
// 0x0000082A System.Int32 System.Net.HttpListenerPrefixCollection::get_Count()
extern void HttpListenerPrefixCollection_get_Count_m8549C9249822AC3D26A9A2726A37921E9031FA8D (void);
// 0x0000082B System.Boolean System.Net.HttpListenerPrefixCollection::get_IsReadOnly()
extern void HttpListenerPrefixCollection_get_IsReadOnly_mEC8B4704A88A432B04008641556BE675907B1CF1 (void);
// 0x0000082C System.Void System.Net.HttpListenerPrefixCollection::Add(System.String)
extern void HttpListenerPrefixCollection_Add_mC81B7F10D756C258BA242226C9ADF5EFD1A28250 (void);
// 0x0000082D System.Void System.Net.HttpListenerPrefixCollection::Clear()
extern void HttpListenerPrefixCollection_Clear_mA0B9D87B5560CF8E6681591A13CAC8B4F96C97D6 (void);
// 0x0000082E System.Boolean System.Net.HttpListenerPrefixCollection::Contains(System.String)
extern void HttpListenerPrefixCollection_Contains_mFABE306B5CD8AC6297923D6E263AF3FF83593A1B (void);
// 0x0000082F System.Void System.Net.HttpListenerPrefixCollection::CopyTo(System.String[],System.Int32)
extern void HttpListenerPrefixCollection_CopyTo_mF7710B919796849B10E04A5E408E354A8A007671 (void);
// 0x00000830 System.Collections.Generic.IEnumerator`1<System.String> System.Net.HttpListenerPrefixCollection::GetEnumerator()
extern void HttpListenerPrefixCollection_GetEnumerator_m4D0508B2D8C4108FCAEEA1EE051E512727F31970 (void);
// 0x00000831 System.Collections.IEnumerator System.Net.HttpListenerPrefixCollection::System.Collections.IEnumerable.GetEnumerator()
extern void HttpListenerPrefixCollection_System_Collections_IEnumerable_GetEnumerator_m27CC471BA2255CF30475B4811905348EAEF71D92 (void);
// 0x00000832 System.Boolean System.Net.HttpListenerPrefixCollection::Remove(System.String)
extern void HttpListenerPrefixCollection_Remove_mA3CE30469499AC1107ACC52C84D4F9312B783E42 (void);
// 0x00000833 System.Void System.Net.HttpListenerRequest::.ctor(System.Net.HttpListenerContext)
extern void HttpListenerRequest__ctor_m390BB89533596BE2045B3C774115F027088A1F58 (void);
// 0x00000834 System.Void System.Net.HttpListenerRequest::SetRequestLine(System.String)
extern void HttpListenerRequest_SetRequestLine_mFC678F1B15B6A3DE5E89FDAD2A7B5226F883EC84 (void);
// 0x00000835 System.Void System.Net.HttpListenerRequest::CreateQueryString(System.String)
extern void HttpListenerRequest_CreateQueryString_m537DC7C3EB82CDD27BD369F8E0BF4DA1EC4B84BA (void);
// 0x00000836 System.Boolean System.Net.HttpListenerRequest::MaybeUri(System.String)
extern void HttpListenerRequest_MaybeUri_m5322EFF5B948285708CB435CEE3E90EB4AA77F74 (void);
// 0x00000837 System.Boolean System.Net.HttpListenerRequest::IsPredefinedScheme(System.String)
extern void HttpListenerRequest_IsPredefinedScheme_mC516FC84760C5D6EDFE8E6CA72F3902760B7CB90 (void);
// 0x00000838 System.Void System.Net.HttpListenerRequest::FinishInitialization()
extern void HttpListenerRequest_FinishInitialization_m5DFD1863DB03C951CE9F49105A833A0E3A350731 (void);
// 0x00000839 System.String System.Net.HttpListenerRequest::Unquote(System.String)
extern void HttpListenerRequest_Unquote_mB1DE693099DBEA28A15DBA3CDF4441828F99377B (void);
// 0x0000083A System.Void System.Net.HttpListenerRequest::AddHeader(System.String)
extern void HttpListenerRequest_AddHeader_m6473EB6530820DA36B774471ADEFF1B71BAD1899 (void);
// 0x0000083B System.Boolean System.Net.HttpListenerRequest::FlushInput()
extern void HttpListenerRequest_FlushInput_m5B2B38056B947AE7F5EC8B1EC92C2A0893F41FD4 (void);
// 0x0000083C System.Boolean System.Net.HttpListenerRequest::get_HasEntityBody()
extern void HttpListenerRequest_get_HasEntityBody_m6E0C281A0029177559DAEDB2929FFE3F71A57620 (void);
// 0x0000083D System.Collections.Specialized.NameValueCollection System.Net.HttpListenerRequest::get_Headers()
extern void HttpListenerRequest_get_Headers_m07826A87D542EEDA5ADBC6E622721DE9958BBDA5 (void);
// 0x0000083E System.String System.Net.HttpListenerRequest::get_HttpMethod()
extern void HttpListenerRequest_get_HttpMethod_m59C2D0E0AD7A0EE45D45C16539DA944D677C3965 (void);
// 0x0000083F System.IO.Stream System.Net.HttpListenerRequest::get_InputStream()
extern void HttpListenerRequest_get_InputStream_mBDF088465ADCA5DB1CE43924D14F3A6F32A2A1A3 (void);
// 0x00000840 System.Boolean System.Net.HttpListenerRequest::get_IsSecureConnection()
extern void HttpListenerRequest_get_IsSecureConnection_m7759B19768707DCE3631270B670893CFC9FC6AA9 (void);
// 0x00000841 System.Boolean System.Net.HttpListenerRequest::get_KeepAlive()
extern void HttpListenerRequest_get_KeepAlive_mEE0FE0BB1FF8A9211D01B647BD14CBCEC6CBA19B (void);
// 0x00000842 System.Net.IPEndPoint System.Net.HttpListenerRequest::get_LocalEndPoint()
extern void HttpListenerRequest_get_LocalEndPoint_mF9ECF452A54AE842CA0E19E9F3A7B2D08156A640 (void);
// 0x00000843 System.Version System.Net.HttpListenerRequest::get_ProtocolVersion()
extern void HttpListenerRequest_get_ProtocolVersion_mA38670BED57735CE38476205F9042FA02FF06D2A (void);
// 0x00000844 System.Collections.Specialized.NameValueCollection System.Net.HttpListenerRequest::get_QueryString()
extern void HttpListenerRequest_get_QueryString_mAD28192337458F902B05C2BC161E94B7BDF9E443 (void);
// 0x00000845 System.Uri System.Net.HttpListenerRequest::get_Url()
extern void HttpListenerRequest_get_Url_m9726B75231020F0BA6E7A029DEE59F561BA986C0 (void);
// 0x00000846 System.String System.Net.HttpListenerRequest::get_UserHostAddress()
extern void HttpListenerRequest_get_UserHostAddress_m54FFB734B778FBED37715C7D14E74E33FE7A2AA8 (void);
// 0x00000847 System.String System.Net.HttpListenerRequest::get_UserHostName()
extern void HttpListenerRequest_get_UserHostName_m4844E8614C525EDC2126DA366ABECF07F16E6B64 (void);
// 0x00000848 System.Void System.Net.HttpListenerRequest::.cctor()
extern void HttpListenerRequest__cctor_m7D9CAAC88544E508AB4B2E46774BAC1F41A8D949 (void);
// 0x00000849 System.Void System.Net.HttpListenerRequest/GCCDelegate::.ctor(System.Object,System.IntPtr)
extern void GCCDelegate__ctor_m82296297EDE1D125E182095C3B21043E3A79258D (void);
// 0x0000084A System.Security.Cryptography.X509Certificates.X509Certificate2 System.Net.HttpListenerRequest/GCCDelegate::Invoke()
extern void GCCDelegate_Invoke_mA394FDBD92FEFC7FC6BB9591908BC8DC92662F0D (void);
// 0x0000084B System.IAsyncResult System.Net.HttpListenerRequest/GCCDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void GCCDelegate_BeginInvoke_m4E58FEA433668B39D2135A6839595EE6980E66CE (void);
// 0x0000084C System.Security.Cryptography.X509Certificates.X509Certificate2 System.Net.HttpListenerRequest/GCCDelegate::EndInvoke(System.IAsyncResult)
extern void GCCDelegate_EndInvoke_mC578DA5B68BF6922E7712A00471982756987A552 (void);
// 0x0000084D System.Void System.Net.HttpListenerResponse::.ctor(System.Net.HttpListenerContext)
extern void HttpListenerResponse__ctor_mFDA4BEDC52622C5501B798BE005C58E773E46B81 (void);
// 0x0000084E System.Boolean System.Net.HttpListenerResponse::get_ForceCloseChunked()
extern void HttpListenerResponse_get_ForceCloseChunked_m183F44B95DF99FFC3EC0F1E1D6C6C02CFEE10BB9 (void);
// 0x0000084F System.Text.Encoding System.Net.HttpListenerResponse::get_ContentEncoding()
extern void HttpListenerResponse_get_ContentEncoding_m316EE9AEC05309F6BBF70D8B1F11DAB2FE70A5E0 (void);
// 0x00000850 System.Void System.Net.HttpListenerResponse::set_ContentLength64(System.Int64)
extern void HttpListenerResponse_set_ContentLength64_mF0803E4F742BB46328EC5408097D0BF254B42DB1 (void);
// 0x00000851 System.Void System.Net.HttpListenerResponse::set_ContentType(System.String)
extern void HttpListenerResponse_set_ContentType_m19EE35719E4609FDA9BA1CE729C62D2EA104810B (void);
// 0x00000852 System.Net.WebHeaderCollection System.Net.HttpListenerResponse::get_Headers()
extern void HttpListenerResponse_get_Headers_mB2C90529AAE7A0E451500BBAB88CE0A329A4B132 (void);
// 0x00000853 System.IO.Stream System.Net.HttpListenerResponse::get_OutputStream()
extern void HttpListenerResponse_get_OutputStream_mCACC88CBA15C1722465E23FBD3223DAF3247119D (void);
// 0x00000854 System.Boolean System.Net.HttpListenerResponse::get_SendChunked()
extern void HttpListenerResponse_get_SendChunked_m6D0DC505D05250E1AF3366BF21CEDB503C3C9780 (void);
// 0x00000855 System.Void System.Net.HttpListenerResponse::set_SendChunked(System.Boolean)
extern void HttpListenerResponse_set_SendChunked_m1E1B55ED5A59C58C20753126FC26FAC0968E0A16 (void);
// 0x00000856 System.Void System.Net.HttpListenerResponse::set_StatusCode(System.Int32)
extern void HttpListenerResponse_set_StatusCode_m8601A33F1206FCA0E0780DE4732BB2FCD504B8B7 (void);
// 0x00000857 System.Void System.Net.HttpListenerResponse::System.IDisposable.Dispose()
extern void HttpListenerResponse_System_IDisposable_Dispose_m3A18F0D6F1631AB01046658F44E6C6EC733C47F1 (void);
// 0x00000858 System.Void System.Net.HttpListenerResponse::Close(System.Boolean)
extern void HttpListenerResponse_Close_m694347FDE447EE50DCE09101BE7EDD5086BB8DB9 (void);
// 0x00000859 System.Void System.Net.HttpListenerResponse::Close()
extern void HttpListenerResponse_Close_mEA5C577CC214B2A3DD98392845A81D49604E4243 (void);
// 0x0000085A System.Void System.Net.HttpListenerResponse::Close(System.Byte[],System.Boolean)
extern void HttpListenerResponse_Close_m64CFB2ABF8BE26D81AE4F052AC9A081452851DA9 (void);
// 0x0000085B System.Void System.Net.HttpListenerResponse::SendHeaders(System.Boolean,System.IO.MemoryStream)
extern void HttpListenerResponse_SendHeaders_mEA1A560DDEE2610A599D25272778DEABE3A5182A (void);
// 0x0000085C System.String System.Net.HttpListenerResponse::FormatHeaders(System.Net.WebHeaderCollection)
extern void HttpListenerResponse_FormatHeaders_mC10CF22D621517227D96345A4B41649764F9EE7B (void);
// 0x0000085D System.String System.Net.HttpListenerResponse::CookieToClientString(System.Net.Cookie)
extern void HttpListenerResponse_CookieToClientString_m416E457C26A23BFCDB882B02CCE2BA931BD60222 (void);
// 0x0000085E System.String System.Net.HttpListenerResponse::QuotedString(System.Net.Cookie,System.String)
extern void HttpListenerResponse_QuotedString_mCAC821853C742A1D3D2CCE34438A5A75E22ABF94 (void);
// 0x0000085F System.Boolean System.Net.HttpListenerResponse::IsToken(System.String)
extern void HttpListenerResponse_IsToken_mE028E111158FB580868AD7CC6651502D0E3F2AF2 (void);
// 0x00000860 System.Void System.Net.HttpListenerResponse::.cctor()
extern void HttpListenerResponse__cctor_mFCE66B5EE939F39207B57971564CCC0A28FA26DA (void);
// 0x00000861 System.Void System.Net.HttpRequestCreator::.ctor()
extern void HttpRequestCreator__ctor_m06C2AEB34BE1C386F12AFEA48D7F330E429653BE (void);
// 0x00000862 System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern void HttpRequestCreator_Create_m8B42C3EE0D53119899DDEF28D227EF203932AFCD (void);
// 0x00000863 System.Void System.Net.HttpStreamAsyncResult::Complete(System.Exception)
extern void HttpStreamAsyncResult_Complete_mB8A89827209D8708A496F760A246C8B69F3F2D43 (void);
// 0x00000864 System.Void System.Net.HttpStreamAsyncResult::Complete()
extern void HttpStreamAsyncResult_Complete_m65B75CFBBF3C65EAE648F6B1E88724AB01CDA491 (void);
// 0x00000865 System.Object System.Net.HttpStreamAsyncResult::get_AsyncState()
extern void HttpStreamAsyncResult_get_AsyncState_m5B36239413B4FA260E4A4A8E343A344E7555070B (void);
// 0x00000866 System.Threading.WaitHandle System.Net.HttpStreamAsyncResult::get_AsyncWaitHandle()
extern void HttpStreamAsyncResult_get_AsyncWaitHandle_m713F54F023122456E92DA3364E53D10F9699E796 (void);
// 0x00000867 System.Boolean System.Net.HttpStreamAsyncResult::get_CompletedSynchronously()
extern void HttpStreamAsyncResult_get_CompletedSynchronously_mEC5F59D792AAE12E0A00DDFC3C5D92F10A4B9CC5 (void);
// 0x00000868 System.Boolean System.Net.HttpStreamAsyncResult::get_IsCompleted()
extern void HttpStreamAsyncResult_get_IsCompleted_m43B4F5CF7B545B76D724DC9B89D552F416AE3FA8 (void);
// 0x00000869 System.Void System.Net.HttpStreamAsyncResult::.ctor()
extern void HttpStreamAsyncResult__ctor_m18BE314C51AF3EF0389E4AE2FAEF0BE5A6133CBB (void);
// 0x0000086A System.Void System.Net.HttpWebRequest::.cctor()
extern void HttpWebRequest__cctor_mF2B85FBD5756A500889E6D4E71C84998EADAC5E2 (void);
// 0x0000086B System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern void HttpWebRequest__ctor_m34F4D99DEAEB2ABDA7B321DE9D934E2AFFE7ED87 (void);
// 0x0000086C System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebRequest__ctor_m37FE79885E818FA7A4BB502CC00F216A40C759CF (void);
// 0x0000086D System.Void System.Net.HttpWebRequest::ResetAuthorization()
extern void HttpWebRequest_ResetAuthorization_mB46C878D3130CF8EF4BB6547E17554A0DB49A56C (void);
// 0x0000086E System.Void System.Net.HttpWebRequest::set_ThrowOnError(System.Boolean)
extern void HttpWebRequest_set_ThrowOnError_mAAE39F767EF8CE4BA64472DD870F8116C0F306AA (void);
// 0x0000086F System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern void HttpWebRequest_get_ServicePoint_m87CA558F0C7B4A6D585F42616771173F75DE2567 (void);
// 0x00000870 System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePointNoLock()
extern void HttpWebRequest_get_ServicePointNoLock_mAB6BB5851482B6EA1FFB3943897D7B9399795B13 (void);
// 0x00000871 System.Net.ServerCertValidationCallback System.Net.HttpWebRequest::get_ServerCertValidationCallback()
extern void HttpWebRequest_get_ServerCertValidationCallback_mC40F344BFA88D34DBD794CDB8BD0B8A5F5D78AA6 (void);
// 0x00000872 System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern void HttpWebRequest_GetServicePoint_m380927C1AF6310F83D8BD1B578B9B7B06AB32A3A (void);
// 0x00000873 System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m3B43B7FA26F335B661343C4686CBAC6D4B00727B (void);
// 0x00000874 System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebRequest_GetObjectData_mA0387A42ACDA0C1DCA5B0BBC62C17D57E5D19222 (void);
// 0x00000875 System.Void System.Net.HttpWebRequest::.ctor()
extern void HttpWebRequest__ctor_mA8D0231158E0A31839FDBCF3A4058E12233CC0CA (void);
// 0x00000876 System.Void System.Net.HttpWebRequest/AuthorizationState::.ctor(System.Net.HttpWebRequest,System.Boolean)
extern void AuthorizationState__ctor_m33AFDC1A78F1C2709F58ADE60766E6DB40B23108 (void);
// 0x00000877 System.String System.Net.HttpWebRequest/AuthorizationState::ToString()
extern void AuthorizationState_ToString_m7A5CA8DDE1302D55B5F3B1F75A5D79387EFF0531 (void);
// 0x00000878 System.Void System.Net.IPv6AddressFormatter::.ctor(System.UInt16[],System.Int64)
extern void IPv6AddressFormatter__ctor_mEEFF87906A194838D6E4A31AB724A28808E539E5 (void);
// 0x00000879 System.UInt16 System.Net.IPv6AddressFormatter::SwapUShort(System.UInt16)
extern void IPv6AddressFormatter_SwapUShort_m75C8E63B5AF4B26DAFE51755DA13597148415AE4 (void);
// 0x0000087A System.UInt32 System.Net.IPv6AddressFormatter::AsIPv4Int()
extern void IPv6AddressFormatter_AsIPv4Int_m875CCBC60A506A331C9D591D5A88D49EBB6730E7 (void);
// 0x0000087B System.Boolean System.Net.IPv6AddressFormatter::IsIPv4Compatible()
extern void IPv6AddressFormatter_IsIPv4Compatible_m769BBFB4FBB844EC8AB61A635495A7F2925FDD99 (void);
// 0x0000087C System.Boolean System.Net.IPv6AddressFormatter::IsIPv4Mapped()
extern void IPv6AddressFormatter_IsIPv4Mapped_m46AE9AECC6E77E6A53ACBF60BEF336D45FF236DB (void);
// 0x0000087D System.String System.Net.IPv6AddressFormatter::ToString()
extern void IPv6AddressFormatter_ToString_m5FB0F927F3B0BAA521BC92562A7F5A78460023DC (void);
// 0x0000087E System.Void System.Net.ListenerAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern void ListenerAsyncResult__ctor_mA65084C3DC9246D2637CBDDCF2118E23D29633FB (void);
// 0x0000087F System.Void System.Net.ListenerAsyncResult::Complete(System.Exception)
extern void ListenerAsyncResult_Complete_m0E63916B0B6D8AEAE09A111A3B67002EF7268BA2 (void);
// 0x00000880 System.Void System.Net.ListenerAsyncResult::InvokeCallback(System.Object)
extern void ListenerAsyncResult_InvokeCallback_m571222CACE5322C41FDA9CA1BB328A19C389805A (void);
// 0x00000881 System.Void System.Net.ListenerAsyncResult::Complete(System.Net.HttpListenerContext)
extern void ListenerAsyncResult_Complete_mDC6A23FC3A7F05CBE6A2AA99817B84729F34908A (void);
// 0x00000882 System.Void System.Net.ListenerAsyncResult::Complete(System.Net.HttpListenerContext,System.Boolean)
extern void ListenerAsyncResult_Complete_m306B7E31030E771F51FAB1D52859824B73C2DFC4 (void);
// 0x00000883 System.Net.HttpListenerContext System.Net.ListenerAsyncResult::GetContext()
extern void ListenerAsyncResult_GetContext_mB5BA30F9CE7F686AFB4F8B6EE8A070875582F9C6 (void);
// 0x00000884 System.Object System.Net.ListenerAsyncResult::get_AsyncState()
extern void ListenerAsyncResult_get_AsyncState_mE5BF479AEB149B74FC3ED9689C9DD42ADD3E21CE (void);
// 0x00000885 System.Threading.WaitHandle System.Net.ListenerAsyncResult::get_AsyncWaitHandle()
extern void ListenerAsyncResult_get_AsyncWaitHandle_mD3A4ABC3F54E6E2558305547B1ECEDC66B919F52 (void);
// 0x00000886 System.Boolean System.Net.ListenerAsyncResult::get_CompletedSynchronously()
extern void ListenerAsyncResult_get_CompletedSynchronously_mC21F69AA02E7397592014147476F14A95D298359 (void);
// 0x00000887 System.Boolean System.Net.ListenerAsyncResult::get_IsCompleted()
extern void ListenerAsyncResult_get_IsCompleted_m653D74313CD85F38F835CE757D5C0F80130ACCD6 (void);
// 0x00000888 System.Void System.Net.ListenerAsyncResult::.cctor()
extern void ListenerAsyncResult__cctor_m911B1A85CF907EEA6BE601734FC5FF42824E8542 (void);
// 0x00000889 System.Void System.Net.ListenerPrefix::.ctor(System.String)
extern void ListenerPrefix__ctor_m76E0830A35C394CA5DE5AE6B24ECC9752A4DB6C5 (void);
// 0x0000088A System.String System.Net.ListenerPrefix::ToString()
extern void ListenerPrefix_ToString_m3B22C295AB0C02885FF81CA02DBCAC7977699184 (void);
// 0x0000088B System.Boolean System.Net.ListenerPrefix::get_Secure()
extern void ListenerPrefix_get_Secure_mDF1BB3DFAE7CE6F22CA1AC4B261DDB4B3C92BB9E (void);
// 0x0000088C System.String System.Net.ListenerPrefix::get_Host()
extern void ListenerPrefix_get_Host_m00643C3C2E3AA1CB54084E9C669852F15A1B766D (void);
// 0x0000088D System.Int32 System.Net.ListenerPrefix::get_Port()
extern void ListenerPrefix_get_Port_m2FAD6C70E48A6A1D7C9F221E96C31001677B5456 (void);
// 0x0000088E System.String System.Net.ListenerPrefix::get_Path()
extern void ListenerPrefix_get_Path_mACF3C3740D8C4BE5C7CA96979FF901BC4F9203BC (void);
// 0x0000088F System.Boolean System.Net.ListenerPrefix::Equals(System.Object)
extern void ListenerPrefix_Equals_m947A875AEAFBD98CDB929996D99B78F29032477E (void);
// 0x00000890 System.Int32 System.Net.ListenerPrefix::GetHashCode()
extern void ListenerPrefix_GetHashCode_m0FF12B4273BF70A0B638CCDF18774EDD4D31029B (void);
// 0x00000891 System.Void System.Net.ListenerPrefix::Parse(System.String)
extern void ListenerPrefix_Parse_m5597FF7C176FB8AB4A70B09A47A281A0D0A560E1 (void);
// 0x00000892 System.Void System.Net.ListenerPrefix::CheckUri(System.String)
extern void ListenerPrefix_CheckUri_m7181EBCF0C425E3DBF4F149C216B393C05ADE293 (void);
// 0x00000893 System.Void System.Net.MonoChunkStream::.ctor(System.Net.WebHeaderCollection)
extern void MonoChunkStream__ctor_mD2D5FA0ACB85A6CC731CB9C793339E507A6C8AE0 (void);
// 0x00000894 System.Int32 System.Net.MonoChunkStream::Read(System.Byte[],System.Int32,System.Int32)
extern void MonoChunkStream_Read_m43A4085433F66530A42EF59AAB3A0D51E6E5891A (void);
// 0x00000895 System.Int32 System.Net.MonoChunkStream::ReadFromChunks(System.Byte[],System.Int32,System.Int32)
extern void MonoChunkStream_ReadFromChunks_m37D5FAEAFECA57D507F64766999D57A95EEA0D2A (void);
// 0x00000896 System.Void System.Net.MonoChunkStream::Write(System.Byte[],System.Int32,System.Int32)
extern void MonoChunkStream_Write_m137C8C8D13524480B95A13C03AD732BAA179ACDF (void);
// 0x00000897 System.Void System.Net.MonoChunkStream::InternalWrite(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_InternalWrite_m5470C15DE29BA1C8DB49A76C55CDF15F964FE34F (void);
// 0x00000898 System.Boolean System.Net.MonoChunkStream::get_WantMore()
extern void MonoChunkStream_get_WantMore_m83CC3A4E18F848C35EF9853D7E2FB49A329B8127 (void);
// 0x00000899 System.Int32 System.Net.MonoChunkStream::get_ChunkLeft()
extern void MonoChunkStream_get_ChunkLeft_m5E5FD7651D4CD801F84B2C5FE6DC0953AA332E45 (void);
// 0x0000089A System.Net.MonoChunkStream/State System.Net.MonoChunkStream::ReadBody(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_ReadBody_mA94E7D8EB2AA23BDF0C5C23175BC98B2CBE2DCCB (void);
// 0x0000089B System.Net.MonoChunkStream/State System.Net.MonoChunkStream::GetChunkSize(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_GetChunkSize_m6C80D3EEFADE084F993AAAFF2CA0F2DC494446C4 (void);
// 0x0000089C System.String System.Net.MonoChunkStream::RemoveChunkExtension(System.String)
extern void MonoChunkStream_RemoveChunkExtension_m58F135088F1995CD8F4F99DF5355E99A20794B0C (void);
// 0x0000089D System.Net.MonoChunkStream/State System.Net.MonoChunkStream::ReadCRLF(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_ReadCRLF_m0A00BE1B5479D26A93C6FC1ED5250C30A194C708 (void);
// 0x0000089E System.Net.MonoChunkStream/State System.Net.MonoChunkStream::ReadTrailer(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_ReadTrailer_m5F9E21734592996F66F8BDDBF66D7AC9F4A90C1E (void);
// 0x0000089F System.Void System.Net.MonoChunkStream::ThrowProtocolViolation(System.String)
extern void MonoChunkStream_ThrowProtocolViolation_mBDC853802F26D724EC129B027C98DF4F8BDC1C9A (void);
// 0x000008A0 System.Void System.Net.MonoChunkStream/Chunk::.ctor(System.Byte[])
extern void Chunk__ctor_m85D8BE6C05ACCD31D613F2EC44FC12000795C95D (void);
// 0x000008A1 System.Int32 System.Net.MonoChunkStream/Chunk::Read(System.Byte[],System.Int32,System.Int32)
extern void Chunk_Read_mD196D23B6CCE13436E9654D5690B120A27D767F9 (void);
// 0x000008A2 System.Void System.Net.RequestStream::.ctor(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern void RequestStream__ctor_m1BC9C2FC0B614CBF25830BFC02B5D5C20A4E38D5 (void);
// 0x000008A3 System.Void System.Net.RequestStream::.ctor(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Int64)
extern void RequestStream__ctor_m29C92F5BA965ADC3F4423FFCDAE804B95FFBA729 (void);
// 0x000008A4 System.Boolean System.Net.RequestStream::get_CanRead()
extern void RequestStream_get_CanRead_m209582F6BD03B99A482F724307F9E7E183E476F0 (void);
// 0x000008A5 System.Boolean System.Net.RequestStream::get_CanSeek()
extern void RequestStream_get_CanSeek_m47D52BE6481410A3A74AF4D80BE4E0250D75F84F (void);
// 0x000008A6 System.Boolean System.Net.RequestStream::get_CanWrite()
extern void RequestStream_get_CanWrite_m72077A0BA6FDAFC3C09B268CAE0A035EB6C68F93 (void);
// 0x000008A7 System.Int64 System.Net.RequestStream::get_Length()
extern void RequestStream_get_Length_m9BBBCE1A417C5E1B4AB38BC9C86A32C9640EAC36 (void);
// 0x000008A8 System.Int64 System.Net.RequestStream::get_Position()
extern void RequestStream_get_Position_mBB4662A51003A264388B1C6EF98357F6D46F6C8E (void);
// 0x000008A9 System.Void System.Net.RequestStream::set_Position(System.Int64)
extern void RequestStream_set_Position_mF8BD443C7AF53BE3B62B31EC9D9DADFDAE48C439 (void);
// 0x000008AA System.Void System.Net.RequestStream::Close()
extern void RequestStream_Close_mB935ACBF0E51A40A20408F9491763E77E17AFA51 (void);
// 0x000008AB System.Void System.Net.RequestStream::Flush()
extern void RequestStream_Flush_m6B348388F54D785670D55335144DE33B5442A15F (void);
// 0x000008AC System.Int32 System.Net.RequestStream::FillFromBuffer(System.Byte[],System.Int32,System.Int32)
extern void RequestStream_FillFromBuffer_m1A555C7FFB24369A4CE6A8DD5BB44013A921802C (void);
// 0x000008AD System.Int32 System.Net.RequestStream::Read(System.Byte[],System.Int32,System.Int32)
extern void RequestStream_Read_mC6296DCB0BBD41EC539904787B061430100472E9 (void);
// 0x000008AE System.IAsyncResult System.Net.RequestStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void RequestStream_BeginRead_m59C5F282ABEC05E012ED9682A98AD5A534C8604D (void);
// 0x000008AF System.Int32 System.Net.RequestStream::EndRead(System.IAsyncResult)
extern void RequestStream_EndRead_m9227FBAE7BC12770E42B127EF8EA50DC9117ADAA (void);
// 0x000008B0 System.Int64 System.Net.RequestStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void RequestStream_Seek_mE6970BB8279BC46257F97C5B4218AC616D629234 (void);
// 0x000008B1 System.Void System.Net.RequestStream::SetLength(System.Int64)
extern void RequestStream_SetLength_m9B28A9C53237A5EF2E8D210C08EFE6B5A304FCF0 (void);
// 0x000008B2 System.Void System.Net.RequestStream::Write(System.Byte[],System.Int32,System.Int32)
extern void RequestStream_Write_m2909095F9C96A17DC47CE55AB4C2490EE36A6BC8 (void);
// 0x000008B3 System.IAsyncResult System.Net.RequestStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void RequestStream_BeginWrite_mE8CC0E88B0E3444586C3BCA4F2BFE19965C5DAC7 (void);
// 0x000008B4 System.Void System.Net.RequestStream::EndWrite(System.IAsyncResult)
extern void RequestStream_EndWrite_m14A9D648E01C147BA3B17A748F2CF5B4A0C89C38 (void);
// 0x000008B5 System.Void System.Net.ResponseStream::.ctor(System.IO.Stream,System.Net.HttpListenerResponse,System.Boolean)
extern void ResponseStream__ctor_m1120AE38296CD7EDC57746FE0BD267925F137DEF (void);
// 0x000008B6 System.Boolean System.Net.ResponseStream::get_CanRead()
extern void ResponseStream_get_CanRead_m49FD6835006715CC7DAA33C9D542336337736097 (void);
// 0x000008B7 System.Boolean System.Net.ResponseStream::get_CanSeek()
extern void ResponseStream_get_CanSeek_mC9BF6958A7DDD0A3AF0E9D3BCC48D210DD33EB65 (void);
// 0x000008B8 System.Boolean System.Net.ResponseStream::get_CanWrite()
extern void ResponseStream_get_CanWrite_m08A9CF9BBD4B3F3FFD8C11B9B174944571F34514 (void);
// 0x000008B9 System.Int64 System.Net.ResponseStream::get_Length()
extern void ResponseStream_get_Length_mCBD23AB3C1DEEAC92593ECBCD40A3DB35F240E90 (void);
// 0x000008BA System.Int64 System.Net.ResponseStream::get_Position()
extern void ResponseStream_get_Position_m8DFC58C25633D7724C4EFB77524550DC0494FA57 (void);
// 0x000008BB System.Void System.Net.ResponseStream::set_Position(System.Int64)
extern void ResponseStream_set_Position_mB7321C57BFC5F54E951407275C1B0FC03D2076B4 (void);
// 0x000008BC System.Void System.Net.ResponseStream::Close()
extern void ResponseStream_Close_m76F830D68DB559393AAC2DB786416E253D6B8472 (void);
// 0x000008BD System.IO.MemoryStream System.Net.ResponseStream::GetHeaders(System.Boolean)
extern void ResponseStream_GetHeaders_m813801784E68345BECA00FF83E891FD013A2B51C (void);
// 0x000008BE System.Void System.Net.ResponseStream::Flush()
extern void ResponseStream_Flush_m394480BAB32FA557E6F6259A57FB996EA10936CB (void);
// 0x000008BF System.Byte[] System.Net.ResponseStream::GetChunkSizeBytes(System.Int32,System.Boolean)
extern void ResponseStream_GetChunkSizeBytes_m4DE7A5604C704EC960064030431D330D14E9BA16 (void);
// 0x000008C0 System.Void System.Net.ResponseStream::InternalWrite(System.Byte[],System.Int32,System.Int32)
extern void ResponseStream_InternalWrite_mCE4946117934191834BF1FAACBFE74C48EC0BF56 (void);
// 0x000008C1 System.Void System.Net.ResponseStream::Write(System.Byte[],System.Int32,System.Int32)
extern void ResponseStream_Write_m011DF60AF9FBD1E67269D7B653A2CE9AF3BF79DB (void);
// 0x000008C2 System.IAsyncResult System.Net.ResponseStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void ResponseStream_BeginWrite_m532C1E98E309382B170C0DEF47FEE087C0ADF818 (void);
// 0x000008C3 System.Void System.Net.ResponseStream::EndWrite(System.IAsyncResult)
extern void ResponseStream_EndWrite_m3DCF660380C56CF1685A39A917A70F65C054E423 (void);
// 0x000008C4 System.Int32 System.Net.ResponseStream::Read(System.Byte[],System.Int32,System.Int32)
extern void ResponseStream_Read_mFEB6418E0E7BC4D65B796C160FCDD11FF0ACBCC2 (void);
// 0x000008C5 System.IAsyncResult System.Net.ResponseStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void ResponseStream_BeginRead_m7A892000EFE4570C98DD6A304E2FDB3BEFB5BB81 (void);
// 0x000008C6 System.Int32 System.Net.ResponseStream::EndRead(System.IAsyncResult)
extern void ResponseStream_EndRead_mC492D7E2EAF2DCC7DA80DA3FCD1A5300AB1009CC (void);
// 0x000008C7 System.Int64 System.Net.ResponseStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void ResponseStream_Seek_mC009677F5988EE414CEA32CF7D77B8661652DCFB (void);
// 0x000008C8 System.Void System.Net.ResponseStream::SetLength(System.Int64)
extern void ResponseStream_SetLength_m316059CED2E62CF2D6D316D9F96A1DDAF23422F1 (void);
// 0x000008C9 System.Void System.Net.ResponseStream::.cctor()
extern void ResponseStream__cctor_mE343562D40D1F0CC978FAE1A5FE1117B80AC57FD (void);
// 0x000008CA System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
extern void ServicePoint__ctor_m68B4C7FBD836706798BA6882BC351F539A430C6C (void);
// 0x000008CB System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
extern void ServicePoint_set_Expect100Continue_m53E393E64BE40AC205CF5458DCC98E806D0432B2 (void);
// 0x000008CC System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
extern void ServicePoint_set_UseNagleAlgorithm_m93F74ADD6C2BE19F9342BE092EF8723F56503913 (void);
// 0x000008CD System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
extern void ServicePoint_set_SendContinue_m084B169EDBF37E2B2CC592DF68EB9BB17D3B844E (void);
// 0x000008CE System.Void System.Net.ServicePoint::SetTcpKeepAlive(System.Boolean,System.Int32,System.Int32)
extern void ServicePoint_SetTcpKeepAlive_m4B4392E54144159027C38EC7FCC12F2C09E7A3CF (void);
// 0x000008CF System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
extern void ServicePoint_set_UsesProxy_m25BFB4CE73283597C98A748B231D1A544469F618 (void);
// 0x000008D0 System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
extern void ServicePoint_set_UseConnect_mCFAF7E07504140EEE0E81D5805CFF727575FF5F5 (void);
// 0x000008D1 System.Void System.Net.ServicePoint::UpdateServerCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern void ServicePoint_UpdateServerCertificate_m8F8352188BACC259F5D00F3D9044E3E7F2707E29 (void);
// 0x000008D2 System.Void System.Net.ServicePointManager::.cctor()
extern void ServicePointManager__cctor_mC65B547091F12ECF9B6B95CBEE1A52BB35E70DE3 (void);
// 0x000008D3 System.Net.ICertificatePolicy System.Net.ServicePointManager::GetLegacyCertificatePolicy()
extern void ServicePointManager_GetLegacyCertificatePolicy_mAF513A5B047B738491743CDC093618371750E747 (void);
// 0x000008D4 System.Net.SecurityProtocolType System.Net.ServicePointManager::get_SecurityProtocol()
extern void ServicePointManager_get_SecurityProtocol_mB54A449C96053D4D84CF3C85B3C1CC1DCD34952D (void);
// 0x000008D5 System.Net.ServerCertValidationCallback System.Net.ServicePointManager::get_ServerCertValidationCallback()
extern void ServicePointManager_get_ServerCertValidationCallback_m5AD93FC2391E0E343328CE642F7DDE1CFBB0B306 (void);
// 0x000008D6 System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
extern void ServicePointManager_FindServicePoint_mB264FFC301584D1A7590D8F783485E81ECBBDE21 (void);
// 0x000008D7 System.Void System.Net.ServicePointManager/SPKey::.ctor(System.Uri,System.Uri,System.Boolean)
extern void SPKey__ctor_m7AF193EB533D8A77BE1BDD2643F966AC74232A29 (void);
// 0x000008D8 System.Boolean System.Net.ServicePointManager/SPKey::get_UsesProxy()
extern void SPKey_get_UsesProxy_mA0DD3C141991BEB3D229681C0565265A535A3420 (void);
// 0x000008D9 System.Int32 System.Net.ServicePointManager/SPKey::GetHashCode()
extern void SPKey_GetHashCode_mBD2D23E92D57E75D4598BD7B8D0322115CA34A79 (void);
// 0x000008DA System.Boolean System.Net.ServicePointManager/SPKey::Equals(System.Object)
extern void SPKey_Equals_m3977A8EB90832AADC4305E87083CAE9E167D60FF (void);
// 0x000008DB System.Void System.Net.ServicePointScheduler::.ctor(System.Net.ServicePoint,System.Int32,System.Int32)
extern void ServicePointScheduler__ctor_m5246987112698FC9A296CC7E8DAA276B57FD6F4A (void);
// 0x000008DC System.Void System.Net.ServicePointScheduler/ConnectionGroup::.ctor(System.Net.ServicePointScheduler,System.String)
extern void ConnectionGroup__ctor_m5FA4DC16552C8ADBBADA4FEEB54C620EC1175D80 (void);
// 0x000008DD System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent::Set()
extern void AsyncManualResetEvent_Set_m4AEDC2FB8A878F5A11EAE3FC7C5B079747FA784C (void);
// 0x000008DE System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent::.ctor(System.Boolean)
extern void AsyncManualResetEvent__ctor_mED23C9E7D9E4B6862CF7CA2D9A8A6DD0F1346D5C (void);
// 0x000008DF System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::.cctor()
extern void U3CU3Ec__cctor_mC77509E55BF35A9DDC9D7485613752B71FA78510 (void);
// 0x000008E0 System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::.ctor()
extern void U3CU3Ec__ctor_m33CB0ED421096418F623E21D1843F088ECAE8907 (void);
// 0x000008E1 System.Boolean System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::<Set>b__4_0(System.Object)
extern void U3CU3Ec_U3CSetU3Eb__4_0_m51E1DA417A30BA042DE7A4DA249E0C13FB7E32BD (void);
// 0x000008E2 System.Void System.Net.WebConnection::Reset()
extern void WebConnection_Reset_m6E4DE2B11C92A3D9E0E39334FCA592210FC5B365 (void);
// 0x000008E3 System.Void System.Net.WebConnection::Close(System.Boolean)
extern void WebConnection_Close_m933CA0D7F0035240D065F46E1AE785FD63B0B39B (void);
// 0x000008E4 System.Void System.Net.WebConnection::CloseSocket()
extern void WebConnection_CloseSocket_m44529A19D180D276A0E8CCC37214EFDA79531066 (void);
// 0x000008E5 System.Void System.Net.WebConnection::Dispose(System.Boolean)
extern void WebConnection_Dispose_m2963FD55969DF8CD444BF8F474BDDB47CC3F9131 (void);
// 0x000008E6 System.Void System.Net.WebConnection::Dispose()
extern void WebConnection_Dispose_mBEE3F492227683C724016592F03F4C7F596EE2D9 (void);
// 0x000008E7 System.Void System.Net.WebConnection::ResetNtlm()
extern void WebConnection_ResetNtlm_mA795AAB8FC79C964C57037A2B4B6FDDBEA528F86 (void);
// 0x000008E8 System.Int32 System.Net.Sockets.SocketException::WSAGetLastError_internal()
extern void SocketException_WSAGetLastError_internal_m14FDA6FF11D13CFB8266F43520F315F4AA649C62 (void);
// 0x000008E9 System.Void System.Net.Sockets.SocketException::.ctor()
extern void SocketException__ctor_mA4FA4C30962B1DD852904297C47EB05A9C97B7F9 (void);
// 0x000008EA System.Void System.Net.Sockets.SocketException::.ctor(System.Int32,System.String)
extern void SocketException__ctor_m2C4A0F01041E34F5CD85223333FDC23158250E4D (void);
// 0x000008EB System.Void System.Net.Sockets.SocketException::.ctor(System.Int32)
extern void SocketException__ctor_m4AA74DE46D28204456EFCCBBC5ACC841DA2941EF (void);
// 0x000008EC System.Void System.Net.Sockets.SocketException::.ctor(System.Net.Sockets.SocketError)
extern void SocketException__ctor_m8625815C7AFB0F3BF9287520D8F64A69199D6DCA (void);
// 0x000008ED System.Void System.Net.Sockets.SocketException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void SocketException__ctor_m59175465D17AE63C1E18A1B25D80AD41708A51B5 (void);
// 0x000008EE System.String System.Net.Sockets.SocketException::get_Message()
extern void SocketException_get_Message_mAC33600C2CC211D3C5C6363DAE3A843FD3E366EE (void);
// 0x000008EF System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
extern void SocketException_get_SocketErrorCode_m05A48632F6CC75FBD904E8E1AC56FC6B2577A131 (void);
// 0x000008F0 System.Void System.Net.Sockets.LingerOption::.ctor(System.Boolean,System.Int32)
extern void LingerOption__ctor_m939C73C595D32F9A58592AC9FD8D66924C48E51A (void);
// 0x000008F1 System.Void System.Net.Sockets.LingerOption::set_Enabled(System.Boolean)
extern void LingerOption_set_Enabled_m3F544534413C4239E4A0A6D39AE8FF28EEF04207 (void);
// 0x000008F2 System.Void System.Net.Sockets.LingerOption::set_LingerTime(System.Int32)
extern void LingerOption_set_LingerTime_m4BF89E47E5A4D261B800DD00A8B73DA7EE719C37 (void);
// 0x000008F3 System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.Boolean)
extern void NetworkStream__ctor_mA1CC20301CE577D0D971E02452956141D21E2F48 (void);
// 0x000008F4 System.Boolean System.Net.Sockets.NetworkStream::get_CanRead()
extern void NetworkStream_get_CanRead_m18372499A3E8644ED054E324BBA2EDE1F2C0CA82 (void);
// 0x000008F5 System.Boolean System.Net.Sockets.NetworkStream::get_CanSeek()
extern void NetworkStream_get_CanSeek_mF793B58986D542FC7310AC8933A3C26309919BCE (void);
// 0x000008F6 System.Boolean System.Net.Sockets.NetworkStream::get_CanWrite()
extern void NetworkStream_get_CanWrite_mDAE8A9686A2B56E688133B8DC2E94976B16AA2CD (void);
// 0x000008F7 System.Int64 System.Net.Sockets.NetworkStream::get_Length()
extern void NetworkStream_get_Length_mBC8427DF08F60DECB0627E20F5A561102A33F089 (void);
// 0x000008F8 System.Int64 System.Net.Sockets.NetworkStream::get_Position()
extern void NetworkStream_get_Position_mEA82AACE1AD0E58FEC0AE134A56D64FF7A071F9A (void);
// 0x000008F9 System.Void System.Net.Sockets.NetworkStream::set_Position(System.Int64)
extern void NetworkStream_set_Position_m80106F320BDA2FB13B11A93D302CE72A95859999 (void);
// 0x000008FA System.Int64 System.Net.Sockets.NetworkStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void NetworkStream_Seek_m7933D6E7EE305143454CDABFD5F512BCDE204CE0 (void);
// 0x000008FB System.Void System.Net.Sockets.NetworkStream::InitNetworkStream(System.Net.Sockets.Socket,System.IO.FileAccess)
extern void NetworkStream_InitNetworkStream_m2DB75A504D6CD4BE407683A11E2A37F93B1DFF52 (void);
// 0x000008FC System.Int32 System.Net.Sockets.NetworkStream::Read(System.Byte[],System.Int32,System.Int32)
extern void NetworkStream_Read_m519A834DAB398C347321493E82E7AB823EABEF36 (void);
// 0x000008FD System.Void System.Net.Sockets.NetworkStream::Write(System.Byte[],System.Int32,System.Int32)
extern void NetworkStream_Write_mA36470E3CEDC327EC179649541ABBBE1DB294F4C (void);
// 0x000008FE System.Void System.Net.Sockets.NetworkStream::Dispose(System.Boolean)
extern void NetworkStream_Dispose_mB2BCF75273D7AE5D5417E9B02E6630B5CCBCBD97 (void);
// 0x000008FF System.Void System.Net.Sockets.NetworkStream::Finalize()
extern void NetworkStream_Finalize_m67A14B9689E9E9775841BFA59A272347FAC5D40E (void);
// 0x00000900 System.IAsyncResult System.Net.Sockets.NetworkStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void NetworkStream_BeginRead_m237864822EAB5EA9D8221CA37B141C38E035A896 (void);
// 0x00000901 System.Int32 System.Net.Sockets.NetworkStream::EndRead(System.IAsyncResult)
extern void NetworkStream_EndRead_mDCD08C532B8346555DD2D31850D15C8A900ECEF5 (void);
// 0x00000902 System.IAsyncResult System.Net.Sockets.NetworkStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void NetworkStream_BeginWrite_m260304D17C2BAFBCF1601F8479DF20E3618AA9DE (void);
// 0x00000903 System.Void System.Net.Sockets.NetworkStream::EndWrite(System.IAsyncResult)
extern void NetworkStream_EndWrite_mE66E13187FAEFE8DBB41C5A8F5BE7D7BC3686E73 (void);
// 0x00000904 System.Void System.Net.Sockets.NetworkStream::Flush()
extern void NetworkStream_Flush_m29FFA75A5BE746CF8BA1381B48D4963ED38E0288 (void);
// 0x00000905 System.Threading.Tasks.Task System.Net.Sockets.NetworkStream::FlushAsync(System.Threading.CancellationToken)
extern void NetworkStream_FlushAsync_m6DFDF1F76CD42E35082C1FE71012B3F9363A55D7 (void);
// 0x00000906 System.Void System.Net.Sockets.NetworkStream::SetLength(System.Int64)
extern void NetworkStream_SetLength_mAB9261955C29DC6346EDDC2351B793C7F797D8CD (void);
// 0x00000907 System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
extern void Socket__ctor_m5A4B335AEC1450ABE31CF1151F3F5A93D9D0280C (void);
// 0x00000908 System.Boolean System.Net.Sockets.Socket::get_SupportsIPv4()
extern void Socket_get_SupportsIPv4_mA668079517200391EE1202652AC1289E0BE740F1 (void);
// 0x00000909 System.Boolean System.Net.Sockets.Socket::get_OSSupportsIPv4()
extern void Socket_get_OSSupportsIPv4_m95D3C52E2258C13BB8405C051AB07345B11AB0D3 (void);
// 0x0000090A System.Boolean System.Net.Sockets.Socket::get_SupportsIPv6()
extern void Socket_get_SupportsIPv6_m7BBE7DAE88294EE9F8E00EFA97D0F360BA07CB82 (void);
// 0x0000090B System.Boolean System.Net.Sockets.Socket::get_OSSupportsIPv6()
extern void Socket_get_OSSupportsIPv6_m98676A26C4D9F0053550BFF845320978E444C219 (void);
// 0x0000090C System.IntPtr System.Net.Sockets.Socket::get_Handle()
extern void Socket_get_Handle_m90AE88992BB1B1BF82E680402CEB56A0EB10FFD4 (void);
// 0x0000090D System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::get_AddressFamily()
extern void Socket_get_AddressFamily_m390B53FAAF0DFF8E8BE844F83AFB06D9E53D891B (void);
// 0x0000090E System.Net.Sockets.SocketType System.Net.Sockets.Socket::get_SocketType()
extern void Socket_get_SocketType_m59C57C96B6DBA839FAFBB649491A059082D5D6F5 (void);
// 0x0000090F System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::get_ProtocolType()
extern void Socket_get_ProtocolType_m01D6FD7559F27913038834E519A4A54B81039644 (void);
// 0x00000910 System.Void System.Net.Sockets.Socket::set_DontFragment(System.Boolean)
extern void Socket_set_DontFragment_m12EFF1A7E7239447C5D8EBF54D7A43508CD8FC24 (void);
// 0x00000911 System.Boolean System.Net.Sockets.Socket::get_DualMode()
extern void Socket_get_DualMode_mD01944E72CD2FA47B9AA7DC1748BD9C4AE22835E (void);
// 0x00000912 System.Void System.Net.Sockets.Socket::set_DualMode(System.Boolean)
extern void Socket_set_DualMode_mAFC0E6235283469EF1DB58C56262202A9009CFFD (void);
// 0x00000913 System.Boolean System.Net.Sockets.Socket::get_IsDualMode()
extern void Socket_get_IsDualMode_m79CF98B9280D1A062087666B96A4D81C349EF9A1 (void);
// 0x00000914 System.Int32 System.Net.Sockets.Socket::Send(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags)
extern void Socket_Send_mB925DA11E47BB9772EDFC0DDFEE238EB3A1F98B5 (void);
// 0x00000915 System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern void Socket_Send_mF70EF17396CEA161F628B1923DA32463720D9A1E (void);
// 0x00000916 System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern void Socket_Receive_mA08EE1F9A870791CECAAC2FA2D4144ACBA6B4962 (void);
// 0x00000917 System.Int32 System.Net.Sockets.Socket::Receive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags)
extern void Socket_Receive_m6D95774528C89ED4777791E8EFC84ADFCD255A48 (void);
// 0x00000918 System.Void System.Net.Sockets.Socket::SetIPProtectionLevel(System.Net.Sockets.IPProtectionLevel)
extern void Socket_SetIPProtectionLevel_m4E9FDB46A681CF2DA3FE641B417479815F9BBA0C (void);
// 0x00000919 System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern void Socket_BeginSend_mFB97AF214E7F82B0B38434F844DA755AF18E612C (void);
// 0x0000091A System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult)
extern void Socket_EndSend_mE56C2A95C12655CA7C3C6690382FC48B7E9AA45C (void);
// 0x0000091B System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern void Socket_BeginReceive_mE0B06265B8AFC35DADCA4184D6C8B8A062BCDE73 (void);
// 0x0000091C System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult)
extern void Socket_EndReceive_m46B15199B81401BF6B7B76242C6E3A7E8156749C (void);
// 0x0000091D System.Object System.Net.Sockets.Socket::get_InternalSyncObject()
extern void Socket_get_InternalSyncObject_m7688ABCFC9261B620C284D0B8A625FAF159F98B9 (void);
// 0x0000091E System.Boolean System.Net.Sockets.Socket::get_CleanedUp()
extern void Socket_get_CleanedUp_m74D2A5015FB338E942B827B5AD89A618C51EFA35 (void);
// 0x0000091F System.Void System.Net.Sockets.Socket::InitializeSockets()
extern void Socket_InitializeSockets_mD132B3F7583082ABB41726BF6A1A9F676F3F98C5 (void);
// 0x00000920 System.Void System.Net.Sockets.Socket::Dispose()
extern void Socket_Dispose_mF84769B30DECB4A1F3AFE68C2A82D2787D8695C1 (void);
// 0x00000921 System.Void System.Net.Sockets.Socket::Finalize()
extern void Socket_Finalize_m2458A278B8DCA5B016DD41B50272FC85D8A332E4 (void);
// 0x00000922 System.Void System.Net.Sockets.Socket::InternalShutdown(System.Net.Sockets.SocketShutdown)
extern void Socket_InternalShutdown_mDA3F1ED617847E781AA826C43A833E7C978FD850 (void);
// 0x00000923 System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Net.Sockets.SafeSocketHandle)
extern void Socket__ctor_m8F2A88DD5CDD8D8B6715A4F74E3C29092245B091 (void);
// 0x00000924 System.Void System.Net.Sockets.Socket::SocketDefaults()
extern void Socket_SocketDefaults_m39FA910B28B5CF8833C6D363E343A43D45540F4F (void);
// 0x00000925 System.IntPtr System.Net.Sockets.Socket::Socket_internal(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Int32&)
extern void Socket_Socket_internal_m686934059A2E5662CAB726E58C13EE6EB9283B00 (void);
// 0x00000926 System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
extern void Socket_get_LocalEndPoint_m327EB4A6DD9260037F648B5ABA719BB305D40EB0 (void);
// 0x00000927 System.Net.SocketAddress System.Net.Sockets.Socket::LocalEndPoint_internal(System.Net.Sockets.SafeSocketHandle,System.Int32,System.Int32&)
extern void Socket_LocalEndPoint_internal_m4AA6ACEBD033984EFC21A54BBDE353EF38E81DD8 (void);
// 0x00000928 System.Net.SocketAddress System.Net.Sockets.Socket::LocalEndPoint_internal(System.IntPtr,System.Int32,System.Int32&)
extern void Socket_LocalEndPoint_internal_m0FA7C1600DDDE2C08AC573B593D0037503609142 (void);
// 0x00000929 System.Boolean System.Net.Sockets.Socket::get_Blocking()
extern void Socket_get_Blocking_m808720CD768833CF2EB6F7F8AA462115AA3A1F8B (void);
// 0x0000092A System.Void System.Net.Sockets.Socket::set_Blocking(System.Boolean)
extern void Socket_set_Blocking_m5DCBD637AD0FE63E9A67C1763C91A58799A314E2 (void);
// 0x0000092B System.Void System.Net.Sockets.Socket::Blocking_internal(System.Net.Sockets.SafeSocketHandle,System.Boolean,System.Int32&)
extern void Socket_Blocking_internal_mBFE86D9201017AA5063ED33650C045BAEC545F6B (void);
// 0x0000092C System.Void System.Net.Sockets.Socket::Blocking_internal(System.IntPtr,System.Boolean,System.Int32&)
extern void Socket_Blocking_internal_m99EDF2CE79EE12BB868006CBD0FCE2C77266AB95 (void);
// 0x0000092D System.Boolean System.Net.Sockets.Socket::get_Connected()
extern void Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0 (void);
// 0x0000092E System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
extern void Socket_set_NoDelay_m34DCB8BF5275A85E1687308D0D016E860F229732 (void);
// 0x0000092F System.Boolean System.Net.Sockets.Socket::Poll_internal(System.IntPtr,System.Net.Sockets.SelectMode,System.Int32,System.Int32&)
extern void Socket_Poll_internal_m907B66F670EDE29D80235B6966621FBE045FA7AE (void);
// 0x00000930 System.Net.Sockets.Socket System.Net.Sockets.Socket::Accept()
extern void Socket_Accept_m376D8FD43D18B427EBED5419F80E79D1ADDF9BE2 (void);
// 0x00000931 System.Void System.Net.Sockets.Socket::Accept(System.Net.Sockets.Socket)
extern void Socket_Accept_mA2B3B144CB4E2F28C4A3F5CE449C0069FE6FF88B (void);
// 0x00000932 System.Boolean System.Net.Sockets.Socket::AcceptAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern void Socket_AcceptAsync_m679806AD1336356D6271207ABF5C5B1B2D0820BD (void);
// 0x00000933 System.Net.Sockets.Socket System.Net.Sockets.Socket::EndAccept(System.IAsyncResult)
extern void Socket_EndAccept_mA0518AD160E86C2728B2E4C8E1D2A7BC69E2595A (void);
// 0x00000934 System.Net.Sockets.Socket System.Net.Sockets.Socket::EndAccept(System.Byte[]&,System.Int32&,System.IAsyncResult)
extern void Socket_EndAccept_mCED29DC1DB5BC10309535B190B35DDF704668ABC (void);
// 0x00000935 System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::Accept_internal(System.Net.Sockets.SafeSocketHandle,System.Int32&,System.Boolean)
extern void Socket_Accept_internal_mEC49934871889768AA29590484D3C6E62CBA75C9 (void);
// 0x00000936 System.IntPtr System.Net.Sockets.Socket::Accept_internal(System.IntPtr,System.Int32&,System.Boolean)
extern void Socket_Accept_internal_m449FD9BB4E411F3B2A6EFEC80ACF21DABAFA4C2A (void);
// 0x00000937 System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
extern void Socket_Bind_m4DFEFA3F8C6E95586D02BCF311D8A1D5A449B217 (void);
// 0x00000938 System.Void System.Net.Sockets.Socket::Bind_internal(System.Net.Sockets.SafeSocketHandle,System.Net.SocketAddress,System.Int32&)
extern void Socket_Bind_internal_m7A49157D9CCDEE2CF8A58C4C17B23641FE452C46 (void);
// 0x00000939 System.Void System.Net.Sockets.Socket::Bind_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern void Socket_Bind_internal_m58538BA7F18B98B3892F52D25E17C09C92CC8357 (void);
// 0x0000093A System.Void System.Net.Sockets.Socket::Listen(System.Int32)
extern void Socket_Listen_m333EA7692DFF6A3B7BF746237EBBC22C1FBE61C4 (void);
// 0x0000093B System.Void System.Net.Sockets.Socket::Listen_internal(System.Net.Sockets.SafeSocketHandle,System.Int32,System.Int32&)
extern void Socket_Listen_internal_m6D05FAA2A6F08840A5EAED4E7640DC64DD063DF7 (void);
// 0x0000093C System.Void System.Net.Sockets.Socket::Listen_internal(System.IntPtr,System.Int32,System.Int32&)
extern void Socket_Listen_internal_m36F02A8A9045D2933D7ABF53390734B40223F4AF (void);
// 0x0000093D System.Void System.Net.Sockets.Socket::BeginMConnect(System.Net.Sockets.SocketAsyncResult)
extern void Socket_BeginMConnect_mF4CC11F2DFFDF4FBCA21FDC87BEE2C166FF082C9 (void);
// 0x0000093E System.Void System.Net.Sockets.Socket::BeginSConnect(System.Net.Sockets.SocketAsyncResult)
extern void Socket_BeginSConnect_mBBA6C0E3DFDAFF3161A97FCBDFCE5B31D327D5B5 (void);
// 0x0000093F System.Void System.Net.Sockets.Socket::EndConnect(System.IAsyncResult)
extern void Socket_EndConnect_mC014DB766DCF93646536008F55692BE9143797E6 (void);
// 0x00000940 System.Void System.Net.Sockets.Socket::Connect_internal(System.Net.Sockets.SafeSocketHandle,System.Net.SocketAddress,System.Int32&,System.Boolean)
extern void Socket_Connect_internal_mA19FD873D30EBC46E6FF890DF4BDE5856BEEC7D8 (void);
// 0x00000941 System.Void System.Net.Sockets.Socket::Connect_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&,System.Boolean)
extern void Socket_Connect_internal_m242B10939F582632598FBBCD15D4DC8F8DDD773C (void);
// 0x00000942 System.Void System.Net.Sockets.Socket::Disconnect(System.Boolean)
extern void Socket_Disconnect_m088E558DFF8B6640DE5D3F041504F15D0C1DB957 (void);
// 0x00000943 System.Void System.Net.Sockets.Socket::EndDisconnect(System.IAsyncResult)
extern void Socket_EndDisconnect_mE208E9EFF47D1921E6BAD57B94FC5F8BCE53D058 (void);
// 0x00000944 System.Void System.Net.Sockets.Socket::Disconnect_internal(System.Net.Sockets.SafeSocketHandle,System.Boolean,System.Int32&)
extern void Socket_Disconnect_internal_mC594BC70DA44BB91B22F5068BD40311333B098E0 (void);
// 0x00000945 System.Void System.Net.Sockets.Socket::Disconnect_internal(System.IntPtr,System.Boolean,System.Int32&)
extern void Socket_Disconnect_internal_m646997B72978F5CC1C3E28AF92F11F8F8D3FB265 (void);
// 0x00000946 System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Receive_mD8C41C5E04F7A9AEAA8E9D7534970F50918427BF (void);
// 0x00000947 System.Int32 System.Net.Sockets.Socket::Receive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Receive_m7D07ECE91DA04210066EB6E373376817E0A024F1 (void);
// 0x00000948 System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&,System.AsyncCallback,System.Object)
extern void Socket_BeginReceive_m7AFA3F22DAD771579F060D344EA1B44C3F55C912 (void);
// 0x00000949 System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern void Socket_EndReceive_mBD6A39DBD9C6D68BB28A2F6A9364BF2BC48CFEBA (void);
// 0x0000094A System.Int32 System.Net.Sockets.Socket::Receive_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_mA69B81910FC64BEC52C4F91ABE52C522EA82F44C (void);
// 0x0000094B System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_mB032C72DA4A5809A8AB2303AFEA98F62BB60FE2E (void);
// 0x0000094C System.Int32 System.Net.Sockets.Socket::Receive_internal(System.Net.Sockets.SafeSocketHandle,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_mE0647628B151CA069DF0099B053CDBBA5EC40627 (void);
// 0x0000094D System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_m345329E7F6DFB2B46B8BAB8FCD234CDD16D069EB (void);
// 0x0000094E System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.Net.Sockets.SocketError&)
extern void Socket_ReceiveFrom_mAFA99FB7487A2216312D4510E530BB9F5A4CD54B (void);
// 0x0000094F System.Int32 System.Net.Sockets.Socket::EndReceiveFrom(System.IAsyncResult,System.Net.EndPoint&)
extern void Socket_EndReceiveFrom_mBEAC67D399907A222678833B24E20FFFDF0DDC17 (void);
// 0x00000950 System.Int32 System.Net.Sockets.Socket::ReceiveFrom_internal(System.Net.Sockets.SafeSocketHandle,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&,System.Boolean)
extern void Socket_ReceiveFrom_internal_m2636BBEFE1A0C656B84F94E5CD7202DE12A560EF (void);
// 0x00000951 System.Int32 System.Net.Sockets.Socket::ReceiveFrom_internal(System.IntPtr,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&,System.Boolean)
extern void Socket_ReceiveFrom_internal_mAA065C65DE439D2F29A066C9372AC8A261210D7C (void);
// 0x00000952 System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Send_mF1AF06B447E1671097A0515BD6170DB92368E8D5 (void);
// 0x00000953 System.Int32 System.Net.Sockets.Socket::Send(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Send_m77328B1F3378D0C5B40B15C01FA2226257B706AE (void);
// 0x00000954 System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&,System.AsyncCallback,System.Object)
extern void Socket_BeginSend_mE51B200464A077562C33CBEE5421A7F18CA198D8 (void);
// 0x00000955 System.Void System.Net.Sockets.Socket::BeginSendCallback(System.Net.Sockets.SocketAsyncResult,System.Int32)
extern void Socket_BeginSendCallback_mE8BC2D5E71817BE73C1DB09185A47C9417052927 (void);
// 0x00000956 System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern void Socket_EndSend_m1D4BCE94C7D318281B9A4D24A99B14B0E66AC160 (void);
// 0x00000957 System.Int32 System.Net.Sockets.Socket::Send_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_m225873D0AAD2BCB5C990B25D64F0B2E8E5EFB215 (void);
// 0x00000958 System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_m1165DB847D3BDFD06F7AAB047EC10B553B1DC726 (void);
// 0x00000959 System.Int32 System.Net.Sockets.Socket::Send_internal(System.Net.Sockets.SafeSocketHandle,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_m6D595D0C8F4B3DF41B0F3626FCF56A865B074052 (void);
// 0x0000095A System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_mB02F115E8A33D27F0E90D4D4E554F7C883B1750E (void);
// 0x0000095B System.Int32 System.Net.Sockets.Socket::EndSendTo(System.IAsyncResult)
extern void Socket_EndSendTo_m63F470B7483CED77F2DA2FD46FE93A460743CB08 (void);
// 0x0000095C System.Object System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName)
extern void Socket_GetSocketOption_m58A866C87F4B09F2A8C3DA71635C8DA17836520D (void);
// 0x0000095D System.Void System.Net.Sockets.Socket::GetSocketOption_obj_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object&,System.Int32&)
extern void Socket_GetSocketOption_obj_internal_mAF0EEDBE063231AED55A1A3BC94DB701D4003FCE (void);
// 0x0000095E System.Void System.Net.Sockets.Socket::GetSocketOption_obj_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object&,System.Int32&)
extern void Socket_GetSocketOption_obj_internal_m848554BF95726EC1C666D930813390998F2370F3 (void);
// 0x0000095F System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Int32)
extern void Socket_SetSocketOption_m6034478D182424029DA43CB526EC578E22C4A467 (void);
// 0x00000960 System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
extern void Socket_SetSocketOption_internal_m3C0DCC5F09156DAB95BEAC3FA8446C20D5FFC7CE (void);
// 0x00000961 System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
extern void Socket_SetSocketOption_internal_mE44C10E21DFD102C3354B1D0FB8FB3C3B2B081D4 (void);
// 0x00000962 System.Void System.Net.Sockets.Socket::Close()
extern void Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB (void);
// 0x00000963 System.Void System.Net.Sockets.Socket::Close(System.Int32)
extern void Socket_Close_mEC9B67F2F0E51F7FBB9D6BC9F630AD52DF7D0E65 (void);
// 0x00000964 System.Void System.Net.Sockets.Socket::Close_internal(System.IntPtr,System.Int32&)
extern void Socket_Close_internal_m22238A02EFF2E1AB28E5DCC2C7A4E41297D77054 (void);
// 0x00000965 System.Void System.Net.Sockets.Socket::Shutdown(System.Net.Sockets.SocketShutdown)
extern void Socket_Shutdown_mCDFA7A9F9A008900F122E422F7A95B06CF54827F (void);
// 0x00000966 System.Void System.Net.Sockets.Socket::Shutdown_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.SocketShutdown,System.Int32&)
extern void Socket_Shutdown_internal_m8E3CC5039CC5B5B5C9CAE4A6DE00917819AB3E84 (void);
// 0x00000967 System.Void System.Net.Sockets.Socket::Shutdown_internal(System.IntPtr,System.Net.Sockets.SocketShutdown,System.Int32&)
extern void Socket_Shutdown_internal_m2A5EAA761C3EF6AA0495C582768B985762BC24E7 (void);
// 0x00000968 System.Void System.Net.Sockets.Socket::Dispose(System.Boolean)
extern void Socket_Dispose_m361195497638D3D2C1E22B9D6EE4A6E45F1CF0C3 (void);
// 0x00000969 System.Void System.Net.Sockets.Socket::Linger(System.IntPtr)
extern void Socket_Linger_m635016CAB436DE0FA43CAA80AA5C8EE90225F06A (void);
// 0x0000096A System.Void System.Net.Sockets.Socket::ThrowIfDisposedAndClosed()
extern void Socket_ThrowIfDisposedAndClosed_m5EC422888FC9986F6994A0C0180BCB39407F7894 (void);
// 0x0000096B System.Void System.Net.Sockets.Socket::ThrowIfBufferNull(System.Byte[])
extern void Socket_ThrowIfBufferNull_mCE5DE853E71FD065E5D5415BAFEDB84CA261DAD3 (void);
// 0x0000096C System.Void System.Net.Sockets.Socket::ThrowIfBufferOutOfRange(System.Byte[],System.Int32,System.Int32)
extern void Socket_ThrowIfBufferOutOfRange_m571DD069DDC7952B1EB907941F3C202054BBE6FF (void);
// 0x0000096D System.Void System.Net.Sockets.Socket::ThrowIfUdp()
extern void Socket_ThrowIfUdp_m7F28AFD15A102E911AEE9B08125794162C2A26F8 (void);
// 0x0000096E System.Net.Sockets.SocketAsyncResult System.Net.Sockets.Socket::ValidateEndIAsyncResult(System.IAsyncResult,System.String,System.String)
extern void Socket_ValidateEndIAsyncResult_m8463696F3CAF01ED5982FF8200C6A53D60C33628 (void);
// 0x0000096F System.Void System.Net.Sockets.Socket::QueueIOSelectorJob(System.Threading.SemaphoreSlim,System.IntPtr,System.IOSelectorJob)
extern void Socket_QueueIOSelectorJob_mED926AA0CA86E558C83A306AFC0FC5F918E36327 (void);
// 0x00000970 System.Void System.Net.Sockets.Socket::InitSocketAsyncEventArgs(System.Net.Sockets.SocketAsyncEventArgs,System.AsyncCallback,System.Object,System.Net.Sockets.SocketOperation)
extern void Socket_InitSocketAsyncEventArgs_mD4A737E2AEB17E3868B3EED96724C97AECAFCF5C (void);
// 0x00000971 System.Net.Sockets.SocketAsyncOperation System.Net.Sockets.Socket::SocketOperationToSocketAsyncOperation(System.Net.Sockets.SocketOperation)
extern void Socket_SocketOperationToSocketAsyncOperation_m2DDF891D3125FADFFACB5DEF8D802CD8CBECD3C2 (void);
// 0x00000972 System.Net.IPEndPoint System.Net.Sockets.Socket::RemapIPEndPoint(System.Net.IPEndPoint)
extern void Socket_RemapIPEndPoint_m940DF8512A590EE50576782DFCAAAC9DF8F3E06C (void);
// 0x00000973 System.Void System.Net.Sockets.Socket::cancel_blocking_socket_operation(System.Threading.Thread)
extern void Socket_cancel_blocking_socket_operation_m7CC62FAFFA8C0EF64E30CED27186B5BF87D930D7 (void);
// 0x00000974 System.Int32 System.Net.Sockets.Socket::get_FamilyHint()
extern void Socket_get_FamilyHint_m0F51D579A0297398AE640E723393716732ED39D5 (void);
// 0x00000975 System.Boolean System.Net.Sockets.Socket::IsProtocolSupported_internal(System.Net.NetworkInformation.NetworkInterfaceComponent)
extern void Socket_IsProtocolSupported_internal_mA8C3A7CA0DF595904092C13FD229757C51136E61 (void);
// 0x00000976 System.Boolean System.Net.Sockets.Socket::IsProtocolSupported(System.Net.NetworkInformation.NetworkInterfaceComponent)
extern void Socket_IsProtocolSupported_m60240825F125A36DF31346D46AE38EF3CE313E65 (void);
// 0x00000977 System.Void System.Net.Sockets.Socket::.cctor()
extern void Socket__cctor_mAC11CE5F2EB6E8CEE14EC545D67B74FB863D2BA0 (void);
// 0x00000978 System.Void System.Net.Sockets.Socket/<>c::.cctor()
extern void U3CU3Ec__cctor_mC0CD010F66D9E793EAF20FE605219DC17B3D4D6B (void);
// 0x00000979 System.Void System.Net.Sockets.Socket/<>c::.ctor()
extern void U3CU3Ec__ctor_m43A057DFDD32EA28F00A12E2C2173145A13BDAF4 (void);
// 0x0000097A System.Void System.Net.Sockets.Socket/<>c::<BeginSend>b__242_0(System.IOAsyncResult)
extern void U3CU3Ec_U3CBeginSendU3Eb__242_0_m0011A7F1D6DCE1CC6714C2C4C67C905DA9159F5C (void);
// 0x0000097B System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_0(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_0_mC396B5BE2E142AD692FF33127270DA83F37E0FE7 (void);
// 0x0000097C System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_1(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_1_m7141ABFB7A612D6C3FF7E1A08A388E9EF6686545 (void);
// 0x0000097D System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_2(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_2_m110EFFDCB2927C59A7775F44598CF7213F8954D8 (void);
// 0x0000097E System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_3(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_3_m53FD854140025D3A18E08649002588BD32120704 (void);
// 0x0000097F System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_4(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_4_mF00A4741487F488E2C391D880F02CE350654AF03 (void);
// 0x00000980 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_5(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_5_mC153E4B02FC0BFDB1DD45C6A2B449C2191B14418 (void);
// 0x00000981 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_6(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_6_m87420A4E7F247C0C96EDABEB5E832CB1C27FA543 (void);
// 0x00000982 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_7(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_7_mF1815DC25AFF7063E376A6C012D899081EF669F8 (void);
// 0x00000983 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_8(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_8_m84E0BF807680AEBCD2B8EB613649E1A09F40BBE9 (void);
// 0x00000984 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_9(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_9_m80BDF0261BB58674DFD34CD5CE86DC044A6D3D0D (void);
// 0x00000985 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_10(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_10_mA283D32575140AE2DC68609AFF4D9271235EA443 (void);
// 0x00000986 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_11(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_11_m800E1188E230A39EEF26795BFCD3D1452CD57D66 (void);
// 0x00000987 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_12(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_12_mC3F90036D059B2B8698420B56F024B1635A88F8B (void);
// 0x00000988 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_13(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_13_m2FD5CE753231103645670195A724C97E3E10F06E (void);
// 0x00000989 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_14(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_14_m53E1DB314E0C51DAE16463286BD922CB0A207D90 (void);
// 0x0000098A System.Void System.Net.Sockets.Socket/<>c__DisplayClass243_0::.ctor()
extern void U3CU3Ec__DisplayClass243_0__ctor_m5F03E623DD7362E05C09E3ABB8C803F171217FCB (void);
// 0x0000098B System.Void System.Net.Sockets.Socket/<>c__DisplayClass243_0::<BeginSendCallback>b__0(System.IOAsyncResult)
extern void U3CU3Ec__DisplayClass243_0_U3CBeginSendCallbackU3Eb__0_mCE9408390F94237D14C6BA83630E34F2DCA56860 (void);
// 0x0000098C System.Void System.Net.Sockets.Socket/<>c__DisplayClass299_0::.ctor()
extern void U3CU3Ec__DisplayClass299_0__ctor_mA2004E88EE9AC6E49EE6A5701BA464ED976A0ED4 (void);
// 0x0000098D System.Void System.Net.Sockets.Socket/<>c__DisplayClass299_0::<QueueIOSelectorJob>b__0(System.Threading.Tasks.Task)
extern void U3CU3Ec__DisplayClass299_0_U3CQueueIOSelectorJobU3Eb__0_mD066C2DF490C722A0CD2B048F1B7031BA5E502D9 (void);
// 0x0000098E System.Void System.Net.Sockets.SafeSocketHandle::.ctor(System.IntPtr,System.Boolean)
extern void SafeSocketHandle__ctor_m98BFBB207C9D8D7750DEA3598051D21FFE784967 (void);
// 0x0000098F System.Boolean System.Net.Sockets.SafeSocketHandle::ReleaseHandle()
extern void SafeSocketHandle_ReleaseHandle_m93408D5088C512A7BFF7C6CA7D5857645C17BDFF (void);
// 0x00000990 System.Void System.Net.Sockets.SafeSocketHandle::RegisterForBlockingSyscall()
extern void SafeSocketHandle_RegisterForBlockingSyscall_m7033111DA7B1012B9C4155D892EED598876C2AB3 (void);
// 0x00000991 System.Void System.Net.Sockets.SafeSocketHandle::UnRegisterForBlockingSyscall()
extern void SafeSocketHandle_UnRegisterForBlockingSyscall_m283CE3E82686E5FC7999EDD609DF74A48652D4B3 (void);
// 0x00000992 System.Void System.Net.Sockets.SafeSocketHandle::.cctor()
extern void SafeSocketHandle__cctor_m124BAE407CAC62417D06367E57320631BE15488D (void);
// 0x00000993 System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::get_AcceptSocket()
extern void SocketAsyncEventArgs_get_AcceptSocket_m6119FCE739596BD55C2847460DC69ADB285070A7 (void);
// 0x00000994 System.Void System.Net.Sockets.SocketAsyncEventArgs::set_AcceptSocket(System.Net.Sockets.Socket)
extern void SocketAsyncEventArgs_set_AcceptSocket_mA34A6E97F2B00232A1F453219EA6C03487D529A5 (void);
// 0x00000995 System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncEventArgs::get_BufferList()
extern void SocketAsyncEventArgs_get_BufferList_m9D092791A306A913589F89972006F1234170EC1A (void);
// 0x00000996 System.Void System.Net.Sockets.SocketAsyncEventArgs::set_BytesTransferred(System.Int32)
extern void SocketAsyncEventArgs_set_BytesTransferred_m99F956EB9B4A7FAD4632FA07BBF4451DFD0F764C (void);
// 0x00000997 System.Int32 System.Net.Sockets.SocketAsyncEventArgs::get_Count()
extern void SocketAsyncEventArgs_get_Count_m0025EDB77D6F5DD12DAF6E5C1563C3009EBEA55B (void);
// 0x00000998 System.Void System.Net.Sockets.SocketAsyncEventArgs::set_LastOperation(System.Net.Sockets.SocketAsyncOperation)
extern void SocketAsyncEventArgs_set_LastOperation_m3D4530FEBE9BAC239A366FE4B431B7E8426FF34B (void);
// 0x00000999 System.Void System.Net.Sockets.SocketAsyncEventArgs::set_SendPacketsSendSize(System.Int32)
extern void SocketAsyncEventArgs_set_SendPacketsSendSize_mAB1EE90FBBC96980590AB93EF9E01B4B7C4CA661 (void);
// 0x0000099A System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::get_SocketError()
extern void SocketAsyncEventArgs_get_SocketError_m11C0B5903B8AB4D642746DBAE990432FD65B08D7 (void);
// 0x0000099B System.Void System.Net.Sockets.SocketAsyncEventArgs::set_SocketError(System.Net.Sockets.SocketError)
extern void SocketAsyncEventArgs_set_SocketError_mE909DB5DBC90065720B35ACB8B382DA175976533 (void);
// 0x0000099C System.Object System.Net.Sockets.SocketAsyncEventArgs::get_UserToken()
extern void SocketAsyncEventArgs_get_UserToken_mD64FA7C6DD325D8151B87483B472295C06001C18 (void);
// 0x0000099D System.Void System.Net.Sockets.SocketAsyncEventArgs::set_UserToken(System.Object)
extern void SocketAsyncEventArgs_set_UserToken_m1425D948CDABF59C68EB0387345609075104CB9A (void);
// 0x0000099E System.Void System.Net.Sockets.SocketAsyncEventArgs::add_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>)
extern void SocketAsyncEventArgs_add_Completed_m424A0DFB6FE947B980C160A66695B53FBE1E027A (void);
// 0x0000099F System.Void System.Net.Sockets.SocketAsyncEventArgs::remove_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>)
extern void SocketAsyncEventArgs_remove_Completed_mD5DA6CA668FB35C4D5EB9507E4941838C5DC6B55 (void);
// 0x000009A0 System.Void System.Net.Sockets.SocketAsyncEventArgs::.ctor()
extern void SocketAsyncEventArgs__ctor_mCDC163ABCAC5FFF7AF8B1660DFAFB1FA128546AC (void);
// 0x000009A1 System.Void System.Net.Sockets.SocketAsyncEventArgs::Finalize()
extern void SocketAsyncEventArgs_Finalize_m8EB50DDA9821D013905E522ECFDCDE60DD13754D (void);
// 0x000009A2 System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose(System.Boolean)
extern void SocketAsyncEventArgs_Dispose_m75C974426B784853880FD3146091228ABBD0CE06 (void);
// 0x000009A3 System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose()
extern void SocketAsyncEventArgs_Dispose_m3DBF8461B4A792A6DEDF567964587CCEA75AFA63 (void);
// 0x000009A4 System.Void System.Net.Sockets.SocketAsyncEventArgs::SetLastOperation(System.Net.Sockets.SocketAsyncOperation)
extern void SocketAsyncEventArgs_SetLastOperation_m8C429F00E505FC6E35ECFA7EFD7F9CDF541E94AA (void);
// 0x000009A5 System.Void System.Net.Sockets.SocketAsyncEventArgs::Complete()
extern void SocketAsyncEventArgs_Complete_m94BBD1E035C5474D203D0E8CEDDE6A32BA61E061 (void);
// 0x000009A6 System.Void System.Net.Sockets.SocketAsyncEventArgs::OnCompleted(System.Net.Sockets.SocketAsyncEventArgs)
extern void SocketAsyncEventArgs_OnCompleted_mF7B3732D2A22625740B14BFCE38F8D6A6E5B66AF (void);
// 0x000009A7 System.IntPtr System.Net.Sockets.SocketAsyncResult::get_Handle()
extern void SocketAsyncResult_get_Handle_m0A9F83AD4D06B5E31F63012A1A4557FB48940C44 (void);
// 0x000009A8 System.Void System.Net.Sockets.SocketAsyncResult::.ctor()
extern void SocketAsyncResult__ctor_m1D86368D65C9E314E72331B74526656624A0606F (void);
// 0x000009A9 System.Void System.Net.Sockets.SocketAsyncResult::Init(System.Net.Sockets.Socket,System.AsyncCallback,System.Object,System.Net.Sockets.SocketOperation)
extern void SocketAsyncResult_Init_m30EBB82FFB82A973A1BDC040DE2EA7E4087DC69B (void);
// 0x000009AA System.Void System.Net.Sockets.SocketAsyncResult::.ctor(System.Net.Sockets.Socket,System.AsyncCallback,System.Object,System.Net.Sockets.SocketOperation)
extern void SocketAsyncResult__ctor_mF4024A1E5EAD56E00839672EED0126EC34FD9917 (void);
// 0x000009AB System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncResult::get_ErrorCode()
extern void SocketAsyncResult_get_ErrorCode_m56F156B7C525AF9947C56C76A8B2D0B4E545AD69 (void);
// 0x000009AC System.Void System.Net.Sockets.SocketAsyncResult::CheckIfThrowDelayedException()
extern void SocketAsyncResult_CheckIfThrowDelayedException_m5ED469CF2CCFD1E9B2A5621769B8CB27AB89DE45 (void);
// 0x000009AD System.Void System.Net.Sockets.SocketAsyncResult::CompleteDisposed()
extern void SocketAsyncResult_CompleteDisposed_m0E0A213265679C08CF3B5230F54E6F8801BD91E6 (void);
// 0x000009AE System.Void System.Net.Sockets.SocketAsyncResult::Complete()
extern void SocketAsyncResult_Complete_m236141DBFB1E4B892296B548DDBCB2C04829D194 (void);
// 0x000009AF System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Boolean)
extern void SocketAsyncResult_Complete_m7A55E54CBF74652E5784D34402B88CAB8A18601A (void);
// 0x000009B0 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Int32)
extern void SocketAsyncResult_Complete_m266C10BA9EEF57EC12B411F13B207C638F8762A9 (void);
// 0x000009B1 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Exception,System.Boolean)
extern void SocketAsyncResult_Complete_m44E31D06CAA7D0EFE0A7BB6EA24ADDB14EA625AC (void);
// 0x000009B2 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Exception)
extern void SocketAsyncResult_Complete_mF68A29EEF8843248D56B583C4CCD9C1549F99DAA (void);
// 0x000009B3 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Net.Sockets.Socket)
extern void SocketAsyncResult_Complete_mBFBFEECE8C3B6D2D456B607A9D7AB9889ECA8F27 (void);
// 0x000009B4 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Net.Sockets.Socket,System.Int32)
extern void SocketAsyncResult_Complete_m1D85BF6ED9479FB410132CD3C93F57AB507D4745 (void);
// 0x000009B5 System.Void System.Net.Sockets.SocketAsyncResult/<>c::.cctor()
extern void U3CU3Ec__cctor_mFA4167924E80870ED0ACC07EAF52CE380944FA4C (void);
// 0x000009B6 System.Void System.Net.Sockets.SocketAsyncResult/<>c::.ctor()
extern void U3CU3Ec__ctor_m087776B9BEE00F1A315C08CB888C7F2875461366 (void);
// 0x000009B7 System.Void System.Net.Sockets.SocketAsyncResult/<>c::<Complete>b__27_0(System.Object)
extern void U3CU3Ec_U3CCompleteU3Eb__27_0_m5C293AC939107CF4960BBA8DFBA174438C2BD359 (void);
// 0x000009B8 System.Void System.Net.Security.AuthenticatedStream::.ctor(System.IO.Stream,System.Boolean)
extern void AuthenticatedStream__ctor_mDE77A28CCC056362108DCDE9345EE3F6D73AF509 (void);
// 0x000009B9 System.IO.Stream System.Net.Security.AuthenticatedStream::get_InnerStream()
extern void AuthenticatedStream_get_InnerStream_m11C037DEE34B2DD870301D499BEE69ECED787D7A (void);
// 0x000009BA System.Void System.Net.Security.AuthenticatedStream::Dispose(System.Boolean)
extern void AuthenticatedStream_Dispose_m922381D0775D8A14FF01E106A47EAEF318EA982E (void);
// 0x000009BB System.Boolean System.Net.Security.AuthenticatedStream::get_IsAuthenticated()
// 0x000009BC System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern void RemoteCertificateValidationCallback__ctor_mDBCF893D0A540CB506F5547807525625F5CBA4C4 (void);
// 0x000009BD System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void RemoteCertificateValidationCallback_Invoke_m30A34C33A46909FAA60703A2EFF0C41F6E7B6C14 (void);
// 0x000009BE System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
extern void RemoteCertificateValidationCallback_BeginInvoke_m8A150C819EE51BD2913E80CFD149D3A8B9DD9930 (void);
// 0x000009BF System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern void RemoteCertificateValidationCallback_EndInvoke_mD94E71A429600B4EAC95128CBAEBB19C97C054F5 (void);
// 0x000009C0 System.Void System.Net.Security.LocalCertSelectionCallback::.ctor(System.Object,System.IntPtr)
extern void LocalCertSelectionCallback__ctor_mE564871B196549FDEA64C011A4AA00339FA0281F (void);
// 0x000009C1 System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertSelectionCallback::Invoke(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void LocalCertSelectionCallback_Invoke_m2869B1DB69FB6390DB8035B41C0594762111D484 (void);
// 0x000009C2 System.IAsyncResult System.Net.Security.LocalCertSelectionCallback::BeginInvoke(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.AsyncCallback,System.Object)
extern void LocalCertSelectionCallback_BeginInvoke_m860EA4273F9EFFF06603F25C69326ABE2DA8CD96 (void);
// 0x000009C3 System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertSelectionCallback::EndInvoke(System.IAsyncResult)
extern void LocalCertSelectionCallback_EndInvoke_m79DC5879439F10FC1D1C00A060C455733D7F321A (void);
// 0x000009C4 Mono.Security.Interface.IMonoSslStream System.Net.Security.SslStream::get_Impl()
extern void SslStream_get_Impl_m64EA7C2820C426A13C1693A9E66770A3F986CF86 (void);
// 0x000009C5 System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings)
extern void SslStream__ctor_m56CC1EA5A22E27B0197C181B2DB6EC6A14755DED (void);
// 0x000009C6 Mono.Security.Interface.IMonoSslStream System.Net.Security.SslStream::CreateMonoSslStream(System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings)
extern void SslStream_CreateMonoSslStream_m74BE8E0D40817CE69596C1C0DED1D85F59EA6EBC (void);
// 0x000009C7 System.Void System.Net.Security.SslStream::AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Security.Authentication.SslProtocols,System.Boolean)
extern void SslStream_AuthenticateAsServer_mFF0024785800CB56EC987DE0D8B178E09336D64E (void);
// 0x000009C8 System.Boolean System.Net.Security.SslStream::get_IsAuthenticated()
extern void SslStream_get_IsAuthenticated_mAD584FEC93A19120F7B58BDE60B2F2EC5080AECC (void);
// 0x000009C9 System.Boolean System.Net.Security.SslStream::get_CanSeek()
extern void SslStream_get_CanSeek_m79ABDB979F4BD2DA6960377372915E4A6671ECFF (void);
// 0x000009CA System.Boolean System.Net.Security.SslStream::get_CanRead()
extern void SslStream_get_CanRead_mDD4E9CE7362511A86D9EE1841B1CD01D4E8B2110 (void);
// 0x000009CB System.Boolean System.Net.Security.SslStream::get_CanWrite()
extern void SslStream_get_CanWrite_m54CDDD4975C00A8958FB5F964455BC2D80491E6B (void);
// 0x000009CC System.Int64 System.Net.Security.SslStream::get_Length()
extern void SslStream_get_Length_mC22DDE456AF82253D85AACBF718ABBF12EBE13A3 (void);
// 0x000009CD System.Int64 System.Net.Security.SslStream::get_Position()
extern void SslStream_get_Position_mF09FAC98E3C9691EE539B99217F003D1471E2898 (void);
// 0x000009CE System.Void System.Net.Security.SslStream::set_Position(System.Int64)
extern void SslStream_set_Position_m558CCA3D97D354DFBE766CBECED122A7B81CCA41 (void);
// 0x000009CF System.Void System.Net.Security.SslStream::SetLength(System.Int64)
extern void SslStream_SetLength_m8392E5F9F4229EC24BF0EE8CDAEEBDC76F486994 (void);
// 0x000009D0 System.Int64 System.Net.Security.SslStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void SslStream_Seek_m826A9CA3B804E1AEBA6758228B02E01CA99B5579 (void);
// 0x000009D1 System.Threading.Tasks.Task System.Net.Security.SslStream::FlushAsync(System.Threading.CancellationToken)
extern void SslStream_FlushAsync_m0664E67F609D253559B69242C9DFF9D697151325 (void);
// 0x000009D2 System.Void System.Net.Security.SslStream::Flush()
extern void SslStream_Flush_m28F1C2BA3489D896FCBF3057A81AFD06CE232BBB (void);
// 0x000009D3 System.Void System.Net.Security.SslStream::CheckDisposed()
extern void SslStream_CheckDisposed_mCDA5D6100C3F568C250F904B6936DEB91E5250C3 (void);
// 0x000009D4 System.Void System.Net.Security.SslStream::Dispose(System.Boolean)
extern void SslStream_Dispose_m789C2C9F9B5B3B48112E28F053926C9145CEDAE4 (void);
// 0x000009D5 System.Int32 System.Net.Security.SslStream::Read(System.Byte[],System.Int32,System.Int32)
extern void SslStream_Read_m8418B257262567DD7684F2EEB334DE25C884088C (void);
// 0x000009D6 System.Void System.Net.Security.SslStream::Write(System.Byte[],System.Int32,System.Int32)
extern void SslStream_Write_mE0B830147A53EEF0E64C3DE127612048A30D0180 (void);
// 0x000009D7 System.IAsyncResult System.Net.Security.SslStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void SslStream_BeginRead_mA6DFC30593CDEDED30C6E6A1F84EFF21726C5F25 (void);
// 0x000009D8 System.Int32 System.Net.Security.SslStream::EndRead(System.IAsyncResult)
extern void SslStream_EndRead_mB340F9EE92BB425D4D169D0E7FA5CEFC208627FD (void);
// 0x000009D9 System.IAsyncResult System.Net.Security.SslStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void SslStream_BeginWrite_m78AAF68A712CC60F2F29FF7D478FEE2CA99CF028 (void);
// 0x000009DA System.Void System.Net.Security.SslStream::EndWrite(System.IAsyncResult)
extern void SslStream_EndWrite_mECFCAE6C39E3807D418226A712B2600A6F96011A (void);
// 0x000009DB System.Boolean System.Net.NetworkInformation.IPGlobalProperties::get_PlatformNeedsLibCWorkaround()
extern void IPGlobalProperties_get_PlatformNeedsLibCWorkaround_m705220ED1B7282E2587CB3B342988F2E545BA4A1 (void);
// 0x000009DC System.Net.NetworkInformation.IPGlobalProperties System.Net.NetworkInformation.IPGlobalProperties::GetIPGlobalProperties()
extern void IPGlobalProperties_GetIPGlobalProperties_mA224D4373150EC631786DE56F4E6E1B18FBAE574 (void);
// 0x000009DD System.Net.NetworkInformation.IPGlobalProperties System.Net.NetworkInformation.IPGlobalProperties::InternalGetIPGlobalProperties()
extern void IPGlobalProperties_InternalGetIPGlobalProperties_m47B173E291D6F7B081952BD2C3F5317FC9BFE951 (void);
// 0x000009DE System.String System.Net.NetworkInformation.IPGlobalProperties::get_DomainName()
// 0x000009DF System.Void System.Net.NetworkInformation.IPGlobalProperties::.ctor()
extern void IPGlobalProperties__ctor_mEEE47DACD96438BCDF67877A3E2F0D3A592C2977 (void);
// 0x000009E0 System.Void System.Net.NetworkInformation.NetworkInformationException::.ctor()
extern void NetworkInformationException__ctor_m5CDA318CAFE57C54FA19136D9CC86F34DF5F8F1C (void);
// 0x000009E1 System.Void System.Net.NetworkInformation.NetworkInformationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NetworkInformationException__ctor_m0132BE482A5DEDFAA8E675B7E8F1BB59BDB2E23F (void);
// 0x000009E2 System.Int32 System.Net.NetworkInformation.CommonUnixIPGlobalProperties::getdomainname(System.Byte[],System.Int32)
extern void CommonUnixIPGlobalProperties_getdomainname_mE35D08D81049A96BFF3134C9F109711CD98D18CF (void);
// 0x000009E3 System.String System.Net.NetworkInformation.CommonUnixIPGlobalProperties::get_DomainName()
extern void CommonUnixIPGlobalProperties_get_DomainName_m413AC21C8FCF33C473D3360DD83E0F9CFB7662D7 (void);
// 0x000009E4 System.Void System.Net.NetworkInformation.CommonUnixIPGlobalProperties::.ctor()
extern void CommonUnixIPGlobalProperties__ctor_m60C46E122AF76BCED16DD7F3FD5EFF74C093F83C (void);
// 0x000009E5 System.Void System.Net.NetworkInformation.UnixIPGlobalProperties::.ctor()
extern void UnixIPGlobalProperties__ctor_mF2ADB564F94ABCB20CB71DDE34FAB070BA12A868 (void);
// 0x000009E6 System.String System.Net.NetworkInformation.UnixNoLibCIPGlobalProperties::get_DomainName()
extern void UnixNoLibCIPGlobalProperties_get_DomainName_mD5C1D38C6A8C4BFBBAF251F829A64A9D80363371 (void);
// 0x000009E7 System.Void System.Net.NetworkInformation.UnixNoLibCIPGlobalProperties::.ctor()
extern void UnixNoLibCIPGlobalProperties__ctor_mB8161FF612E1613FC30AFA5CAA97C5E368C66291 (void);
// 0x000009E8 System.Void System.Net.NetworkInformation.MibIPGlobalProperties::.ctor(System.String)
extern void MibIPGlobalProperties__ctor_m64009FA9C2EDC7E97A8BFDADD97F30699037CAA6 (void);
// 0x000009E9 System.Void System.Net.NetworkInformation.MibIPGlobalProperties::.cctor()
extern void MibIPGlobalProperties__cctor_mF7E6B5BFD692BEDABBBCB5718D7FE50B65D8FC42 (void);
// 0x000009EA System.String System.Net.NetworkInformation.Win32IPGlobalProperties::get_DomainName()
extern void Win32IPGlobalProperties_get_DomainName_m5FF24C6CC09FE64C60955D9C4C1BEBF96636A5D3 (void);
// 0x000009EB System.Void System.Net.NetworkInformation.Win32IPGlobalProperties::.ctor()
extern void Win32IPGlobalProperties__ctor_m7D031774BB16D9BF7096D7CC6B44AED107B31484 (void);
// 0x000009EC System.Int32 System.Net.NetworkInformation.Win32NetworkInterface::GetNetworkParams(System.IntPtr,System.Int32&)
extern void Win32NetworkInterface_GetNetworkParams_m03C800E628DBEC8F64E825B68F044D63502D90C7 (void);
// 0x000009ED System.Net.NetworkInformation.Win32_FIXED_INFO System.Net.NetworkInformation.Win32NetworkInterface::get_FixedInfo()
extern void Win32NetworkInterface_get_FixedInfo_m935C305BFC9D3F213D2FC8EE693AEFD06226B3C5 (void);
// 0x000009EE System.Net.IWebProxy System.Net.Configuration.DefaultProxySectionInternal::GetDefaultProxy_UsingOldMonoCode()
extern void DefaultProxySectionInternal_GetDefaultProxy_UsingOldMonoCode_mDF9CDB48011A5A47D5272EA9AF0076471CF7A9AE (void);
// 0x000009EF System.Net.IWebProxy System.Net.Configuration.DefaultProxySectionInternal::GetSystemWebProxy()
extern void DefaultProxySectionInternal_GetSystemWebProxy_m9ABFADB05689F062855F819EE28DAAA2DB9A9635 (void);
// 0x000009F0 System.Object System.Net.Configuration.DefaultProxySectionInternal::get_ClassSyncObject()
extern void DefaultProxySectionInternal_get_ClassSyncObject_mAFFFF13CC7BAD16068BC785A5A1F796282C21849 (void);
// 0x000009F1 System.Net.Configuration.DefaultProxySectionInternal System.Net.Configuration.DefaultProxySectionInternal::GetSection()
extern void DefaultProxySectionInternal_GetSection_m421F173465283E26BB1909685236D7640DC3F86F (void);
// 0x000009F2 System.Net.IWebProxy System.Net.Configuration.DefaultProxySectionInternal::get_WebProxy()
extern void DefaultProxySectionInternal_get_WebProxy_m6FEA6EA17D500A3FA8DF7A36EF6A9B5AD142A439 (void);
// 0x000009F3 System.Void System.Net.Configuration.DefaultProxySectionInternal::.ctor()
extern void DefaultProxySectionInternal__ctor_m77BAE40248B233823172ECA9811985D4410B2684 (void);
// 0x000009F4 System.Net.Configuration.SettingsSectionInternal System.Net.Configuration.SettingsSectionInternal::get_Section()
extern void SettingsSectionInternal_get_Section_m08BBD565469D067FFFC6934765D82ACAF758084A (void);
// 0x000009F5 System.Boolean System.Net.Configuration.SettingsSectionInternal::get_Ipv6Enabled()
extern void SettingsSectionInternal_get_Ipv6Enabled_m0105C8B95D00D8D79A809E41A85127B0C9A66701 (void);
// 0x000009F6 System.Void System.Net.Configuration.SettingsSectionInternal::.ctor()
extern void SettingsSectionInternal__ctor_mF3B556F63066A164D09E0890B93FEFA74005743E (void);
// 0x000009F7 System.Void System.Net.Configuration.SettingsSectionInternal::.cctor()
extern void SettingsSectionInternal__cctor_mF0A4C643620935B9E6601C2E95B7B3D0CC63B719 (void);
// 0x000009F8 System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
extern void U3CPrivateImplementationDetailsU3E_ComputeStringHash_mC1B3C29CD4B3FD3AAE2935CEC2E17B9E7BAF1159 (void);
// 0x000009F9 System.Void System.Net.Configuration.BypassElementCollection::.ctor()
extern void BypassElementCollection__ctor_m2047F6046437B6101F59D781474BF71CF5650979 (void);
// 0x000009FA System.Void System.Net.Configuration.ConnectionManagementElementCollection::.ctor()
extern void ConnectionManagementElementCollection__ctor_mFFAEA4E88F5C33B6DA8531C079C852A77FD04A19 (void);
// 0x000009FB System.Void System.Net.Configuration.ConnectionManagementSection::.ctor()
extern void ConnectionManagementSection__ctor_mE885788862A7E2BC030547954BE04682B5685B0F (void);
// 0x000009FC System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::get_Properties()
extern void ConnectionManagementSection_get_Properties_m5F5D4D565489088905ADC68D61267773F96F9419 (void);
// 0x000009FD System.Void System.Net.Configuration.DefaultProxySection::.ctor()
extern void DefaultProxySection__ctor_m63DB700CA7C5B525DEB7B8B524E5836705310AAD (void);
// 0x000009FE System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::get_Properties()
extern void DefaultProxySection_get_Properties_mFA1686FF919D5732D59AACA13AE5D5249D1701DE (void);
// 0x000009FF System.Void System.Net.Configuration.DefaultProxySection::Reset(System.Configuration.ConfigurationElement)
extern void DefaultProxySection_Reset_mF0EA313119B553545063DFE5AF317D83D738D6C2 (void);
// 0x00000A00 System.Void System.Net.Configuration.ProxyElement::.ctor()
extern void ProxyElement__ctor_m6D9B4D4118C0EC9F069E83A6C3DCAA36209DEB75 (void);
// 0x00000A01 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ProxyElement::get_Properties()
extern void ProxyElement_get_Properties_mB7790E9D638EC711E4783ACC846BE1568332E9B2 (void);
// 0x00000A02 System.Void System.Net.Configuration.HttpWebRequestElement::.ctor()
extern void HttpWebRequestElement__ctor_m79DE0820C634F3A5744A12F7C8AF81BF6472A803 (void);
// 0x00000A03 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::get_Properties()
extern void HttpWebRequestElement_get_Properties_m62B55D3B6F5898FC3E0FC3F79AA51B4D64AA7F2A (void);
// 0x00000A04 System.Void System.Net.Configuration.Ipv6Element::.ctor()
extern void Ipv6Element__ctor_m028AE74FB04F381B2B9D34FEB50093224820B173 (void);
// 0x00000A05 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::get_Properties()
extern void Ipv6Element_get_Properties_mD8016B80F04EF4AE6501BD889313DE91D5E00253 (void);
// 0x00000A06 System.Void System.Net.Configuration.NetSectionGroup::.ctor()
extern void NetSectionGroup__ctor_m7AB7B5CA35F2D7C06B047BD0B480AD6F2C067570 (void);
// 0x00000A07 System.Void System.Net.Configuration.SettingsSection::.ctor()
extern void SettingsSection__ctor_m09A6DF12BD56D2C0E0ABA8152004C486B1DE97E3 (void);
// 0x00000A08 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::get_Properties()
extern void SettingsSection_get_Properties_mE5337C4AF39EA0A1B2AEB842CDBB16B8C0C1C4A0 (void);
// 0x00000A09 System.Void System.Net.Configuration.PerformanceCountersElement::.ctor()
extern void PerformanceCountersElement__ctor_mEB598DFD70066C845995EAC5D1BF82698130D2D5 (void);
// 0x00000A0A System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::get_Properties()
extern void PerformanceCountersElement_get_Properties_m8519C030829398320F0A1AA087B41E71884FC168 (void);
// 0x00000A0B System.Void System.Net.Configuration.ServicePointManagerElement::.ctor()
extern void ServicePointManagerElement__ctor_mA04F31D124B40258FE6673A2B7B0F7B2CE787615 (void);
// 0x00000A0C System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::get_Properties()
extern void ServicePointManagerElement_get_Properties_mCB80284E347910A59F7B5A495D5862533E41907A (void);
// 0x00000A0D System.Void System.Net.Configuration.SocketElement::.ctor()
extern void SocketElement__ctor_m5D5BA302FD35A1D25BB3A596954F92AB26C3DEF6 (void);
// 0x00000A0E System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::get_Properties()
extern void SocketElement_get_Properties_m9A46DB832A9DA2A3E8F3B74D83DD96EC8A180984 (void);
// 0x00000A0F System.Void System.Net.Configuration.WebProxyScriptElement::.ctor()
extern void WebProxyScriptElement__ctor_m943D653C6A20D602A9ED7F0D13E0ED41691CC2C2 (void);
// 0x00000A10 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::get_Properties()
extern void WebProxyScriptElement_get_Properties_mD29E00ECE9AAA868495BECD6D88C48BBFE74F26E (void);
// 0x00000A11 System.Void System.Net.Configuration.WebRequestModulesSection::.ctor()
extern void WebRequestModulesSection__ctor_mE9CD09355B8B10829D4B6D2681811DC7F199B8D2 (void);
// 0x00000A12 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::get_Properties()
extern void WebRequestModulesSection_get_Properties_mF7B71DE46486B2AF3D42FB3B877CDBC35B5FFC2E (void);
// 0x00000A13 System.Void System.Net.Configuration.WebRequestModuleElementCollection::.ctor()
extern void WebRequestModuleElementCollection__ctor_mE32DEB8FF2F3E3582D6E9C291B6496BAFD182D3B (void);
// 0x00000A14 System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
extern void DiagnosticsConfigurationHandler__ctor_mCD2A35E58C3715292B4CAC69DCA4DB9FDBCAF8A2 (void);
// 0x00000A15 System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
extern void DiagnosticsConfigurationHandler_Create_m7C5E9A16FBA52442C7C79E67B2C7991FB51D2740 (void);
// 0x00000A16 System.Void Unity.ThrowStub::ThrowNotSupportedException()
extern void ThrowStub_ThrowNotSupportedException_m3BBB5BF36323ACE28882DF34B149C6734507B574 (void);
static Il2CppMethodPointer s_methodPointers[2582] = 
{
	SR_GetString_m60DD6FC6EE29B45330D1A1A35D27061605169AF5,
	SR_GetString_mBCE484542C4DBA5BFBEEDBC4EDBA47DB241E774E,
	SR_GetString_m6A5DA279E5FFB81210609BAD3C4099947C625E54,
	MonoPInvokeCallbackAttribute__ctor_m38A1F94D97EA55DC3B5AEC44EB89A0F266BAFE92,
	CertHelper_AddCertificatesToNativeChain_m01FF59F30DBE0728865ECF561D4F0A17186FC9DA,
	CertHelper_AddCertificateToNativeChain_m9B02240E4BB8AF33B6DE4BF82EBDB7FE7699A5F2,
	Debug_CheckAndThrow_m7936E6C6DB91CE5DA2C88D80D6B06F48997024AF,
	Debug_CheckAndThrow_m7A66A3C29F16FFAE652BD0BBC01B1160CC76EA66,
	UnityTls_GetUnityTlsInterface_mEB1549C22D01D9EFF5163D617DD6C524399C9168,
	UnityTls_get_IsSupported_m056D75A7037671BE51A245A5F87A4DF48E95AC56,
	UnityTls_get_NativeInterface_mB1E9187BB6587A1B6CDDF82B5E08CE253FC84802,
	unitytls_x509verify_callback__ctor_mCD4AE44980D156BAF7B292E03B17CEE73CBFA77A,
	unitytls_x509verify_callback_Invoke_mE05631A7F1E2B1C94DE9D05468D1A399449BE3DB,
	unitytls_x509verify_callback_BeginInvoke_m80B588AC361E881F6B9A6A4CB1249527B5EE2D82,
	unitytls_x509verify_callback_EndInvoke_m4B9E4F34C79F1DB7EEBD8CD901402D21D9897DA5,
	unitytls_tlsctx_write_callback__ctor_m4A3B6C97ADCDE640A6D51BEBF956FE89CE7FE06E,
	unitytls_tlsctx_write_callback_Invoke_mE4D37080BCB02702B715781D34FD5EB30816E87E,
	unitytls_tlsctx_write_callback_BeginInvoke_m56D8E3602D68CCF6F84B1241B4046230ECE9EB17,
	unitytls_tlsctx_write_callback_EndInvoke_mF45640F3BD3B119F178FDDEAC7202B0084762C13,
	unitytls_tlsctx_read_callback__ctor_m42EC0545CBCEE38C403A2AD81C2A951A18536317,
	unitytls_tlsctx_read_callback_Invoke_m10194359ED6B21DAC2865817902E27D036864332,
	unitytls_tlsctx_read_callback_BeginInvoke_m500B1F505ACCCE25672F6C4112379D824CA20B21,
	unitytls_tlsctx_read_callback_EndInvoke_m5F3AE9D02E36D788A768006CF41CE166C3B1029A,
	unitytls_tlsctx_trace_callback__ctor_m5AAAAE3312A549267BC7A177CE9298C31B9FE6CD,
	unitytls_tlsctx_trace_callback_Invoke_m9A667101357751D33683A21B461FA7EF0C8A9B9C,
	unitytls_tlsctx_trace_callback_BeginInvoke_mEA1F9A679A167E7758686CE4B73A60E8D316010F,
	unitytls_tlsctx_trace_callback_EndInvoke_m7B34BE12F355DE949608742051B4F0E047D02487,
	unitytls_tlsctx_certificate_callback__ctor_mE30600E8B0DC15C286BEBDE36DB7CF0A5DC806A3,
	unitytls_tlsctx_certificate_callback_Invoke_m536C2AF2B9CF109A6014DFF45D3691EF04A56919,
	unitytls_tlsctx_certificate_callback_BeginInvoke_m7A678B70786434002434B2C15E17F0E642FC9606,
	unitytls_tlsctx_certificate_callback_EndInvoke_m55CDFC75FB80F60044FFE4FA6939252C2A01FD7B,
	unitytls_tlsctx_x509verify_callback__ctor_mD102129FAC6B05E4B4454B322E0DE2E7BFB16B9F,
	unitytls_tlsctx_x509verify_callback_Invoke_mE24F745E1914200CEB53E4489DA7CD2072B46AEC,
	unitytls_tlsctx_x509verify_callback_BeginInvoke_m96C1493D382DB98D0FDF62000704BA32B7C51F4B,
	unitytls_tlsctx_x509verify_callback_EndInvoke_mC445AA50EA5722909B9D24D543DB945654233729,
	unitytls_interface_struct__ctor_m55B3993F42779B4442042D897FAFEC6C978012AD,
	unitytls_errorstate_create_t__ctor_m502A58FB6B55E6F5A7C23A6D0BA9A57AD5C2FC8E,
	unitytls_errorstate_create_t_Invoke_m6DF09A1CC8C5C38D78CC2E510F318571202E7087,
	unitytls_errorstate_create_t_BeginInvoke_m103F02317D04043A6F17DBA039AC7DE10720F2B4,
	unitytls_errorstate_create_t_EndInvoke_m1129F7E0667ABDE028F644D2F6AE39659501283F,
	unitytls_errorstate_raise_error_t__ctor_mBDF3F1DBB55EBC328D0EE9A14A544A20CD076EBA,
	unitytls_errorstate_raise_error_t_Invoke_mB92B8CF1876FF0C9467C82918E427EBD324D8D8A,
	unitytls_errorstate_raise_error_t_BeginInvoke_mABE9FA2B499289353E0B756509458BB432BFED51,
	unitytls_errorstate_raise_error_t_EndInvoke_mDEBE29AF3E514929895AB7971B159BAB19E4BD5D,
	unitytls_key_get_ref_t__ctor_mE569EA0229BC956FD332E398F4A6ED32902EFBE3,
	unitytls_key_get_ref_t_Invoke_mE487DAB011D7F5966E09A2245399B312C2EF9111,
	unitytls_key_get_ref_t_BeginInvoke_m6E656A4FA9FC8D6BC473D707DAFC17DF861E8A95,
	unitytls_key_get_ref_t_EndInvoke_mBE91A77CA27DE41245B333EA0C8B93EAF0325DE2,
	unitytls_key_parse_der_t__ctor_m6E905C011D2077EE54DA350886C16B2BD1EE7681,
	unitytls_key_parse_der_t_Invoke_m108AFDBB38B2C1AD429E957CD5BEA93D23C152E6,
	unitytls_key_parse_der_t_BeginInvoke_mD0BF42B3B39E50702EC624F2A8596D3017D0F93B,
	unitytls_key_parse_der_t_EndInvoke_mEF249023FA9DD82850CB35FBF5691B44F8023A25,
	unitytls_key_parse_pem_t__ctor_m47E001D14C6F8F11E914B1126DE9516411A2AC06,
	unitytls_key_parse_pem_t_Invoke_mD4D86D5A1C3E8E9BF2BB9CC8774EB3499ED598F4,
	unitytls_key_parse_pem_t_BeginInvoke_m0AA005FBD3649ACA89E06C9664AC4B7BE062FD7B,
	unitytls_key_parse_pem_t_EndInvoke_m564A47C1A42623E189B4792E82B007B65D1BBEF7,
	unitytls_key_free_t__ctor_m0233235C55B3ECFECA16F0A8346E97D6ADDEC040,
	unitytls_key_free_t_Invoke_m4DD025ECA7C3B5020EBF702BC4BAAE8D9B3C807B,
	unitytls_key_free_t_BeginInvoke_m972ED483F0CC8F99724B66019E736094D326EE29,
	unitytls_key_free_t_EndInvoke_m47D280EFAE1EA7E16E6400B2F47A83C408410A24,
	unitytls_x509_export_der_t__ctor_m4514C241AC221F91BBB088FF1DC31B342DCA7397,
	unitytls_x509_export_der_t_Invoke_mFA1224BE85A73019C32C3CB0E8ABD7E5BFEFFA82,
	unitytls_x509_export_der_t_BeginInvoke_m315A20FF03D9FD6B82A9A3997267A4E4B72B8D05,
	unitytls_x509_export_der_t_EndInvoke_m660B809820CF47708B4DB7EBDF618AB34B70242E,
	unitytls_x509list_get_ref_t__ctor_m672FA9C9A5170D460A7D9839E786559819DB8459,
	unitytls_x509list_get_ref_t_Invoke_mFADB5F4BCB29A18DD0BD689EA8180D74CD9E4E63,
	unitytls_x509list_get_ref_t_BeginInvoke_m282E11FB630DFD9FAA07EE42FA460C10AD6A7915,
	unitytls_x509list_get_ref_t_EndInvoke_mF4CA76D68207C44E63DA55C4C4208576998D5AE0,
	unitytls_x509list_get_x509_t__ctor_mE5676A42AAAE07337AB42C51E139736482AD3FCC,
	unitytls_x509list_get_x509_t_Invoke_m58A02DBC5C5C9A0C693DFDE3BEBCE8518C5BEDFE,
	unitytls_x509list_get_x509_t_BeginInvoke_m5B76F36D52C182CFB7B62AA43C3E159E7E7DB468,
	unitytls_x509list_get_x509_t_EndInvoke_m6AFA7951802ED216C9EB13AAA7A5C707F7289F41,
	unitytls_x509list_create_t__ctor_m396CBCF6F413041E9FB829BCF12DBB71160E0CC5,
	unitytls_x509list_create_t_Invoke_m3A52B8B8AC08AA77CEDD34817D2C15209130A1F1,
	unitytls_x509list_create_t_BeginInvoke_m85BD25215C3E215460E132F10110223FED5C7CA2,
	unitytls_x509list_create_t_EndInvoke_m4D70BD363D9EA21E21E73C6705E62955477CB3B0,
	unitytls_x509list_append_t__ctor_m264F31493E6C24EF19C6560237F1DFB0522195C2,
	unitytls_x509list_append_t_Invoke_m85E010BA75CBBCC9B32C8A6C685E4F2CCFB69300,
	unitytls_x509list_append_t_BeginInvoke_m3A87AAC9A120A76CEC99B52A91B43739A74D097F,
	unitytls_x509list_append_t_EndInvoke_m06BB61716750C77C7D19DF3A10628680899382C9,
	unitytls_x509list_append_der_t__ctor_m814A959A92E1D413C2AB5BE0E8920318D52C8F3F,
	unitytls_x509list_append_der_t_Invoke_mA432486D4A73BB7FC4DFE3DD02205FE4C0AB9066,
	unitytls_x509list_append_der_t_BeginInvoke_mFC163657F9DBE3408CE9FBD94C0E0D672099618D,
	unitytls_x509list_append_der_t_EndInvoke_m6002A55859F4C9DCF95DEBADC867E85E33DEF36E,
	unitytls_x509list_free_t__ctor_m360A7960A558BFF26B537EE2717CE4FF60612EBE,
	unitytls_x509list_free_t_Invoke_m5F920A1A43E549E297391F2033A04AF8C05A3C4C,
	unitytls_x509list_free_t_BeginInvoke_m43DF55CE129363751C545897CF317FAD1D7BFA1A,
	unitytls_x509list_free_t_EndInvoke_m2EAAE00B58B3922A632D13E4DFA3DD737D971916,
	unitytls_x509verify_default_ca_t__ctor_m87E8CBD1080B32E3E9B2085435089120EE8E7B51,
	unitytls_x509verify_default_ca_t_Invoke_m22C2DE021D3D750655FFEF54BE2B030596F1A82E,
	unitytls_x509verify_default_ca_t_BeginInvoke_mDD34421A5A03B034EAD940EA3E667E2ACEFF5829,
	unitytls_x509verify_default_ca_t_EndInvoke_m4D26A5425526F6A205596F7AE025620E74173282,
	unitytls_x509verify_explicit_ca_t__ctor_m27337465175BADAB82BFF9333ADA82DCF2DFD2A3,
	unitytls_x509verify_explicit_ca_t_Invoke_m56F009ABDD7ED613CB6AC27AF8CAD6E6FB34555B,
	unitytls_x509verify_explicit_ca_t_BeginInvoke_m83F9DF37B6DCF058C496C26892257C5FE3CAB8F1,
	unitytls_x509verify_explicit_ca_t_EndInvoke_mC69D3C3E3F677940005907387BF6A51758A67968,
	unitytls_tlsctx_create_server_t__ctor_m444E3E5CA424BD6649C48AA2724ECABE25A6ACA7,
	unitytls_tlsctx_create_server_t_Invoke_m9BAA6CD5D7D6646AFC00AFAF4128DF92428F0F44,
	unitytls_tlsctx_create_server_t_BeginInvoke_mB600A87E8909E5FBCA2FC92239A783E345BCB5D7,
	unitytls_tlsctx_create_server_t_EndInvoke_mE0ED7A6AE53A54CF3479E70917D0BB2F8EC2DE3A,
	unitytls_tlsctx_create_client_t__ctor_mBEAE100CA3144364E49C2468343428FE9E19F9B6,
	unitytls_tlsctx_create_client_t_Invoke_m3BABCEA6ED54FD59886B7E8685BD7BDB6145079A,
	unitytls_tlsctx_create_client_t_BeginInvoke_mAF50983B4C1D6DC77B6E7A644872A95E88769D95,
	unitytls_tlsctx_create_client_t_EndInvoke_mFFC92B25698A95310EB56B6C8B82661E75D348C4,
	unitytls_tlsctx_server_require_client_authentication_t__ctor_mA41774A651C25857A72D3694EBDE91E70A408D81,
	unitytls_tlsctx_server_require_client_authentication_t_Invoke_mC8E06902662956294CEC4AFCF8697671E7BA3639,
	unitytls_tlsctx_server_require_client_authentication_t_BeginInvoke_mF93542F5F7DC74FC5042D346C0956E694F4B2479,
	unitytls_tlsctx_server_require_client_authentication_t_EndInvoke_m8F406760E0CA52C53B0C91D7A7862119F10E3B7C,
	unitytls_tlsctx_set_certificate_callback_t__ctor_mDC0A66278594A9B37EFA6FA3010AFD64DC3E81BE,
	unitytls_tlsctx_set_certificate_callback_t_Invoke_m3F334D5FFB2B3C104C1E65A04B044138CE51DFAD,
	unitytls_tlsctx_set_certificate_callback_t_BeginInvoke_m69D89510CE1C44BF29C88E2025C42F1ACD29605C,
	unitytls_tlsctx_set_certificate_callback_t_EndInvoke_mC3508D12AB7792789623E2CFAA028D214200C244,
	unitytls_tlsctx_set_trace_callback_t__ctor_mAA8F0A3B039F2A5DA4EA77F6DDA2573BB5FDA80B,
	unitytls_tlsctx_set_trace_callback_t_Invoke_mFC61F57B75911E4A1B08221AB854D91F5F03D476,
	unitytls_tlsctx_set_trace_callback_t_BeginInvoke_m03FCD2BF1AA2571CC4F2CFF59251EFA20421F156,
	unitytls_tlsctx_set_trace_callback_t_EndInvoke_m07BE3163185F6B3B1D299589E648F7C571D324FE,
	unitytls_tlsctx_set_x509verify_callback_t__ctor_m78790E0190264955C6B51F3ACCAAA2C02FC1CB52,
	unitytls_tlsctx_set_x509verify_callback_t_Invoke_m81E1B51C444B1074314AD55C22EC20E6AD8FA476,
	unitytls_tlsctx_set_x509verify_callback_t_BeginInvoke_mA488C207261DAA26D3D5A81F3549B9B058382DD2,
	unitytls_tlsctx_set_x509verify_callback_t_EndInvoke_m8BDF1F043AA55E4FAA727E67B544440ED316ED18,
	unitytls_tlsctx_set_supported_ciphersuites_t__ctor_m46A364914173C343267CFDC8B61D7DF4197C6448,
	unitytls_tlsctx_set_supported_ciphersuites_t_Invoke_mE7E379E36B2B4719ECF97F375682CD0DBF407F1B,
	unitytls_tlsctx_set_supported_ciphersuites_t_BeginInvoke_m03D9AE30DA07EB020A31669DC158422A593329E9,
	unitytls_tlsctx_set_supported_ciphersuites_t_EndInvoke_mAB41900E507484AD23583DE18E853B9B6145EF4C,
	unitytls_tlsctx_get_ciphersuite_t__ctor_mE7AEF274ACD666FBA2C02F14DA38014EAD75F8E0,
	unitytls_tlsctx_get_ciphersuite_t_Invoke_mDA134EC5BFA53F4985D9D10A8D4ACB971AE6D0A1,
	unitytls_tlsctx_get_ciphersuite_t_BeginInvoke_mA110391B7158B9BDC4F0597317AD70CDF0DF017F,
	unitytls_tlsctx_get_ciphersuite_t_EndInvoke_m9A477430340005FD37AFC45C377F3FBB8F60FF7D,
	unitytls_tlsctx_get_protocol_t__ctor_m42F49F551071AB0F91AB7810C8DC47A2A33F1384,
	unitytls_tlsctx_get_protocol_t_Invoke_m756BD8E367A9BF2872A3A2183366B5C5098A634C,
	unitytls_tlsctx_get_protocol_t_BeginInvoke_mEEAFA0B27A4655BA9729136FBB2A5383151E3169,
	unitytls_tlsctx_get_protocol_t_EndInvoke_mAB8A83B00C32C256F56E255EB9A683AE7924CE94,
	unitytls_tlsctx_process_handshake_t__ctor_m5FCC62940BECF2001364EA925FF543E1F59EBC61,
	unitytls_tlsctx_process_handshake_t_Invoke_mB249F948100B2752B2A6BF79C7F9038523C1C89B,
	unitytls_tlsctx_process_handshake_t_BeginInvoke_m8E4E264B100447C3590366B75F7C79E75D99EAA4,
	unitytls_tlsctx_process_handshake_t_EndInvoke_m3144D076D4C10224C8BFF05671EBDB5F0EFA6FBB,
	unitytls_tlsctx_read_t__ctor_m292F01CA56EC409E7CDA69BE0AA10B19B3E20F4E,
	unitytls_tlsctx_read_t_Invoke_m142B61FBEE88603BE95202B62762E92008324935,
	unitytls_tlsctx_read_t_BeginInvoke_mDE6D1E5ED970FB74D58A7C9D849D5CEF0A80066F,
	unitytls_tlsctx_read_t_EndInvoke_m3BCF50CAB32A1EFADEB497D3A50694C018E285C5,
	unitytls_tlsctx_write_t__ctor_m300C5AEFDFE22C96322EABE38FD2CA962350D96B,
	unitytls_tlsctx_write_t_Invoke_m4365C50B81B1904232514233B8252D15E3059416,
	unitytls_tlsctx_write_t_BeginInvoke_m7DEACE7853FE244D613A77ABEC04AC821B31F503,
	unitytls_tlsctx_write_t_EndInvoke_mE16B80B19C507E3EDF89DA7971AB267BACDC5E86,
	unitytls_tlsctx_notify_close_t__ctor_m9FBFA390FFA5F0E59EF1652BD1F8EC4BB579D787,
	unitytls_tlsctx_notify_close_t_Invoke_m1DF2F894CC7D1DAC1ED86AB643EF4D9482DBDBDD,
	unitytls_tlsctx_notify_close_t_BeginInvoke_m73742B8B1BC173EC206ADC3CA492E3BEED2A67A1,
	unitytls_tlsctx_notify_close_t_EndInvoke_mD5B659727C0CAD54F05D14BD3C1A554907695F1D,
	unitytls_tlsctx_free_t__ctor_mE457D4E43F47148D44E137E6C767DCD036DB34E9,
	unitytls_tlsctx_free_t_Invoke_m54B2D3A510B87650E7AF041CC60A9FF44ECA9437,
	unitytls_tlsctx_free_t_BeginInvoke_m4709DCB59DEDE7C1500CA164F5E304318ACB9025,
	unitytls_tlsctx_free_t_EndInvoke_m016FC930E1F5CD52FF74DD4FB462C9613813F39E,
	unitytls_random_generate_bytes_t__ctor_m55CC9979ADA003BEFF41370469BB0A82DFAC67E8,
	unitytls_random_generate_bytes_t_Invoke_mA5EFE8A5F4D068BEC771CE12BD5BD26F9A86BB84,
	unitytls_random_generate_bytes_t_BeginInvoke_m27BF16ECBD2C66644B2626E3CFC61600491E7194,
	unitytls_random_generate_bytes_t_EndInvoke_m74F081B09F91875EF4AC852F58AAD04BCAC1D205,
	UnityTlsContext__ctor_mC0C9DB6F5662F4076B3C4B21445826FFEB1C72D0,
	UnityTlsContext_ExtractNativeKeyAndChainFromManagedCertificate_mD5CE5AAE708D8F381231A674D62F255E2114F8DE,
	UnityTlsContext_get_IsAuthenticated_m43044D90BF11D30EE6EEB2F4F5FFE470FE7B7231,
	UnityTlsContext_Read_m4B2AC92721AEDAA58680B52E3E6D4EAA5E05FE13,
	UnityTlsContext_Write_mB34B278D4ECAD5F44AF4E9B3BA9CEC68AED19D34,
	UnityTlsContext_Shutdown_m24BD0E633C03B67F07165229426415BE206782B0,
	UnityTlsContext_Dispose_mCD3E2E28B0A68F82020472033B246DA57444FD06,
	UnityTlsContext_StartHandshake_m94C4C84918F93A3107DF9875206181C560C8550F,
	UnityTlsContext_ProcessHandshake_m0B483DA2D4468555E8B7F8FB7EF9DF1A926CC69A,
	UnityTlsContext_FinishHandshake_mB88A2326E0464370EB0938B3204A566816CE1D69,
	UnityTlsContext_WriteCallback_mE11815EF2287F4F9D27C94D0E5414DC1E2BCEFD8,
	UnityTlsContext_WriteCallback_mB052756E2D187C3FCC59F9C90DC574444D88AAE1,
	UnityTlsContext_ReadCallback_m761A4E7B983E40C8D727C2251158F22F762CD419,
	UnityTlsContext_ReadCallback_mE959A9C94E3AB908FD5AE20C21B4CB6FA46DE6FD,
	UnityTlsContext_VerifyCallback_m8367D8479B3FD1AA41D886446279FEE8246F04B2,
	UnityTlsContext_VerifyCallback_m7A39B7F3311262CCC65B615F0B1841AEC3EBD6A2,
	UnityTlsContext_CertificateCallback_mCF0B5C35CA9C47C2FA5438BA3BA603911642333B,
	UnityTlsContext_CertificateCallback_m7E54408ABCE341F31E4470746F9BFE2799B86297,
	UnityTlsConversions_GetMinProtocol_mC0DC0BDE4898BF74374ED61ECC589590FC7476AD,
	UnityTlsConversions_GetMaxProtocol_m0F9734251AD599C97376A8926A88BCEEFC830D15,
	UnityTlsConversions_ConvertProtocolVersion_m0034F4C37220096119219667B4AFA4B3FFE3C115,
	UnityTlsConversions_VerifyResultToAlertDescription_m379EB4CECAABDE50EBE231860E452AF3B793933F,
	UnityTlsConversions_VerifyResultToPolicyErrror_m82132CA7804254909B19D3F789F6903C54A033E2,
	UnityTlsConversions_VerifyResultToChainStatus_mE050899FF417020132E3282BFC6D10FEBB33EE28,
	UnityTlsProvider_get_Name_mDDA55EE63A0B76B6E0E60A8BB24B2796A619C330,
	UnityTlsProvider_get_ID_mB7896E12045D7FF2430DC7F9EAF15D706CB7744F,
	UnityTlsProvider_get_SupportsSslStream_mE4CB1384EF4F9EF0C96410AD2CB8C902F231B3F6,
	UnityTlsProvider_get_SupportsMonoExtensions_m8CA16CD7D8BFEB7520C3FC8AE4991D907E2844EF,
	UnityTlsProvider_get_SupportsConnectionInfo_m9332B1DE0BD3C876B3AE3C6AD0057BC613564CE1,
	UnityTlsProvider_get_SupportsCleanShutdown_mE9DF84BAD50C6616D0263C17CEE3A8145ADEBC8E,
	UnityTlsProvider_get_SupportedProtocols_mF4F9DC4EDA1444E22899C9A97A1DCCDC34C81EF2,
	UnityTlsProvider_CreateSslStream_mDC86FCB0F22309601707CF35B246839919298648,
	UnityTlsProvider_CreateSslStreamInternal_mF1D7EA59B6FD86A48A26BB32EDC4FFE6E3E6E348,
	UnityTlsProvider_ValidateCertificate_mA8A956114D6DA3186D05C8C19CB7032612199332,
	UnityTlsProvider__ctor_m59FD632B779113F9605538F8F598A53D1AC6985B,
	UnityTlsStream__ctor_m729A992C4510BCCEA67907859E15ADD36EFF6A27,
	UnityTlsStream_CreateContext_mA65D6D4D86EA24719CC88E657512544B22F97B75,
	X509ChainImplUnityTls__ctor_mCB15EEDD1B74D120351A35284065CA25A7416BA2,
	X509ChainImplUnityTls_get_IsValid_mA6540F1719A911C99CCEDADECDFAE0024D7AAB1D,
	X509ChainImplUnityTls_get_NativeCertificateChain_mCF317E093A598896E07D14E5F3818BD5AE1D59AB,
	X509ChainImplUnityTls_get_ChainElements_m0D5D46E3941F2DE26FEFAFE94EFC8D83203185D3,
	X509ChainImplUnityTls_set_ChainPolicy_m5F859F385256EDE337043A984EB7A85DDC3A3CBF,
	X509ChainImplUnityTls_AddStatus_m9B56480F6C492FED2C59E8A5AAAA30B74F061E10,
	X509ChainImplUnityTls_Reset_m888604968EB148EA0CB8D6205575BBC5F58F9B63,
	X509ChainImplUnityTls_Dispose_m35AB9FAEC54B7B74DB7C0BFCDEDCD3D7694CF77F,
	CFObject_dlopen_m162A23B60207B39CC4012362A225FD24B659B5B2,
	CFObject_dlsym_m7C3E17F8024611F1F70B6FC9591D9810BB939C5B,
	CFObject_dlclose_m1209433F4B63168DBD89A88557DFBBB05C054412,
	CFObject_GetIndirect_mE2F05D123E2541A835A2AB7E959909270D48334A,
	CFObject_GetCFObjectHandle_m463384D664D4AC01B44EACF8941B7725F4967090,
	CFObject__ctor_m07A15746456C8DD8E6E52905DFE5289178F079FD,
	CFObject_Finalize_m643133D3B8DFAD68EF8A086BE25B3652563FA7C3,
	CFObject_get_Handle_mFE029493BB597D83A2BAC50BC506C8F7819336F7,
	CFObject_set_Handle_m88C2472F18456CC638B63034B489EE76923098C4,
	CFObject_CFRetain_mE2D1F3DB4FC502AFA769F585136588C4E6D8CBCE,
	CFObject_Retain_m0F3DFD2CDD800D9BBF5543F954FD32FB3D71F989,
	CFObject_CFRelease_mCD1D14E9087E57E21E30A862CCA4D7E8225F81B5,
	CFObject_Release_m6B6128DF1AED8B5F9D3B483696C1C49D0BFA7C76,
	CFObject_Dispose_mF350A1FD7D3BA6BE7F0511B5EF9EB9F383940EBC,
	CFObject_Dispose_m87063A0C278026A8E9B40F0FFE8E453A270CF73A,
	CFArray__ctor_mC4C9002848DD6098638622BFDA52BB77E8A021FB,
	CFArray__cctor_m0A7B955A75416455CFB9450481E01BC06584889A,
	CFArray_CFArrayGetCount_m320B0851C60D940FCD90E29D431D509F46BBE3AC,
	CFArray_get_Count_m200F3F3339CF874AE95DE987CB2AC3CFF6D40DE5,
	CFArray_CFArrayGetValueAtIndex_m4093C9E5B7267FBE80B4AB732A2B31E3C3A99E47,
	CFArray_get_Item_m18A8672B778744594ADDB29DFFB96224A686FE7C,
	CFNumber_CFNumberGetValue_m3A4553C868ACAEFF4E34AC24C837EC11CFFFB96C,
	CFNumber_AsInt32_m32194803F0B7FEEE62D596B7EDF5BEFE50B3EE8B,
	CFRange__ctor_m47A3FC3DC70D9A9685171D0A666C21E9522EDC49,
	CFString__ctor_m6FC1151D49252BA6F14027DF6FC09D9ABBEC5140,
	CFString_CFStringCreateWithCharacters_mA4EBC4A6C6E1CA713BC42197F237A6C7A3CB4FF2,
	CFString_Create_m83EFBE783BF1D445A58E2A0EEBE5EB87A3AC2A6B,
	CFString_CFStringGetLength_m32642580B50975703D751793CDBF51DDB32FBA5D,
	CFString_CFStringGetCharactersPtr_m64F0383D7FB2398CDCBEEFB5CAD5420F942B0DB7,
	CFString_CFStringGetCharacters_m3708E189F528838F2C8A1A49AC9D3B5088F22F98,
	CFString_AsString_m90292BFFD1C7C51A157C4CCB6924CFB0BE1C164E,
	CFString_ToString_mC3C3C20058C738903A5A783ED91E0D8A6694D876,
	CFDictionary__cctor_m7CDC709B4E40827C320C689A27070CC57713F5A8,
	CFDictionary__ctor_mE147DDB550455913714118F199EA136AB5FE2F92,
	CFDictionary_CFDictionaryGetValue_m4067D619C714E4322FE968062D943A573BA2B622,
	CFDictionary_GetValue_m947C063E75C13525FD1214A89F23C5B05469891B,
	CFDictionary_get_Item_m53003799E29C3F41B9C51927762F1D5921A5517F,
	CFUrl__ctor_m623159BA6C864641A77B1F59C8F09D4AE364163E,
	CFUrl_CFURLCreateWithString_m40ED9137D94B0864E8F94708307191C6DC306764,
	CFUrl_Create_m043A878A97AE4F64C07A530B0217A3B5F2AE0D25,
	CFRunLoop_CFRunLoopAddSource_m17B4F5A7F466FEC272B9413E97681A19775705AB,
	CFRunLoop_CFRunLoopRemoveSource_mCE402DDB9644FE44C25E59D3B12267E40CB741B0,
	CFRunLoop_CFRunLoopRunInMode_mF4139008B5413F50712C29D687EE69DA0123AE4E,
	CFRunLoop_CFRunLoopGetCurrent_mFC552486E887D2BF018DE3C6D7595661F2CD9B3B,
	CFRunLoop_CFRunLoopStop_mF13BF6E5D2DABDA723DC5C447A046053F3D73FED,
	CFRunLoop__ctor_m9DCFB09DC63118A1A8F61BF6ECACFE71C4B26974,
	CFRunLoop_get_CurrentRunLoop_mB8EAD6DAF214EF1424C249D1A597270698ADED07,
	CFRunLoop_AddSource_m15D6017176B691ABD72806F93C6D5D39FBC42245,
	CFRunLoop_RemoveSource_m9F692D2493BC9B1F1E148C2CDA0C81A68D7D5CFE,
	CFRunLoop_RunInMode_mC4178D0FA7C7CD3F5E89CF17C172811C732FAE8E,
	CFRunLoop_Stop_mA22B6E86795862E3BDE3A80D20C147EA6693076F,
	CFProxy__cctor_m5FF7E5E4D6714ED573AB1AF7EEF0A3D420F2DFB3,
	CFProxy__ctor_m72AC01D0D722DB785752D822053E30566CC7F9F5,
	CFProxy_CFProxyTypeToEnum_m620D71A9F8FC751F3FC5D16D2AA8E77DCFD61173,
	CFProxy_get_AutoConfigurationJavaScript_mE3D0B231DDF768976265EEFDF0CA5DDB124B8061,
	CFProxy_get_AutoConfigurationUrl_mCF8BA92EEDA1D578966BDC3750FFAD7E003F71C9,
	CFProxy_get_HostName_m2859802624D48ADB7150F996DFBF892D008883FC,
	CFProxy_get_Password_m496180D624F5A07E9452D3A784E071BE9A751006,
	CFProxy_get_Port_m63731A205673D95F61F15328B80A453E84189360,
	CFProxy_get_ProxyType_m9E4D8613B5A395CC0A8BDDD35EB01BFEF0EBB85A,
	CFProxy_get_Username_mDFD89DCA9925521628A2DF06656BF15AD4BD487E,
	CFProxySettings__cctor_m9C82546638261EF8FEF331DE93D103AAF492F75F,
	CFProxySettings__ctor_m5D794E284FA54939D08F650AB1F72E773E7E6069,
	CFProxySettings_get_Dictionary_m9D0C3AF7134C56AE377B8403594E5EEDE80B873D,
	CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptSequential_mCCE61204DA25F2EB12E9D2DB81C4FB9F0E4EB66C,
	CFNetwork_CFNetworkExecuteProxyAutoConfigurationURL_m2C19627008A840624F169300B8A8B15E8308531A,
	CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptThread_m0FA50C4A883C268F5271D35B19A155185E4CB0F9,
	CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScript_m4A8476E607D73F7A39EF896805579DF7DA6C215B,
	CFNetwork_CopyProxiesForAutoConfigurationScript_mEFCA55DFB2092787EFC3953F2902F1177CB01C8A,
	CFNetwork_GetProxiesForAutoConfigurationScript_mAFB0CAFB5430D43D579338BDB23ED1D1579B8529,
	CFNetwork_GetProxiesForAutoConfigurationScript_mEF4B6C1622107767DDAD67BBD011D336402BBECB,
	CFNetwork_ExecuteProxyAutoConfigurationURL_m7F793CBFD3E989694815086423730623B48249DE,
	CFNetwork_CFNetworkCopyProxiesForURL_mB3B26B2AE431B7BFB3B409992BC1AC74BB8DF87F,
	CFNetwork_CopyProxiesForURL_m2DF5F3D492E12D525EECB4080712AA5A780F20FD,
	CFNetwork_GetProxiesForURL_m39DED6AAB04D798738164C6227A15E4995776C51,
	CFNetwork_GetProxiesForUri_m132B589C370ACCD156AB18C53040B73AD7D9C2DA,
	CFNetwork_CFNetworkCopySystemProxySettings_m247A4B11E4E556A195354C1FD128103F97133DAA,
	CFNetwork_GetSystemProxySettings_mD47A6DA9BA809B5C2C0210F4C02683F2EF8EC56B,
	CFNetwork_GetDefaultProxy_m8F0C4DDB1F8EE3C6078DF974CBC9E8CB17B80546,
	CFNetwork__cctor_m03FE099AFAF340BF2F70C4646A473C1FAF085118,
	GetProxyData_Dispose_m213CC717483A7B2D24AE3844DC54623E3F491078,
	GetProxyData__ctor_m4EF170D9F1F5318953CE2A71DC027ECE787F8DB5,
	CFProxyAutoConfigurationResultCallback__ctor_mDFCC8D01E93178E2BA5E5CF392FBC96E4DD6CDC7,
	CFProxyAutoConfigurationResultCallback_Invoke_m5DBA4F6E9D115DB335A5833A65B6D8E6C7556B71,
	CFProxyAutoConfigurationResultCallback_BeginInvoke_mDE3B00B8EA39CE1E5DA0DA857DBCDB0F25FE8FDE,
	CFProxyAutoConfigurationResultCallback_EndInvoke_m6DA3B409822D725A5C5E07B9888DDB3BBCFF23F9,
	CFWebProxy__ctor_m4F5F4B6DA0F19F1C071E62625D54C20951EFFCEC,
	CFWebProxy_GetProxyUri_mB61E5F8E1BB2B7CD671ADB04853245E8262BCA5B,
	CFWebProxy_GetProxyUriFromScript_m9836B35263DEF55012308E1D52CD1E92B3E493CA,
	CFWebProxy_ExecuteProxyAutoConfigurationURL_m74995C92D9B761C2D0C45EE88F89276A0FE4B591,
	CFWebProxy_SelectProxy_m89A914F8A607D3CC9558A596BC1B441FBCF994FB,
	CFWebProxy_GetProxy_m6EC2C1590383170DD9387CF85FB5328C780789C4,
	CFWebProxy_IsBypassed_m5F05D7C9302426EF280309DC04EFD106181A6B21,
	U3CU3Ec__DisplayClass13_0__ctor_m0CC4FFF2BBFF2126104AAFAC94D0F6266AA40867,
	U3CU3Ec__DisplayClass13_0_U3CExecuteProxyAutoConfigurationURLU3Eb__0_m760B8D058BD2000E464142609711A90FAA7D71F7,
	BufferOffsetSize_get_EndOffset_m9EED7B6B6EF1F2518A735AF875F88A5E03F0881F,
	BufferOffsetSize_get_Remaining_m2DE18A3119D97C30B3EE54B9C6260030413B089D,
	BufferOffsetSize__ctor_mB7C0B812CB8178BA614001251D5C5905C08029BE,
	BufferOffsetSize_ToString_mFB8CD5C4E6108A0C5B4717CFE1DF3A8E59138771,
	BufferOffsetSize2__ctor_mE4644CFB0D6AC7297E01282C7B898D119E18E8D2,
	BufferOffsetSize2_Reset_mE4DE740467F990ED792FB4966B367091B27BBAB4,
	BufferOffsetSize2_MakeRoom_mBFDBCE08404ECEECBDDB499ED991000ED3A1F35B,
	BufferOffsetSize2_AppendData_m5AFEF21E75273C3BF7FCD4B4433A49D088587F29,
	AsyncProtocolResult_get_UserResult_m1CD0222DFEFC2B0738DF69529AE2C70E21AE54CC,
	AsyncProtocolResult_get_Error_mB3036D4EFA6404019E91C7500B2F52EBBCBB9315,
	AsyncProtocolResult__ctor_mC6F604D2F6820EC29A697EDB00315B5B8D6BF2F5,
	AsyncProtocolResult__ctor_mB7F0640C90963ABD9CC43C118AAB34DD13D5BBA0,
	AsyncProtocolRequest_get_Parent_mA503BE9C5CE0D06A001902DD63B892B8B86275CC,
	AsyncProtocolRequest_get_RunSynchronously_m7733AC14F1950CD534E7CC150E42561B1C839638,
	AsyncProtocolRequest_get_Name_m07178E170DEB686F0F161446E8629B520E1DC168,
	AsyncProtocolRequest_get_UserResult_mC442C9E965AE3D70B0DFECF862583217C20031FF,
	AsyncProtocolRequest_set_UserResult_mD03A2987E4DF573A2BB3425B9474BA6B341F5F01,
	AsyncProtocolRequest__ctor_m5ABB63E835263B21871583924C03A4568EBB67CF,
	AsyncProtocolRequest_RequestRead_mD0C4C34F3D1602E8F138D93D6CF39A1CF89CB25A,
	AsyncProtocolRequest_RequestWrite_m75F0A9A2A611CC2BB267ADE4FF36E98148F413E7,
	AsyncProtocolRequest_StartOperation_m76C636186DB12B80876BF0E860C509E92D8289CC,
	AsyncProtocolRequest_ProcessOperation_m5B89FD2B927FFAB28DCA26EFB4A4AA3922289E6B,
	AsyncProtocolRequest_InnerRead_m965447D1F8015D839DB325E48C1968E88612143B,
	NULL,
	AsyncProtocolRequest_ToString_m69F3FEBD3DE453E4CEC99DB49D1AD99B7AAC4260,
	U3CStartOperationU3Ed__23_MoveNext_m63ACDC7CCB0E43A57BCC0D7BF6D14AADEA88150E,
	U3CStartOperationU3Ed__23_SetStateMachine_m8A586353421C2670E8208AE140ED5DBEDD4122B8,
	U3CProcessOperationU3Ed__24_MoveNext_mB0D2D020C1DE94FFD5D78109BC37802780D26A0D,
	U3CProcessOperationU3Ed__24_SetStateMachine_m19FCCEBF66308F920EF00C2C17E74BC4DE02094D,
	U3CInnerReadU3Ed__25_MoveNext_mE28E22197DC1A6A515E61B7EB9F17F9B41835B6F,
	U3CInnerReadU3Ed__25_SetStateMachine_mFF80981E4C6AB1765979F5A653446A0A081E9BAD,
	AsyncHandshakeRequest__ctor_m884A72725004810175F9D352326910C4EF6C73F6,
	AsyncHandshakeRequest_Run_m8FD00688379160E2E4FAB61C83A5023DC623F7A1,
	AsyncReadOrWriteRequest_get_UserBuffer_m89C0D2E505281A6E13D354DD4310E0E7F940F5EF,
	AsyncReadOrWriteRequest_get_CurrentSize_m35EC8070F5BFAA6BFE94C5D33F3A484F4AA59416,
	AsyncReadOrWriteRequest_set_CurrentSize_m03CB5D968A7AA61350B2C1F8F17319AD6C0E9B89,
	AsyncReadOrWriteRequest__ctor_mB8BE7F0A1951FA42FE17EE113C7BA54D71EFEAFB,
	AsyncReadOrWriteRequest_ToString_mD23C1D8B20669DBBA820AD426B0CB745E96D694B,
	AsyncReadRequest__ctor_m97269914BB6F589C30C0B3580114757CD9BB6D0A,
	AsyncReadRequest_Run_m4C8492D18242E1B7B2D27E61E3E7747F81118632,
	AsyncWriteRequest__ctor_m23D8ED46901F944741CD1EA551CF171421D16416,
	AsyncWriteRequest_Run_mACE37924F3AD1DC8D721789F1A59EF5894B8D3F5,
	ServerCertValidationCallbackWrapper__ctor_mF25EEA31EB05C9C7C7745F9E4B4DB500A5EB7B34,
	ServerCertValidationCallbackWrapper_Invoke_mBDF485AED0434BAE86AF712D014292266AA71C0C,
	ServerCertValidationCallbackWrapper_BeginInvoke_m1C615BE2C9AB52861BF069787D0ECD4C7879913B,
	ServerCertValidationCallbackWrapper_EndInvoke_mB61CE88402A67EA8F3ACDB5EF71355C868BB0813,
	ChainValidationHelper_GetInternalValidator_m43508ED2935C3133D8E3DF74A446BB67980B7958,
	ChainValidationHelper__ctor_m28263F9E95F112572E406F1ECC7FBBE7300A6CB8,
	ChainValidationHelper_DefaultSelectionCallback_m49276FF688CE25C4F5F94232C5CC4D3CE34132D3,
	ChainValidationHelper_get_Settings_m3531570824A98D25FD20B667975B42D72B07CE18,
	ChainValidationHelper_SelectClientCertificate_mF386AA0C4CF842650473CCD90B1BA0D34695130E,
	ChainValidationHelper_ValidateCertificate_mAB6BCD3C37B1ED5CA44B0DA7E3C7FE961D1F7A0C,
	ChainValidationHelper_ValidateChain_mF930C960C8EA0CFEE7AE893486A11AB96CC5A958,
	ChainValidationHelper_ValidateChain_mFB4BC1CD513099E2156178A0F94663FAD1849EB2,
	MobileAuthenticatedStream__ctor_m0D8FB103726E0824BEFD3033D067F7F4EA13EF3B,
	MobileAuthenticatedStream_get_Settings_m12C7E669BE45126A55BADAB2B707BC0F722EB610,
	MobileAuthenticatedStream_get_Provider_mBAD82128219CDFBF15FB864B10C7B0028B3B5293,
	MobileAuthenticatedStream_CheckThrow_mC8397F4398D9B5675EC3DE5612E31C2CECE89080,
	MobileAuthenticatedStream_GetSSPIException_mB537031FBA16D66DA25143AFC929151C153DC51F,
	MobileAuthenticatedStream_GetIOException_mD87AC8EB8C53986E371A40EF467AFC5DE233CA1D,
	MobileAuthenticatedStream_SetException_m5B0A18C66D1431C6EF3A43BFA7964BD376F57896,
	MobileAuthenticatedStream_AuthenticateAsServer_m56439CBBC738DB2BF3524068526D116B3F1647F5,
	MobileAuthenticatedStream_ProcessAuthentication_m178A7A98E02403F5CD941B3C49B580686643E373,
	NULL,
	MobileAuthenticatedStream_BeginRead_m2299EDE0D418F86FF6D7CA812B2DF4F3B07D82DA,
	MobileAuthenticatedStream_EndRead_mF64C5AE2022C2E6E32FBD7DE9CAF6204488F42A8,
	MobileAuthenticatedStream_BeginWrite_m444A84556523CD3607B0C3811B07BF7AD4B6E466,
	MobileAuthenticatedStream_EndWrite_mF32510E6ACF5029C4FFA0084687DBA67780935AD,
	MobileAuthenticatedStream_Read_m91B1888817700E4B4D059CDE6FCD78A3DCAE6C19,
	MobileAuthenticatedStream_Write_m6E0F97F71B3E8EE7F188C2E75AFBFFE3C33C69FB,
	MobileAuthenticatedStream_ReadAsync_m518A7BCD987093B19EB9CAAE57631CB0BAFE0C8F,
	MobileAuthenticatedStream_WriteAsync_m4F9F9B8C926E8B5AACBA1B7DF15638A4055E7AA8,
	MobileAuthenticatedStream_StartOperation_mA2F6EF91539E13CC9FED2888148C9708ED563883,
	MobileAuthenticatedStream_InternalRead_mC430180F8FD5AA589FD7AE5044A89F9B6F1427D8,
	MobileAuthenticatedStream_InternalRead_m86C071DC37153DC3E055BCCD6E932CEB5AA65ED3,
	MobileAuthenticatedStream_InternalWrite_m272A619B00CBE6704AAD300536D176AF4BF4F76F,
	MobileAuthenticatedStream_InternalWrite_mAC3D67F3F2A6BE41320B01433AC26BFAD2063A74,
	MobileAuthenticatedStream_InnerRead_m791585462E4A887702A9BF3650FCBE0BAC98FABF,
	MobileAuthenticatedStream_InnerWrite_m9B4A4FCF793834DCBF434ADFFBC43B4D215EB52F,
	MobileAuthenticatedStream_ProcessHandshake_m49D890591613A8EBE1B80CBDB5056FAF501D1BF5,
	MobileAuthenticatedStream_ProcessRead_m2DA627144AF178A8F0F54F58E6630C2F68202D12,
	MobileAuthenticatedStream_ProcessWrite_m26B164259C3550E33F5CDF2C4CB491CFF3F4C9B9,
	MobileAuthenticatedStream_get_IsAuthenticated_mC3633B71C753DA01E8DBD81BF5298500662ECDDA,
	MobileAuthenticatedStream_Dispose_m26864896490F078C981103A7927BDF91A39B33B7,
	MobileAuthenticatedStream_Flush_m199FE316A80E60239A917644253970986B9E7583,
	MobileAuthenticatedStream_Seek_mE638919C187C89E8EEB4415565A1608C01100265,
	MobileAuthenticatedStream_SetLength_m50ED54093260F90E226AC7964C6A380F6C5C0955,
	MobileAuthenticatedStream_get_CanRead_mD5EE416A9C812C7A5BA93A3F3AC3F4CD3CD7D5E7,
	MobileAuthenticatedStream_get_CanWrite_m6892AB7DA9B4EC279CFC64BABA5BC2F81E26E37F,
	MobileAuthenticatedStream_get_CanSeek_mF4B1F3F83D9B6EE8AF5984CA6911D42AE9181805,
	MobileAuthenticatedStream_get_Length_m26B4552100F40FE8CEF547787BDBACC469528599,
	MobileAuthenticatedStream_get_Position_mBADC7270050681E68FFDABCBB5EEC6D6C0B4171D,
	MobileAuthenticatedStream_set_Position_m34CF317339FC45361ED4CFB074E5F1ADA4EE1FA5,
	MobileAuthenticatedStream__cctor_m4734B1B618B5FE689C1FDC350A69E134CA9BD634,
	MobileAuthenticatedStream_U3CInnerWriteU3Eb__67_0_m63D62194859ED8623C24783D737CA11D06501E97,
	U3CProcessAuthenticationU3Ed__47_MoveNext_mF3762B503551276E4B49F05F7413012DF8D1CC84,
	U3CProcessAuthenticationU3Ed__47_SetStateMachine_mDCBB12DB45E075AC256E54A1DFC35AD4C81912EC,
	U3CStartOperationU3Ed__58_MoveNext_mA92EABD1F8F3CE91103E228A56D16BE2E7C3FA35,
	U3CStartOperationU3Ed__58_SetStateMachine_m6896AA6F76C2DD0A407ADDFB40A574290873FFC8,
	U3CU3Ec__DisplayClass66_0__ctor_mCD2E2BE10E3708147749F093D9757B9B60DB4A85,
	U3CU3Ec__DisplayClass66_0_U3CInnerReadU3Eb__0_mF0041D575CFBB13F3CD792CDAB78B6E018B192BA,
	U3CInnerReadU3Ed__66_MoveNext_m36DB7FB663A6047DA5B34FE62490F230C48DD070,
	U3CInnerReadU3Ed__66_SetStateMachine_m56B57971A776743CEADDCF710EA5777B89642D4D,
	U3CInnerWriteU3Ed__67_MoveNext_m39FA739B0AE2BDF2EF4122C92A31BE2D016CEEF0,
	U3CInnerWriteU3Ed__67_SetStateMachine_m614328656FD99E8FC4FCEE4337F2043634F18D6B,
	MobileTlsContext__ctor_m656F47DCC938252723AFFDAE365DA1CA56A5C95B,
	MobileTlsContext_get_Parent_mA247FA590751030497F9B039ED3543748981EDC3,
	MobileTlsContext_get_Settings_m960574D1AA3C5F8FA078E05662093E419195FF6E,
	NULL,
	MobileTlsContext_get_IsServer_m6BA80FEC5C2FF9BEA15AB24562DAB28E2082361B,
	MobileTlsContext_get_TargetHost_m6054EE6F51F62C51B2479225DF80673B5FA47C42,
	MobileTlsContext_get_ServerName_mDB9D97589ED6FF43DC54F753C4338691DA302B07,
	MobileTlsContext_get_ClientCertificates_mC93FBAF7928EC1E3E1E4A47E99E6863FA8FAFBC6,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MobileTlsContext_ValidateCertificate_m54BB8BC9C5C0703F52BD92F73F32C9E29D7754BC,
	MobileTlsContext_SelectClientCertificate_m0BD84B3C86150115C8141884B98D78C95FA7ABBC,
	MobileTlsContext_Dispose_mDD54934F58E124A19D89712EA3524008E5CAC050,
	MobileTlsContext_Dispose_m8689020FD9EAEF86AA65046E9A8DF23239B9BADD,
	MobileTlsContext_Finalize_m530A5F255410FD4FE9D22182B9F26376C1FB5D55,
	MonoTlsProviderFactory_GetProviderInternal_m7B5217364D955B85B95F50EF271947F721EDFC38,
	MonoTlsProviderFactory_InitializeInternal_mE7081EBE541082D32462434FE7BD3B569D96B0EC,
	MonoTlsProviderFactory_LookupProvider_m550564BE02F6B880427139A7377290C9B99D9F63,
	MonoTlsProviderFactory_InitializeProviderRegistration_mF5C1469EC329E46E775B6C594EC83F84FC81F678,
	MonoTlsProviderFactory_CreateDefaultProviderImpl_m57FEE39A54F9A68C419666C89CE4C08943971233,
	MonoTlsProviderFactory_GetProvider_m464F894E37D5322B5F94EEAAECE25A62C9B7F12C,
	MonoTlsProviderFactory__cctor_m4FFEEFA11353AAE8390E17B93046A60A85BFFDA0,
	MonoTlsStream_get_Request_m5CE0E7D32A482AFFEA41907117E3519B23C92F83,
	MonoTlsStream_set_CertificateValidationFailed_m0CB02DA5133C5B1D5E8CB9794A3BAEC3BDC5E0B9,
	NoReflectionHelper_GetInternalValidator_m95884D0E1A26EE08C6B59E077FFE9AF50FC58B53,
	NoReflectionHelper_GetProvider_m8DE595987714C563BD61F4484406046CDE5246F7,
	SystemCertificateValidator__cctor_m6CE9978D732EB324290EFD3B9548BD4B83D72285,
	SystemCertificateValidator_CreateX509Chain_mC69602AAD344A88C338A3DF8CAE71000D30B6264,
	SystemCertificateValidator_NeedsChain_m7638F13AC43F875790A5782D11D9D2DC073A267E,
	CallbackHelpers_PublicToMono_m128A38962B101EDD3C8248AAA4F07B4C015B2568,
	CallbackHelpers_MonoToPublic_mA9725CCDC76B7ED5BD3988E9E3EBC49DBC69EB02,
	CallbackHelpers_MonoToInternal_m0925AA94D5894632C4147F94C0D5822885FEB1DA,
	U3CU3Ec__DisplayClass0_0__ctor_m6432BE359B16F9AEA43A219271C3D713A37F2C48,
	U3CU3Ec__DisplayClass0_0_U3CPublicToMonoU3Eb__0_m2434134460D6262E13729DBFC73A7979A853A124,
	U3CU3Ec__DisplayClass5_0__ctor_m7807CD991EC4D16395E1278477E3317868E18200,
	U3CU3Ec__DisplayClass5_0_U3CMonoToPublicU3Eb__0_m4103265ECFA6558EE594E7BC847723EB97443018,
	U3CU3Ec__DisplayClass8_0__ctor_mB77347EF574C2C51BBD1A7B1AF673B3D92B056E2,
	U3CU3Ec__DisplayClass8_0_U3CMonoToInternalU3Eb__0_m3AE731A20AB6B949B0584AB838DF089C80602F4C,
	IriHelper_CheckIriUnicodeRange_mB6188E33378F14F14241DF9BEC16504D8913C1DF,
	IriHelper_CheckIriUnicodeRange_mFC301B32EBD30C5039D7FC366221539142925911,
	IriHelper_CheckIsReserved_m7AA6D0211099F95C92B6547A92E24D138178CEF1,
	IriHelper_EscapeUnescapeIri_m846C85843F5A21CA5F152D328243E33C0266DFF5,
	Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA,
	Uri_get_IsUncOrDosPath_mF197920D1C1DBDE10A3478855D89D36210D8CE94,
	Uri_get_IsDosPath_m3374B9D26D6B547862ACB2E617AB6F96CA31A5AF,
	Uri_get_IsUncPath_m1004A84C83F38F40A4AD1334F22BDDE658EF8E99,
	Uri_get_HostType_m6C142BC37D44CF1F53D80627455BC6B1CB747820,
	Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9,
	Uri_get_IsNotAbsoluteUri_m7394FF83375B299BA634518D3104903AFEAE3177,
	Uri_IriParsingStatic_mBC868691E0FEA5CBA45F4BD2A457D3D801C245CE,
	Uri_get_AllowIdn_m4031E81D7D0E44FC81C6951D78B2C836EC8270D7,
	Uri_AllowIdnStatic_mF38FDCA5248AA93F8823A192D61E2180FEC9C41C,
	Uri_IsIntranet_m89BF3C395C8D960B103DF056976B7C369231270C,
	Uri_get_UserDrivenParsing_mF09087D4DE9A0823EBF1FC0C14101335D01393F2,
	Uri_SetUserDrivenParsing_mDF0BFAFE946EAD9122ED2A542132902D7E47FD9C,
	Uri_get_SecuredPathIndex_m0BE7920E94AA002B4CD2D568BD6E0FD91F0D7F0B,
	Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969,
	Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4,
	Uri_StaticNotAny_m4D46ED46C6C293479D37674FE7EEB2266BF362D3,
	Uri_StaticInFact_m9F44BF06099F60002C5D9CE07F72DD74D1404AA0,
	Uri_EnsureUriInfo_m5FA3DF1CD26867815CE1F247A47530E1D7E35F7E,
	Uri_EnsureParseRemaining_m7BC86BEFE07F56D480C9ACBCE64983806F6789BB,
	Uri_EnsureHostString_m47897EC94F83DFE1CA16CE71167DDD3CC986C22A,
	Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C,
	Uri__ctor_m2D669E1153A700F9ED8BA31473565827AF8E39EF,
	Uri__ctor_m0B44AFB01F3FEDE9319BA4556288340D16101F9D,
	Uri_CreateUri_mCAE7D6A4588E2FF4507FF9198B856FD7354DBE0D,
	Uri__ctor_m77D32DF0ABC88A040214913D87A07F2C522CCD18,
	Uri_GetCombinedString_m044AB008E717A0FB16217B83C112AA38C54A409F,
	Uri_GetException_m09A6668C52473C2B01ADB6FC52B1F64C98AA2F2B,
	Uri__ctor_m8AEBDC795304F6C78A02BC41BB4C6BF93C4DE53B,
	Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m42AA79366787600D266604222086BD6BDD28A36A,
	Uri_GetObjectData_mB720AACE3C54C5B104A7DF0658369C7F7914E895,
	Uri_get_AbsolutePath_mB845A99D0CEB442AAF90B24A95EE7509C34C6306,
	Uri_get_PrivateAbsolutePath_mB480D22E4DBE280587D24BCF9A57D3C096C4A833,
	Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA,
	Uri_get_LocalPath_mED5287A7F9ADF1CCBAFD77221135A37C133F067E,
	Uri_get_Authority_m453C817B1681F5FD99431A7FDF6F11CDB9FAC093,
	Uri_get_IsDefaultPort_mFDB9DC42A42C2D8C5ADFE5D590DEEE27D2918271,
	Uri_get_IsFile_mCFA022C6E4641EBD7285A01056B7E201CEFD2C73,
	Uri_get_IsLoopback_m6988313CE348064A6A068347D878DDC51594B710,
	Uri_get_PathAndQuery_m0FFF28F15DF953C5866C2A0DEEA2034ECE6A0F35,
	Uri_get_IsUnc_m74CE69038E37D7F868EF3EFD9DCCD08AA11877CC,
	Uri_get_Host_m05E1D82C4E6B14A2369AEDED218F9089DE336E64,
	Uri_StaticIsFile_mBE7D4186A7745C99605023A9F2299331B356410D,
	Uri_get_InitializeLock_m974D0E7509860787487C6D190475A0941ECC30D9,
	Uri_InitializeUriConfig_m02258702293F27DA769F17433E63799D93005C0B,
	Uri_GetLocalPath_mCEB791B43D5872D4D6230A21E2DFC93166CEDA1B,
	Uri_get_Port_m23A08BF55EC1DC7421B99E6E77544DDF5900099C,
	Uri_get_Query_m5BFB32AA54D9F40585832BCA7F10B3DE3603E9EF,
	Uri_get_Fragment_m1734B2D3F27F38AA342CB65885DE732160501E72,
	Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29,
	Uri_get_OriginalStringSwitched_m405404D361D84E268AED978DCE114F5E43583987,
	Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC,
	Uri_get_DnsSafeHost_m3A22E10619987FC8FED6CEDDCA5D9647AC5B6AC5,
	Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25,
	Uri_get_UserEscaped_m36B234B7081DFE3B3B6D7FCA2F9768C10DDD2807,
	Uri_IsGenDelim_mF469685EA7CA5F907AD5838A4E839F79CF2E6D0C,
	Uri_IsHexDigit_m676840243947DC57375B30552D79F9A312048BA2,
	Uri_FromHex_mA14A33DB60EBA018558CEF8F7EB5B1FBFECFAD8B,
	Uri_GetHashCode_mC0D119822A7E802B29C060B809048C5A1413E818,
	Uri_ToString_m477A204846385EC6FF1DA9043B81B11512C3962E,
	Uri_op_Equality_m4C2BAA8B8318A6C124AE18734B2872A983D5CC91,
	Uri_op_Inequality_m1CFADE0F122D3B996C7B1871646FA1570AF399E5,
	Uri_Equals_mB02B478FE0FB77C8D853B051F798C8D978531C1C,
	Uri_ParseScheme_m39368D56F9846D64F08A9890B7B698B3E6226BCD,
	Uri_ParseMinimal_m47FF7ACAEB543DE87332F9DEA79F92ADC575107F,
	Uri_PrivateParseMinimal_m154A67FFA2FA8E2D9215163B56DF1BB88576A369,
	Uri_PrivateParseMinimalIri_m1A23B409BC4FE17A66599BFE0E0CD62C06D45E2B,
	Uri_CreateUriInfo_mD8864BD45B6397D4C3AED68BA2D3EAEB520DB9E6,
	Uri_CreateHostString_m2C549411869B57ADE6595800B6493BDB0A52F124,
	Uri_CreateHostStringHelper_mF364FD1C0FBD46838557CAA1D35D74DF276F9038,
	Uri_GetHostViaCustomSyntax_mF2DABFE767AB49B8F8E0C9E19937AF900A1E4BC7,
	Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA,
	Uri_GetEscapedParts_m61C2B2B898F8AA8B75AAEC38EF78C340BC1F5A20,
	Uri_GetUnescapedParts_m6F106ECABBBAFA95C3F3CA86F540B9EE0B9D01D4,
	Uri_ReCreateParts_m3D0CD53477FBAB5E8988373B8D749E286399278E,
	Uri_GetUriPartsFromUserString_m81B60C6E31AB8EA51438E391F7990334B96ACD29,
	Uri_ParseRemaining_m8C4350479C64906DDE464595F8BE5F8C14F2038D,
	Uri_ParseSchemeCheckImplicitFile_m54C6CFD37CC5A5C24E502E44AA44112AF7B50BFD,
	Uri_CheckKnownSchemes_m4E564FB55DD6924C057E758C6CEDB54614399B69,
	Uri_CheckSchemeSyntax_m2390F44FEDD9E7489EF8F607B862B6210A9DC404,
	Uri_CheckAuthorityHelper_mC5010AEC19EED1968EDE7CB52C92AC0AC0869503,
	Uri_CheckAuthorityHelperHandleDnsIri_m495861D9EEE706767F37270F316951E292C60B7A,
	Uri_CheckAuthorityHelperHandleAnyHostIri_m25D24DA750D1E2D025C22CF6D2BAD269AB3FA21B,
	Uri_FindEndOfComponent_m82D6E67E45114D23F403807E6D711C2A4E574567,
	Uri_FindEndOfComponent_mFFFB2266B9FDDB757E145586461BF46D26C509C9,
	Uri_CheckCanonical_mFD937A06DC3885481C374ACDD190A3B3E40152F3,
	Uri_GetCanonicalPath_mA187EAD590C890FE0623CF7B1EFF4364B57FAF10,
	Uri_UnescapeOnly_m92D3576A2907919173B7C8528642CA8FBF3E5EFC,
	Uri_Compress_m0AC629D11323C8DF4E6CCEDC31D737FEAA384D0D,
	Uri_CalculateCaseInsensitiveHashCode_m2B4C02B5CBB139510BA6F9BCF1CB21768DA6614C,
	Uri_CombineUri_mC799BAF9A767DCE3A906D27DF1A947D0CB684E54,
	Uri_IsLWS_mAE27963118FD3DA41FEC97493B2D9EFBF46E6C57,
	Uri_IsAsciiLetter_mA7F74C96007004DB0184D149CA03949D5E18E244,
	Uri_IsAsciiLetterOrDigit_mC5604E1B62ED7337C5966CC6AD021DF841C90A83,
	Uri_IsBidiControlCharacter_m7671F6F9F367BD504B78C686233ED322EF5BF10B,
	Uri_StripBidiControlCharacter_mEAACF380CC279ADFF5E318963C82CDABC9DE35C5,
	Uri_CreateThis_m86E72577BCB9A6FDF5A0EC8EDFDD5F41AD3256FC,
	Uri_InitializeUri_m952665E18BE60CFAC5A6025FCD2A0BB9CCB5C567,
	Uri_CheckForConfigLoad_m4AF9D27B5F62A0D4269B23FB3BEF4846E8D0983D,
	Uri_CheckForUnicode_m2A9DB97F3B384DADC1A274C8982404DDE17F6688,
	Uri_CheckForEscapedUnreserved_m5EC5EFE77E30B08708B49086DF72A659454B1A2F,
	Uri_TryCreate_m4E7D41A8B62D8E964E0B73B67CD7A31BF3E65799,
	Uri_GetComponents_mA614A98C35F2E5D924A10A8018A46606AFB6133E,
	Uri_UnescapeDataString_mF503D862AFF8EFDC9394DE8052648DB59E9F96F2,
	Uri_EscapeUnescapeIri_m606A69B7A76A131D0CA6F562E5DC0721C626E071,
	Uri__ctor_m899122920EF2C3DE3E7A620B823D43BDB54D3406,
	Uri_CreateHelper_m7119CDD68462AF01538A0E8010CF9421DA9FD321,
	Uri_ResolveHelper_mA18C06D627E72E81F0848DA4C02CE7675D139CD7,
	Uri_GetRelativeSerializationString_mBCE8CC99C746B18A9DE0B2C6084C5B90A192130D,
	Uri_GetComponentsHelper_mAA39E421157735AAD7D93A187CCCAED5A122C8E8,
	Uri_CreateThisFromUri_mCD4CFC7C223ADB909C634DA7EAE279DCD9BF5C14,
	Uri__cctor_m3F41AF0439E0B4BFD8C7D717DDE2D36A026BC557,
	UriInfo__ctor_m990C9CA368096AFE12B92F3605FAA70EC0C69BB8,
	MoreInfo__ctor_mF8515B2BCCB5E7DC008164794946ADE7ADBCD2BD,
	UriFormatException__ctor_m2B9D2DCA45C6A4C42CAC0DF830E3448E1F67D9DD,
	UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F,
	UriFormatException__ctor_mE91E0D915423F0506A5C6AB2885ECA712669A02D,
	UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m064FAD00616310EEE1CBA5BE4B438F73C9EF489B,
	UriHelper_EscapeString_m86812263CFCDD337B818CC7401499CCC67196147,
	UriHelper_EnsureDestinationSize_m5451D5091068288F6F361EA0BB64A6E5433A99E3,
	UriHelper_UnescapeString_m48AEEA101C2ED671FCC02656AAB8929F0435A591,
	UriHelper_UnescapeString_mFBF6EA6FBC25A465B680157F84CA1307A51EF65B,
	UriHelper_MatchUTF8Sequence_mADC2C714DF505B425E34F2404F600955939A0BE4,
	UriHelper_EscapeAsciiChar_m514B5A9B356DB789631EC00662F65EE43A5B7B97,
	UriHelper_EscapedAscii_m7AC352E3E869E7E5642C973397FA6C2696F9A573,
	UriHelper_IsNotSafeForUnescape_m033CF009114BEB2E119AE37C22DAF1EA04432E78,
	UriHelper_IsReservedUnreservedOrHash_m430460A215A6884D3736D156C0946ED5F8916A18,
	UriHelper_IsUnreserved_m7036DEC07EA1D2204ECB4C1CBCB0E64716AFA50B,
	UriHelper_Is3986Unreserved_m7A17E1EAE5812BCFD4158BF65A75013B3A87E8A8,
	UriHelper__cctor_m6B15F5023455DDBFBBF1FFE533F71F7969CBD223,
	UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80,
	UriParser_get_DefaultPort_m7ECA5BE839D36C7FF854FEA0795D8DE701487D33,
	UriParser_OnNewUri_m44FB81344517268B51B276DF7A9E236C04134ED5,
	UriParser_InitializeAndValidate_mE7C239F559C834F7C156FC21F175023D98E11A45,
	UriParser_Resolve_m031E03AD4141D77F023345D8FB087FA06CEA41C0,
	UriParser_GetComponents_mEF92B7D8CD59B1C8502D195D775D02D2C844FC1B,
	UriParser_get_ShouldUseLegacyV2Quirks_m999F115810F8CD526705FC7FE28DC78348BB6B58,
	UriParser__cctor_m3312BCD8E4C266FCBFAB0998FBC5D8EAD202598D,
	UriParser_get_Flags_mDAA0D828057CA2CA4493FD152D3760E975BAE7F0,
	UriParser_NotAny_m6A42FAC623F0EBDE441782DAC3E3B2ED34756D91,
	UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D,
	UriParser_IsAllSet_m356BD044D8A53560B6A7AA9B81A20A364E015C18,
	UriParser_IsFullMatch_m3967BB43AFB5C11B75DA3BD1CE18B8DAE8F0C32E,
	UriParser__ctor_m9A2C47C1F30EF65ADFBAEB0A569FB972F383825C,
	UriParser_FindOrFetchAsUnknownV1Syntax_m7E42C893EE2F8C29C3BAF9FBDAAEBD707311D63F,
	UriParser_get_IsSimple_m09BA6505FDD1AE0BF6C711AE9C2C3F9379B868F8,
	UriParser_InternalOnNewUri_m0AC629BCCA398E9A193AC16A5E91D445B9B70D79,
	UriParser_InternalValidate_mB845C482B4B01EDFE012DD4C4CEF62C8F4FFE94F,
	UriParser_InternalResolve_m7EF249EAEFB9DDE866F9830E91CC61E09F1548E9,
	UriParser_InternalGetComponents_mAB0A54E462724FA417D0EF3A2AD0BD24BC66DFF8,
	BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA,
	DomainNameHelper_ParseCanonicalName_mA709519F0A1E29FAA3E60D39059E60CEAAD9B503,
	DomainNameHelper_IsValid_mEC6D655592BCCBA29341285C518B6CB1955D5C4C,
	DomainNameHelper_IsValidByIri_m28C53F8ADFE505DC82BF940C5C7718E3175EE798,
	DomainNameHelper_IdnEquivalent_m68FCBA0981064907EAD19342D1EB18D60347E7D1,
	DomainNameHelper_IdnEquivalent_mF90F6C70EDDD7744A622A8A8D8DBA8147B708CC1,
	DomainNameHelper_IsIdnAce_m4527E020EB7F27D6F9329AAA930065740CA895AE,
	DomainNameHelper_IsIdnAce_m7C08B5B6F0AD15FCB707827359D3E1C788B78AC8,
	DomainNameHelper_UnicodeEquivalent_mA16E3E4E5F5F4ABD58F288D655A61AF3457A8F38,
	DomainNameHelper_UnicodeEquivalent_m34C183586CF46D7F8FB3ED34A3DCB205F7EF684E,
	DomainNameHelper_IsASCIILetterOrDigit_m9B8B2BBF76139D354E1EE9C98E37A22D360F1829,
	DomainNameHelper_IsValidDomainLabelCharacter_mC0C76A55C7926731B41BB0390EA6F270146B4873,
	IPv4AddressHelper_ParseCanonicalName_mA2417EA51555DA5053E4B52BEEB7E020235AA6EE,
	IPv4AddressHelper_ParseHostNumber_m692F37F43732F30533E07772167EDBEF183BE00E,
	IPv4AddressHelper_IsValid_mAECBB3F7A7CD2F4BF7553541394E8C1976EA56BF,
	IPv4AddressHelper_IsValidCanonical_mE0B40B0F2A0A12459B2F810B2106C596A8B25B76,
	IPv4AddressHelper_ParseNonCanonical_m52E0023B7E5B939D26D9F0724E15CE4F7515A0F6,
	IPv4AddressHelper_Parse_m750A31F9765760704CA85B87BCD11118FFE20C51,
	IPv4AddressHelper_ParseCanonical_mC43B64CB8FA8C32DE76C5A268FED65F908206642,
	IPv6AddressHelper_ParseCanonicalName_mC503B03E3789401C8ECF2DC00C0F8CE7AEDF6DD5,
	IPv6AddressHelper_CreateCanonicalName_mC4D2285C3C75F324F12D032512587F978C896DBB,
	IPv6AddressHelper_FindCompressionRange_mD237D50AD02FDF745AA24607A9A4912C2E72AC67,
	IPv6AddressHelper_ShouldHaveIpv4Embedded_mE1C08E36D6A3F31AF7A22404F392DBCEC3D5C2A1,
	IPv6AddressHelper_InternalIsValid_m5DCE3337321A00C53961888EA71C3A78F74F3B89,
	IPv6AddressHelper_IsValid_m9FB7DFCDF16172F1399DA2D7F8553909528E2C7F,
	IPv6AddressHelper_IsValidStrict_m27CCDE9F0DDD213D9E2DB927B19D0BFD9D479234,
	IPv6AddressHelper_Parse_mEE8034CEF61D227A11D95A1D386EAFE1C415F35E,
	UncNameHelper_ParseCanonicalName_m223F0202F60AC6F3EFE9A61D9F28EBEBB77BAB86,
	UncNameHelper_IsValid_mFE0F1C598686A9A6280A1ABDA5ED55414DFD0F5F,
	IOAsyncCallback__ctor_mDB00FA0892C32A7922EA6D83F9B99B8BA89B9DD3,
	IOAsyncCallback_Invoke_mA74FD3E451CC9609430B5FBF1B2D25EEBE2F32BC,
	IOAsyncCallback_BeginInvoke_m8143A1DCA75368D887F3FD709BE437367EEF47CF,
	IOAsyncCallback_EndInvoke_m74C12B3991995B2357E2B709F77BF6A40CF16008,
	IOAsyncResult__ctor_mAB5F06CC29315A4C2DE550E5F9967C9F7EC43642,
	IOAsyncResult_Init_m150A44EDC255E27EE3FEB40A1556FD798BBBDAA6,
	IOAsyncResult__ctor_m15A5D72B261B81BE2F8F7DA53FC0E476A3F18591,
	IOAsyncResult_get_AsyncCallback_m28F2ACED98F5AA2F05882EAD17000A26FA3DD5BD,
	IOAsyncResult_get_AsyncState_m4BA9096036268EB3E29A69E75C3E80D995C7E9A4,
	IOAsyncResult_get_AsyncWaitHandle_m8BBC83F5F781EE26F35A122B25331DACEB4E558C,
	IOAsyncResult_get_CompletedSynchronously_m5E49A06643ED2276D2443D4732349973DEFA25B3,
	IOAsyncResult_set_CompletedSynchronously_m4A31A9B8FEFC22E25A8DA81A338A05287487D1D9,
	IOAsyncResult_get_IsCompleted_m22B40C642B779F95E0D4997A336040E89C492291,
	IOAsyncResult_set_IsCompleted_m66D2E977BD61DC754E0AE7C7B9CB630345905183,
	NULL,
	IOSelectorJob__ctor_m8047B29992961582F968FFB25D95662807C44B59,
	IOSelectorJob_System_Threading_IThreadPoolWorkItem_ExecuteWorkItem_m3CF49929004EB3B060E4ED5DB237C109145C9459,
	IOSelectorJob_System_Threading_IThreadPoolWorkItem_MarkAborted_m14D2CEA6CC4C9E471B27035A45F73D3040AF3044,
	IOSelectorJob_MarkDisposed_m59C7B222B7A2C93E838F2515F89A9BFD16CB6435,
	IOSelector_Add_m27D61E1068D6587F2A99B3F2751C87040CCC2157,
	Platform_uname_m02F26556CE32C3C6B69939290C5CD91037E7F596,
	Platform_CheckOS_m420CC4422F29D7C37BC562EECF3DCD99441E4431,
	Platform_get_IsMacOS_m578F96E7F600ACB067A77C168399FA14246CB071,
	UriTypeConverter__ctor_mA17261C142F48B539C7255CC50CA95F730854EAB,
	UriTypeConverter_CanConvert_mA0211689C50AF82982D1A12135FA0CFB8548A392,
	ElapsedEventHandler__ctor_m2B99031158D1FA06EBE73A025249B5C1955441F5,
	ElapsedEventHandler_Invoke_m4D269892FBC3DE224ACE0FAFE97F2304BE8B6502,
	ElapsedEventHandler_BeginInvoke_m49B03DB77CEF0033A832F756E40473AF6B8DFF66,
	ElapsedEventHandler_EndInvoke_m2B52C86D96354EB2F5321672A862EA081ED5F176,
	Timer__ctor_m8CD6E716B068F1BC15FE81D56671AB0A6D347EBD,
	Timer__ctor_m34AD8659F161E420C4349C7ED5B4E54F5516D971,
	Timer_set_AutoReset_mE39B03D4F8032BB39B5D09CBF4A13CE660A16619,
	Timer_get_Enabled_mB4FA1932A26F7AAFDEA0E1C33533305F1AF9ED17,
	Timer_set_Enabled_m03648A71FC47FCE77C7382AED892E09ABE6C034C,
	Timer_CalculateRoundedInterval_m00FF2D1ED01902A4F1DB5AB4A6DFB23EBF7A2407,
	Timer_UpdateTimer_m708B8F81518FA1BF0B047046F102A5B67F92719D,
	Timer_add_Elapsed_m3FDC03401E31156441DE48618493181329C31A1F,
	Timer_remove_Elapsed_m788B169776E02C6BF94629B970115CA4AE6D8569,
	Timer_get_SynchronizingObject_m1E077BDCAC9C362AD952DD7D966D9F8DAD347BC7,
	Timer_Close_m11E3B3DB0ED2E09E67EC10C07FA9646938552392,
	Timer_Dispose_mA3F3E99853D4604113DD2289E1B7C98120E6ABB2,
	Timer_Start_mF5E17482246B10FB111BA69520B84E5FD9F244EF,
	Timer_Stop_m3BEC8E056443E8AC4525023B7CD786C8F1234FF3,
	Timer_MyTimerCallback_m439027CED7BB35E94A00D2E07D58999FBFB0DC78,
	TimersDescriptionAttribute__ctor_m79C886D1E15294CD0ECA0CA84FD0760EC37995DE,
	TimersDescriptionAttribute_get_Description_mB079536EE7888C80B599361A92823A1A4C81977B,
	ElapsedEventArgs__ctor_m011632FEB3E0DD777827925EBD080DF47FD28087,
	Regex__ctor_mEF92EBB8A321ACF8E6D952D4211D447970641A82,
	Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E,
	Regex__ctor_m5BA9C047FEB3C93AD388668FA855CB1A63FB62A4,
	Regex__ctor_m554F01ECFC788141B8015EDE403CFC57DCF65F36,
	Regex__ctor_m6B76356476FAEC104F6088C71C9659B5023AC010,
	Regex_System_Runtime_Serialization_ISerializable_GetObjectData_m2ADC8012FEA27096E98EB9126BBE2553EFBEADDD,
	Regex_ValidateMatchTimeout_m19BB5E905A2AA19DFF54B707454312C249E8EB1C,
	Regex_InitDefaultMatchTimeout_m59F33C35089C47C54703189F8DF4D5600A33F2DC,
	Regex_Escape_mC3330125317F24FD8A08D5320845F89055BB52B7,
	Regex_get_Options_m96441AFDEDDDDC9AD8A21C54C1C05B63581154E2,
	Regex_get_MatchTimeout_mA525D5C25A1DADC3AF1913D6E5FA6D8F0208309A,
	Regex_get_RightToLeft_m14807D1228A43D322B2F7E4D82613ADE0C2DCA77,
	Regex_ToString_m7D4EE035485F8A09613A6A7D171CAB7FE3FA68A1,
	Regex_GroupNameFromNumber_mEC9EA505C734A60A6D10397D5ABB37EED1C244B9,
	Regex_GroupNumberFromName_mC7A0648278EF384E09A1A1731A0703981D0ED14B,
	Regex_IsMatch_mD4663DC55CBEF7B987A8B57186689664EDD047C4,
	Regex_IsMatch_m402142BA0715504CCC15EB3DEC02B24246F0FDAA,
	Regex_IsMatch_m872C1D85AC5BF891AC3C3FC789BBC4E2393FB859,
	Regex_IsMatch_mDDCAABF0AAA48842BD96EE728A7A6732D579DB6D,
	Regex_Match_m172D74CF011CD3C89EA61D47BE7DEA1E689B5C7C,
	Regex_Matches_m87C2C3261D534D232EBF4C723601CEB4389BA5D4,
	Regex_Matches_m02E1BDBF159F02D0B3C32F508FB771940D651F99,
	Regex_Matches_mA3CAFBD1A581E7409F82E96AB033F62A5F305465,
	Regex_Matches_mE1B9FFC45683E3446029B8449C3361CDA2BD1B15,
	Regex_Replace_mCD44330608E58AC19EA636370704ACE7D314C440,
	Regex_Replace_mEF467DF273712918A52245B3147C33898B1B5EB5,
	Regex_Replace_m47C8C4AF6A7F1D1A2728F9ADA7791F4EABA49E2F,
	Regex_Replace_mDCC89468106F966C02DF2A0D7B56B305E95463EE,
	Regex_InitializeReferences_mE235C9E46D78418A5D0C2D20AD885CA08A7963CC,
	Regex_Run_m021AFCB24F51C103A7E8D1D59805B47FD582E3FB,
	Regex_LookupCachedAndUpdate_m803B5B2AB140ACE54596DE9BA6D1F2489B1D93AC,
	Regex_CacheCode_m32FF18EDE0B858DB864C27480A11C5A1F752D419,
	Regex_UseOptionR_m17558F506D3A7513656679A8F3DEEA0C50AAE90A,
	Regex_UseOptionInvariant_m82E216D16CB2DA12B8B8DAA67CC2BE6BF4DF2470,
	Regex__cctor_m8FA16E8BF8000BA6AE0A429945CC4F7C5EFD9FF9,
	CachedCodeEntry__ctor_mFBEEE67EEFD35764488134D428A6BCABE54E52FC,
	ExclusiveReference_Get_mA02D838F3B8772B83AD45D47E8C8275F8EA2A48A,
	ExclusiveReference_Release_m3D5A9BB7FFB13DBB21386F811936EFC6A358C1FC,
	ExclusiveReference__ctor_m67E39E008F143F07C22A8424E051F6798B917089,
	SharedReference_Get_mABBA2F0DE65F82D90AAE425020F14676F313EB68,
	SharedReference_Cache_mA43A19BCE25BC113C767B8C3531B7A096C3B6262,
	SharedReference__ctor_mCD9987FD08CB61180CE190A8DEF05E5AAF5C1087,
	RegexBoyerMoore__ctor_m7CFF1BFAA30CB9EC30B0E48B3321366E2C6EBE92,
	RegexBoyerMoore_MatchPattern_m244689CC527B9B9EFB200E94FCC3C9A8B9210543,
	RegexBoyerMoore_IsMatch_m37FDC206D86DD3C91A745BE15731677FE01F624B,
	RegexBoyerMoore_Scan_m8C2A8FE0B6CFE8C7844AF8F2FEA79532935BAE43,
	RegexBoyerMoore_ToString_m3D7727E2CB60CF2BED7C907CDD2B1584BDF95A5A,
	Capture__ctor_m5FB71B7ADA66B2D3AD6B681BEE846F0FD62F11C3,
	Capture_get_Index_m2CAB876E4DE6099F9696D76176BA7539FA0D5EE7,
	Capture_get_Length_m3D1F26419BF69FEA9EE1AE0DB46069686C53A6DF,
	Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A,
	Capture_ToString_mA44E5E7488551081E648C851ABFFB796430EE5C1,
	Capture_GetOriginalString_mBC838C19CCFF585AA3C797AEA21A51CE0911E8B3,
	Capture_GetLeftSubstring_m514D11C56BC032F7317285FE6E22C522A879E1AA,
	Capture_GetRightSubstring_m5AA1B92DA426764A6919117B3F9FF9416E4D7776,
	Capture__ctor_m72C4D0A93638E338515B280A289285A064F064C1,
	CaptureCollection__ctor_m51AA3D1F3F645DB9A6B9002B7A971F46D0DA0089,
	CaptureCollection_get_SyncRoot_m6E9AD5A5F870020F1F278897056D3FC8B13582FF,
	CaptureCollection_get_IsSynchronized_mC977AFC32D3D3CC4F11F61AD477AB2061705904A,
	CaptureCollection_get_Count_mC83C2AE60F245A995ED192450BB0660E4BFC73DF,
	CaptureCollection_get_Item_m38FB912D78566BF8D926F85ABF06770E70B87E7C,
	CaptureCollection_CopyTo_m9066DD9E35382427D284FF3F9E35BD2C99160108,
	CaptureCollection_GetEnumerator_mE3F6547C20D9A0EEA8C201DE903E1828F2CC6F8C,
	CaptureCollection_GetCapture_m52D3C11680567CEE2196B35A76D75A7FFEBF617A,
	CaptureCollection__ctor_m99E1DDC528A7C23B30B7BD3557C3044CBC7E6043,
	CaptureEnumerator__ctor_mA4C64A5B5D69EA1E38B87E0DCF6CC3B18670A03E,
	CaptureEnumerator_MoveNext_m24B6099142A5DC82DCF5711D2F6FE9252C9603E6,
	CaptureEnumerator_get_Current_m9C74AA50A043E53A02EF56778A97BD3498D312E8,
	CaptureEnumerator_get_Capture_m02F94CD692952EC04026014A1879FB058E9CB0F1,
	CaptureEnumerator_Reset_m8513DDF2EFB58C87469D6159F825DD162A60AA14,
	RegexCharClass__cctor_m218BCDD65D4FE46615654F47FAF4C9B2970BE1B9,
	RegexCharClass__ctor_m70685392EB3C5808958E20C99E045F33E21C8192,
	RegexCharClass__ctor_m1751FAC691E10689BB486E5525B3D19F9523C5DB,
	RegexCharClass_get_CanMerge_mE5B4778068AA81EB1B7D426C48EF0C5CFEA0021B,
	RegexCharClass_set_Negate_mC3CA41B098CF6B47BBF9101619F1AC4EAA3FD131,
	RegexCharClass_AddChar_mDDCFF2A0510737DEAE68DEE7E1359AA7F07D0609,
	RegexCharClass_AddCharClass_m1E139F8FDC0E1A33E143A3A413255F6D521F7EB8,
	RegexCharClass_AddSet_mEE9EBABD3A66153DE53095A2ADD9AAE04F908DC6,
	RegexCharClass_AddSubtraction_m1FEE4A4FA29196BF22FBDD7EF3A263010E7661D9,
	RegexCharClass_AddRange_mD9FB543DC3B128104DBCFEA0B2E672E8A8669C5A,
	RegexCharClass_AddCategoryFromName_m53A239A7DACD3D5A676505E6E296C4AB999BBA4C,
	RegexCharClass_AddCategory_m75BF8C842C362F4D910FCB2BA59678BB71153C24,
	RegexCharClass_AddLowercase_m4FAE0AB13B3DB076F711B6B06C2E61F40A115B40,
	RegexCharClass_AddLowercaseRange_m0715BCBBB26E5000E2F87CC555DFFD1EF97414B1,
	RegexCharClass_AddWord_m977499503E6B5EB99106DF69247EBE65DDE301D9,
	RegexCharClass_AddSpace_mA542E2916FEB49051A7AA0490704466DA85326BD,
	RegexCharClass_AddDigit_m7B6D6AA1D10B8D29D004D94FC26F9CA53B3306D7,
	RegexCharClass_SingletonChar_m287352E084BDC6F832C03E5D0B11417E6CAB272A,
	RegexCharClass_IsMergeable_m9E85A3FD3138B8A6F49DD90B48B8BB0F6B5A465A,
	RegexCharClass_IsEmpty_m9D3193CCDCCD224C399FDE450DA72AF2E4FF8DF8,
	RegexCharClass_IsSingleton_m23C6087CC66E79952EDBE19176814AB87CAB7E1E,
	RegexCharClass_IsSingletonInverse_mC94D851A51FFD4DB90BFD7ADFA9545EA81A96307,
	RegexCharClass_IsSubtraction_m442D7EB160CC33766FA9365B1BC0B705BB9C328B,
	RegexCharClass_IsNegated_m44BA8DC6E87254581A644FC420A31FBB7DF5E09E,
	RegexCharClass_IsECMAWordChar_mCA8AA9207304F384138565DDE5D73C771F4D958D,
	RegexCharClass_IsWordChar_m197106A86C557CC422DFD4B274D6703250941C8E,
	RegexCharClass_CharInClass_mBF20B9E1805FA10D4F807E7C185C5ACC45CA62D9,
	RegexCharClass_CharInClassRecursive_mC6D3AC73C05863813119E511F0D948F771E7010D,
	RegexCharClass_CharInClassInternal_m6BBDF7CB36ADDEB42D06E72FDBED23A0AF9430C4,
	RegexCharClass_CharInCategory_m348268E60F423E6ACC9D3BEB62781F88B3D51310,
	RegexCharClass_CharInCategoryGroup_mE9288352C87A9BE8258AB76C0D4F4D6FEF470367,
	RegexCharClass_NegateCategory_m072F53A0339D3A8CE4E78305ED63514C2D677D23,
	RegexCharClass_Parse_mB1B505BEBEFA212048DAA271B315B5AAC7EB3002,
	RegexCharClass_ParseRecursive_m6B44210D734A59140B5DC06D0EBBE1D2D5072E0A,
	RegexCharClass_RangeCount_mDA7393449D38496B2598E7EF912AADF9A14842DF,
	RegexCharClass_ToStringClass_mFC6754E97F014AFE4B5138AD5386E9C76D1D3CD7,
	RegexCharClass_GetRangeAt_m92D3897D77D2AD15415BA0DE4E8FB4FBBFFD092C,
	RegexCharClass_Canonicalize_mFD09C33130AD6323D1AFA7944B02DD68A5731A66,
	RegexCharClass_SetFromProperty_mCE940B1239E86E18385BC053D40EA74DB6E444DF,
	LowerCaseMapping__ctor_m0236442CB5098331DEAE7CACFCAC42741945D3E8,
	SingleRangeComparer_Compare_m54BB5AFA11BF2F18A0C2F9491CE48E409D64AD3E,
	SingleRangeComparer__ctor_mCEFF5ECE77E53783E5B8EAC98A5E194B6C743E73,
	SingleRange__ctor_m886247FFB10501E4CDDC575B221D8CD1BC85E3B6,
	RegexCode__ctor_mEFC64ECB52D0D2735F99AC16BD6355D3A59499CE,
	RegexCode_OpcodeBacktracks_mCBEBDD502268A02F7BB9846369C3E2435368C5F3,
	RegexFCD_FirstChars_m63F666A528F1A007228C498E6171D05034863108,
	RegexFCD_Prefix_m6C6A6E2E08A2481AB6428293EA6D13CC9A792A4B,
	RegexFCD_Anchors_m7E51BE740C271CE73D07F392C6A8F0D2AC13B0DB,
	RegexFCD_AnchorFromType_mF141C4E77ADA1F5E2961088C52C01C397B1A1381,
	RegexFCD__ctor_m81A680DE9EE0A7D9CB3F0245E4B584033ED7C299,
	RegexFCD_PushInt_m2C075ABCE35D8B5F3AE842D0A79BEBBDF53E79E6,
	RegexFCD_IntIsEmpty_m4CFF914DAAAF04747FD11B2740D47CD4A41F7321,
	RegexFCD_PopInt_m15845F98455FA8320FCC484AD15CE5A55B43EA14,
	RegexFCD_PushFC_mC4174F9014750978ADB35B3E45DE43D740070B92,
	RegexFCD_FCIsEmpty_m3FFF61F7B0567B2B1ABA23377742A6D0AC9DF016,
	RegexFCD_PopFC_mE67FE0664971894C6935632FD634207784EAE43F,
	RegexFCD_TopFC_mC9A10E7061B6283532AF800971B26A7660036AF6,
	RegexFCD_RegexFCFromRegexTree_m280F32208540ABB3B88FBA4BC3F7FE6A7E02DA40,
	RegexFCD_SkipChild_mE3F09E85EC04B345584A4268DDE28029B1493ABD,
	RegexFCD_CalculateFC_m11BAAB103351C64BA06B41B999C2BAD670E3579F,
	RegexFC__ctor_mA39AF7098BC1D63C19E316121CC854AACBE4CB59,
	RegexFC__ctor_mA9779C6F7E4B0B76041B34DF40F2B6DBA82761E2,
	RegexFC__ctor_m8693359483B2128560FC374872CFC1382A0605B2,
	RegexFC_AddFC_m515C7808755FE89185D85B3C39184C2425B44629,
	RegexFC_GetFirstChars_mA929BEEE9D6186588C518891EB8CB416C31060FC,
	RegexFC_IsCaseInsensitive_m522494DC3CF0587D7B65D57B4C14E1428A2E34CA,
	RegexPrefix__ctor_mC34F48A63A8A04942930B9FE236636E2AA745B24,
	RegexPrefix_get_Prefix_m6806C1EEE5B8973606B320A9C4CD5A9E91466F34,
	RegexPrefix_get_CaseInsensitive_mB4CF8FBFABE26F206AF6324A0C87DFB34C051A95,
	RegexPrefix_get_Empty_m53283D80646B03BD2D0D2871226D6BC451B8CB01,
	RegexPrefix__cctor_m778851BD52EE0907A873BDF7B700BC9A536E8332,
	Group__ctor_m5FE82FDB5B4EE244EB46909ACC099806555EB32F,
	Group_get_Success_m917CA7077102642C3C24106F13B9F5F5D5130C1B,
	Group_get_Captures_mA6B7E2F62B90C44E74CC65F37A78FD1CFA1C06EF,
	Group__cctor_m5050F4FF6F99CD7AAEB74F9962BEED4B387CB72D,
	Group__ctor_m2EEFD01EAA4B135ED614049B00261D0736EF8107,
	GroupCollection__ctor_m7DC940E706407EAE4AC45F297F021CD11F26CF6A,
	GroupCollection_get_SyncRoot_m9D32B2F5AE2C8968E660B524D678B806C79763E0,
	GroupCollection_get_IsSynchronized_m05B4F9773FBA0A24E9F851FC590ACF60F9DA0FAB,
	GroupCollection_get_Count_mAECC6108C576E7C3F0F6B8E0F9F0D5B742467A43,
	GroupCollection_get_Item_mC96099D0350BD4846B66097F31D6B4DDDFE1CA97,
	GroupCollection_get_Item_m58F451BF6490EB64CA9C1A05844A790967166A6D,
	GroupCollection_GetGroup_m8824F1E25823F06F2B060E64152E8AC3B8300236,
	GroupCollection_GetGroupImpl_mA161F33BBD5BC291025BAAD97458E02422B76348,
	GroupCollection_CopyTo_mEBB026E2CE653D4797B1F3441D3CA1AF2FE4A06E,
	GroupCollection_GetEnumerator_m2FA24AD194C005DEE73F1D16874A479728813DA9,
	GroupCollection__ctor_m0E2105EC5E4078F03D98853239AC10219BFAE78B,
	GroupEnumerator__ctor_mFE577B10768A029DBC40A368D8A48B8F1D5479B2,
	GroupEnumerator_MoveNext_m1A95E15B99089341CC06EC0335B4444B43074D82,
	GroupEnumerator_get_Current_m3DBEB28D71BCD80F013B392B8FB3FEC88A372206,
	GroupEnumerator_get_Capture_mA37A878E91115550F8F08147CE2CB6A30EBF602D,
	GroupEnumerator_Reset_mCC8BAEE9E46DB67F36E1F4A49A38E87A8FEE8C22,
	RegexInterpreter__ctor_m58E5C9B14F78D108FC9277924C4A5DCC73AE832A,
	RegexInterpreter_InitTrackCount_mF85CD3AACD0F8EFFF2D54ECE67DFA073503D978E,
	RegexInterpreter_Advance_mC3549A945557AD11D80890E0DCBC6D53860A97FE,
	RegexInterpreter_Advance_m47537FC4AB2CB92D2D9100C755D936DED76B03EE,
	RegexInterpreter_Goto_mAB873EAF14CC58B684C91137D6E8817EB47FAB48,
	RegexInterpreter_Textto_m874B113DFF6381DFC1BF8A8F7E6D79B819CF06AE,
	RegexInterpreter_Trackto_m00A652840F4C1B3FE74527A910FB6BDE144F4CD2,
	RegexInterpreter_Textstart_m635CAE9587982E8C88F98F7374460E742A7F5953,
	RegexInterpreter_Textpos_mCCC8ABAE83D37BA6F060242E1ECAC7D91D8910F5,
	RegexInterpreter_Trackpos_mDA7F7A3B4A02FC45B46AF1FD47778E0C0C9A5F64,
	RegexInterpreter_TrackPush_mBE985076C7632B82D188C6484BD6C7980C392379,
	RegexInterpreter_TrackPush_m2DA2DB51ACD26004F4FB8B8D80EEC20D4AA14C49,
	RegexInterpreter_TrackPush_m874CB8F853DD4EB0FAD4A2DEF9CC2EAC3DD5BA5E,
	RegexInterpreter_TrackPush_mEF674B57E2A8FC7E555803DE53EEE076EC0E5E75,
	RegexInterpreter_TrackPush2_m490912B4D5B2E19FA2739EA0211FA91DA6423634,
	RegexInterpreter_TrackPush2_m5B36C2B678F621B4BCF26D038E5AE40A55BC5884,
	RegexInterpreter_Backtrack_m30590074E633FAA50401BC2EFA74F6D6FF5371DA,
	RegexInterpreter_SetOperator_m6F39391186CA54646ABAF1A8D3584533261E6A3F,
	RegexInterpreter_TrackPop_m8E31A4201CD48C0888BE0DB6EB317036E7E7C4D8,
	RegexInterpreter_TrackPop_mBE47D7E983B6BD0C45F7F376AA0272B0827AB4E4,
	RegexInterpreter_TrackPeek_mFB63C0E3D25EEEEC1DBD5FF5601E59C6F0414396,
	RegexInterpreter_TrackPeek_m946313A941F42F58C555593B8CD2C00E702400AB,
	RegexInterpreter_StackPush_m488F7B4FABE6E66EF8D28F070303C7B344A9217F,
	RegexInterpreter_StackPush_m46ADD790ADB62A6FFFC56ACC93A5BFB11578A45B,
	RegexInterpreter_StackPop_m28CD98B18B8010F9398FAB5A1C0CB3E220FB0A13,
	RegexInterpreter_StackPop_m1DBCCF39146C4C13FEBABCF7139CDAF89AB339ED,
	RegexInterpreter_StackPeek_mE0B2D861B2A747936538EC83EDEBDC8C6424E3D0,
	RegexInterpreter_StackPeek_mFA8013A28365F539B9083C906BEB80008AE281A0,
	RegexInterpreter_Operator_m9C06EB53FFBB6722B2ACB95057BC30E0A9F05DFF,
	RegexInterpreter_Operand_mB8AED0E2B8222A584A61D313DE9AB475724F50A0,
	RegexInterpreter_Leftchars_mB50E0C06B5C05F48BBA69D21BFB6382705C696C4,
	RegexInterpreter_Rightchars_m2DEB5D856E0BEC8CFE39B2546B504CB2FCC1DC2C,
	RegexInterpreter_Bump_m45DF8CEBA6E19FE27E10A87C89E5B2001FB37E85,
	RegexInterpreter_Forwardchars_mFD54A946FE00B2613D92F1CCAE7B53CDB4312420,
	RegexInterpreter_Forwardcharnext_m39C5E9B8B3EDC556CE6A61C1957ACFD5F8ED025E,
	RegexInterpreter_Stringmatch_m81EA1913981000A8D944B5DA757813058F0F4ABD,
	RegexInterpreter_Refmatch_m5F44A3C001E919895A5A2988F16187069E45D75B,
	RegexInterpreter_Backwardnext_m68F8015F83EA7DEBBDB6405A6EF9092E814D88EC,
	RegexInterpreter_CharAt_mBC8ABA0BE4AC926938A4A4F6DEFB89437AEC3F6E,
	RegexInterpreter_FindFirstChar_m3112B4D64BF317FBEC9CD8DAE429A4199A3F6A93,
	RegexInterpreter_Go_m32838D966B426A327995246847A272491F3359F2,
	Match_get_Empty_m9A41D555DBBAA2134C3A722D16FB985E715FE31F,
	Match__ctor_mB01F9576125C09E5DFAD425523FF0C0FF16000A5,
	Match_Reset_m6C8293B576685831F43AACF255D2DAC5898662DB,
	Match_get_Groups_m4FB7AAC1E08BF8710992FA9C07A8357115EFE6D2,
	Match_NextMatch_m6C6550D7A4885CADF936BF856E0BDE28FAD77A63,
	Match_GroupToStringImpl_mD4E730B7A61C21307E0047CD541968871B361067,
	Match_LastGroupToStringImpl_mA8B7094C2B4A31D5ABBDCF575302E6731A2D3E05,
	Match_AddMatch_m5B128123CBA71A35E471CFF1AAE1013A7722DFA2,
	Match_BalanceMatch_mF04DF97CE9E41B8A85C54212B43B5DF381218BE5,
	Match_RemoveMatch_mF21E3166D8D461D44952E96C9CD7CFA8E776EA5F,
	Match_IsMatched_m1491C04ADB99BCB81D84BC5D85C31B4F45965C3C,
	Match_MatchIndex_mFDD766CF18E4F508DEE3E2E24F6046DE66D1B808,
	Match_MatchLength_m9D6E7D98CC4B2EBE26070D3A8D88428B515D417A,
	Match_Tidy_mA9C76513AF185747A5F9E73790701ABD3D2B09A4,
	Match__cctor_m7256E63C1A15FF54906616D058557E92802FBA95,
	Match__ctor_mC2AE5A1EBC553A0E6BBA59603674183FF5E80CCC,
	MatchSparse__ctor_mA6CA132A5DA7D9ADED1D0FF1D7AD786109D33624,
	MatchSparse_get_Groups_mAF4486FB3D52F65427B855B5F410192543B99DB3,
	MatchCollection__ctor_mB2FA3F30789018215F0D4C5FFF00379F5415AC37,
	MatchCollection_GetMatch_m7C693363C6B2100ED58BD5B85C3CCCE1D858E342,
	MatchCollection_get_Count_m1476DA408DBD9D6EAD231F2AF1320E0990CF287D,
	MatchCollection_get_SyncRoot_m5E339388E782280CC9BBED40986AA360CA5BCDCC,
	MatchCollection_get_IsSynchronized_m7A91B1D2CA86E9CF46615BAEE642BD04637BE5DB,
	MatchCollection_get_Item_mF9C9E9247F1F04D8CEC0E14AC4BA3CEEAC1A2A8A,
	MatchCollection_CopyTo_mD72903F019CA31813B8A842A18CA4761484CFB21,
	MatchCollection_GetEnumerator_mB4DEC015B69A67D38E6F7E14D63C64047BDCF76F,
	MatchCollection__cctor_mE9CB46F2626FF50D3337193BB55A1B6C0BFC44BC,
	MatchCollection__ctor_mA95FE66298AA5AE593EE40B3A7ED76F1011829C1,
	MatchEnumerator__ctor_mAC068C23A5E2366435764453E8E80C8B5803AD31,
	MatchEnumerator_MoveNext_m1088424FEAD89A2693A0CF9200041A5C5B9DC052,
	MatchEnumerator_get_Current_m2FB7B386869A6C4F5EC5327603EF79E8135BDEC1,
	MatchEnumerator_Reset_m70B97522C32C01A38648D591B8BA3A8990186311,
	RegexMatchTimeoutException__ctor_m157F8CEF5FDAC71E58B04773B3169BA093423866,
	RegexMatchTimeoutException__ctor_mC0DB6ADBF5008FD1DF623CE94E68C9F1BB875DF9,
	RegexMatchTimeoutException__ctor_mA31059F9B50F01A0C9BEF9081CC22B0C0C332F6E,
	RegexMatchTimeoutException_System_Runtime_Serialization_ISerializable_GetObjectData_m32865670AB86CF7F44CBA24B649C5FC3035B6609,
	RegexMatchTimeoutException_Init_m6D59100CBBC91F436D6878CDF3AC18BD86DC2787,
	RegexMatchTimeoutException_Init_mA320EBB663A318B596D95349F5F0DE92623D5C1C,
	RegexNode__ctor_mD8966EDCD7AA48AC8AAD5B156C513671843F6D49,
	RegexNode__ctor_m2E85CE2AB0812A86EE61448DEACBA68E329D3325,
	RegexNode__ctor_m5A3AA31155A359CC8462AF0AB55DE0D5B7C435B4,
	RegexNode__ctor_mD4B2FB6044880AC4DDF035FFE6254A13807A34BC,
	RegexNode__ctor_m0E000C0421213F15341C9B74C3ADA8F4963CA511,
	RegexNode_UseOptionR_mBD8EBE8396F51A7DA491FFFAFDB09A148F62E484,
	RegexNode_ReverseLeft_m8507E98BFA6C9F78200B8297811C3EE815724A19,
	RegexNode_MakeRep_m23A10A13942B83BDF596DE595718B9BD701E8A60,
	RegexNode_Reduce_m2EAE287E7E9FE547B38FEC40BE3E316920B53471,
	RegexNode_StripEnation_m1DF9C3A86A4B73CCE7F86C2D121DCACED3DCC4C7,
	RegexNode_ReduceGroup_m3067AEB5BDEF6951832CB84B2F4857848E898236,
	RegexNode_ReduceRep_mA3BDCA09CFB2DFB083CF9BEA7E9A64DB27F6B94E,
	RegexNode_ReduceSet_m0B5361189FC2E71384DA9A107969CB401FD6ED01,
	RegexNode_ReduceAlternation_m08295B9D7A82E1D1CB97B716C068F7D740C2E18F,
	RegexNode_ReduceConcatenation_mFE1E6366025CB9A114C275B74193CF62BC0AF903,
	RegexNode_MakeQuantifier_mB84818E8D93FEB4AE45E224C09EE46BE238ECD20,
	RegexNode_AddChild_mD5F9848916D55A0DF36CE5460D149E1024005C85,
	RegexNode_Child_mAE38F2EF7289FE455686B7BEEF81C39A9D25E960,
	RegexNode_ChildCount_m15D92C9740BA92B2E78B392F7215B8D7D0242172,
	RegexNode_Type_m3C72321B307C77AF12F294F366D57D2C77832F27,
	RegexParser_Parse_mCBCAFB2D38EC68B245352E8DE699FE0F3C973A60,
	RegexParser_ParseReplacement_mCA7BD2139851BCD09934067473195341E2F19E1F,
	RegexParser_Escape_m2FECFE2501B55F7AF6B1FAE4AD8A59806545ED09,
	RegexParser__ctor_m9058798A864D0200A16F15E995B6B9AA8A189E58,
	RegexParser_SetPattern_mA620864CAC4211AE79F80DF9F19B2A40863E9DBE,
	RegexParser_Reset_m1D0DAF8942A2A980D3944600893CEF969053F2EE,
	RegexParser_ScanRegex_mE0EF23CF2A462063119E2D5046512A1960A11718,
	RegexParser_ScanReplacement_mB61772A7FA7B76D522BFA9639F96962EE197747A,
	RegexParser_ScanCharClass_mD4A465FEDA75BF5820D5B0C9A95EAEA3D99DB831,
	RegexParser_ScanCharClass_mADFDEFF75B3C880E692ED8411B7154CF3130401E,
	RegexParser_ScanGroupOpen_m1DE2AA1EFA786C58869EF4025705449871F33D59,
	RegexParser_ScanBlank_m2ACFA5BAF5FA14554D74C5DE4FE3893483D6F33D,
	RegexParser_ScanBackslash_m2598C224286A4826DEB2D1189CCB73C9A363DFBD,
	RegexParser_ScanBasicBackslash_m3DAD88630B04CE794414919D65F325197CB15C3D,
	RegexParser_ScanDollar_mA9E832CADC410B1ECBF303405F955980903D2DAC,
	RegexParser_ScanCapname_mC34B52A5BDE9DB0AB0A9691F52D45D0B7D4AD377,
	RegexParser_ScanOctal_m7767731DCDBED3AFE2CF6A24D4A6E7FB448062F6,
	RegexParser_ScanDecimal_mC7374D132F506C5D7EEB868C32C4959B1C672017,
	RegexParser_ScanHex_m273E9DA24C7455F701730E65B90DAA5C0D0210C2,
	RegexParser_HexDigit_mA37CD4C4844C9EB9B2568F092A34A2FBFDA7F3BA,
	RegexParser_ScanControl_m9EC29A03B8B1C8323D3E67F0D43F7A5960FFD816,
	RegexParser_IsOnlyTopOption_m7C4B2E37C797EEB8C5878365C25EDE72E2EBE404,
	RegexParser_ScanOptions_mE9C5126433FD0A2576B402A07941114AB468D79F,
	RegexParser_ScanCharEscape_m7A3FDDAF73AB029CB6EA7BB8058E3FD2AEDD63D6,
	RegexParser_ParseProperty_m32F8C5F94C55BFF814FBAD3189A25F3CAB76B3C3,
	RegexParser_TypeFromCode_m9B5F0CD85CECC83F17C2A37B5A0A396478A668B8,
	RegexParser_OptionFromCode_m6AC76995E0F827E63BC01EBF0D2C767B08D096CF,
	RegexParser_CountCaptures_mE1F7E2BFAE6D599A2F71D217A078B385A9408700,
	RegexParser_NoteCaptureSlot_m0A4A75BC5BB740A63EE0D41BDBB25A1FADFBF53C,
	RegexParser_NoteCaptureName_m8673E32280A278603401C24BFCD7C65F42881FA8,
	RegexParser_NoteCaptures_m8281BB827D68F1A4E2A30C5A5189E72A92FE6F78,
	RegexParser_AssignNameSlots_m7478C18338D1440B8422BD849CCF1E3C33169EDB,
	RegexParser_CaptureSlotFromName_mF8279E16DB2733EE3712214CFC57DA3D48BD717B,
	RegexParser_IsCaptureSlot_mE462763928C28561B761AFCE14D30C6A31CD1C15,
	RegexParser_IsCaptureName_mF09CBBD2AEAD4D1BAAE4E4E803C3F4916DBA479D,
	RegexParser_UseOptionN_m9B82FA2012348674AC4E62205FE205CF2DB0ED35,
	RegexParser_UseOptionI_m46AAF2DBCC08EE8F3E8ECA1A5E37160C4E5C7B04,
	RegexParser_UseOptionM_mBCB459C99D9BD541A68ADF86C1FD437169A8352E,
	RegexParser_UseOptionS_m079D720F7300CEEBB4800B8CB5F7DE450E00FC6D,
	RegexParser_UseOptionX_m7944C5C44AEAA4D69ABA991320A6B960F8EEC284,
	RegexParser_UseOptionE_m442360F28425CC127273FA1B10737E2AB3A70762,
	RegexParser_IsSpecial_m4A1E4E74B35C055B7D6A3B0DD5BF0441EFE7D49A,
	RegexParser_IsStopperX_m1809A5DE319FEF8B59B1A2D6370ED7FD394851A1,
	RegexParser_IsQuantifier_m4A22A38BD961AE0E4055CCD9226C4A292562502D,
	RegexParser_IsTrueQuantifier_m190312723B9D3A48FA41FED5A4DC5D9C055EB627,
	RegexParser_IsSpace_m84BC9FE11F2A587EBB48D4C88DEC96D20B51300D,
	RegexParser_IsMetachar_mE2F7FC38020D8F2BB03FB3AD5D880B654FD9D345,
	RegexParser_AddConcatenate_m308E5EB5C42CF795225A0FDBACCF647B57BE425B,
	RegexParser_PushGroup_m30EE1A2FFE88FBA12DB8B4D929F6122D8001EAF9,
	RegexParser_PopGroup_m461057BFDD1D1CFD70CF3DFE70693E429FCF0FA9,
	RegexParser_EmptyStack_mCDC440C4B29CD14F4A0D9D6E3BE105869F246E2E,
	RegexParser_StartGroup_m715D16765A3808F41A0DDFB46AE99F7982BA9E87,
	RegexParser_AddAlternate_m2C8BA28D8A58FB9CA6FE75F9D5875BF748305AB0,
	RegexParser_AddConcatenate_m1B223D215058DA19724BD379C2BC0557EA24B48A,
	RegexParser_AddConcatenate_m47774C08F0EF3E4B83BD52C777019D63BE718AE6,
	RegexParser_Unit_m88B751E79E4DE41D295805439EE6D1D5B7170D7F,
	RegexParser_AddUnitOne_mDEC722E078B3E61126F56718AF7FED159C616CDC,
	RegexParser_AddUnitNotone_m14CA5BBABCE627507923A6BE373BEC032167801F,
	RegexParser_AddUnitSet_mF7CEA4892737145E04E8ECD6DCD3B2A8F809C58B,
	RegexParser_AddUnitNode_m84299A7BCF95B87B5B4672759DE2D8D863FA80E2,
	RegexParser_AddUnitType_m39738056CFFB37E7036AF626829033D6052E6FD8,
	RegexParser_AddGroup_m3771097F1B4F1F6AA10104D28B663026F7B7326F,
	RegexParser_PushOptions_mC0047ADAB396BC1643AA63B2C395F09FCBE726BC,
	RegexParser_PopOptions_m186A6537DA0481481E59C5BED015B577508271C7,
	RegexParser_EmptyOptionsStack_m9B5B4501C296662175648E458F9EAAADEE3A2B44,
	RegexParser_PopKeepOptions_mBCC70CBFDC2A6DD07FE090D4E546B6AEA5644500,
	RegexParser_MakeException_mA573DC3F94B98F328A9B87673A2CF8A15120DEB1,
	RegexParser_Textpos_m5A18C75CE7F3A5AE17373DA09A20070D988308C5,
	RegexParser_Textto_mE4BCC8608BF006D283A32F9C5811264467EEB806,
	RegexParser_MoveRightGetChar_mE98852DD0B33AE818B01A7CC7A9C301C2226F81C,
	RegexParser_MoveRight_mE4C6D41AFE3F585C0B8E7CD0AF3CF4DBA8791AB4,
	RegexParser_MoveRight_m905DCF65EF6BA6736100751DE932753BC99B8D68,
	RegexParser_MoveLeft_mBE0128B08B61C1306954528C799F2F1F1B803391,
	RegexParser_CharAt_mEA865F2B6DC4EF1B81F8D80ABF989F395BEC0B84,
	RegexParser_RightChar_mA977C61B98B8BB88C2A66AEBBFDA6826C58ED66A,
	RegexParser_RightChar_mE6728D67C4F9FE227ECD6BED46FFC94518EAD9B4,
	RegexParser_CharsRight_m808A213FCB975D42C6E6270E7A0FAEB1E496B07A,
	RegexParser__cctor_mF7A4882AF6E6DD795EC9073B52D729D099632D19,
	RegexReplacement__ctor_mAF9D6E1EBA04EE087CA7E2525BFC1537E8B60836,
	RegexReplacement_ReplacementImpl_mC760289E275859F64DAC5EFE3E03D406762534E6,
	RegexReplacement_ReplacementImplRTL_m71F89242E5770437D6996723BED015BA05DD74A0,
	RegexReplacement_get_Pattern_m15AB0E06009DB144BE40253F76F4C09D1AA865BA,
	RegexReplacement_Replace_mE66A1F2D387B2ABA21E0BCEEA2DEA9BAEDEDCC60,
	RegexRunner__ctor_m6925516B4C16AC95CFAAFCCDB5CFEAD505B7920B,
	RegexRunner_Scan_m2ADEF871B8873041D1224B4FE362BD4A943AC536,
	RegexRunner_StartTimeoutWatch_m22AE778FF5C52047138151B3A61B118DC6E9B685,
	RegexRunner_CheckTimeout_mBE5718B5085C46A4B1B9498DE83B7C4D22E4C27C,
	RegexRunner_DoCheckTimeout_mFA5F588F7FA54123CFDFF4C26562E05DADFB675F,
	NULL,
	NULL,
	NULL,
	RegexRunner_InitMatch_mAB83B2D2F56A1E5438AA6AF68F175F4E0DFE6346,
	RegexRunner_TidyMatch_mC554804E829E5C96600A9FF3C0855FD1A48FE4FA,
	RegexRunner_EnsureStorage_mA28C2C957E9C94A1EB89424D837A87114E38325E,
	RegexRunner_IsBoundary_mBC555EC9574974908A1B0CEA3D1853D54BD10D62,
	RegexRunner_IsECMABoundary_m151787CEE018DB6D42182AF4464485CDC4CEAFAB,
	RegexRunner_DoubleTrack_m4C316CA544695119D1DC025CD7C7E2E754F23A62,
	RegexRunner_DoubleStack_m6D5CD187C3C40D33AD36764202D810D3C354CB4B,
	RegexRunner_DoubleCrawl_m562BC4766311883EF65FC3BC69C7555EF5C6A3D0,
	RegexRunner_Crawl_mC989F917E324EBE03B0DBECC42531C9ADBF0C742,
	RegexRunner_Popcrawl_mE325EFA925EE9D80AF98FD04ACE7050A9D4F8C21,
	RegexRunner_Crawlpos_mBFE7A9D83990B8CF829D66CD088414F96A03B49F,
	RegexRunner_Capture_mAC8B534A534941D5003730CA28B41F4082CF45C0,
	RegexRunner_TransferCapture_mBD3BA00B949753D1C0A142776C4EF3796DBC627B,
	RegexRunner_Uncapture_mAEA536C22A1DD0BCE123A04A4BCFD1A8BE8D1F7B,
	RegexRunner_IsMatched_mCC5330346DACE22EAA86DD072CD36752023C66E9,
	RegexRunner_MatchIndex_m9FBD010C648C8BBD087FFF4C470FE82494A72ACB,
	RegexRunner_MatchLength_mE1EFA365EAA84B7CDC515A4DEC99CF6D8581A1E8,
	NULL,
	RegexTree__ctor_m71E8231B91BF289104B933268B2CEF0AA02CF092,
	RegexWriter_Write_m14AFCCD08A706F09258DB3758B3C78F04B87929E,
	RegexWriter__ctor_mC1384070ECBCB1A54E56F5460388E7C4CDC5856A,
	RegexWriter_PushInt_m82B0216AFF641DE9547BE17FA115C2CED44A840C,
	RegexWriter_EmptyStack_mE95F9FABB37AB87D28C240E3A9306BD6F188B00B,
	RegexWriter_PopInt_mB767C9611DB654060F684D5E09231CAEFFDF7551,
	RegexWriter_CurPos_m771D864668683B9DCF98150DBAEEBE17703C2E5D,
	RegexWriter_PatchJump_m99AEA835C283697F20D7F9CC16E6371BF681B70B,
	RegexWriter_Emit_m0F2DFD7C6ED8AB199B3E8845A02A09F295A00E54,
	RegexWriter_Emit_mDCE0A2DF541B5FC6554C965A1C799ADCF6B4C55F,
	RegexWriter_Emit_m9360B7E84BA94A432C3C9AB5427A30D81E0B2739,
	RegexWriter_StringCode_m10DB52A16488268DF01C52E8163E899FA568FBC9,
	RegexWriter_MakeException_mD2A13E8F5A67D36CAEE67D74C35A5D2B35111C26,
	RegexWriter_MapCapnum_mEF8C8E6F9916122D0FAE18A7B560F65738D004E6,
	RegexWriter_RegexCodeFromRegexTree_mB8946AD1D077152C85D0D32CDABC5FBE37C80A80,
	RegexWriter_EmitFragment_m7692CDAFDAC6BE7D8BB2DD1EC225B6456047DE0B,
	Stopwatch_GetTimestamp_m8BDD632ACE5FF704F108290DC1864032B9B1C0BF,
	Stopwatch_StartNew_mF95D6B5C76012FE9D25753BB28E776972AC3F05E,
	Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7,
	Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6,
	Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5,
	Stopwatch_get_ElapsedTicks_mEA2271BCCE37E6615EFC0B377D33C9DB63CA09E8,
	Stopwatch_Reset_m79B1D65568465AE5B1A68EF3A2A65218590ABD14,
	Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE,
	Stopwatch__cctor_m83EC9C206940254F92A0E270B4E48348DA7C1062,
	ExcludeFromCodeCoverageAttribute__ctor_mC4864A7299B691B672E31F543BEFD61DEB7C2832,
	ArrayConverter__ctor_m3B1E6D184D835FE896DE2E83F2F5C9410E745F93,
	BooleanConverter__ctor_m9F0A8757BAD0E551843A5A6FCC3366842A6C6D2C,
	BrowsableAttribute__ctor_m67F6E4C4B28C23E90D4C0527D1BA41555D1B0DDE,
	BrowsableAttribute_get_Browsable_mEAD0188E3748DDB36677CC3F523B001145FE1288,
	BrowsableAttribute_Equals_mC10C854D4D59E13FDF9DB3CF45FC08F213BABF05,
	BrowsableAttribute_GetHashCode_mBDD907C2D06C6BD998999FE77F6A621DE620F308,
	BrowsableAttribute__cctor_mB8B4350843F9B541B602DB2FE3E232DD45A00361,
	CategoryAttribute__ctor_m0E9177ECFA96BBB3A2716039CB4A9F2E2149E706,
	CategoryAttribute_get_Category_m02F82210B41F101E8745B7994C1169802D8D0E39,
	CategoryAttribute_Equals_m044A2C25BA905793AC32FF56B71ACC3D9E5919E3,
	CategoryAttribute_GetHashCode_m97FE93C13D77F55B642C14CF200206655EC445CF,
	CategoryAttribute_GetLocalizedString_m05A2661BFCDD8951D57FA3A2B4C76B482893FC02,
	CollectionConverter__ctor_mA6E78367ED2C94B1B80B6E3314AB4854D275613F,
	Component_Finalize_mDBE707310C79EAC9D78A1A6B8CBC58B1D85FFD6C,
	Component_get_CanRaiseEvents_m5C347D156A4E54A1DB24C045FDD43E74B66E4295,
	Component_get_CanRaiseEventsInternal_mF1CE3CBC6ECADC117635E96EA0A7316AC8361C12,
	Component_Dispose_mC05DA7EBB2CA50E4854BED0FC992770E81771593,
	Component_Dispose_m41A6868E474C0937E68618E171C8169ECE2A9347,
	Component_GetService_mD7AC529C9E9E316E058150D360F2EF94644614F8,
	Component_get_DesignMode_m734BA2B9442EB0294B051D6DECC56272135EA36C,
	Component_ToString_m281811936682E090CB59313B17FDD92D21C6A0DF,
	Component__ctor_m840837E8F38EF7547938BF0E23F7D5847B8C4F48,
	Component__cctor_mBA66CB61DF5297C3A9C98865469935605A42E4F7,
	ComponentConverter__ctor_mDD36736AF6F3957D4E50C9F87959838DEE128D9D,
	DecimalConverter__ctor_m4E225E243DED7F45B5176296A297D668FBA7FC4C,
	DefaultEventAttribute__ctor_mA045F88D2A5062B94A1EC75281D843826FEA26CD,
	DefaultEventAttribute_get_Name_m11E61BAB620E1340BDD23F2098AD8A2B212C788F,
	DefaultEventAttribute_Equals_m077B138A0812DE6905B5EA81B102738D26271BFA,
	DefaultEventAttribute_GetHashCode_mC64256EB07720846B232CC270F2683D244730037,
	DefaultEventAttribute__cctor_m107EE26A46C36F3DC2DB4051484072C0ABC0ACAF,
	DefaultPropertyAttribute__ctor_mEBD1AB6A6D4DEC77344B2FBF0DD8AD68BDE605E7,
	DefaultPropertyAttribute_get_Name_mDF5CFECE56F9957F683545D2B8C9DE560EF4EA7E,
	DefaultPropertyAttribute_Equals_m777E989ED27C0AF576BA026C482C74DD9467F295,
	DefaultPropertyAttribute_GetHashCode_m8FC07D3C6C6B3DD78CBEF22A1AFB8F909F6B76EC,
	DefaultPropertyAttribute__cctor_m28F873F1872729D7D93A4E0865604DE995A3BF58,
	DefaultValueAttribute__ctor_m78FFD0C313E546C33C761F79E544E6FA5ADCB4D0,
	DefaultValueAttribute__ctor_m65DBADCDC3A7BBD4AA6871023D36B91FC1772ADF,
	DefaultValueAttribute_get_Value_m5430873D9E44294065E1F6FCDC3B425A0011CCBA,
	DefaultValueAttribute_Equals_mD25A5203F3679D9D6B2216769E933FEA95972B13,
	DefaultValueAttribute_GetHashCode_mC5D187012FD8EA385F0A5D3946B20C9A8CEEA5D9,
	DescriptionAttribute__ctor_m0E146E17D89AF14C7390CA02D1725CA5114E2A40,
	DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E,
	DescriptionAttribute_get_Description_m0FA1D4D963B0CC6430641650EAFC0A28EF5D7567,
	DescriptionAttribute_get_DescriptionValue_mC1DBBA2D084E17E4062C81318C1D5D5295E4C97C,
	DescriptionAttribute_set_DescriptionValue_m7690BF55F40A7C26BBDF62BEBC2728EC9A16A91B,
	DescriptionAttribute_Equals_m07C0B8787F3D42DDB8E726E4658705AAF19D0E0F,
	DescriptionAttribute_GetHashCode_m6C0A71F2ED2EBE6A2846DC87E3FD8CEBBABD4CE9,
	DescriptionAttribute__cctor_mFE44BD593B03A490156C91DF97854A08A4D1AB05,
	DesignTimeVisibleAttribute__ctor_m5FEE8039EADC36835B17FC69C6F9302D98D17B3F,
	DesignTimeVisibleAttribute_get_Visible_mEDEAE4216F7BBE283BAB2F714D23691E909766B5,
	DesignTimeVisibleAttribute_Equals_m5EE5DF6FF3122FD7415C18192AB0F72E173FC334,
	DesignTimeVisibleAttribute_GetHashCode_m517CECA16068CA5B18C14D3FADCCB0F594243E56,
	DesignTimeVisibleAttribute__cctor_m24A5997203245ABA97D12C948AC3A3212B6C701F,
	DesignerAttribute__ctor_mB3667C64A5316ADF52C89FD6C11896A74D3F12FC,
	DesignerAttribute_Equals_m0A794D27ACBFF6C7D4E99F0A8A9F22B9DB10E0CA,
	DesignerAttribute_GetHashCode_m17B9DAB29926C21682434E9A77E31651B9BDD80D,
	DesignerCategoryAttribute__ctor_m56E7C4D9708E648D47D4A9EA65AFF2A597039FF4,
	DesignerCategoryAttribute__ctor_m60F54A81AA457206EA8336100BF1CB0FC2817EF3,
	DesignerCategoryAttribute_Equals_m8032A91A1B7406D5D3497BDCBA94341706A0A113,
	DesignerCategoryAttribute_GetHashCode_m97577A9BBB14BCF5045EF0ED1A7DCD19BE591DEF,
	DesignerCategoryAttribute__cctor_mDF88D82AD77F5A36F8840725ED6EF775991CC162,
	DesignerSerializationVisibilityAttribute__ctor_mAEEE7613ABFC1F58770FA563450E24976E4CEB49,
	DesignerSerializationVisibilityAttribute_get_Visibility_m8BF8E684ABAB85A14343D269EF8EFC493D17F49E,
	DesignerSerializationVisibilityAttribute_Equals_m4604EDC514EE6CB9C907A9556BA93B8374CBCF8E,
	DesignerSerializationVisibilityAttribute_GetHashCode_m50CE561D387EC4F63493C70FD9D57C58AF29737A,
	DesignerSerializationVisibilityAttribute__cctor_m8A8D658E4037EF2FB2D901090C08BFC9C4E059E3,
	DisplayNameAttribute__ctor_m7704A0296C35314F464640AD079794A8D2D5CFA3,
	DisplayNameAttribute__ctor_m44CB3F48C86138F3E381AF9FE560B959DD73E845,
	DisplayNameAttribute_get_DisplayName_mDF5FA07C8671BE6969CB4F1BF212CD7A03359F4F,
	DisplayNameAttribute_get_DisplayNameValue_m8A787A996D7C752C9F79E3724A5A39EAF94A9F48,
	DisplayNameAttribute_Equals_m11D68B64FB208336B9F91FDC4FFA93B51290539B,
	DisplayNameAttribute_GetHashCode_mF0C77356C5E1C5B6836A9E15BE9009CB6397B25A,
	DisplayNameAttribute__cctor_mB28475EB5D6C98D3D0796496A57B359A56051044,
	DoubleConverter__ctor_mBACD8291617A72E36D9E161918D86D1714F68E85,
	EditorBrowsableAttribute__ctor_mC77290C5157BDA154F1D03BD1551223B07A851D4,
	EditorBrowsableAttribute_Equals_m79C775014595BC1A2B15301D3F5A27AE17EF8230,
	EditorBrowsableAttribute_GetHashCode_mFC4240C87EB67E54729CA999187AE8AA0041B0EC,
	EnumConverter__ctor_m2A61E754D52D9A89E479DD3F23AE49B839F6E613,
	EventHandlerList_get_Item_mC9E8B2F3D48DB323CA19FB87B2DBB7240AE03334,
	EventHandlerList_Find_m0D055017D24E6BE23466BFC8392A49CE1695499E,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Int16Converter__ctor_m4F4E6E68FBDBC778F893D30D9A63F3086D0C87FD,
	Int32Converter__ctor_m3A8A43E94E6267B6978193DA829E2F84189F03B1,
	Int64Converter__ctor_m50555C51D87CC6D5E48252B0356968B0F457C3B7,
	InvalidEnumArgumentException__ctor_m2F90ECAD9B02CAA483C6D5CE2951210DF2960942,
	InvalidEnumArgumentException__ctor_m9F82770D492E88AD5D679EE8A52400E5993CD2C9,
	InvalidEnumArgumentException__ctor_mAE5068B990F9D8AD596FE95B591CA6441048D25E,
	InvalidEnumArgumentException__ctor_mD66B8D9407ABD1314AAC88CDDD9F73CC4FAED3A1,
	PropertyChangedEventArgs__ctor_m6E395F75E8DBD0CFDF38DA0AAAF9B593CB1163CD,
	PropertyChangedEventHandler__ctor_m09E1DEFF4AE926B1D9EECA15D8BFF32E41EEF307,
	PropertyChangedEventHandler_Invoke_m12B212E1A923C9C0541719CA5365B8DCF0044837,
	PropertyChangedEventHandler_BeginInvoke_m39ADB5AED85097C8579FFCB0F2C3299983BF089B,
	PropertyChangedEventHandler_EndInvoke_m342E010F7B159A3F7BD35CCA3E59D7D32A66F973,
	ReferenceConverter__ctor_m2BF20339AD66B73F51C54F05BCD4C6229CECA08B,
	ReferenceConverter__cctor_mEB60FFBED545D08DC2EF96EC1982D64566961806,
	SingleConverter__ctor_m497283A0BDBBBE713A71C8A2E4A89D2B58627365,
	StringConverter__ctor_m078D8E99B4F9B0F2EF7A2D3857A6F044B7A16118,
	TimeSpanConverter__ctor_m8CCA5F7E15DAB96C97CF600394E637A9876AFB83,
	TypeConverter__ctor_mCD87E569A2C4CB1331A069396FFA98E65726A16C,
	TypeConverterAttribute__ctor_m23863863F742A02AA8914FB5527AFBC15DCAFA8A,
	TypeConverterAttribute__ctor_mE0B270E39E657178B253AB6F56FCA24E644868F4,
	TypeConverterAttribute_get_ConverterTypeName_m699652BD16C42823BE283EA769647F676122EB6B,
	TypeConverterAttribute_Equals_mED3025C0A24E6809AA6E31FE5F498D18558584FB,
	TypeConverterAttribute_GetHashCode_mFBABA9E1D19DC64BAAF3C9D0F1B82E42B5F66769,
	TypeConverterAttribute__cctor_m326E14273BE20A6BEF921C2C326EE5ABFE89D9C3,
	Win32Exception__ctor_m0DCDDC4BEF1DCC24190F7AAE8BB309FB5A8A9474,
	Win32Exception__ctor_mF8FAD9681BA8B2EFBD1EDA7C690764FF60E85A6F,
	Win32Exception__ctor_mC836B11093135ABE3B7F402DCD0564E58B8CDA02,
	Win32Exception__ctor_m712FC6079EE6F92FAB0B3DDAFD652B24FF163CC6,
	Win32Exception_get_NativeErrorCode_m15E3962B1D49FBA685728CB83758C6A3AF6F93E9,
	Win32Exception_GetObjectData_mFB1F75CC318DB1FA595ECA5466F331AEC686BB07,
	Win32Exception_GetErrorMessage_mDC9E7FFB79375D315529475B7CB31CC9359028AE,
	Win32Exception_InitializeErrorMessages_m982FBC4AE608A6F0C4DE31266AC699A4CA21141C,
	Win32Exception_InitializeErrorMessages1_m752D604DD07B403536022D9309D57110628CE95E,
	Win32Exception__cctor_m568A08FB0C09BA8B3EAAC9A30EBE8151C6956718,
	BaseNumberConverter__ctor_m18967D5B511402093936893A249438FB94D5BDA3,
	NULL,
	RootDesignerSerializerAttribute__ctor_m2EA1453B85C10A3D2CFDB7F9802EB5525350B211,
	AuthenticationException__ctor_mCD04EFFAE657FB7E895429E7EA6DCBDF76947E6C,
	AuthenticationException__ctor_mA0752219534B87AA44CA1F8F65920A91F2D5E513,
	AuthenticationException__ctor_m3AC884A3C280888AA0385F2B9CF77A4F095616EB,
	ExtendedProtectionPolicy__ctor_m67EC248101C05040B16EF70600557AB1F67D5DC4,
	ExtendedProtectionPolicy__ctor_mE2798AC751EBABD43726A408726AD685C3DF9A02,
	ExtendedProtectionPolicy_ToString_m4048C353D32E535D25279ECCA7C86F8CE1EC7519,
	ExtendedProtectionPolicy_System_Runtime_Serialization_ISerializable_GetObjectData_m82A2764FEC26F07C39AC6AEFE0806A7F491D0474,
	ExtendedProtectionPolicyTypeConverter__ctor_m5A3243F8CBBD854965EA89D9853BFCFD5D475079,
	Oid__ctor_mDB319C52BC09ED73F02F5BEC5950F728059405C2,
	Oid__ctor_m74A51E6D07E4EF2AEC66B6CAC03CFF60D072D3FF,
	Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E,
	Oid__ctor_m8C4B7AE0D9207BCF03960553182B43B8D1536ED0,
	Oid_get_Value_mD6F4D8AC1A3821D5DA263728C2DC0C208D084A78,
	Oid_set_Value_mE13751778D2AC00F1CC962E42B35339BAEE45825,
	Oid_get_FriendlyName_mF93E7A679CA55F2D2E694814BF3B38532FF44B41,
	OidCollection__ctor_m99E1CCEB955F4BB57DEAE0BF8E7326380F93E111,
	OidCollection_Add_m13C7466BB24E047C88F27AC6AB5E9439AA491EF1,
	OidCollection_get_Item_mB8F51EB0825BDE39504BC7090B8AEEE13D0A9967,
	OidCollection_get_Count_m35D85FFEC009FD8195DA9E0EE0CD5B66290FA3C6,
	OidCollection_System_Collections_IEnumerable_GetEnumerator_m550967A294FF63F004D855F019235DE15A046B3E,
	OidCollection_System_Collections_ICollection_CopyTo_mC02E6211EC33878C50BEA5914193F038EE2E9CB7,
	OidCollection_get_IsSynchronized_m36C9F73515DA6834B85F9C8F9446E080CFA4C291,
	OidCollection_get_SyncRoot_mB10B680D12CB8AC9C0F32C3C1217FA4345552174,
	OidEnumerator__ctor_m3BA079690E9B01B02B76FB694DCF279DAEC8E9D6,
	OidEnumerator_System_Collections_IEnumerator_get_Current_m21F1C975D9A97369DA0D3CEAADFA69D64214CEB3,
	OidEnumerator_MoveNext_m8CA45F7B39B4FEF9399379DAA1A6AAF4FFB8DCD8,
	OidEnumerator_Reset_mBCBE7C78E389E7D9794F44111832013583FB1F4C,
	CAPI_CryptFindOIDInfoNameFromKey_m81614B2DE702F23532452DFB95EC03DE6A5FBC80,
	CAPI_CryptFindOIDInfoKeyFromName_mD4D690CEC8B4CFFDF5F530B1DD6B8F019026362A,
	AsnEncodedData__ctor_m0CF86C874705C96B224222BEBB6BF5703EAB29E2,
	AsnEncodedData__ctor_m0F04E7F12ED0BD74616EF4451F1EDDE6622E01EA,
	AsnEncodedData_set_Oid_mA72203D23B0F93CD9ECD507EB878502EEBA99322,
	AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278,
	AsnEncodedData_set_RawData_m867F92C32F87E4D8932D17EDF21785CA0FDA3BEA,
	AsnEncodedData_CopyFrom_mA350785B8AF676AB7856E705FA2F2D20FD54CC46,
	AsnEncodedData_ToString_mD65B64466F8AC07960AE0AA01466D9D80F8A105E,
	AsnEncodedData_Default_m4A9014D9B85AB114168577AD5DEE7FA2AFAB4EB6,
	AsnEncodedData_BasicConstraintsExtension_mC9DE1C0199EA0714150CAD960FD88361763DE03A,
	AsnEncodedData_EnhancedKeyUsageExtension_m2ED1895CE72319E5E3B06F8BD76963BD6FF6263D,
	AsnEncodedData_KeyUsageExtension_m8F8D43DECE8B70E86FAF2B498204D3FC9E866ACD,
	AsnEncodedData_SubjectKeyIdentifierExtension_mE8BF30141FD478244F98363669282B9C26F74B9A,
	AsnEncodedData_SubjectAltName_m33180412765B9BC62F17B87F63964F89937C0467,
	AsnEncodedData_NetscapeCertType_mBF9894A8993D137AEEC8919FEF582DF17EE5F652,
	X509Utils_FindOidInfo_m087A01CA38FDEA562172988FD3F84CEEA8046547,
	X509Utils_FindOidInfoWithFallback_mCC7071A350EE1EA714F8FA28AA78E5AECEC89F77,
	PublicKey__ctor_mB96189563F51185F4D44F2E9B570481CE7F63BE7,
	PublicKey_get_EncodedKeyValue_m0294AF8C29C7329BEB243543D8FDA98B60FDB291,
	PublicKey_get_EncodedParameters_mFF4F9A39D91C0A00D1B36C93944816154C7255B3,
	PublicKey_get_Key_mF430DCB9952B3B936420D1F3CAE486DBF7570ECF,
	PublicKey_get_Oid_mE3207B84A9090EC5404F6CD4AEABB1F37EC1F988,
	PublicKey_GetUnsignedBigInteger_m9F5E097A1ECF5CC31BBA476E4BE92CA5B4EDED1C,
	PublicKey_DecodeDSA_mACDFC1AD42B734E6144955146731BC6CFE9793E8,
	PublicKey_DecodeRSA_mAFA51DF5F4A97F2AEF8E5F84815D79B2366A105A,
	PublicKey__cctor_mFB84C561EADA19EDA00A2F29D2F0369D9686352F,
	X509BasicConstraintsExtension__ctor_mBFE792A93883E704745E589380F1DD7F12ECB36E,
	X509BasicConstraintsExtension__ctor_m67462D9110118C82677CE42C2685C05C0767EB00,
	X509BasicConstraintsExtension__ctor_m27365A2183995553C17661A9C5E6CFF474AEB33D,
	X509BasicConstraintsExtension_get_CertificateAuthority_mF7C866A45B3DE24A06EA3256B8FC0BA1989D038D,
	X509BasicConstraintsExtension_get_HasPathLengthConstraint_m04C1B45C4FF2FF902B45A5B1AE309D3816A3457A,
	X509BasicConstraintsExtension_get_PathLengthConstraint_m9401525125A220F1D51F130E3CC6E4C938E45566,
	X509BasicConstraintsExtension_CopyFrom_mB87E2C5337CEE107018289CF81AD4ED7956A6ECD,
	X509BasicConstraintsExtension_Decode_m02EECEF97728108FE014735EDAD8C74B8461B384,
	X509BasicConstraintsExtension_Encode_mC5E34F1B66DE0BCBD7C524C968C2C010B566843C,
	X509BasicConstraintsExtension_ToString_m4ABD6F1E1B7271403EA6250EFDCF400D68B8256D,
	X509Certificate2_get_Impl_mAD55B5116FFD751B1963259C04E8F5F81517C465,
	X509Certificate2__ctor_m95D16A7EB76393C591CA0E93FA331B931504C9BA,
	X509Certificate2__ctor_mBFFAA9446A805AF8E5B5A76F4D2375815A854ABA,
	X509Certificate2__ctor_m5EFF697A4FBB02A5D86C2C475FB86576A4FE8DF8,
	X509Certificate2__ctor_m9BED4BE32997E4EF930C8D66CCF7C429265A6D42,
	X509Certificate2_get_NotAfter_m6A8FF55FBA82F3B04C23E30E21BF8F64693C8565,
	X509Certificate2_get_NotBefore_mDC4BB64A4D8A295BD1021C43D58DD43EBA4883B0,
	X509Certificate2_get_PrivateKey_m49B88B09C59D2453F8BFC96CDAFC290948A8E581,
	X509Certificate2_set_PrivateKey_mE45715F8D406274A7F7B7635494F6DE49FCB4E48,
	X509Certificate2_get_PublicKey_m8AC9C95FA651768945AFF1EF0FEBE2F22F8AA889,
	X509Certificate2_get_SerialNumber_mBAE78C9FC3C5080CB782B1734497E83D4282D12A,
	X509Certificate2_get_SignatureAlgorithm_mF10C8153EED8633549FDB22006CFAABAC1B26931,
	X509Certificate2_get_Thumbprint_m974E38E6838673D52D4672218325E45AE8636383,
	X509Certificate2_get_Version_mAA8C8DCAA6E046FAFD7C3DE665665C8FEC28EF9C,
	X509Certificate2_Import_mB8CE3F497DC540159206373283627C58C95D200F,
	X509Certificate2_Import_mEA556AEB39FCB533A2F9F927EA66DD2D84639EAB,
	X509Certificate2_Reset_mC64732F1FEE53D8C0478B164AD5B9A7C99C50AC0,
	X509Certificate2_ToString_mA04C0490966DDB6242954B9C556E7AB650DF80F5,
	X509Certificate2_ToString_m8E889E21183273EE06D65DF4DC32AD8953505639,
	X509Certificate2_AppendBuffer_m3597EA44AD17C46000D5A761BAF157564AEFB5EF,
	X509Certificate2__cctor_m9EDDBF4AEEB46FB2121A004E4D4C6C1602232B22,
	X509Certificate2Collection__ctor_m4674349C139499C3BBFB6E8295A202DFE466CEB7,
	X509Certificate2Collection_Add_mB0B0DEB3E16EEBE0C7445041E35E0C587D6EC001,
	X509Certificate2Collection__cctor_mA60C0BD51F8C9A395AF3FF4AAB24BF6F07BC4C81,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	X509Certificate2Impl__ctor_mB6CCF2EA294D53A594FFB7CAB55962E920D1BB28,
	X509Certificate2ImplMono_get_IsValid_m8EA0498434746DCD902D85379F00A21245E4F11C,
	X509Certificate2ImplMono__ctor_mBDF5F03F3BC955CCFD3AFB740B60D5869431702E,
	X509Certificate2ImplMono__ctor_mBCD25943158CBDCBD55E24A19AACDC47B4F6C46A,
	X509Certificate2ImplMono_Clone_mC55211F100A5F0F9B5B8B609D65FC0B3F0BAEB9B,
	X509Certificate2ImplMono_GetIssuerName_m4BD00FBE8A745B2DB2704AF7AAA5F48099354511,
	X509Certificate2ImplMono_GetSubjectName_m7058BA456600F52DC12B20A3E426F3CBEFC22891,
	X509Certificate2ImplMono_GetRawCertData_m8E5EE16FD23AA6F170CC78DD63AE1C25AE3A7C0F,
	X509Certificate2ImplMono_GetCertHash_m1D19FAD20F230EC3AB882804775F5111A93C3EFB,
	X509Certificate2ImplMono_GetValidFrom_mF14444E8277382677378B2E3FDDEE929BC080539,
	X509Certificate2ImplMono_GetValidUntil_m33AA78A101D5C6FDCB83A45D77DD0E2F5ABA5E9E,
	X509Certificate2ImplMono_Equals_m5B0557C1274E4ACE12917539CEB51B88F0A8855C,
	X509Certificate2ImplMono_GetSerialNumber_m1A6C4BC02159AED090856870E30309A41F620B39,
	X509Certificate2ImplMono__ctor_m6A63CE786DD033AAF667CE9E928B2470425E1010,
	X509Certificate2ImplMono_get_PrivateKey_m4F96338A12FDEDCCC6B6B8C3F263C5E0E0329327,
	X509Certificate2ImplMono_set_PrivateKey_m23C6D7F4CFEA17D7EB993E3C44F7560E2E50955B,
	X509Certificate2ImplMono_get_PublicKey_m266BB633193C454E99BDE12F087ADDD931F0E1A9,
	X509Certificate2ImplMono_get_SignatureAlgorithm_m98B9DD7FEFE52F865DEE68E4FDDA592747DE5A19,
	X509Certificate2ImplMono_get_Version_m1E24884D49422A8DD3152FF62B2F9588D8CC4B2B,
	X509Certificate2ImplMono_ImportPkcs12_mB87D6BE13939DCD628BC979FFF63671CA23E0A86,
	X509Certificate2ImplMono_Import_m49505FDD390700DF03D6C298C7870C5269255F24,
	X509Certificate2ImplMono_Reset_m64DEBBA05762E41390F084DD9BF35C617C64C3E4,
	X509Certificate2ImplMono_ToString_m243DD8D5CD86BA7F1F5FD047AECFA90A30C28E66,
	X509Certificate2ImplMono_ToString_m255BB5C223E59F719FD598D427C3BB11F474E8EC,
	X509Certificate2ImplMono_AppendBuffer_mB2A153E772FE093A7B6D35BA32348D1E36799150,
	X509Certificate2ImplMono_get_IntermediateCertificates_m86F36AF08247DCBB2C4919BB3E3607C6EA88E6CF,
	X509Certificate2ImplMono__cctor_m246C5CB1140C353C9979A95EDF981463CB0C18B7,
	X509CertificateCollection__ctor_m038CE3FFE670E8DC426728EE334DF915BC3F1644,
	X509CertificateCollection__ctor_mA8D824BD5C4CFF13989F01F182F9D09CDE3A92C2,
	X509CertificateCollection_get_Item_mF0F62ACA6DB4482B2F055563F3A88CFDB92377FA,
	X509CertificateCollection_AddRange_m7856434D39CA3D6AB751C25CEB509A04E252722B,
	X509CertificateCollection_GetEnumerator_mB2D27CFCAA973ED96A90743270506B721358A29F,
	X509CertificateCollection_GetHashCode_mF20BA3BA9E01B2533463FF2F26173FE0DBBC04BE,
	X509CertificateEnumerator__ctor_m52095CF67A4A192364C30FF8B0E17FC89BB58640,
	X509CertificateEnumerator_get_Current_m073AF75A4FCD3173200FF90AB6539B9D82C9EA90,
	X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_mBE4F1A9CE8C97F506D8F7FDA6F9C18135BA9AE15,
	X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m2B17A1E25AB322A73AFA8E8A368A5B1968F48F71,
	X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m5A185825A08CCA0ED7D6419FA6F6E180061B9555,
	X509CertificateEnumerator_MoveNext_mD24E317796AFDCEE1C381C30AEC85B5B3A486F8C,
	X509CertificateImplCollection__ctor_m186BDD732AB7A82E47606E244A0B2A82860A8F5B,
	X509CertificateImplCollection__ctor_m670BE04FD8D99C60BC8A862CACC2DF15744B70AC,
	X509CertificateImplCollection_get_Count_m6C92C5AA558F2ECBD17BB5E743443FF353F1C29E,
	X509CertificateImplCollection_get_Item_m8BC2DE13F2E914AC2290C5F015A00DA0562EC628,
	X509CertificateImplCollection_Add_mB07BB408F414BD2A54BAE33C467C6211A0F565FF,
	X509CertificateImplCollection_Clone_m574D3070FCFCD00BA41E3517111BB55158E85590,
	X509CertificateImplCollection_Dispose_m921A22D3FBCF1551AD058E4A69EF5DE82F217662,
	X509CertificateImplCollection_Dispose_m0AFF1F469149E71D985C307B9C779E08088AAFEE,
	X509CertificateImplCollection_Finalize_m36BECC904589560DD13C165E380A25A7052C22F2,
	X509Chain_get_Impl_mDFDF83101E18C675FBA93E833DDBC458D8427E7E,
	X509Chain__ctor_m55DBE2D3727F0AAD25C34A7DCA654AA6218145E4,
	X509Chain__ctor_m246DB394D17776D7769D04FF0EE0B4B9F8518DE0,
	X509Chain__ctor_m3406D90977BB9160C7275CF5EA0FA629CEE4F386,
	X509Chain_get_ChainElements_mEA079D18934C900F8AE7E24CC8B143C27A7365DD,
	X509Chain_set_ChainPolicy_mBCA34300EEA4783253A7B8DC281F9B858B207C92,
	X509Chain_Dispose_mCFA2A24CDD151F681BA0A24B2CE814696217A1E3,
	X509Chain_Dispose_mBD3D48BC042C872B530302CBA9121D67C6A488C6,
	X509Chain_Finalize_m23EF4947D8018EECD79F91B850C65939F42A6BC7,
	X509ChainElement__ctor_m0345BD8FA64DFC6F1B0B7F3298E7E0A93A29805F,
	X509ChainElement_get_Certificate_m586BA432D80368AAE40A0524D4770C39BDC640C9,
	X509ChainElementCollection__ctor_m63CF4401F3A9F06018F89DE0F5CD0B401AF3F516,
	X509ChainElementCollection_get_Count_m61A068A8B5783C37B5835E67E157066A1438821C,
	X509ChainElementCollection_get_IsSynchronized_m3EB9623F37326704E9F247D769C7CF090470D3D7,
	X509ChainElementCollection_get_Item_m87736EDD3B7649BCC883759FA1CEB61705B9BDD6,
	X509ChainElementCollection_get_SyncRoot_mE954E1ACE08270ED865B7A6686856CFC448358D7,
	X509ChainElementCollection_System_Collections_ICollection_CopyTo_m54291E0447BC978834408CF6709695723C57F99A,
	X509ChainElementCollection_System_Collections_IEnumerable_GetEnumerator_m9BAE4B33C287703E64F97D23F8AAEB0E3121EF8D,
	X509ChainElementCollection_Add_m6089CEC31B6F33B5E7A18C18A6FB92BFDAE4AC70,
	X509ChainElementCollection_Clear_m16FFA49F7E1F08419E6BB6D0F348A6ECD21FF06D,
	X509ChainElementEnumerator__ctor_mDCF28D8FD9D18A200A31294DB23C5697E97954F7,
	X509ChainElementEnumerator_System_Collections_IEnumerator_get_Current_mB1ED81C9DBD230BA46B8BF9C1EE60C0EB02FD72C,
	X509ChainElementEnumerator_MoveNext_m92880AD08574A13CF5097F800CAB6834A9C01BFE,
	X509ChainElementEnumerator_Reset_m88A53B2C249FFB257054D874F189EAFFA256E108,
	NULL,
	X509ChainImpl_ThrowIfContextInvalid_mB4BB36FE66E507EF9A505F5D8B81F546E822C2F0,
	NULL,
	NULL,
	NULL,
	X509ChainImpl_Dispose_mBBC758892307733F67FDD74E54A1AA7EF14FC917,
	X509ChainImpl_Dispose_m826F0D317D9B289A03CE7129D6FB2677ABDD47AC,
	X509ChainImpl_Finalize_m18B174F1E86BE1A17C0EAB764F2A65ED1A4CE838,
	X509ChainImpl__ctor_mC306F06EB416D53AC39137E23FD072E8DC87E8E1,
	X509ChainImplMono__ctor_m82E3F7D2ED531977F1C07B3DC2E6921408F095D3,
	X509ChainImplMono_get_IsValid_mB5550DBA70129AC130A14F03AF67AC120196E431,
	X509ChainImplMono_get_ChainElements_m481D94CE76D18173FC1176D5BC464B94B055C7F3,
	X509ChainImplMono_set_ChainPolicy_mBBE85DCBD0B487DB7180415F8B96255CA7F4B729,
	X509ChainImplMono_Reset_mF4895F7B729040623E341CF56D752F44E3DA05DC,
	X509ChainImplMono__cctor_m96C72ED26C1B06CE7293CE353FE0550BD7EBB1B8,
	X509ChainPolicy__ctor_m3BE053A8A6F6A59E283062E09FABA64AF98EB7D9,
	X509ChainPolicy__ctor_m17F37BC42389FFA54D34961E22624F615D7A2094,
	X509ChainPolicy_Reset_m523357E1A74D1DD2018768BD3FAC786517AD9EC1,
	X509ChainStatus__ctor_mA41DF127E7EEF7B59204118C5C48F695F2C6DECC,
	X509ChainStatus_GetInformation_m567616CB63B98B727B901FE93AE1D89F13ABB68C,
	X509EnhancedKeyUsageExtension__ctor_m64F507CB1938AA4BC20287D731B74DF5CC99A96C,
	X509EnhancedKeyUsageExtension_CopyFrom_mDD12A69F6804BA6B137A459CD941B367274C2B25,
	X509EnhancedKeyUsageExtension_Decode_m610C0C741966205F6DC0492BD17B28E1FED8D648,
	X509EnhancedKeyUsageExtension_ToString_m12992C4F3BE30FC9662680B8CDAC07F7F7C67134,
	X509Extension__ctor_m4DF31A0909F64A47F2F8E64E814FE16E022794E7,
	X509Extension_get_Critical_m56CF11BDF0C2D2917C326013630709C7709DCF12,
	X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0,
	X509Extension_CopyFrom_m1D101C0A8E17FDC25EF1D7645F2A07E5AB7A3D1C,
	X509Extension_FormatUnkownData_mEF1E719F7AD312B099351C581F4A06925AD9F18A,
	X509ExtensionCollection__cctor_mC99A8E7D956FAE85B026B679EB60D4D69293C17E,
	X509Helper2_Initialize_mC5FBA7005CCE51EDAB017099F372F0BD0D55A4FD,
	X509Helper2_ThrowIfContextInvalid_m4C790ADB9E395978A1E98D341C08059D611A7554,
	X509Helper2_Import_mC26B4A8627F5A312DC7A0DC5D505D71A6E1C48C0,
	X509Helper2_CreateChainImpl_m5A619F5A495B81CAAAB2D9F3EA1472ECAE2386B9,
	X509Helper2_IsValid_m95197F0F36FA869279EC89843AF4047ED7F29E25,
	X509Helper2_ThrowIfContextInvalid_m14776A4BB277B5033E572D162F84DD33DF8BA2D9,
	X509Helper2_GetInvalidChainContextException_m5B99E13491617F93AC875A36D23180F3A883200B,
	MyNativeHelper__ctor_m3C33DA045EB050BE747AD1E3B10DA0C350678EA7,
	X509KeyUsageExtension__ctor_mE735C27BA5C2BBEA264B0FDB229E7DA7A2E3416D,
	X509KeyUsageExtension__ctor_m6D2F83567A69553296EB7CC93466B20C7884C54E,
	X509KeyUsageExtension__ctor_m0E105A1E8A7ED901E90E53B33EF86DFB3D2F3B9C,
	X509KeyUsageExtension_get_KeyUsages_mD2ADFD4CC335B85D453BCA75A8541D3DF099A8FB,
	X509KeyUsageExtension_CopyFrom_m029A26C577528A8DF077CF68AD2787DC1E76FA7F,
	X509KeyUsageExtension_GetValidFlags_m3141215EE841412F2C65E9CD7C90AE26E4D05C9A,
	X509KeyUsageExtension_Decode_m8D2236720B86833EAFCB87C19BF616E84A15A385,
	X509KeyUsageExtension_Encode_m14D2F2E0777C7CFA424399E66349940A923764E5,
	X509KeyUsageExtension_ToString_m16FC486E9C54EBAEF7CA8C62C820DE7F0BE1E084,
	X509Store_Close_m2FA715DD72AEE3DD1CA06128AB5D3925EAD8E29A,
	X509SubjectKeyIdentifierExtension__ctor_m0A09F64706823AF7D0494B62B041FF11AFA587CF,
	X509SubjectKeyIdentifierExtension__ctor_m6D7E57ECBE71290733F6658D8197F034A615DB02,
	X509SubjectKeyIdentifierExtension__ctor_m178F0928E93C151B64754E82C9613687D80671A0,
	X509SubjectKeyIdentifierExtension__ctor_mDEF8BD36D2A43B1BDC54760AC6E57458E5ECBFE6,
	X509SubjectKeyIdentifierExtension__ctor_m50305847B96BE3F6CB0816EB143AB89108DA493A,
	X509SubjectKeyIdentifierExtension__ctor_m7CE599E8BEFBF176243E07100E2B9D1AD40E109E,
	X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_mD90F985708EE4E69C37AA8B09AEBBE64A4002601,
	X509SubjectKeyIdentifierExtension_CopyFrom_mA94CE978304FA27C3CD9719F34D85CD34FC3695D,
	X509SubjectKeyIdentifierExtension_FromHexChar_m20658FF901ABAB59012E4E0749D000DFD5064C82,
	X509SubjectKeyIdentifierExtension_FromHexChars_mFCF146774B2FD3757B3228BC6991A4CFDFB5BCCF,
	X509SubjectKeyIdentifierExtension_FromHex_m66F3F235B6F034AE84E9C2B969E78BF07559BFD6,
	X509SubjectKeyIdentifierExtension_Decode_m6ED45FB642F2A5EDAD51EE357CAB8EB95BC8EBA9,
	X509SubjectKeyIdentifierExtension_Encode_m6BEC26EF891B31FF98EF4FDF96CC0E9CEDF0B208,
	X509SubjectKeyIdentifierExtension_ToString_mBD5BE20274B5B56104E6ECD3137DE0718DE50537,
	HybridDictionary__ctor_m9FC8D443AABAEC8D67ADF072437D2B364B08B7F1,
	HybridDictionary_get_Item_m7185EEEAFC226096E70344C925C0E878B6BB355C,
	HybridDictionary_set_Item_mE42268AAEEFAC3C809899E1BC62251985E731079,
	HybridDictionary_get_List_m04D20BE02A5E09BE885C0780E74435ACCD56D78C,
	HybridDictionary_ChangeOver_m720F3CC680ABE10D68E6E5D67EE646435498EC8B,
	HybridDictionary_get_Count_m9105DDBF52049FDB3664818E8883EDF06646C28A,
	HybridDictionary_get_IsSynchronized_mEDB978DB4DD87B56D2111BFD618E9B93563C8020,
	HybridDictionary_get_SyncRoot_m6E4080330F28495CDEB87CB61DAE35C24028AA88,
	HybridDictionary_Add_mAD439BE2C4F44AF8A43EC7491E26478EDDF7DFBC,
	HybridDictionary_Contains_m4D83965011E01C6992097DD64AC0F5C3C0E2C765,
	HybridDictionary_CopyTo_m14080EC1FA3FC4736A5EBA8B4B9CC49DD4E673D3,
	HybridDictionary_GetEnumerator_m6A951136F415F6AA36DD93755EDE5873D6D66117,
	HybridDictionary_System_Collections_IEnumerable_GetEnumerator_m51EE25513E0F719E34095133BD0C11379464A6EA,
	NULL,
	NULL,
	ListDictionary__ctor_m9B69C39CDA7C506487D47DFE0AD7CF59B0C4C82F,
	ListDictionary__ctor_mEF3028294A42FC5771EBED7DC1DCB104E284A79A,
	ListDictionary_get_Item_m234AF1C6B763954DA1EC8BD5C74BA2D16E8D74DC,
	ListDictionary_set_Item_m68050184A6FE6BB7B33891F19FE8D87D458499AD,
	ListDictionary_get_Count_m63B5332C669C858EBC423472A502528612C890F1,
	ListDictionary_get_IsSynchronized_m98323278519FFC7DF7206C42568B3C0E1724F5B9,
	ListDictionary_get_SyncRoot_m44040160ADB660B10684A95305CB08F56AF029E8,
	ListDictionary_Add_mD622807A74E5FF8AF27DFF445307D81DFCFADB28,
	ListDictionary_Contains_m06D47395FA7A1B7379C8BBFD38D7A8CFEB721D08,
	ListDictionary_CopyTo_mBF4FD9B59407ABF719E2565E788A2DC9A4769564,
	ListDictionary_GetEnumerator_m6B44040F7259D5F7F1E15F4A4FA0FAE38BFEE236,
	ListDictionary_System_Collections_IEnumerable_GetEnumerator_m6412355259E0F0D8959F9785D34F0748511F3783,
	NodeEnumerator__ctor_m96E6D528E4C4D03DF5FE2C904501B77246EE5B17,
	NodeEnumerator_get_Current_m19DF983FA469D5832AC53B7841D278980859DE59,
	NodeEnumerator_get_Entry_m58F1425F47017D32E7F781CBA78E37C355F596AA,
	NodeEnumerator_get_Key_mFB4422BD5607790768C310AA7715CDC47799E5AD,
	NodeEnumerator_get_Value_m01AD97761452577C6F66680DE74BBDDE898B8F72,
	NodeEnumerator_MoveNext_m8615D4B81CA7F5D17919BE7BFF0A688B192A67DD,
	NodeEnumerator_Reset_m9992FAC9825E8D6692B6FCEDF8E47E941C1875FC,
	DictionaryNode__ctor_m38EC4C8C8EF2A5ABDD91B178DDB0CF0E0D7D15E2,
	NameObjectCollectionBase__ctor_mA74DFF0CE0FB59430A786082F414813F276F130D,
	NameObjectCollectionBase__ctor_m684256D394079487B0AA79F96D82FC1EF34A2123,
	NameObjectCollectionBase__ctor_m9100CD7C0C24135A887EC01FCAA69EC0DBF0D463,
	NameObjectCollectionBase__ctor_m2F55149BDCE98E37B1FFFC720F8CEF922F90E609,
	NameObjectCollectionBase__ctor_m4BF6C086BA110F79E817D1F307D0B912E32BCA55,
	NameObjectCollectionBase__ctor_mAF5575543B8D937C34D00E9D7B6642BFAD74F37C,
	NameObjectCollectionBase_GetObjectData_mF4EA432DCE051F52DD8CA3C091F606D8C216D9DA,
	NameObjectCollectionBase_OnDeserialization_m8C86FE5E896571CDA1C4335CFC799F20ACFBC3B5,
	NameObjectCollectionBase_Reset_m7D346054B961190F3799970BC8C4F8EBD3689986,
	NameObjectCollectionBase_Reset_m1A5701DA2CE23C171A59DDCE5EE8166528C1081E,
	NameObjectCollectionBase_FindEntry_m5D2C7207AF84D9CFAE79399387115E44C5348C8F,
	NameObjectCollectionBase_get_IsReadOnly_mFCB376BE86332546D47A4B983FD91FFF23558709,
	NameObjectCollectionBase_BaseAdd_m1A0CA51397D274B23B10ECE78D2EE923C4FDC07F,
	NameObjectCollectionBase_BaseGet_m9ADF3F54E9A5D8151837C6E4652ED27CD1C06CFF,
	NameObjectCollectionBase_BaseSet_mDAD4979940B3ACC47B77A64AECCD0C69C2F9A015,
	NameObjectCollectionBase_BaseGet_mDEFD71E2644E7080FBE6E79B9221673D02F64202,
	NameObjectCollectionBase_BaseGetKey_m0ED9A3D47A2808BF98BCBEAFB51D175127B9CFB1,
	NameObjectCollectionBase_GetEnumerator_m02D0640D271E51652CC9E1B50C6795CA19761E88,
	NameObjectCollectionBase_get_Count_mA6E8285C71420239BF891DF0FFCC60E68E660D25,
	NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mE984B0745168F2F0FCAD2F9CC36E525592EDFC20,
	NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_m5BA819A3EBE9BDD6B7ECB55E9C4D767D85EAF641,
	NameObjectCollectionBase_System_Collections_ICollection_get_IsSynchronized_mC079154D099C5C60910FF6B003AC60D196B65309,
	NameObjectCollectionBase__cctor_m8F6F233008097CCECEC2D8092C44C704A3F5A6CE,
	NameObjectEntry__ctor_mB4018B4F844A8F7F3308B10CB017D6008DB0736B,
	NameObjectKeysEnumerator__ctor_m684F9F2CC2934708B3F198D7F750D5030AD9CC80,
	NameObjectKeysEnumerator_MoveNext_m602677D8FC9EE3BC87755FB0EAC1BACA518CA240,
	NameObjectKeysEnumerator_Reset_m291D728258A95AEB8BE6697D0E1DADC24AE1A977,
	NameObjectKeysEnumerator_get_Current_mEA737C3649050A481FEE567F163E4D5C7A328B2A,
	KeysCollection_GetEnumerator_m68647B824C2407655C56DA53277DEA9394E87513,
	KeysCollection_get_Count_mD741DA67E73F0BA452A446434E0D9C534DD5BDE0,
	KeysCollection_System_Collections_ICollection_CopyTo_m5D1521EAEE522DA4A5A7613EB1A9414CA6BAA9C6,
	KeysCollection_System_Collections_ICollection_get_SyncRoot_mCC5B71720FAC222DA73D44426BD39CC4E3F04A0F,
	KeysCollection_System_Collections_ICollection_get_IsSynchronized_m71F83C4E82744749A4F715E8BBFBAEC93829C914,
	KeysCollection__ctor_m4B44446641DDF84B5883D2B12AA11555CD87B8A5,
	CompatibleComparer__ctor_mFAA5DFD1F5D8A144CBE12E74E8557CF5653A2DB0,
	CompatibleComparer_Equals_m08DCF183451A42F14345B5F615F4BE790565EB38,
	CompatibleComparer_GetHashCode_mEFB12FFF3B0A76548DF481D6922F2F21D31B30FA,
	CompatibleComparer_get_Comparer_m556DC9797B932664AA69CDC71F0C7EF8E669AF79,
	CompatibleComparer_get_HashCodeProvider_mE92F98439CCB3AFCFFA472631B45AC8CA8686F0D,
	CompatibleComparer_get_DefaultComparer_m4AB0D4BF050F498E9CC959059EA4BC251ED6F631,
	CompatibleComparer_get_DefaultHashCodeProvider_mE46DC30844F61CA73DE162E5B9F04C0E0B85F6A0,
	NameValueCollection__ctor_m78B698FEF3EFEE917D0EBAA0DEDCFD1BD9AA6323,
	NameValueCollection__ctor_m443C8997E1C12077D3FBCB5701916C1A07BD0D6B,
	NameValueCollection__ctor_m3FB82F83A2B13FC647CECDF8610D53B52F52170F,
	NameValueCollection__ctor_mA7D338E7E6795829EE4E64D8834A41C2CE898FBB,
	NameValueCollection__ctor_m69DC8832F5EC7DD21DE701866B84A639570AC8D5,
	NameValueCollection_InvalidateCachedArrays_mA7CA9F8B09DDFA9163FB77563C6FCB07762D23C8,
	NameValueCollection_GetAsOneString_m3ADC3CAE35EB61CE55BC8D781C14EAFEE237DE68,
	NameValueCollection_GetAsStringArray_m79210BFB2A2F0094D4601BE3FD7FF2EC097303F4,
	NameValueCollection_Add_m2058D4136F9DC4A11836DF6B1AB4853387898B2C,
	NameValueCollection_Get_mDEC8EB5C5FAA1B34B99C6AAA50F0F575296DB1F1,
	NameValueCollection_Set_mE479F82E6045A7447D4CFA7040FF63CC5CCD1329,
	NameValueCollection_get_Item_mCA21B55D4454D35073475B2966BA0F9207D16FED,
	NameValueCollection_set_Item_m068F8AB7B8D0EDFD8A9DA582E80A20ACF9E8D692,
	NameValueCollection_Get_m0CF4D7CB8B22A2B269CFD472A17494F592E470E7,
	NameValueCollection_GetValues_mD28BFDED15CE8F19B3554CD40C7D7DAE22714323,
	NameValueCollection_GetKey_m56EE50398F41A0A52AA2E7759B511BFAC068125D,
	NotifyCollectionChangedEventArgs__ctor_m4DF9A3B338385B107E9AB642418EF9CD133176C8,
	NotifyCollectionChangedEventArgs__ctor_m740EF6211C01BEFC72940AF522E6B59FEB0C0278,
	NotifyCollectionChangedEventArgs__ctor_m38284F986548E34AF877744D5D80CC5510FA9AF8,
	NotifyCollectionChangedEventArgs_InitializeAddOrRemove_m54AB5E1F30737022F2DE9C4E421E1A6B72082C06,
	NotifyCollectionChangedEventArgs_InitializeAdd_m96D1A2D845EE3A1CDBC7567B1E736F33F96FCC0B,
	NotifyCollectionChangedEventArgs_InitializeRemove_m7FBC5F964DAF767FBE70D5DF124A01D8EE337530,
	NotifyCollectionChangedEventArgs_InitializeMoveOrReplace_m36B46F9A8C223932E845ADED2896EEB976F96DE3,
	NotifyCollectionChangedEventHandler__ctor_mF25C1F41D0B942C2B78006C32C9BE89A1D4758C0,
	NotifyCollectionChangedEventHandler_Invoke_mC124A6BB0AEFF734D28ABB2860F4A1A473A53552,
	NotifyCollectionChangedEventHandler_BeginInvoke_mF9DA40CD098B06E3829516F85D69D33158348D52,
	NotifyCollectionChangedEventHandler_EndInvoke_m23189F8E2638877F0EEB1E26A1621BFE0DD102A3,
	StringCollection_get_Item_m1C00F274B95C72B7802386E253AEFD63BBF0ABC6,
	StringCollection_set_Item_m9C39150B3F7E7707087939A667608314F7B7396A,
	StringCollection_get_Count_mC75C516535FA84F1F00EA0B8080DA833F2668B6E,
	StringCollection_System_Collections_IList_get_IsReadOnly_m5F7F83F7BE95960C9214087A57F2BDE25D623D2E,
	StringCollection_System_Collections_IList_get_IsFixedSize_m0DF42F48B682BCFAD27BDE97B54789A7AF31CB65,
	StringCollection_Add_m74C07154AC7259B8219DF6A79B76EF5B7E12A6EE,
	StringCollection_Clear_mF6342AADBD52C49020E567138B9E0F479B38A357,
	StringCollection_Contains_mFA733702D3C6B9BFA95AD34B74C5A0AD9DB3B30C,
	StringCollection_CopyTo_m4AEACC92E456EE1A0CA6AE045E1CF3739216A5E4,
	StringCollection_IndexOf_m0CCDCB4898AEF6BD74168E2FE480CEA739AB926F,
	StringCollection_Insert_m899372FA6CD26D46C1773350C67A5B7DD390F455,
	StringCollection_get_IsSynchronized_m050BFCB6A4192E924D209B7CFAFC4F6EB6621CF0,
	StringCollection_Remove_mC6A3DD305A3DFD39CB2EB0B150633F774FE93E78,
	StringCollection_RemoveAt_m2774DD6AD7D2A1D26B119D06E5E6210CDD1DBA07,
	StringCollection_get_SyncRoot_m8EB8D6F913B12F3B9FBEC7056B85520F63107C9F,
	StringCollection_System_Collections_IList_get_Item_mC52C13B373A2121AC1643931A253135DE68AA72E,
	StringCollection_System_Collections_IList_set_Item_m854335ED059049299A185117DED7BBB255E18EAD,
	StringCollection_System_Collections_IList_Add_mB44F92FE4734B08FECBC698551D3C8494BC9B472,
	StringCollection_System_Collections_IList_Contains_mE745AC2B0A9AF7F1A1A2508446F62DA61ACDB419,
	StringCollection_System_Collections_IList_IndexOf_m22D689D7E4AD87F7BF760176137F81D454AD394A,
	StringCollection_System_Collections_IList_Insert_m6DE39B04ADDE5A0309BC68E3350A2D6E7031D984,
	StringCollection_System_Collections_IList_Remove_mF7FFE6D6A2B875139AF595D5BCC5894D521D500D,
	StringCollection_System_Collections_ICollection_CopyTo_m1C3B0352FAA40B2BC8C570B6B67A63D6293258A0,
	StringCollection_System_Collections_IEnumerable_GetEnumerator_m3D00F20127AEB0490F6F594D72E077B2B37AE182,
	StringCollection__ctor_m9E4F5359AEFDC2281D4E651A948F6EAE1B812488,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	HttpStatusDescription_Get_mF0B15BBA155ED517B074D80D666C9E896C791A0B,
	AuthenticationSchemeSelector__ctor_m75F66A513A4DC9D09841988FD347847252FEAD87,
	AuthenticationSchemeSelector_Invoke_mD25A94C6ACB9C5F8143A77F432B1F89793A0C453,
	AuthenticationSchemeSelector_BeginInvoke_m335E7FE3DA74827BA432BA727E36484F0D4E4839,
	AuthenticationSchemeSelector_EndInvoke_m636157A8B26E37A1A0804A93806392DE0BDE1FE3,
	CredentialCache_get_DefaultCredentials_m8D19BE934420E5771A272702035D37FAB50B7A29,
	SystemNetworkCredential__ctor_m1578DB215E2E9C785748EA49BA5E6FF9F145EAE5,
	SystemNetworkCredential__cctor_mD0DBEC2194189822021412CACE2870EB684A36A4,
	EndPoint_get_AddressFamily_m62AEE9F373979E52C77ED321CCDE62B724BE94A3,
	EndPoint_Serialize_m10480668BCAFD0C28C1AA1A1DCC7F4CE4506969F,
	EndPoint_Create_m3E7712702ADC0C6CCAC317C4613B67FC3A870AE5,
	EndPoint__ctor_m128E616435E17A62A3DD7D0BC759FB0CF7F87C29,
	GlobalProxySelection_get_Select_mBC68CE6E9D9878A211B57496173ED0B02543FB29,
	GlobalProxySelection_GetEmptyWebProxy_m9912A99BC83CED420E44706D9F373000FE1C4AF7,
	HttpListenerException__ctor_mADB8CAEDAAB8E4FE628116A92AAE8BA0020E0ED8,
	HttpListenerException__ctor_mD581020C8FB4AB492DBA584E891AF9439126B236,
	HttpListenerException__ctor_m45C2BF19C9796005E301C8061CD415F64E583DB9,
	HttpListenerRequestUriBuilder__cctor_m99B85B60E9B6CDAE09B494795C12A94703E52292,
	HttpListenerRequestUriBuilder__ctor_mBE10320D93401DAEA663F5716D294828A4C7F443,
	HttpListenerRequestUriBuilder_GetRequestUri_m042AB83A0B20F12335F10E6E6B23B5F2590D40CF,
	HttpListenerRequestUriBuilder_Build_m84FB866A31DA70C66661E1DD8F4A41C1EE62E5BA,
	HttpListenerRequestUriBuilder_BuildRequestUriUsingCookedPath_m7C2D172FA0C0907E090F03747C5CA606AA8FD8C2,
	HttpListenerRequestUriBuilder_BuildRequestUriUsingRawPath_mB127BF3DEE99C7DCDB8C5B0A903B837A80E481B0,
	HttpListenerRequestUriBuilder_GetEncoding_m0DFB0395BFD82C5365FC78051EECE0EAFF603745,
	HttpListenerRequestUriBuilder_BuildRequestUriUsingRawPath_m983F297A36C02E08FA2C63150ECF63CCD361FE3E,
	HttpListenerRequestUriBuilder_ParseRawPath_mACF2E204C92D4EE4132F690A00CA42D37211F158,
	HttpListenerRequestUriBuilder_AppendUnicodeCodePointValuePercentEncoded_m2E1FB3DB4F810607DE74A7959C9865F914487F0B,
	HttpListenerRequestUriBuilder_AddPercentEncodedOctetToRawOctetsList_m89418333005EA98F78FB7E239C03FA10850665CB,
	HttpListenerRequestUriBuilder_EmptyDecodeAndAppendRawOctetsList_m793D71F79B4F7D9B9A237A82E8B564973ADDB7F1,
	HttpListenerRequestUriBuilder_AppendOctetsPercentEncoded_mEB07CFBBE66A418F31486E8F71D55D575168B22F,
	HttpListenerRequestUriBuilder_GetOctetsAsString_mECABD4C776E35DDD3896A4824307B9A4A63BBF2A,
	HttpListenerRequestUriBuilder_GetPath_m8513484A8858AFBABDD7D87F0349C4A4E00DB52E,
	HttpListenerRequestUriBuilder_AddSlashToAsteriskOnlyPath_m0F2CDD2040A837B1C0822BC99FBCB80117361F2F,
	HttpListenerRequestUriBuilder_LogWarning_mB3CA0A03D2E120F81E8D4889B0248CB08AB1F5F2,
	HttpVersion__cctor_mBF5A353BCFB50CAFC1D86A4348F0AB047AFB1AAB,
	NULL,
	IPAddress__ctor_mA672DA31F082CC6E8B10BEC436D94450E630E16F,
	IPAddress__ctor_m1E185EFDA876C940958AF536535E2E4C16C0D1D2,
	IPAddress__ctor_mEE088A7E8AE4F63C519837672A2EA0650E6A9B1C,
	IPAddress__ctor_m75238FEA3E8B108639752167DBE53DDD799CD7B8,
	IPAddress_TryParse_m7FCC3E7337CD37145C3DA7DBB6996AB39A2DF94C,
	IPAddress_Parse_m8AEF3CFE902C389DB899F2948EF83217D10CB6C7,
	IPAddress_InternalParse_m7FB3E417CD68B714D4FECF1F662F6D9E7DFBC70F,
	IPAddress_GetAddressBytes_m7ED0924E8259B6D2426B3B570B25EE7CE9B789C7,
	IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D,
	IPAddress_get_ScopeId_mEDF9FA0FCEFAC4109AEDAD316DC18C5EE841CE5B,
	IPAddress_ToString_m4CFA8A08819BEDF5293C486AF623F5A4014AF8AC,
	IPAddress_IsLoopback_m253AA92222F77C0EF7C2B90A6A5E1E14E8DC1079,
	IPAddress_Equals_m4B1CA27458D8182146569D0BC82A2D3A23346516,
	IPAddress_Equals_mA898722519C090D557CA585C2FDB496D92D3CEB3,
	IPAddress_GetHashCode_m3A6682B1FAA8754BB7AF27913FFE319ABFED9D50,
	IPAddress_MapToIPv6_mA99938E0BDF716543A4C890FB694C54FBDE70B4F,
	IPAddress__cctor_m2E3DF94B7FF773BFA501B2DBF811E50DBABA99D8,
	IPEndPoint_get_AddressFamily_m3D6AC423AA5E8BEBEA8E3324D9BAC3A89A279127,
	IPEndPoint__ctor_m22783A215BA0B38674F6A6CB6803804268561321,
	IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95,
	IPEndPoint_get_Port_m442D84417A9E8942514FFBB9714FEE6BD094C6C3,
	IPEndPoint_ToString_mBFC4822326C1A86698C64FF3992CB295911866C5,
	IPEndPoint_Serialize_m6DCCD4B0D381396E0E7638C240167A2A8B0EC585,
	IPEndPoint_Create_m807F89A5752C1E5F09D1AB32F6E60D243F06398A,
	IPEndPoint_Equals_m2F4B8B1F77EBFAA516EE1B6AB75836C928682EBE,
	IPEndPoint_GetHashCode_m02C37BD0E617B964B02EB2F19F0F7CA1A337C3A0,
	IPEndPoint__cctor_mC310297F0DD730546F960C651993EEE162204BC1,
	IPHostEntry_get_HostName_m93399E3B7017D91869B47746BD9EDF74BF347FD1,
	IPHostEntry_set_HostName_mDAF37AF72EB14AC6C63DE863DAF1C71E7DA2AA21,
	IPHostEntry_set_Aliases_mBEA9E40249BEC29743421885964A0A76A9D34BB4,
	IPHostEntry_get_AddressList_m466AC33C136531F42A5EDCD3A75E5B392075186F,
	IPHostEntry_set_AddressList_m5D661027187141E20D78AE4795EA8DABA42BEF38,
	IPHostEntry__ctor_mE110DE1F81AC6E1174418A6EE3C266E60BD06B9A,
	InternalException__ctor_mD1CD1128C58BBD0C276E4218668A3840DB16E2BE,
	NclUtilities_IsAddressLocal_m4474A84AC878C3CCEB22885291F2FFB0FF3FE474,
	NclUtilities_GetLocalHost_m83AC9B72133A7BD39161AFD55F092133AAADFA54,
	NclUtilities_get_LocalAddresses_m7239F4DB692B12FD203F7ACF7FD74340542BBCB6,
	NclUtilities_get_LocalAddressesLock_mEFB560D71DD9D220AB2E30D27325D9FDBC7D8BFB,
	ValidationHelper_IsBlankString_m6AD6EA4A3A18A43F7D0E619A814E1C8805B80BE1,
	ValidationHelper_ValidateTcpPort_m4FB59C10D4979D7CA8E203EB6E2DBB5BC872119B,
	ValidationHelper__cctor_m993F18C10E319E867D83A56DEA3EDD28A10E0281,
	ExceptionHelper_get_MethodNotImplementedException_mA0B9CCC73FE2B6B457B6E9E7472ECB9797B79756,
	ExceptionHelper_get_PropertyNotImplementedException_m1375C7CD0DF5A682975F623DD461DC96DE7735F4,
	NetworkCredential__ctor_mBB62CCEBA2D6C5AE946F2D3F4A26FD3B718E312E,
	NetworkCredential__ctor_mFBBBBCA94F91EA965A2B3DD6DD52554245B6B41B,
	NetworkCredential_set_UserName_m0906CE0D5CFA7972CD2DA08D9D2DD5ABEEEE55C8,
	NetworkCredential_set_Password_mD3D1EF31B8A2C9011A2439B249E3B2D55D1144F4,
	NetworkCredential_set_Domain_m122C82F6B1E78A1F0A86B9B314F479EB336DC354,
	ProtocolViolationException__ctor_mBFDA5DBCACD716BB63ED4055B66E6AD41240889E,
	ProtocolViolationException__ctor_mDD18BFEE8140195ECBAD99A4E8079FE063A92D79,
	ProtocolViolationException__ctor_m1E566889EEC9659072DB826E7E6BBECD8747ECBD,
	ProtocolViolationException_System_Runtime_Serialization_ISerializable_GetObjectData_m29C4C22EFB8EDB208F01C9477A72F1CD1C442245,
	ProtocolViolationException_GetObjectData_m85FE8C0B309D2870767DE4AEDEDAC089A0E5F4E6,
	SocketAddress_get_Family_m415D59360C9C2E480D2D98775983A573CCD9D7E0,
	SocketAddress_get_Size_m6383C5C4F9200464ACB6D583020F81019602CFA4,
	SocketAddress_get_Item_m4ED599B209C73DFB72212B7B3621B1703A26C5FD,
	SocketAddress__ctor_m6684EAD0CA7CDDE9DB6E406FE1F32E6DC6B92A4E,
	SocketAddress__ctor_mBE5E81FAB07F2E45BCACF1D97E1DBAAFB5E50511,
	SocketAddress__ctor_m9738A4ADE5808D768AE732070C89F7ABA6BED994,
	SocketAddress_GetIPAddress_mB16652A595F005C45F9F8F085C995659E33D1B07,
	SocketAddress_GetIPEndPoint_m251711A31597B8B2702F9212292CB699B84771AE,
	SocketAddress_Equals_m4E7AA4FFB7FF19A0323168642F3E4F1631726FFC,
	SocketAddress_GetHashCode_mA54234C51687C63132D9C9D326433FBB001C5B33,
	SocketAddress_ToString_m8326F21A4A05F551EAF40323D4AFBDFA84E74C45,
	WebException__ctor_m98277D0386F066DFF058573C69663D488749DB17,
	WebException__ctor_mE0703A9CEA00C199E48C0FAC3174771E9614CEC7,
	WebException__ctor_m4D8BF7D61087F7AA4018215A6DCF7578AEA4DB08,
	WebException__ctor_m7C17EA99B1FE182295AF99B968D67080AD4E2CCE,
	WebException__ctor_m56E04F240E37B9AA72D7A6ACB611807E1EFD2A99,
	WebException__ctor_m7EE3F748EF90DC6004CD094BC4CC203369FFE1F7,
	WebException_System_Runtime_Serialization_ISerializable_GetObjectData_mCF19A0A1F0BE4A6B87369ADC32B4811F63BA8639,
	WebException_GetObjectData_mB7123EB9D9EEA2C93A8C2F47E785E7A3437FF78E,
	WebExceptionMapping_GetWebStatusString_m95F105F6FBAFB410936E90EFAD6373521C921335,
	WebExceptionMapping__cctor_m4DF947DD31ABFB8C410E33FD5EB239D8210B989A,
	WebHeaderCollection_NormalizeCommonHeaders_m7CF89E01004789D42D5BCB5CF60DD065F489F5BF,
	WebHeaderCollection_get_InnerCollection_m6600DA73765180C37B0B0F802D3B7E4728B1A970,
	WebHeaderCollection_AllowMultiValues_mB9DCFBAD6F54FC4A0AF5D8E5BD8575FEE9E4DCA2,
	WebHeaderCollection_AddInternal_m6B83E38C739FBD15C7F70C6304C786A1C3BA0B04,
	WebHeaderCollection_CheckBadChars_m9994449495F8EA604B174519042DA00AF40B2E48,
	WebHeaderCollection_ContainsNonAsciiChars_m1507B05D93DB8D98F9921AEDFBB920A864E55256,
	WebHeaderCollection_ThrowOnRestrictedHeader_mCF5ED2B63250571375A2697DAC28F07EC847256E,
	WebHeaderCollection_Add_m55E340EE0B48470ECF8E265973CA7597C72AB98B,
	WebHeaderCollection_Add_m2001A99A04978C4DE11DAC26540C04C5EF5CC776,
	WebHeaderCollection_Set_m4D27314894A7B6FF691EE3283565BE259530E4AF,
	WebHeaderCollection_SetInternal_mD14173DCCD03148462674B04D44BCD60E32BAEB8,
	WebHeaderCollection_ToString_m247DD774337889E2CA464E8CED9854095342DC43,
	WebHeaderCollection_GetAsString_mC36899DE6A05C75AEB6A7DBF0E4147128AD01C44,
	WebHeaderCollection__ctor_mA79C59CAE93CD777F7B475AE4C74FFAF48892263,
	WebHeaderCollection__ctor_m6D0F9AAA2847C2E88504774B186D7187253FA463,
	WebHeaderCollection__ctor_mFADC65A9D6FFCA2888E38168C8B567F52D9062E2,
	WebHeaderCollection_OnDeserialization_m51FBDB1DFDC1D0F1F8A1C00F7950AAFF0F9CE278,
	WebHeaderCollection_GetObjectData_m4D4C3DA409886C6BD1166CEB9D92A8E45FBF349D,
	WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_mDE59C6575C21AF468D3F2DCC38108B7F03CE2AA6,
	WebHeaderCollection_Get_mEA01975EBD0236751F846A75C3C5F2B303BD1BB7,
	WebHeaderCollection_GetEnumerator_mFFE41B272347B4A4555E2D70BF5F70149638A33E,
	WebHeaderCollection_get_Count_m70B69DE18877ED7AE912CC9E938F7764128A78E4,
	WebHeaderCollection_Get_m32C6BBFEBE1281E17259CDCAD3727139FDF68C83,
	WebHeaderCollection_GetValues_mA58AF8D08AF3C4C2BFB73662FEB4C0D2EBE7B3FB,
	WebHeaderCollection_GetKey_m09DC31BEBDCE41D15F8EC7CBF4086E004AA9880A,
	WebHeaderCollection__cctor_m665BE270DF3734C72A5EF29FCAD2FB5DC30B9512,
	CaseInsensitiveAscii_GetHashCode_m2EE81D1BD0AC3190BAA74A8D4868F92462ABB003,
	CaseInsensitiveAscii_Compare_mB139A59D797F341DD9ADFF052699317DE534431B,
	CaseInsensitiveAscii_FastGetHashCode_m306A0F307E96AA75691B6E4EC161157798931F2D,
	CaseInsensitiveAscii_Equals_m23F3B8CBE2DD24C2240CDB8523A21D63129BAE3E,
	CaseInsensitiveAscii__ctor_m5AD65BBE763EC356D1DC91FBFE3B546650978C3B,
	CaseInsensitiveAscii__cctor_m39F489001DB8C119F2DDBC1E3D0102D6164908BB,
	WebRequest_get_InternalSyncObject_mD25BECC7D6A345FAB61DEF7AAE39BF1EB1FB3A1A,
	WebRequest__ctor_m3ACCFDB5F433B9BC39C8A0E7A6629AB4DFF67B9A,
	WebRequest__ctor_m2F0B777F71CBFCF400006179866A234A1335B0E0,
	WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m590FC06E76B37C3F6D7A6451B41747936064B430,
	WebRequest_GetObjectData_m544C55A909B7230FB2C133C9C5D3F6A17FB55777,
	WebRequest_get_InternalDefaultWebProxy_m7A27D4AE00C96C6113CC8D1663CB2111045D1F3B,
	WebRequest_get_DefaultWebProxy_m15A55F202BD3109A4198223B87D8E9B28487DFDA,
	WebRequest__cctor_mE0E372CA994FDDE64FB09FA654787BDD52D9330B,
	DesignerWebRequestCreate__ctor_mFDCC5B7F2462FAC2DB6E7C412FE894F1B00F65AA,
	WebProxyWrapperOpaque_GetProxy_mF87834EC1C4105EC385C9A489FD2107777F206E5,
	WebProxyWrapperOpaque_IsBypassed_m8AFC7BB3B774D3C5E8E17A88AD09EC00BFE61E2D,
	WebProxyWrapper_get_WebProxy_m64E0A52B9081B75ACED10724A2805F6ECE3C89AB,
	WebResponse__ctor_mDD72EDEB98B8AFA20480EE261E74EAAE10CB63E0,
	WebResponse__ctor_m601D6CE25BA0FAA154142B9AA7A5E188409B0D1C,
	WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m3B1AF8144A5E9368310A362667CC0870C77BA547,
	WebResponse_GetObjectData_mD4CAAA6BABDE03797E98E93985D3096630CDEC10,
	WebResponse_Close_mB7B37D2ED64992C6D94AE2547420DFE340C4BC08,
	WebResponse_Dispose_m4C4678024B930AD077E47EAD64B426D4F03F029A,
	WebResponse_Dispose_mD8EDE43B78CFB8B192059E92EFBE98E459A96E40,
	WebUtility_HtmlEncode_m45F1BC4F173DF8FE7C20510AD9C289F22DD1F373,
	WebUtility_HtmlEncode_m7DECB4086635D39BC77A461BC9513F92E4436376,
	WebUtility_IndexOfHtmlEncodingChars_mC500E4298304E4DD0D5DDC056AD86C6BFCABF856,
	WebUtility_get_HtmlEncodeConformance_m9BB06B049D0698E58CFEF9470B4D8BCE1E9F71DA,
	WebUtility_UrlDecodeInternal_mEEC587B6467DDAD5112854BC48D3F6A6E555E006,
	WebUtility_UrlDecode_m40F70AE5F799BF3F87B8533E26EF30E82D22EDFD,
	WebUtility_GetNextUnicodeScalarValueFromUtf16Surrogate_m322E5E36F052EFEF221F14D1BF79C0B18B18FA3B,
	WebUtility_HexToInt_mAE044F1E1C0D06937F85C2A489259EA585D647D8,
	WebUtility__cctor_mC2EB801BF2A61A981A47060F45D432A11DB0371D,
	UrlDecoder_FlushBytes_m29F10CAB85096F63BE84CE9467E8DC30C9865713,
	UrlDecoder__ctor_mCE5B81B6D6EB85606C33863FC5BE174907FD8FBB,
	UrlDecoder_AddChar_mCD77056E6A59A38DE4D074F1F668DB3793A9388B,
	UrlDecoder_AddByte_m3A0CDDE7BB085D0D9353DE864D768D73E10AC3D6,
	UrlDecoder_GetString_m8A69E835EE2E8C7CAF68272BA3FC0EC1E58D033B,
	HeaderParser__ctor_m472893312CE6499CF0B133E43208D60D8F045642,
	HeaderParser_Invoke_m3A5FC4D267C12585E1869DFB57D913613380D813,
	HeaderParser_BeginInvoke_mF6C5E5287D994844EC4A01DBAA7B579334A1B157,
	HeaderParser_EndInvoke_mD28C9565D9B34BF5E04ED602DFA2F0ED3794820B,
	HeaderInfo__ctor_m9B515C741E98093173780BC724C0AD044B395393,
	HeaderInfoTable_ParseSingleValue_mD45E4F27F4CEBF7C568DAC66B0E3166EE7FDDD96,
	HeaderInfoTable_ParseMultiValue_mA8F0E79DADB77F206D8F0603AF53D307E760AF4A,
	HeaderInfoTable__cctor_m2C579C8E09EC8024F202C843818DF8F323D0A397,
	HeaderInfoTable_get_Item_m13EB127C357A9276F74C65C0EEDEA3A1EF5E8D5F,
	HeaderInfoTable__ctor_mA44867F178E91B5FB9540ECB02A129F2868FC82E,
	NULL,
	LazyAsyncResult_get_CurrentThreadContext_mD04A3FE7D38E5DEC8BADF5B95877279D09B96188,
	LazyAsyncResult_get_AsyncObject_m8ACB19F0E9711613E0984A2605A7CD3B7ACEE37C,
	LazyAsyncResult_ProtectedInvokeCallback_mB9317AC9B30205D1D84B82F8F4C0674928EFC19E,
	LazyAsyncResult_InvokeCallback_m3AD664A494F2821C00A7E07BCE9B4FD63A2BC369,
	LazyAsyncResult_Complete_m65AC5DCDD0B1EAF8702194A03D24B415F99A6E49,
	LazyAsyncResult_WorkerThreadComplete_m5F2BECD93B121A2BDFBE3AD9C8E60460FA1C7ACC,
	LazyAsyncResult_Cleanup_m5382F96236C1F0ED05304E68A0136C19AC870AB5,
	ThreadContext__ctor_mE89CF3AF57457840698C5046CD32EF8B02CDC40A,
	NetRes_GetWebStatusString_m6E2428C203EDAB9380F19ADBD0F55FCFA59C31A0,
	ServiceNameStore__ctor_m0F79A15E62738E8A5B978935C4E96AA73735043B,
	TimerThread__cctor_m6BED81C173667FF27FC2DE60A8362BFDAE38B0A3,
	TimerThread_CreateQueue_m3AC5A9C86D35BECBB838DFF5DAAE2FCA75D141BE,
	TimerThread_StopTimerThread_mF21D32E1712AE8052A36EAC8729A2755B4AA4FBF,
	TimerThread_OnDomainUnload_m594B6D256C11A7B1FEFD61BDA0A567058F4517C4,
	Queue__ctor_mC89D29D512FC164F6B5A4C9FD5DE574328FC99CC,
	Timer__ctor_m4540393393A01B07D912FFFD47EE37BAD97D8DD0,
	NULL,
	Timer_Dispose_m14AC12E37E52871D2FEC402F8D2F78BF8101C32B,
	Callback__ctor_m6DECF0EA1ECE944021384E1D04CF4931C89353FC,
	Callback_Invoke_m5CF1B13973F36016D5A95A11766B53018849FC0B,
	Callback_BeginInvoke_mAE44EE87C3A42CE9EE94B437D3FCB03C743CF2F9,
	Callback_EndInvoke_mD9EB2BA9D74B86A5A84275D63BAFD884CA639C7E,
	TimerQueue__ctor_m43203205D39CB2175B0E5832A359AFB952AEA9D6,
	InfiniteTimerQueue__ctor_m0615ECE53786982AB9CE17517821090EAA4875FE,
	TimerNode__ctor_mD6B740263A99B51737831DE7F0400AF236C5A39E,
	TimerNode_get_Next_m3960D4407C100E026C6F7EF316B07F8BB2C26517,
	TimerNode_set_Next_m0C74401BC133D94AEDB40E1CB0A24F2C1F52FC68,
	TimerNode_get_Prev_m6A2D3FA9F1ED71F25B05D72A81DB7A8B368AAA62,
	TimerNode_set_Prev_m3D69D7AED0406834FFFFBE21804DF522B8FB14B6,
	TimerNode_Cancel_m6EB166DFE1E2E01BBBAA1FA4C35457DB111D951B,
	EmptyWebProxy__ctor_m5EC0BA8242BECE3F0E67CC143135CBE8670BFFFD,
	EmptyWebProxy_GetProxy_mB0FAC789C4DD283E803F72B38F22ED5EA25535AC,
	EmptyWebProxy_IsBypassed_m9A64B556EC9A174EBF75652A1C274A437E1CC99B,
	Cookie__ctor_m4C7C1E7E0DCE68AC143F44630AEE2D385480DE48,
	Cookie_get_Domain_m278E7B0428D3194F5C38175134F7C3D5788A69FE,
	Cookie_set_Domain_mFAA0D7FAB346C34A3ADF865A6F531A948E4E9DBA,
	Cookie_get__Domain_m3B7DDACA37D03838CA3C94460AA300D4E2D81C7C,
	Cookie_get_Name_mC233F7C69F3A7FE643C75F4289BE2F7A8E84D8FD,
	Cookie_set_Name_m26EA3F39B9C1C3EB1EF9C51209D3EFED1CDF00F6,
	Cookie_InternalSetName_m866D7004C1F40D6F1247918DD747C08F71986B42,
	Cookie_get_Path_m8B56312681A7D76C09C012AE84004D2FE15AFE2A,
	Cookie_set_Path_mEA8D095CDCC6D19456E1F24C43F143080EF577E8,
	Cookie_get__Path_m78788CA8B87C93C7C22828F97BA8F1AF022908B1,
	Cookie_get_Plain_m640F05F7E1F4600F56769459C1FE15548512E2E2,
	Cookie_get_Port_m1ADDA2D709AD33FC6693C575C07E86BA94F50EE9,
	Cookie_set_Port_m8BA5AD268A143AE02AC42EB6457AECA645C2C298,
	Cookie_get__Port_m867588A59661398C9AC64EB223387B42048D280A,
	Cookie_get_Value_mEFF804AC5A0D1252E626903FE0B45706D4F3A453,
	Cookie_set_Value_mB71BD8E33373029251A2C55533A8A4417BDB8767,
	Cookie_get_Variant_m5453D977C7AAF6B634E5B31CB2DE7D66BD323551,
	Cookie_get_Version_m061640FE8C0F64A0FA003BF8D3391CC1FCD153A4,
	Cookie_set_Version_m4D43603189124EA1FDE4E8D45D65C60F1EB9B64E,
	Cookie_get__Version_mE3C0E366E86DFAAB2EEA66561B74C4E8B284B854,
	Cookie_GetComparer_m626622B01059F3912F25478B1A1B38AFFB6BA7EF,
	Cookie_Equals_mB07B0CC36C9FA37BD7F8DE25DD5BF11BEF65B7D4,
	Cookie_GetHashCode_mC355FA3D045BA3A216583AEA99C8D448A45215BE,
	Cookie_ToString_m50C477C29C14B822B6867B4B6F877BC0120EFC4E,
	Cookie__cctor_mA3983453AA0BDB2D9620CCB97569AF512BAF7F1A,
	Comparer_System_Collections_IComparer_Compare_m83E8F9A164E78CC74ADA62FF0EB4F7AEBE08B902,
	Comparer__ctor_mB9048FB4377C7FE872A4ACD9A0173FEDA37554F3,
	CookieCollection__ctor_m6F7AC5879C514DAD6EE967A7FC18C3F28DAC4B11,
	CookieCollection_get_Item_m811D5D88284ADADB6200D9B6CE5BE74B7324A597,
	CookieCollection_Add_m81852BE25115EA44DEA8AC788666350ACBFF13E9,
	CookieCollection_get_Count_m329458A1D5426014346F371D1B86AB4678FF34AE,
	CookieCollection_get_IsSynchronized_mF0FA5ADB5DDFC0DA4FAE1D06BE5F0A28A35309DD,
	CookieCollection_get_SyncRoot_m4761E1233AAB107D61A409A106A117751A42A6FF,
	CookieCollection_CopyTo_m1C053D1F041D227716D6D7D472A31B9E65A1C871,
	CookieCollection_IndexOf_m775D41262A22744C845245D4B6574B6AE5983DBC,
	CookieCollection_GetEnumerator_m98DE8A53502E0AA6C428F564D6EDE38A007D22C9,
	CookieCollectionEnumerator__ctor_m1171DDC5103451BF97CD71F062D1D46F73A82E24,
	CookieCollectionEnumerator_System_Collections_IEnumerator_get_Current_mAA94D3E326A7361A173810EF7FEF6ED5C5050E18,
	CookieCollectionEnumerator_System_Collections_IEnumerator_MoveNext_m654F79FEDDFEE6946815223DF2EFFF20B25F5871,
	CookieCollectionEnumerator_System_Collections_IEnumerator_Reset_m303622E6840FA17ADFF40CC74DDAC1EB5480C3CC,
	CookieException__ctor_m5E53613191A7B09E274C5250669847B30A2AEA0D,
	CookieException__ctor_m8D6130D80CE467495A4DED747A392B3911258566,
	CookieException__ctor_m617F1512B36DE1EA3650DE76353F8A386F788327,
	CookieException_System_Runtime_Serialization_ISerializable_GetObjectData_mA95ECBFCDBBE4D5881077E40D1DD3CDEDC9E07CD,
	CookieException_GetObjectData_mF1CE13806E7D8D065C369D5149DD63197257D599,
	FileWebRequest__ctor_m3BD0B632AAAA9A6314A48EAEA261D6C49A29CC87,
	FileWebRequest__ctor_m4D6FACD86407B7910DCB5708F13796534DE54DFD,
	FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m1DC998628B76190A2F606178371548237516B256,
	FileWebRequest_GetObjectData_mCCC968CB9501E785DDF897B35DCD0848931D1582,
	FileWebRequest_get_Aborted_m687CEE80919037332B61F2C449D9EBA8A4E7C587,
	FileWebRequest_GetRequestStreamCallback_m48649B4261BBDDB95536989690D28D2D97257E46,
	FileWebRequest_GetResponseCallback_m4DCB2FCD829F1CED62A53002E8DE88C81B487CC3,
	FileWebRequest_UnblockReader_m71733AFB64CCAE0043F76194EE532B48ADB3E955,
	FileWebRequest__cctor_mED169DCB124B8F2825E56289DF278CB89662D0EB,
	FileWebRequestCreator__ctor_mC9309A7E8AEF2B32E4596F499FA2C1AFF26FCC8B,
	FileWebRequestCreator_Create_m4A009337FA6E4113EB05A0D9B8A68DC562F6CD11,
	FileWebStream__ctor_mAC5E31F61865C55A0BCB1EAB7CA5D6EB1E4E9536,
	FileWebStream__ctor_m5E2038F8FB3B8C052A66B461A4AEAD763EC72523,
	FileWebStream_Dispose_m3761A400830205DF54493ED2E0B5479ACE5E09D3,
	FileWebStream_System_Net_ICloseEx_CloseEx_mD34DB9FF876566D364B3AC2720DAA67BEFB5494F,
	FileWebStream_Read_m99E1D1597138ADD46D0546BD9C963F8EF4345D62,
	FileWebStream_Write_mAB0472EB14D00B4BA51EA364A99E051D2FA8F2E6,
	FileWebStream_BeginRead_mFF1D75843A5A82C1034547CC48968C8C05145ED7,
	FileWebStream_EndRead_m6C8AC6E7D6FB618390B27853BF32C70C0E6258E1,
	FileWebStream_BeginWrite_m5CDA5FF4DC3E9DBFD6FD4E091860247D3921A088,
	FileWebStream_EndWrite_m2A4EBAF99FA675BA834D20C7D23F1925A37510AF,
	FileWebStream_CheckError_m5373399E1C7A5036852A3495F5B3C04640BB0F51,
	FileWebResponse__ctor_m937A38D5CC20434EEC6F27DE580B8F7418FD6B46,
	FileWebResponse__ctor_m31F0F51C0F5CDCF773499E41FD29C002C230B483,
	FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m50547639BE9A06AF71C19D4F6E2B7C9DF3897DAC,
	FileWebResponse_GetObjectData_m62702AE7EAE842946B45BE26D5E492D9598FC920,
	FileWebResponse_Close_mA4570F39B91740DFF95E0050E9C13BC5C527FC84,
	FileWebResponse_System_Net_ICloseEx_CloseEx_mF5CE52E9F3E81C407E93786BAC6018B597C7DA00,
	NULL,
	NULL,
	WebProxy__ctor_m9DAD546F80ACD9479C786D5C66CF841B7D2F31E8,
	WebProxy__ctor_m88D1B551CA157B4190F7082F3496388DB41B892C,
	WebProxy_get_Credentials_m457E5BD941E4AEA6DB65859123F33B3C1614C68A,
	WebProxy_get_UseDefaultCredentials_m03D6385937D10D5E2B971852E81196FC1281CDC6,
	WebProxy_set_UseDefaultCredentials_mBD6A789873DFF09C584F1E1F78F2D286D6FA990C,
	WebProxy_GetProxy_m8FDE265E6B9973E022EA8970C9B1DAD0B2CCC25F,
	WebProxy_UpdateRegExList_mB499E94B5CB70B08BBFD2D9DA9EFC2B128CC26DD,
	WebProxy_IsMatchInBypassList_m065FB89DE3BC59171195D70D96B4D36733189226,
	WebProxy_IsLocal_m502074ED102B252CF88AF725230AA3FA2D97A21F,
	WebProxy_IsLocalInProxyHash_m7F46FAA47C841E1E0CD0127973C45EDD72DCFD7E,
	WebProxy_IsBypassed_m8F90EF89CB55CAE69CA92B25A737849F0C2B6449,
	WebProxy_IsBypassedManual_mB2A24F5F65C1D5E4C7F9312D09C6A6DB4A7B6F1E,
	WebProxy__ctor_m1C58101578A4CE7D939641C97BFD8E0203AD3F14,
	WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m55E9EC6188F26F2762C669DEB2BAFF297BB98787,
	WebProxy_GetObjectData_m6F158918E51572F668D8E13E4271E8A3D8C6E70E,
	WebProxy_get_ScriptEngine_mF28F919839AC16984BAF19EF7884DDADEC1186E4,
	WebProxy_CreateDefaultProxy_m83288C2048B45C283D7A797E5EA858314B552F0E,
	WebProxy__ctor_m8A57A31FD52C935A1C493001DC32FC2F17166DD2,
	WebProxy_UnsafeUpdateFromRegistry_m520E026082667505E562985E6101A550DD59D0A0,
	WebProxy_GetProxyAuto_mF31E6F0E78FABA247E2FC4E69BF9EFD68F2ABF61,
	WebProxy_IsBypassedAuto_mE488794EEDC4F991CA1DE691217CD89F66C6BEF0,
	WebProxy_AreAllBypassed_m1A4A8E469860E3F507377434686208375B58A050,
	WebProxy_ProxyUri_m13899818E2D75D56820A64C02A3F2ABC80EF0A22,
	AutoWebProxyScriptEngine_GetProxies_m37C7A2CAEB8CD280B45518559965B518519D007F,
	AutoWebProxyScriptEngine_GetProxies_mE4E0E75E060B5347A17D354889CF1613F3A7FD19,
	SecureStringHelper_CreateSecureString_mD0C2BF056673EB4D998FB43FFD8B619BA3C56788,
	ServerCertValidationCallback__ctor_m74FA8CDC1C3AD2BAE782BFD55EC0AA62A18E7DE0,
	ServerCertValidationCallback_Callback_m70F2E0E1A3C556EFADA5F1AFC56B43A65E0E7FBD,
	ServerCertValidationCallback_Invoke_m88F7CC8E8BAE6F501FB49ECE5DC9026120DA3857,
	CallbackContext__ctor_mC3F2B967B65649E6A2FC12CC30EFDAA5631E1BAC,
	ChunkedInputStream__ctor_m4881383104676360DFEE920A5A9C8D9B7A3A0CC7,
	ChunkedInputStream_Read_m0B90CA9A27BDBDCEB6D5D5F6449464EE34B6A00D,
	ChunkedInputStream_BeginRead_m7D54ECB79F6DCAD88391AD7649C04F835D85DFA0,
	ChunkedInputStream_OnRead_mCEEEBC0648DFFA337C09FAF3911145ED2EC5F610,
	ChunkedInputStream_EndRead_mCF8EE2908D23548AD52BC09C76834D6692AFB0ED,
	ChunkedInputStream_Close_mF1099B1C86674DF436FF6422541C435FB0681448,
	ReadBufferState__ctor_m112DE2557DD17168A5BE6BD691ADD4186A2F4B04,
	Dns_GetHostByName_internal_m26A891C2889762F2C8178F5D7C69F8054B6A008C,
	Dns_GetHostName_internal_mAD5618245A645A5CBCC392DFAE266148569FFB1C,
	Dns_Error_11001_m9BE914794C941E89851DAFED4058718C37D7C612,
	Dns_hostent_to_IPHostEntry_mEF4DE4F30A1F6F3634D06C3AB826949C91C56BD0,
	Dns_GetHostByName_m072CBDF5FD14C53FB28738920C62F05B6A63ED67,
	Dns_GetHostName_m235D1E0FD888CE88E816294B8E687773E016E77E,
	EndPointListener__ctor_m06FAC47BB19DC95E233725D30FAC27D50EDB529F,
	EndPointListener_get_Listener_mC490794B0495B4C673CA839597035B9430DAA4F3,
	EndPointListener_Accept_mBEA0AD18EB290AC9A70D389731AA11C5C0464BAB,
	EndPointListener_ProcessAccept_m3167FEDB04A867ED9448CF0C1FE771B223E8EFE3,
	EndPointListener_OnAccept_m587CB7DF248766CAD150D8DBD3495E7126CE56F4,
	EndPointListener_RemoveConnection_m0C19818AFA2847A9324B6F9B023C2266D37A554F,
	EndPointListener_BindContext_mADF40CED37944EDE900CDD6F2FDC4FC7DAB410C9,
	EndPointListener_UnbindContext_mE21F25A7B9BD69165A075F6FDEC6A20FA8A4BF2A,
	EndPointListener_SearchListener_mC3441C72E5908ED6AF9CA4665B743D70CD51C338,
	EndPointListener_MatchFromList_mE82CC7B8492FA44651101ABE65E8A376F7E3287B,
	EndPointListener_AddSpecial_mDBD1B26D49973740FF67A8B0E83779BB4189243E,
	EndPointListener_RemoveSpecial_m66E47FE3E6970DC7D49E26A3C176CD79C50F78DC,
	EndPointListener_CheckIfRemove_mA965A1EA52E12C55B21459B88424F19A404F651E,
	EndPointListener_Close_mBE10FCF7B4B139047C1940CEED4852C9CB5D0941,
	EndPointListener_AddPrefix_mE4470615B84C5BF59DBF1A267FF6C74E1ADAE36E,
	EndPointListener_RemovePrefix_m47437560CE2053AEB6D5AEB820D24CDEAF162320,
	EndPointManager_AddListener_m9468DED5A3833723E5FD5599F403053ACDDD8B45,
	EndPointManager_AddPrefix_mB14837B4028AB2234280E3A5B8CE90E5AA09B76A,
	EndPointManager_AddPrefixInternal_mBBEA5034DBF1CFF75FB1D7F3FFED42F903CE7E33,
	EndPointManager_GetEPListener_m3CD4CFA7D69455180FDEC3DD2F17600D7B15F989,
	EndPointManager_RemoveEndPoint_mDD750E0F8A47B9B336E3BF614B1328E5EDE0DF28,
	EndPointManager_RemoveListener_mED973E5FD207B496C0B0711381C445E5BCC8CDDF,
	EndPointManager_RemovePrefix_mD4C3F4FE4AE3D0D451BB8D951396591B0FF7693D,
	EndPointManager_RemovePrefixInternal_m5C057367A55FAE23A726FDFCFAACEFB7112AC1A2,
	EndPointManager__cctor_m2C0A06697FC2CC3BFC39464000133C25615E6FB5,
	FtpRequestCreator_Create_m5CA2D4FFF5B62CB6FCBBCB62603714EB3661160D,
	FtpRequestCreator__ctor_m67E38F5A154B50C28349321A03CA0A0A8BA1FC5A,
	FtpWebRequest__ctor_m1C444C1A347BC343DFA3743C7091F6C15DB57388,
	FtpWebRequest__cctor_m3CD2399DB0B2BF9D8349514C0E8F0FE9FAA42211,
	HttpConnection__ctor_mA9D70F84C132137E97F44A0370E20CA3D8811FD9,
	HttpConnection_Init_m07013EC738D7A16C287AC3ABE6E1CA20A468AEE8,
	HttpConnection_get_Reuses_m3349269F67FC4A37B34B4069E85ADA002A59328C,
	HttpConnection_get_LocalEndPoint_m0434C23A2834BE0ADE09BD415D29EE52BEF7A1E7,
	HttpConnection_get_IsSecure_mDBA150F62B0E174850CAF56792B62C43D8AC83BD,
	HttpConnection_set_Prefix_mFF3A414A70F40DC675BE3E38D13EBD573809ED47,
	HttpConnection_OnTimeout_m04CEE943DA79156A94EEB28C0C2FAB94D3DD00A2,
	HttpConnection_BeginReadRequest_m8B5AB93648FEAD2CADE00E30621A21A8D7F9CC2D,
	HttpConnection_GetRequestStream_m8DA5932B7D735BD6CA1BDF29FDA6E85EF99DAC7A,
	HttpConnection_GetResponseStream_mC3D75FD104BF0C8CD0666F93518EC2FEAD6C71AA,
	HttpConnection_OnRead_m586FCDC6DC50E064373CEBDFCFFF66B8C9DF13B4,
	HttpConnection_OnReadInternal_mD407AD1A0BA348E023CF3F48A7534815F38B7A6C,
	HttpConnection_RemoveConnection_m4A3FFBB14DF1BFF27FA613B286278C0A08C91B19,
	HttpConnection_ProcessInput_m3CC36A48AFC2C361F9738CA1D037C81796C2E59C,
	HttpConnection_ReadLine_mA67E81F1FCD26D9786E42F0ABFFEA3F26765F826,
	HttpConnection_SendError_mD145D6E48E7EC811EC73AB70B91E1556CB3F4875,
	HttpConnection_SendError_m100E1F2F97108F9A17BEBB9F2FFF6955DC954D45,
	HttpConnection_Unbind_m61C2E110F77FA3410F67407D1C8231CA262F3DC4,
	HttpConnection_CloseSocket_m8680B3B269134A9055480E0AF32A522FF9F84B48,
	HttpConnection_Close_m9712606FB42670D5A9948679FA7507F1FEB2105A,
	HttpConnection__cctor_mB866D0D3F144D3B76DEEDDD7AA7552136D262C99,
	HttpConnection_U3C_ctorU3Eb__24_0_m67A8D80B78C7A83F211A9D3F7B89A94F0EBF1D85,
	HttpListener_LoadCertificateAndKey_mE5DB60E34263026634CB7216A267344ABD5A0F95,
	HttpListener_CreateSslStream_m6EB2EE1051C588E01569503F6DB8302768B37495,
	HttpListener__ctor_mEC74365C9DA5CB7E29E0A1EE5B55DEE6E510E60E,
	HttpListener_get_AuthenticationSchemes_m89ACE8EA71B878354D3D7F4962E616562FB32761,
	HttpListener_get_AuthenticationSchemeSelectorDelegate_m9C6F21968CA23189AD2D78FA9F38E24FCB2F2D26,
	HttpListener_get_IgnoreWriteExceptions_m597F67DDFC3A9CD7B02B39DBCE134A66E118180D,
	HttpListener_get_IsListening_m1F6E2251B1F45E3D99FD3E02D6425B7BC5ADB482,
	HttpListener_get_IsSupported_m15E776806CC7FF442284ABEE848A901FC85AB7E7,
	HttpListener_get_Prefixes_m9632A8FF20E68DC9770668813E57345354144298,
	HttpListener_get_Realm_m40FA293601A0BAF262FBEBBEBEF4DBC9D33CDC10,
	HttpListener_Close_m68187AD4709225864350614001D2C79EFE403A0B,
	HttpListener_Close_mC3BC2E486F763740D912313E23175DBEAC9E60BF,
	HttpListener_Cleanup_mCEEBC87F991518382DA9DE8990C92C6E02591C86,
	HttpListener_BeginGetContext_m65201E066F3BB8375C5CD139C90B8A14EF690AFC,
	HttpListener_EndGetContext_m0CD191F115FCA16DFF3934067D145D0B7B018A37,
	HttpListener_SelectAuthenticationScheme_m1096AA8287AB6E25A926D04D55161BBE46BA4455,
	HttpListener_GetContext_mDEC9B204A58E6867E9D7EDAEEFE4782DBCDAE2DF,
	HttpListener_Start_m0A043055653F94400CC94661D972C84C30E86043,
	HttpListener_Stop_mABB7F03F625A82DDBC12144F864078AA1266B815,
	HttpListener_System_IDisposable_Dispose_mF314B449EE9B677ECE13C08FC90FC9143AB02A1D,
	HttpListener_CheckDisposed_m959EC0D25D21FD19426E2CC5C200A9F6F3ED6FDA,
	HttpListener_GetContextFromQueue_mCBA3439C77DBF16B9ABC70A3672C4835584D4740,
	HttpListener_RegisterContext_m8F0C0A5E85407B2FA820168D10A759EC741DDB54,
	HttpListener_UnregisterContext_mF3C542C27973BD0EC26EBF88760C54B2853A462A,
	HttpListener_AddConnection_mE873F00D206DCAFC185E317C72CD39E923656997,
	HttpListener_RemoveConnection_mCFA66DF2787C0AC8FA8278AB837C1707CF9F97CF,
	ExtendedProtectionSelector__ctor_mE5F4B1382EE26035E9120945E6F08FB66859483D,
	ExtendedProtectionSelector_Invoke_mB5265D81D3E08C64ECB738641A1A752812163451,
	ExtendedProtectionSelector_BeginInvoke_m4DDBA714B5253E6D79E2A0C1B436758037697747,
	ExtendedProtectionSelector_EndInvoke_m3607FDD321DD177DA867776FE990B9B69558BE2E,
	HttpListenerBasicIdentity__ctor_m7389C3CA31297365FBF109E690DE4F85FF541B92,
	HttpListenerContext__ctor_m367331ABC874B2EFFC23DD44B6278E9F03A2658F,
	HttpListenerContext_get_ErrorStatus_m88701EBE2CC6E21D4C0D38C94F60FADC380A8980,
	HttpListenerContext_set_ErrorStatus_m829434FB87C906D173BAC795BB336524A53034A3,
	HttpListenerContext_get_ErrorMessage_m616454CE05854CB5CA7D56F53EA2E4D83E083C1E,
	HttpListenerContext_set_ErrorMessage_m2E737D2A662511521F8DB103268F64C03FF087E7,
	HttpListenerContext_get_HaveError_m71E1DABD9C4C822C512A87CD89AEFAEEB7206A3B,
	HttpListenerContext_get_Connection_m9F4EEAE8B2CCCE7E530997EBFB84289D8A376B5F,
	HttpListenerContext_get_Request_m63B499D96B2563728DC97E0141BE2DA02B498232,
	HttpListenerContext_get_Response_m95961FFF89EF78A6FB7A174B66BF225C95120756,
	HttpListenerContext_ParseAuthentication_mA57B589313A831B13673F5C31F01760DA195EC5E,
	HttpListenerContext_ParseBasicAuthentication_mD8154202BAB956507FFDFDE3470B1E8A605B76D9,
	HttpListenerPrefixCollection__ctor_m5F46452B637DBFDB431658BFC2503321ADE111D1,
	HttpListenerPrefixCollection_get_Count_m8549C9249822AC3D26A9A2726A37921E9031FA8D,
	HttpListenerPrefixCollection_get_IsReadOnly_mEC8B4704A88A432B04008641556BE675907B1CF1,
	HttpListenerPrefixCollection_Add_mC81B7F10D756C258BA242226C9ADF5EFD1A28250,
	HttpListenerPrefixCollection_Clear_mA0B9D87B5560CF8E6681591A13CAC8B4F96C97D6,
	HttpListenerPrefixCollection_Contains_mFABE306B5CD8AC6297923D6E263AF3FF83593A1B,
	HttpListenerPrefixCollection_CopyTo_mF7710B919796849B10E04A5E408E354A8A007671,
	HttpListenerPrefixCollection_GetEnumerator_m4D0508B2D8C4108FCAEEA1EE051E512727F31970,
	HttpListenerPrefixCollection_System_Collections_IEnumerable_GetEnumerator_m27CC471BA2255CF30475B4811905348EAEF71D92,
	HttpListenerPrefixCollection_Remove_mA3CE30469499AC1107ACC52C84D4F9312B783E42,
	HttpListenerRequest__ctor_m390BB89533596BE2045B3C774115F027088A1F58,
	HttpListenerRequest_SetRequestLine_mFC678F1B15B6A3DE5E89FDAD2A7B5226F883EC84,
	HttpListenerRequest_CreateQueryString_m537DC7C3EB82CDD27BD369F8E0BF4DA1EC4B84BA,
	HttpListenerRequest_MaybeUri_m5322EFF5B948285708CB435CEE3E90EB4AA77F74,
	HttpListenerRequest_IsPredefinedScheme_mC516FC84760C5D6EDFE8E6CA72F3902760B7CB90,
	HttpListenerRequest_FinishInitialization_m5DFD1863DB03C951CE9F49105A833A0E3A350731,
	HttpListenerRequest_Unquote_mB1DE693099DBEA28A15DBA3CDF4441828F99377B,
	HttpListenerRequest_AddHeader_m6473EB6530820DA36B774471ADEFF1B71BAD1899,
	HttpListenerRequest_FlushInput_m5B2B38056B947AE7F5EC8B1EC92C2A0893F41FD4,
	HttpListenerRequest_get_HasEntityBody_m6E0C281A0029177559DAEDB2929FFE3F71A57620,
	HttpListenerRequest_get_Headers_m07826A87D542EEDA5ADBC6E622721DE9958BBDA5,
	HttpListenerRequest_get_HttpMethod_m59C2D0E0AD7A0EE45D45C16539DA944D677C3965,
	HttpListenerRequest_get_InputStream_mBDF088465ADCA5DB1CE43924D14F3A6F32A2A1A3,
	HttpListenerRequest_get_IsSecureConnection_m7759B19768707DCE3631270B670893CFC9FC6AA9,
	HttpListenerRequest_get_KeepAlive_mEE0FE0BB1FF8A9211D01B647BD14CBCEC6CBA19B,
	HttpListenerRequest_get_LocalEndPoint_mF9ECF452A54AE842CA0E19E9F3A7B2D08156A640,
	HttpListenerRequest_get_ProtocolVersion_mA38670BED57735CE38476205F9042FA02FF06D2A,
	HttpListenerRequest_get_QueryString_mAD28192337458F902B05C2BC161E94B7BDF9E443,
	HttpListenerRequest_get_Url_m9726B75231020F0BA6E7A029DEE59F561BA986C0,
	HttpListenerRequest_get_UserHostAddress_m54FFB734B778FBED37715C7D14E74E33FE7A2AA8,
	HttpListenerRequest_get_UserHostName_m4844E8614C525EDC2126DA366ABECF07F16E6B64,
	HttpListenerRequest__cctor_m7D9CAAC88544E508AB4B2E46774BAC1F41A8D949,
	GCCDelegate__ctor_m82296297EDE1D125E182095C3B21043E3A79258D,
	GCCDelegate_Invoke_mA394FDBD92FEFC7FC6BB9591908BC8DC92662F0D,
	GCCDelegate_BeginInvoke_m4E58FEA433668B39D2135A6839595EE6980E66CE,
	GCCDelegate_EndInvoke_mC578DA5B68BF6922E7712A00471982756987A552,
	HttpListenerResponse__ctor_mFDA4BEDC52622C5501B798BE005C58E773E46B81,
	HttpListenerResponse_get_ForceCloseChunked_m183F44B95DF99FFC3EC0F1E1D6C6C02CFEE10BB9,
	HttpListenerResponse_get_ContentEncoding_m316EE9AEC05309F6BBF70D8B1F11DAB2FE70A5E0,
	HttpListenerResponse_set_ContentLength64_mF0803E4F742BB46328EC5408097D0BF254B42DB1,
	HttpListenerResponse_set_ContentType_m19EE35719E4609FDA9BA1CE729C62D2EA104810B,
	HttpListenerResponse_get_Headers_mB2C90529AAE7A0E451500BBAB88CE0A329A4B132,
	HttpListenerResponse_get_OutputStream_mCACC88CBA15C1722465E23FBD3223DAF3247119D,
	HttpListenerResponse_get_SendChunked_m6D0DC505D05250E1AF3366BF21CEDB503C3C9780,
	HttpListenerResponse_set_SendChunked_m1E1B55ED5A59C58C20753126FC26FAC0968E0A16,
	HttpListenerResponse_set_StatusCode_m8601A33F1206FCA0E0780DE4732BB2FCD504B8B7,
	HttpListenerResponse_System_IDisposable_Dispose_m3A18F0D6F1631AB01046658F44E6C6EC733C47F1,
	HttpListenerResponse_Close_m694347FDE447EE50DCE09101BE7EDD5086BB8DB9,
	HttpListenerResponse_Close_mEA5C577CC214B2A3DD98392845A81D49604E4243,
	HttpListenerResponse_Close_m64CFB2ABF8BE26D81AE4F052AC9A081452851DA9,
	HttpListenerResponse_SendHeaders_mEA1A560DDEE2610A599D25272778DEABE3A5182A,
	HttpListenerResponse_FormatHeaders_mC10CF22D621517227D96345A4B41649764F9EE7B,
	HttpListenerResponse_CookieToClientString_m416E457C26A23BFCDB882B02CCE2BA931BD60222,
	HttpListenerResponse_QuotedString_mCAC821853C742A1D3D2CCE34438A5A75E22ABF94,
	HttpListenerResponse_IsToken_mE028E111158FB580868AD7CC6651502D0E3F2AF2,
	HttpListenerResponse__cctor_mFCE66B5EE939F39207B57971564CCC0A28FA26DA,
	HttpRequestCreator__ctor_m06C2AEB34BE1C386F12AFEA48D7F330E429653BE,
	HttpRequestCreator_Create_m8B42C3EE0D53119899DDEF28D227EF203932AFCD,
	HttpStreamAsyncResult_Complete_mB8A89827209D8708A496F760A246C8B69F3F2D43,
	HttpStreamAsyncResult_Complete_m65B75CFBBF3C65EAE648F6B1E88724AB01CDA491,
	HttpStreamAsyncResult_get_AsyncState_m5B36239413B4FA260E4A4A8E343A344E7555070B,
	HttpStreamAsyncResult_get_AsyncWaitHandle_m713F54F023122456E92DA3364E53D10F9699E796,
	HttpStreamAsyncResult_get_CompletedSynchronously_mEC5F59D792AAE12E0A00DDFC3C5D92F10A4B9CC5,
	HttpStreamAsyncResult_get_IsCompleted_m43B4F5CF7B545B76D724DC9B89D552F416AE3FA8,
	HttpStreamAsyncResult__ctor_m18BE314C51AF3EF0389E4AE2FAEF0BE5A6133CBB,
	HttpWebRequest__cctor_mF2B85FBD5756A500889E6D4E71C84998EADAC5E2,
	HttpWebRequest__ctor_m34F4D99DEAEB2ABDA7B321DE9D934E2AFFE7ED87,
	HttpWebRequest__ctor_m37FE79885E818FA7A4BB502CC00F216A40C759CF,
	HttpWebRequest_ResetAuthorization_mB46C878D3130CF8EF4BB6547E17554A0DB49A56C,
	HttpWebRequest_set_ThrowOnError_mAAE39F767EF8CE4BA64472DD870F8116C0F306AA,
	HttpWebRequest_get_ServicePoint_m87CA558F0C7B4A6D585F42616771173F75DE2567,
	HttpWebRequest_get_ServicePointNoLock_mAB6BB5851482B6EA1FFB3943897D7B9399795B13,
	HttpWebRequest_get_ServerCertValidationCallback_mC40F344BFA88D34DBD794CDB8BD0B8A5F5D78AA6,
	HttpWebRequest_GetServicePoint_m380927C1AF6310F83D8BD1B578B9B7B06AB32A3A,
	HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m3B43B7FA26F335B661343C4686CBAC6D4B00727B,
	HttpWebRequest_GetObjectData_mA0387A42ACDA0C1DCA5B0BBC62C17D57E5D19222,
	HttpWebRequest__ctor_mA8D0231158E0A31839FDBCF3A4058E12233CC0CA,
	AuthorizationState__ctor_m33AFDC1A78F1C2709F58ADE60766E6DB40B23108,
	AuthorizationState_ToString_m7A5CA8DDE1302D55B5F3B1F75A5D79387EFF0531,
	IPv6AddressFormatter__ctor_mEEFF87906A194838D6E4A31AB724A28808E539E5,
	IPv6AddressFormatter_SwapUShort_m75C8E63B5AF4B26DAFE51755DA13597148415AE4,
	IPv6AddressFormatter_AsIPv4Int_m875CCBC60A506A331C9D591D5A88D49EBB6730E7,
	IPv6AddressFormatter_IsIPv4Compatible_m769BBFB4FBB844EC8AB61A635495A7F2925FDD99,
	IPv6AddressFormatter_IsIPv4Mapped_m46AE9AECC6E77E6A53ACBF60BEF336D45FF236DB,
	IPv6AddressFormatter_ToString_m5FB0F927F3B0BAA521BC92562A7F5A78460023DC,
	ListenerAsyncResult__ctor_mA65084C3DC9246D2637CBDDCF2118E23D29633FB,
	ListenerAsyncResult_Complete_m0E63916B0B6D8AEAE09A111A3B67002EF7268BA2,
	ListenerAsyncResult_InvokeCallback_m571222CACE5322C41FDA9CA1BB328A19C389805A,
	ListenerAsyncResult_Complete_mDC6A23FC3A7F05CBE6A2AA99817B84729F34908A,
	ListenerAsyncResult_Complete_m306B7E31030E771F51FAB1D52859824B73C2DFC4,
	ListenerAsyncResult_GetContext_mB5BA30F9CE7F686AFB4F8B6EE8A070875582F9C6,
	ListenerAsyncResult_get_AsyncState_mE5BF479AEB149B74FC3ED9689C9DD42ADD3E21CE,
	ListenerAsyncResult_get_AsyncWaitHandle_mD3A4ABC3F54E6E2558305547B1ECEDC66B919F52,
	ListenerAsyncResult_get_CompletedSynchronously_mC21F69AA02E7397592014147476F14A95D298359,
	ListenerAsyncResult_get_IsCompleted_m653D74313CD85F38F835CE757D5C0F80130ACCD6,
	ListenerAsyncResult__cctor_m911B1A85CF907EEA6BE601734FC5FF42824E8542,
	ListenerPrefix__ctor_m76E0830A35C394CA5DE5AE6B24ECC9752A4DB6C5,
	ListenerPrefix_ToString_m3B22C295AB0C02885FF81CA02DBCAC7977699184,
	ListenerPrefix_get_Secure_mDF1BB3DFAE7CE6F22CA1AC4B261DDB4B3C92BB9E,
	ListenerPrefix_get_Host_m00643C3C2E3AA1CB54084E9C669852F15A1B766D,
	ListenerPrefix_get_Port_m2FAD6C70E48A6A1D7C9F221E96C31001677B5456,
	ListenerPrefix_get_Path_mACF3C3740D8C4BE5C7CA96979FF901BC4F9203BC,
	ListenerPrefix_Equals_m947A875AEAFBD98CDB929996D99B78F29032477E,
	ListenerPrefix_GetHashCode_m0FF12B4273BF70A0B638CCDF18774EDD4D31029B,
	ListenerPrefix_Parse_m5597FF7C176FB8AB4A70B09A47A281A0D0A560E1,
	ListenerPrefix_CheckUri_m7181EBCF0C425E3DBF4F149C216B393C05ADE293,
	MonoChunkStream__ctor_mD2D5FA0ACB85A6CC731CB9C793339E507A6C8AE0,
	MonoChunkStream_Read_m43A4085433F66530A42EF59AAB3A0D51E6E5891A,
	MonoChunkStream_ReadFromChunks_m37D5FAEAFECA57D507F64766999D57A95EEA0D2A,
	MonoChunkStream_Write_m137C8C8D13524480B95A13C03AD732BAA179ACDF,
	MonoChunkStream_InternalWrite_m5470C15DE29BA1C8DB49A76C55CDF15F964FE34F,
	MonoChunkStream_get_WantMore_m83CC3A4E18F848C35EF9853D7E2FB49A329B8127,
	MonoChunkStream_get_ChunkLeft_m5E5FD7651D4CD801F84B2C5FE6DC0953AA332E45,
	MonoChunkStream_ReadBody_mA94E7D8EB2AA23BDF0C5C23175BC98B2CBE2DCCB,
	MonoChunkStream_GetChunkSize_m6C80D3EEFADE084F993AAAFF2CA0F2DC494446C4,
	MonoChunkStream_RemoveChunkExtension_m58F135088F1995CD8F4F99DF5355E99A20794B0C,
	MonoChunkStream_ReadCRLF_m0A00BE1B5479D26A93C6FC1ED5250C30A194C708,
	MonoChunkStream_ReadTrailer_m5F9E21734592996F66F8BDDBF66D7AC9F4A90C1E,
	MonoChunkStream_ThrowProtocolViolation_mBDC853802F26D724EC129B027C98DF4F8BDC1C9A,
	Chunk__ctor_m85D8BE6C05ACCD31D613F2EC44FC12000795C95D,
	Chunk_Read_mD196D23B6CCE13436E9654D5690B120A27D767F9,
	RequestStream__ctor_m1BC9C2FC0B614CBF25830BFC02B5D5C20A4E38D5,
	RequestStream__ctor_m29C92F5BA965ADC3F4423FFCDAE804B95FFBA729,
	RequestStream_get_CanRead_m209582F6BD03B99A482F724307F9E7E183E476F0,
	RequestStream_get_CanSeek_m47D52BE6481410A3A74AF4D80BE4E0250D75F84F,
	RequestStream_get_CanWrite_m72077A0BA6FDAFC3C09B268CAE0A035EB6C68F93,
	RequestStream_get_Length_m9BBBCE1A417C5E1B4AB38BC9C86A32C9640EAC36,
	RequestStream_get_Position_mBB4662A51003A264388B1C6EF98357F6D46F6C8E,
	RequestStream_set_Position_mF8BD443C7AF53BE3B62B31EC9D9DADFDAE48C439,
	RequestStream_Close_mB935ACBF0E51A40A20408F9491763E77E17AFA51,
	RequestStream_Flush_m6B348388F54D785670D55335144DE33B5442A15F,
	RequestStream_FillFromBuffer_m1A555C7FFB24369A4CE6A8DD5BB44013A921802C,
	RequestStream_Read_mC6296DCB0BBD41EC539904787B061430100472E9,
	RequestStream_BeginRead_m59C5F282ABEC05E012ED9682A98AD5A534C8604D,
	RequestStream_EndRead_m9227FBAE7BC12770E42B127EF8EA50DC9117ADAA,
	RequestStream_Seek_mE6970BB8279BC46257F97C5B4218AC616D629234,
	RequestStream_SetLength_m9B28A9C53237A5EF2E8D210C08EFE6B5A304FCF0,
	RequestStream_Write_m2909095F9C96A17DC47CE55AB4C2490EE36A6BC8,
	RequestStream_BeginWrite_mE8CC0E88B0E3444586C3BCA4F2BFE19965C5DAC7,
	RequestStream_EndWrite_m14A9D648E01C147BA3B17A748F2CF5B4A0C89C38,
	ResponseStream__ctor_m1120AE38296CD7EDC57746FE0BD267925F137DEF,
	ResponseStream_get_CanRead_m49FD6835006715CC7DAA33C9D542336337736097,
	ResponseStream_get_CanSeek_mC9BF6958A7DDD0A3AF0E9D3BCC48D210DD33EB65,
	ResponseStream_get_CanWrite_m08A9CF9BBD4B3F3FFD8C11B9B174944571F34514,
	ResponseStream_get_Length_mCBD23AB3C1DEEAC92593ECBCD40A3DB35F240E90,
	ResponseStream_get_Position_m8DFC58C25633D7724C4EFB77524550DC0494FA57,
	ResponseStream_set_Position_mB7321C57BFC5F54E951407275C1B0FC03D2076B4,
	ResponseStream_Close_m76F830D68DB559393AAC2DB786416E253D6B8472,
	ResponseStream_GetHeaders_m813801784E68345BECA00FF83E891FD013A2B51C,
	ResponseStream_Flush_m394480BAB32FA557E6F6259A57FB996EA10936CB,
	ResponseStream_GetChunkSizeBytes_m4DE7A5604C704EC960064030431D330D14E9BA16,
	ResponseStream_InternalWrite_mCE4946117934191834BF1FAACBFE74C48EC0BF56,
	ResponseStream_Write_m011DF60AF9FBD1E67269D7B653A2CE9AF3BF79DB,
	ResponseStream_BeginWrite_m532C1E98E309382B170C0DEF47FEE087C0ADF818,
	ResponseStream_EndWrite_m3DCF660380C56CF1685A39A917A70F65C054E423,
	ResponseStream_Read_mFEB6418E0E7BC4D65B796C160FCDD11FF0ACBCC2,
	ResponseStream_BeginRead_m7A892000EFE4570C98DD6A304E2FDB3BEFB5BB81,
	ResponseStream_EndRead_mC492D7E2EAF2DCC7DA80DA3FCD1A5300AB1009CC,
	ResponseStream_Seek_mC009677F5988EE414CEA32CF7D77B8661652DCFB,
	ResponseStream_SetLength_m316059CED2E62CF2D6D316D9F96A1DDAF23422F1,
	ResponseStream__cctor_mE343562D40D1F0CC978FAE1A5FE1117B80AC57FD,
	ServicePoint__ctor_m68B4C7FBD836706798BA6882BC351F539A430C6C,
	ServicePoint_set_Expect100Continue_m53E393E64BE40AC205CF5458DCC98E806D0432B2,
	ServicePoint_set_UseNagleAlgorithm_m93F74ADD6C2BE19F9342BE092EF8723F56503913,
	ServicePoint_set_SendContinue_m084B169EDBF37E2B2CC592DF68EB9BB17D3B844E,
	ServicePoint_SetTcpKeepAlive_m4B4392E54144159027C38EC7FCC12F2C09E7A3CF,
	ServicePoint_set_UsesProxy_m25BFB4CE73283597C98A748B231D1A544469F618,
	ServicePoint_set_UseConnect_mCFAF7E07504140EEE0E81D5805CFF727575FF5F5,
	ServicePoint_UpdateServerCertificate_m8F8352188BACC259F5D00F3D9044E3E7F2707E29,
	ServicePointManager__cctor_mC65B547091F12ECF9B6B95CBEE1A52BB35E70DE3,
	ServicePointManager_GetLegacyCertificatePolicy_mAF513A5B047B738491743CDC093618371750E747,
	ServicePointManager_get_SecurityProtocol_mB54A449C96053D4D84CF3C85B3C1CC1DCD34952D,
	ServicePointManager_get_ServerCertValidationCallback_m5AD93FC2391E0E343328CE642F7DDE1CFBB0B306,
	ServicePointManager_FindServicePoint_mB264FFC301584D1A7590D8F783485E81ECBBDE21,
	SPKey__ctor_m7AF193EB533D8A77BE1BDD2643F966AC74232A29,
	SPKey_get_UsesProxy_mA0DD3C141991BEB3D229681C0565265A535A3420,
	SPKey_GetHashCode_mBD2D23E92D57E75D4598BD7B8D0322115CA34A79,
	SPKey_Equals_m3977A8EB90832AADC4305E87083CAE9E167D60FF,
	ServicePointScheduler__ctor_m5246987112698FC9A296CC7E8DAA276B57FD6F4A,
	ConnectionGroup__ctor_m5FA4DC16552C8ADBBADA4FEEB54C620EC1175D80,
	AsyncManualResetEvent_Set_m4AEDC2FB8A878F5A11EAE3FC7C5B079747FA784C,
	AsyncManualResetEvent__ctor_mED23C9E7D9E4B6862CF7CA2D9A8A6DD0F1346D5C,
	U3CU3Ec__cctor_mC77509E55BF35A9DDC9D7485613752B71FA78510,
	U3CU3Ec__ctor_m33CB0ED421096418F623E21D1843F088ECAE8907,
	U3CU3Ec_U3CSetU3Eb__4_0_m51E1DA417A30BA042DE7A4DA249E0C13FB7E32BD,
	WebConnection_Reset_m6E4DE2B11C92A3D9E0E39334FCA592210FC5B365,
	WebConnection_Close_m933CA0D7F0035240D065F46E1AE785FD63B0B39B,
	WebConnection_CloseSocket_m44529A19D180D276A0E8CCC37214EFDA79531066,
	WebConnection_Dispose_m2963FD55969DF8CD444BF8F474BDDB47CC3F9131,
	WebConnection_Dispose_mBEE3F492227683C724016592F03F4C7F596EE2D9,
	WebConnection_ResetNtlm_mA795AAB8FC79C964C57037A2B4B6FDDBEA528F86,
	SocketException_WSAGetLastError_internal_m14FDA6FF11D13CFB8266F43520F315F4AA649C62,
	SocketException__ctor_mA4FA4C30962B1DD852904297C47EB05A9C97B7F9,
	SocketException__ctor_m2C4A0F01041E34F5CD85223333FDC23158250E4D,
	SocketException__ctor_m4AA74DE46D28204456EFCCBBC5ACC841DA2941EF,
	SocketException__ctor_m8625815C7AFB0F3BF9287520D8F64A69199D6DCA,
	SocketException__ctor_m59175465D17AE63C1E18A1B25D80AD41708A51B5,
	SocketException_get_Message_mAC33600C2CC211D3C5C6363DAE3A843FD3E366EE,
	SocketException_get_SocketErrorCode_m05A48632F6CC75FBD904E8E1AC56FC6B2577A131,
	LingerOption__ctor_m939C73C595D32F9A58592AC9FD8D66924C48E51A,
	LingerOption_set_Enabled_m3F544534413C4239E4A0A6D39AE8FF28EEF04207,
	LingerOption_set_LingerTime_m4BF89E47E5A4D261B800DD00A8B73DA7EE719C37,
	NetworkStream__ctor_mA1CC20301CE577D0D971E02452956141D21E2F48,
	NetworkStream_get_CanRead_m18372499A3E8644ED054E324BBA2EDE1F2C0CA82,
	NetworkStream_get_CanSeek_mF793B58986D542FC7310AC8933A3C26309919BCE,
	NetworkStream_get_CanWrite_mDAE8A9686A2B56E688133B8DC2E94976B16AA2CD,
	NetworkStream_get_Length_mBC8427DF08F60DECB0627E20F5A561102A33F089,
	NetworkStream_get_Position_mEA82AACE1AD0E58FEC0AE134A56D64FF7A071F9A,
	NetworkStream_set_Position_m80106F320BDA2FB13B11A93D302CE72A95859999,
	NetworkStream_Seek_m7933D6E7EE305143454CDABFD5F512BCDE204CE0,
	NetworkStream_InitNetworkStream_m2DB75A504D6CD4BE407683A11E2A37F93B1DFF52,
	NetworkStream_Read_m519A834DAB398C347321493E82E7AB823EABEF36,
	NetworkStream_Write_mA36470E3CEDC327EC179649541ABBBE1DB294F4C,
	NetworkStream_Dispose_mB2BCF75273D7AE5D5417E9B02E6630B5CCBCBD97,
	NetworkStream_Finalize_m67A14B9689E9E9775841BFA59A272347FAC5D40E,
	NetworkStream_BeginRead_m237864822EAB5EA9D8221CA37B141C38E035A896,
	NetworkStream_EndRead_mDCD08C532B8346555DD2D31850D15C8A900ECEF5,
	NetworkStream_BeginWrite_m260304D17C2BAFBCF1601F8479DF20E3618AA9DE,
	NetworkStream_EndWrite_mE66E13187FAEFE8DBB41C5A8F5BE7D7BC3686E73,
	NetworkStream_Flush_m29FFA75A5BE746CF8BA1381B48D4963ED38E0288,
	NetworkStream_FlushAsync_m6DFDF1F76CD42E35082C1FE71012B3F9363A55D7,
	NetworkStream_SetLength_mAB9261955C29DC6346EDDC2351B793C7F797D8CD,
	Socket__ctor_m5A4B335AEC1450ABE31CF1151F3F5A93D9D0280C,
	Socket_get_SupportsIPv4_mA668079517200391EE1202652AC1289E0BE740F1,
	Socket_get_OSSupportsIPv4_m95D3C52E2258C13BB8405C051AB07345B11AB0D3,
	Socket_get_SupportsIPv6_m7BBE7DAE88294EE9F8E00EFA97D0F360BA07CB82,
	Socket_get_OSSupportsIPv6_m98676A26C4D9F0053550BFF845320978E444C219,
	Socket_get_Handle_m90AE88992BB1B1BF82E680402CEB56A0EB10FFD4,
	Socket_get_AddressFamily_m390B53FAAF0DFF8E8BE844F83AFB06D9E53D891B,
	Socket_get_SocketType_m59C57C96B6DBA839FAFBB649491A059082D5D6F5,
	Socket_get_ProtocolType_m01D6FD7559F27913038834E519A4A54B81039644,
	Socket_set_DontFragment_m12EFF1A7E7239447C5D8EBF54D7A43508CD8FC24,
	Socket_get_DualMode_mD01944E72CD2FA47B9AA7DC1748BD9C4AE22835E,
	Socket_set_DualMode_mAFC0E6235283469EF1DB58C56262202A9009CFFD,
	Socket_get_IsDualMode_m79CF98B9280D1A062087666B96A4D81C349EF9A1,
	Socket_Send_mB925DA11E47BB9772EDFC0DDFEE238EB3A1F98B5,
	Socket_Send_mF70EF17396CEA161F628B1923DA32463720D9A1E,
	Socket_Receive_mA08EE1F9A870791CECAAC2FA2D4144ACBA6B4962,
	Socket_Receive_m6D95774528C89ED4777791E8EFC84ADFCD255A48,
	Socket_SetIPProtectionLevel_m4E9FDB46A681CF2DA3FE641B417479815F9BBA0C,
	Socket_BeginSend_mFB97AF214E7F82B0B38434F844DA755AF18E612C,
	Socket_EndSend_mE56C2A95C12655CA7C3C6690382FC48B7E9AA45C,
	Socket_BeginReceive_mE0B06265B8AFC35DADCA4184D6C8B8A062BCDE73,
	Socket_EndReceive_m46B15199B81401BF6B7B76242C6E3A7E8156749C,
	Socket_get_InternalSyncObject_m7688ABCFC9261B620C284D0B8A625FAF159F98B9,
	Socket_get_CleanedUp_m74D2A5015FB338E942B827B5AD89A618C51EFA35,
	Socket_InitializeSockets_mD132B3F7583082ABB41726BF6A1A9F676F3F98C5,
	Socket_Dispose_mF84769B30DECB4A1F3AFE68C2A82D2787D8695C1,
	Socket_Finalize_m2458A278B8DCA5B016DD41B50272FC85D8A332E4,
	Socket_InternalShutdown_mDA3F1ED617847E781AA826C43A833E7C978FD850,
	Socket__ctor_m8F2A88DD5CDD8D8B6715A4F74E3C29092245B091,
	Socket_SocketDefaults_m39FA910B28B5CF8833C6D363E343A43D45540F4F,
	Socket_Socket_internal_m686934059A2E5662CAB726E58C13EE6EB9283B00,
	Socket_get_LocalEndPoint_m327EB4A6DD9260037F648B5ABA719BB305D40EB0,
	Socket_LocalEndPoint_internal_m4AA6ACEBD033984EFC21A54BBDE353EF38E81DD8,
	Socket_LocalEndPoint_internal_m0FA7C1600DDDE2C08AC573B593D0037503609142,
	Socket_get_Blocking_m808720CD768833CF2EB6F7F8AA462115AA3A1F8B,
	Socket_set_Blocking_m5DCBD637AD0FE63E9A67C1763C91A58799A314E2,
	Socket_Blocking_internal_mBFE86D9201017AA5063ED33650C045BAEC545F6B,
	Socket_Blocking_internal_m99EDF2CE79EE12BB868006CBD0FCE2C77266AB95,
	Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0,
	Socket_set_NoDelay_m34DCB8BF5275A85E1687308D0D016E860F229732,
	Socket_Poll_internal_m907B66F670EDE29D80235B6966621FBE045FA7AE,
	Socket_Accept_m376D8FD43D18B427EBED5419F80E79D1ADDF9BE2,
	Socket_Accept_mA2B3B144CB4E2F28C4A3F5CE449C0069FE6FF88B,
	Socket_AcceptAsync_m679806AD1336356D6271207ABF5C5B1B2D0820BD,
	Socket_EndAccept_mA0518AD160E86C2728B2E4C8E1D2A7BC69E2595A,
	Socket_EndAccept_mCED29DC1DB5BC10309535B190B35DDF704668ABC,
	Socket_Accept_internal_mEC49934871889768AA29590484D3C6E62CBA75C9,
	Socket_Accept_internal_m449FD9BB4E411F3B2A6EFEC80ACF21DABAFA4C2A,
	Socket_Bind_m4DFEFA3F8C6E95586D02BCF311D8A1D5A449B217,
	Socket_Bind_internal_m7A49157D9CCDEE2CF8A58C4C17B23641FE452C46,
	Socket_Bind_internal_m58538BA7F18B98B3892F52D25E17C09C92CC8357,
	Socket_Listen_m333EA7692DFF6A3B7BF746237EBBC22C1FBE61C4,
	Socket_Listen_internal_m6D05FAA2A6F08840A5EAED4E7640DC64DD063DF7,
	Socket_Listen_internal_m36F02A8A9045D2933D7ABF53390734B40223F4AF,
	Socket_BeginMConnect_mF4CC11F2DFFDF4FBCA21FDC87BEE2C166FF082C9,
	Socket_BeginSConnect_mBBA6C0E3DFDAFF3161A97FCBDFCE5B31D327D5B5,
	Socket_EndConnect_mC014DB766DCF93646536008F55692BE9143797E6,
	Socket_Connect_internal_mA19FD873D30EBC46E6FF890DF4BDE5856BEEC7D8,
	Socket_Connect_internal_m242B10939F582632598FBBCD15D4DC8F8DDD773C,
	Socket_Disconnect_m088E558DFF8B6640DE5D3F041504F15D0C1DB957,
	Socket_EndDisconnect_mE208E9EFF47D1921E6BAD57B94FC5F8BCE53D058,
	Socket_Disconnect_internal_mC594BC70DA44BB91B22F5068BD40311333B098E0,
	Socket_Disconnect_internal_m646997B72978F5CC1C3E28AF92F11F8F8D3FB265,
	Socket_Receive_mD8C41C5E04F7A9AEAA8E9D7534970F50918427BF,
	Socket_Receive_m7D07ECE91DA04210066EB6E373376817E0A024F1,
	Socket_BeginReceive_m7AFA3F22DAD771579F060D344EA1B44C3F55C912,
	Socket_EndReceive_mBD6A39DBD9C6D68BB28A2F6A9364BF2BC48CFEBA,
	Socket_Receive_internal_mA69B81910FC64BEC52C4F91ABE52C522EA82F44C,
	Socket_Receive_internal_mB032C72DA4A5809A8AB2303AFEA98F62BB60FE2E,
	Socket_Receive_internal_mE0647628B151CA069DF0099B053CDBBA5EC40627,
	Socket_Receive_internal_m345329E7F6DFB2B46B8BAB8FCD234CDD16D069EB,
	Socket_ReceiveFrom_mAFA99FB7487A2216312D4510E530BB9F5A4CD54B,
	Socket_EndReceiveFrom_mBEAC67D399907A222678833B24E20FFFDF0DDC17,
	Socket_ReceiveFrom_internal_m2636BBEFE1A0C656B84F94E5CD7202DE12A560EF,
	Socket_ReceiveFrom_internal_mAA065C65DE439D2F29A066C9372AC8A261210D7C,
	Socket_Send_mF1AF06B447E1671097A0515BD6170DB92368E8D5,
	Socket_Send_m77328B1F3378D0C5B40B15C01FA2226257B706AE,
	Socket_BeginSend_mE51B200464A077562C33CBEE5421A7F18CA198D8,
	Socket_BeginSendCallback_mE8BC2D5E71817BE73C1DB09185A47C9417052927,
	Socket_EndSend_m1D4BCE94C7D318281B9A4D24A99B14B0E66AC160,
	Socket_Send_internal_m225873D0AAD2BCB5C990B25D64F0B2E8E5EFB215,
	Socket_Send_internal_m1165DB847D3BDFD06F7AAB047EC10B553B1DC726,
	Socket_Send_internal_m6D595D0C8F4B3DF41B0F3626FCF56A865B074052,
	Socket_Send_internal_mB02F115E8A33D27F0E90D4D4E554F7C883B1750E,
	Socket_EndSendTo_m63F470B7483CED77F2DA2FD46FE93A460743CB08,
	Socket_GetSocketOption_m58A866C87F4B09F2A8C3DA71635C8DA17836520D,
	Socket_GetSocketOption_obj_internal_mAF0EEDBE063231AED55A1A3BC94DB701D4003FCE,
	Socket_GetSocketOption_obj_internal_m848554BF95726EC1C666D930813390998F2370F3,
	Socket_SetSocketOption_m6034478D182424029DA43CB526EC578E22C4A467,
	Socket_SetSocketOption_internal_m3C0DCC5F09156DAB95BEAC3FA8446C20D5FFC7CE,
	Socket_SetSocketOption_internal_mE44C10E21DFD102C3354B1D0FB8FB3C3B2B081D4,
	Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB,
	Socket_Close_mEC9B67F2F0E51F7FBB9D6BC9F630AD52DF7D0E65,
	Socket_Close_internal_m22238A02EFF2E1AB28E5DCC2C7A4E41297D77054,
	Socket_Shutdown_mCDFA7A9F9A008900F122E422F7A95B06CF54827F,
	Socket_Shutdown_internal_m8E3CC5039CC5B5B5C9CAE4A6DE00917819AB3E84,
	Socket_Shutdown_internal_m2A5EAA761C3EF6AA0495C582768B985762BC24E7,
	Socket_Dispose_m361195497638D3D2C1E22B9D6EE4A6E45F1CF0C3,
	Socket_Linger_m635016CAB436DE0FA43CAA80AA5C8EE90225F06A,
	Socket_ThrowIfDisposedAndClosed_m5EC422888FC9986F6994A0C0180BCB39407F7894,
	Socket_ThrowIfBufferNull_mCE5DE853E71FD065E5D5415BAFEDB84CA261DAD3,
	Socket_ThrowIfBufferOutOfRange_m571DD069DDC7952B1EB907941F3C202054BBE6FF,
	Socket_ThrowIfUdp_m7F28AFD15A102E911AEE9B08125794162C2A26F8,
	Socket_ValidateEndIAsyncResult_m8463696F3CAF01ED5982FF8200C6A53D60C33628,
	Socket_QueueIOSelectorJob_mED926AA0CA86E558C83A306AFC0FC5F918E36327,
	Socket_InitSocketAsyncEventArgs_mD4A737E2AEB17E3868B3EED96724C97AECAFCF5C,
	Socket_SocketOperationToSocketAsyncOperation_m2DDF891D3125FADFFACB5DEF8D802CD8CBECD3C2,
	Socket_RemapIPEndPoint_m940DF8512A590EE50576782DFCAAAC9DF8F3E06C,
	Socket_cancel_blocking_socket_operation_m7CC62FAFFA8C0EF64E30CED27186B5BF87D930D7,
	Socket_get_FamilyHint_m0F51D579A0297398AE640E723393716732ED39D5,
	Socket_IsProtocolSupported_internal_mA8C3A7CA0DF595904092C13FD229757C51136E61,
	Socket_IsProtocolSupported_m60240825F125A36DF31346D46AE38EF3CE313E65,
	Socket__cctor_mAC11CE5F2EB6E8CEE14EC545D67B74FB863D2BA0,
	U3CU3Ec__cctor_mC0CD010F66D9E793EAF20FE605219DC17B3D4D6B,
	U3CU3Ec__ctor_m43A057DFDD32EA28F00A12E2C2173145A13BDAF4,
	U3CU3Ec_U3CBeginSendU3Eb__242_0_m0011A7F1D6DCE1CC6714C2C4C67C905DA9159F5C,
	U3CU3Ec_U3C_cctorU3Eb__310_0_mC396B5BE2E142AD692FF33127270DA83F37E0FE7,
	U3CU3Ec_U3C_cctorU3Eb__310_1_m7141ABFB7A612D6C3FF7E1A08A388E9EF6686545,
	U3CU3Ec_U3C_cctorU3Eb__310_2_m110EFFDCB2927C59A7775F44598CF7213F8954D8,
	U3CU3Ec_U3C_cctorU3Eb__310_3_m53FD854140025D3A18E08649002588BD32120704,
	U3CU3Ec_U3C_cctorU3Eb__310_4_mF00A4741487F488E2C391D880F02CE350654AF03,
	U3CU3Ec_U3C_cctorU3Eb__310_5_mC153E4B02FC0BFDB1DD45C6A2B449C2191B14418,
	U3CU3Ec_U3C_cctorU3Eb__310_6_m87420A4E7F247C0C96EDABEB5E832CB1C27FA543,
	U3CU3Ec_U3C_cctorU3Eb__310_7_mF1815DC25AFF7063E376A6C012D899081EF669F8,
	U3CU3Ec_U3C_cctorU3Eb__310_8_m84E0BF807680AEBCD2B8EB613649E1A09F40BBE9,
	U3CU3Ec_U3C_cctorU3Eb__310_9_m80BDF0261BB58674DFD34CD5CE86DC044A6D3D0D,
	U3CU3Ec_U3C_cctorU3Eb__310_10_mA283D32575140AE2DC68609AFF4D9271235EA443,
	U3CU3Ec_U3C_cctorU3Eb__310_11_m800E1188E230A39EEF26795BFCD3D1452CD57D66,
	U3CU3Ec_U3C_cctorU3Eb__310_12_mC3F90036D059B2B8698420B56F024B1635A88F8B,
	U3CU3Ec_U3C_cctorU3Eb__310_13_m2FD5CE753231103645670195A724C97E3E10F06E,
	U3CU3Ec_U3C_cctorU3Eb__310_14_m53E1DB314E0C51DAE16463286BD922CB0A207D90,
	U3CU3Ec__DisplayClass243_0__ctor_m5F03E623DD7362E05C09E3ABB8C803F171217FCB,
	U3CU3Ec__DisplayClass243_0_U3CBeginSendCallbackU3Eb__0_mCE9408390F94237D14C6BA83630E34F2DCA56860,
	U3CU3Ec__DisplayClass299_0__ctor_mA2004E88EE9AC6E49EE6A5701BA464ED976A0ED4,
	U3CU3Ec__DisplayClass299_0_U3CQueueIOSelectorJobU3Eb__0_mD066C2DF490C722A0CD2B048F1B7031BA5E502D9,
	SafeSocketHandle__ctor_m98BFBB207C9D8D7750DEA3598051D21FFE784967,
	SafeSocketHandle_ReleaseHandle_m93408D5088C512A7BFF7C6CA7D5857645C17BDFF,
	SafeSocketHandle_RegisterForBlockingSyscall_m7033111DA7B1012B9C4155D892EED598876C2AB3,
	SafeSocketHandle_UnRegisterForBlockingSyscall_m283CE3E82686E5FC7999EDD609DF74A48652D4B3,
	SafeSocketHandle__cctor_m124BAE407CAC62417D06367E57320631BE15488D,
	SocketAsyncEventArgs_get_AcceptSocket_m6119FCE739596BD55C2847460DC69ADB285070A7,
	SocketAsyncEventArgs_set_AcceptSocket_mA34A6E97F2B00232A1F453219EA6C03487D529A5,
	SocketAsyncEventArgs_get_BufferList_m9D092791A306A913589F89972006F1234170EC1A,
	SocketAsyncEventArgs_set_BytesTransferred_m99F956EB9B4A7FAD4632FA07BBF4451DFD0F764C,
	SocketAsyncEventArgs_get_Count_m0025EDB77D6F5DD12DAF6E5C1563C3009EBEA55B,
	SocketAsyncEventArgs_set_LastOperation_m3D4530FEBE9BAC239A366FE4B431B7E8426FF34B,
	SocketAsyncEventArgs_set_SendPacketsSendSize_mAB1EE90FBBC96980590AB93EF9E01B4B7C4CA661,
	SocketAsyncEventArgs_get_SocketError_m11C0B5903B8AB4D642746DBAE990432FD65B08D7,
	SocketAsyncEventArgs_set_SocketError_mE909DB5DBC90065720B35ACB8B382DA175976533,
	SocketAsyncEventArgs_get_UserToken_mD64FA7C6DD325D8151B87483B472295C06001C18,
	SocketAsyncEventArgs_set_UserToken_m1425D948CDABF59C68EB0387345609075104CB9A,
	SocketAsyncEventArgs_add_Completed_m424A0DFB6FE947B980C160A66695B53FBE1E027A,
	SocketAsyncEventArgs_remove_Completed_mD5DA6CA668FB35C4D5EB9507E4941838C5DC6B55,
	SocketAsyncEventArgs__ctor_mCDC163ABCAC5FFF7AF8B1660DFAFB1FA128546AC,
	SocketAsyncEventArgs_Finalize_m8EB50DDA9821D013905E522ECFDCDE60DD13754D,
	SocketAsyncEventArgs_Dispose_m75C974426B784853880FD3146091228ABBD0CE06,
	SocketAsyncEventArgs_Dispose_m3DBF8461B4A792A6DEDF567964587CCEA75AFA63,
	SocketAsyncEventArgs_SetLastOperation_m8C429F00E505FC6E35ECFA7EFD7F9CDF541E94AA,
	SocketAsyncEventArgs_Complete_m94BBD1E035C5474D203D0E8CEDDE6A32BA61E061,
	SocketAsyncEventArgs_OnCompleted_mF7B3732D2A22625740B14BFCE38F8D6A6E5B66AF,
	SocketAsyncResult_get_Handle_m0A9F83AD4D06B5E31F63012A1A4557FB48940C44,
	SocketAsyncResult__ctor_m1D86368D65C9E314E72331B74526656624A0606F,
	SocketAsyncResult_Init_m30EBB82FFB82A973A1BDC040DE2EA7E4087DC69B,
	SocketAsyncResult__ctor_mF4024A1E5EAD56E00839672EED0126EC34FD9917,
	SocketAsyncResult_get_ErrorCode_m56F156B7C525AF9947C56C76A8B2D0B4E545AD69,
	SocketAsyncResult_CheckIfThrowDelayedException_m5ED469CF2CCFD1E9B2A5621769B8CB27AB89DE45,
	SocketAsyncResult_CompleteDisposed_m0E0A213265679C08CF3B5230F54E6F8801BD91E6,
	SocketAsyncResult_Complete_m236141DBFB1E4B892296B548DDBCB2C04829D194,
	SocketAsyncResult_Complete_m7A55E54CBF74652E5784D34402B88CAB8A18601A,
	SocketAsyncResult_Complete_m266C10BA9EEF57EC12B411F13B207C638F8762A9,
	SocketAsyncResult_Complete_m44E31D06CAA7D0EFE0A7BB6EA24ADDB14EA625AC,
	SocketAsyncResult_Complete_mF68A29EEF8843248D56B583C4CCD9C1549F99DAA,
	SocketAsyncResult_Complete_mBFBFEECE8C3B6D2D456B607A9D7AB9889ECA8F27,
	SocketAsyncResult_Complete_m1D85BF6ED9479FB410132CD3C93F57AB507D4745,
	U3CU3Ec__cctor_mFA4167924E80870ED0ACC07EAF52CE380944FA4C,
	U3CU3Ec__ctor_m087776B9BEE00F1A315C08CB888C7F2875461366,
	U3CU3Ec_U3CCompleteU3Eb__27_0_m5C293AC939107CF4960BBA8DFBA174438C2BD359,
	AuthenticatedStream__ctor_mDE77A28CCC056362108DCDE9345EE3F6D73AF509,
	AuthenticatedStream_get_InnerStream_m11C037DEE34B2DD870301D499BEE69ECED787D7A,
	AuthenticatedStream_Dispose_m922381D0775D8A14FF01E106A47EAEF318EA982E,
	NULL,
	RemoteCertificateValidationCallback__ctor_mDBCF893D0A540CB506F5547807525625F5CBA4C4,
	RemoteCertificateValidationCallback_Invoke_m30A34C33A46909FAA60703A2EFF0C41F6E7B6C14,
	RemoteCertificateValidationCallback_BeginInvoke_m8A150C819EE51BD2913E80CFD149D3A8B9DD9930,
	RemoteCertificateValidationCallback_EndInvoke_mD94E71A429600B4EAC95128CBAEBB19C97C054F5,
	LocalCertSelectionCallback__ctor_mE564871B196549FDEA64C011A4AA00339FA0281F,
	LocalCertSelectionCallback_Invoke_m2869B1DB69FB6390DB8035B41C0594762111D484,
	LocalCertSelectionCallback_BeginInvoke_m860EA4273F9EFFF06603F25C69326ABE2DA8CD96,
	LocalCertSelectionCallback_EndInvoke_m79DC5879439F10FC1D1C00A060C455733D7F321A,
	SslStream_get_Impl_m64EA7C2820C426A13C1693A9E66770A3F986CF86,
	SslStream__ctor_m56CC1EA5A22E27B0197C181B2DB6EC6A14755DED,
	SslStream_CreateMonoSslStream_m74BE8E0D40817CE69596C1C0DED1D85F59EA6EBC,
	SslStream_AuthenticateAsServer_mFF0024785800CB56EC987DE0D8B178E09336D64E,
	SslStream_get_IsAuthenticated_mAD584FEC93A19120F7B58BDE60B2F2EC5080AECC,
	SslStream_get_CanSeek_m79ABDB979F4BD2DA6960377372915E4A6671ECFF,
	SslStream_get_CanRead_mDD4E9CE7362511A86D9EE1841B1CD01D4E8B2110,
	SslStream_get_CanWrite_m54CDDD4975C00A8958FB5F964455BC2D80491E6B,
	SslStream_get_Length_mC22DDE456AF82253D85AACBF718ABBF12EBE13A3,
	SslStream_get_Position_mF09FAC98E3C9691EE539B99217F003D1471E2898,
	SslStream_set_Position_m558CCA3D97D354DFBE766CBECED122A7B81CCA41,
	SslStream_SetLength_m8392E5F9F4229EC24BF0EE8CDAEEBDC76F486994,
	SslStream_Seek_m826A9CA3B804E1AEBA6758228B02E01CA99B5579,
	SslStream_FlushAsync_m0664E67F609D253559B69242C9DFF9D697151325,
	SslStream_Flush_m28F1C2BA3489D896FCBF3057A81AFD06CE232BBB,
	SslStream_CheckDisposed_mCDA5D6100C3F568C250F904B6936DEB91E5250C3,
	SslStream_Dispose_m789C2C9F9B5B3B48112E28F053926C9145CEDAE4,
	SslStream_Read_m8418B257262567DD7684F2EEB334DE25C884088C,
	SslStream_Write_mE0B830147A53EEF0E64C3DE127612048A30D0180,
	SslStream_BeginRead_mA6DFC30593CDEDED30C6E6A1F84EFF21726C5F25,
	SslStream_EndRead_mB340F9EE92BB425D4D169D0E7FA5CEFC208627FD,
	SslStream_BeginWrite_m78AAF68A712CC60F2F29FF7D478FEE2CA99CF028,
	SslStream_EndWrite_mECFCAE6C39E3807D418226A712B2600A6F96011A,
	IPGlobalProperties_get_PlatformNeedsLibCWorkaround_m705220ED1B7282E2587CB3B342988F2E545BA4A1,
	IPGlobalProperties_GetIPGlobalProperties_mA224D4373150EC631786DE56F4E6E1B18FBAE574,
	IPGlobalProperties_InternalGetIPGlobalProperties_m47B173E291D6F7B081952BD2C3F5317FC9BFE951,
	NULL,
	IPGlobalProperties__ctor_mEEE47DACD96438BCDF67877A3E2F0D3A592C2977,
	NetworkInformationException__ctor_m5CDA318CAFE57C54FA19136D9CC86F34DF5F8F1C,
	NetworkInformationException__ctor_m0132BE482A5DEDFAA8E675B7E8F1BB59BDB2E23F,
	CommonUnixIPGlobalProperties_getdomainname_mE35D08D81049A96BFF3134C9F109711CD98D18CF,
	CommonUnixIPGlobalProperties_get_DomainName_m413AC21C8FCF33C473D3360DD83E0F9CFB7662D7,
	CommonUnixIPGlobalProperties__ctor_m60C46E122AF76BCED16DD7F3FD5EFF74C093F83C,
	UnixIPGlobalProperties__ctor_mF2ADB564F94ABCB20CB71DDE34FAB070BA12A868,
	UnixNoLibCIPGlobalProperties_get_DomainName_mD5C1D38C6A8C4BFBBAF251F829A64A9D80363371,
	UnixNoLibCIPGlobalProperties__ctor_mB8161FF612E1613FC30AFA5CAA97C5E368C66291,
	MibIPGlobalProperties__ctor_m64009FA9C2EDC7E97A8BFDADD97F30699037CAA6,
	MibIPGlobalProperties__cctor_mF7E6B5BFD692BEDABBBCB5718D7FE50B65D8FC42,
	Win32IPGlobalProperties_get_DomainName_m5FF24C6CC09FE64C60955D9C4C1BEBF96636A5D3,
	Win32IPGlobalProperties__ctor_m7D031774BB16D9BF7096D7CC6B44AED107B31484,
	Win32NetworkInterface_GetNetworkParams_m03C800E628DBEC8F64E825B68F044D63502D90C7,
	Win32NetworkInterface_get_FixedInfo_m935C305BFC9D3F213D2FC8EE693AEFD06226B3C5,
	DefaultProxySectionInternal_GetDefaultProxy_UsingOldMonoCode_mDF9CDB48011A5A47D5272EA9AF0076471CF7A9AE,
	DefaultProxySectionInternal_GetSystemWebProxy_m9ABFADB05689F062855F819EE28DAAA2DB9A9635,
	DefaultProxySectionInternal_get_ClassSyncObject_mAFFFF13CC7BAD16068BC785A5A1F796282C21849,
	DefaultProxySectionInternal_GetSection_m421F173465283E26BB1909685236D7640DC3F86F,
	DefaultProxySectionInternal_get_WebProxy_m6FEA6EA17D500A3FA8DF7A36EF6A9B5AD142A439,
	DefaultProxySectionInternal__ctor_m77BAE40248B233823172ECA9811985D4410B2684,
	SettingsSectionInternal_get_Section_m08BBD565469D067FFFC6934765D82ACAF758084A,
	SettingsSectionInternal_get_Ipv6Enabled_m0105C8B95D00D8D79A809E41A85127B0C9A66701,
	SettingsSectionInternal__ctor_mF3B556F63066A164D09E0890B93FEFA74005743E,
	SettingsSectionInternal__cctor_mF0A4C643620935B9E6601C2E95B7B3D0CC63B719,
	U3CPrivateImplementationDetailsU3E_ComputeStringHash_mC1B3C29CD4B3FD3AAE2935CEC2E17B9E7BAF1159,
	BypassElementCollection__ctor_m2047F6046437B6101F59D781474BF71CF5650979,
	ConnectionManagementElementCollection__ctor_mFFAEA4E88F5C33B6DA8531C079C852A77FD04A19,
	ConnectionManagementSection__ctor_mE885788862A7E2BC030547954BE04682B5685B0F,
	ConnectionManagementSection_get_Properties_m5F5D4D565489088905ADC68D61267773F96F9419,
	DefaultProxySection__ctor_m63DB700CA7C5B525DEB7B8B524E5836705310AAD,
	DefaultProxySection_get_Properties_mFA1686FF919D5732D59AACA13AE5D5249D1701DE,
	DefaultProxySection_Reset_mF0EA313119B553545063DFE5AF317D83D738D6C2,
	ProxyElement__ctor_m6D9B4D4118C0EC9F069E83A6C3DCAA36209DEB75,
	ProxyElement_get_Properties_mB7790E9D638EC711E4783ACC846BE1568332E9B2,
	HttpWebRequestElement__ctor_m79DE0820C634F3A5744A12F7C8AF81BF6472A803,
	HttpWebRequestElement_get_Properties_m62B55D3B6F5898FC3E0FC3F79AA51B4D64AA7F2A,
	Ipv6Element__ctor_m028AE74FB04F381B2B9D34FEB50093224820B173,
	Ipv6Element_get_Properties_mD8016B80F04EF4AE6501BD889313DE91D5E00253,
	NetSectionGroup__ctor_m7AB7B5CA35F2D7C06B047BD0B480AD6F2C067570,
	SettingsSection__ctor_m09A6DF12BD56D2C0E0ABA8152004C486B1DE97E3,
	SettingsSection_get_Properties_mE5337C4AF39EA0A1B2AEB842CDBB16B8C0C1C4A0,
	PerformanceCountersElement__ctor_mEB598DFD70066C845995EAC5D1BF82698130D2D5,
	PerformanceCountersElement_get_Properties_m8519C030829398320F0A1AA087B41E71884FC168,
	ServicePointManagerElement__ctor_mA04F31D124B40258FE6673A2B7B0F7B2CE787615,
	ServicePointManagerElement_get_Properties_mCB80284E347910A59F7B5A495D5862533E41907A,
	SocketElement__ctor_m5D5BA302FD35A1D25BB3A596954F92AB26C3DEF6,
	SocketElement_get_Properties_m9A46DB832A9DA2A3E8F3B74D83DD96EC8A180984,
	WebProxyScriptElement__ctor_m943D653C6A20D602A9ED7F0D13E0ED41691CC2C2,
	WebProxyScriptElement_get_Properties_mD29E00ECE9AAA868495BECD6D88C48BBFE74F26E,
	WebRequestModulesSection__ctor_mE9CD09355B8B10829D4B6D2681811DC7F199B8D2,
	WebRequestModulesSection_get_Properties_mF7B71DE46486B2AF3D42FB3B877CDBC35B5FFC2E,
	WebRequestModuleElementCollection__ctor_mE32DEB8FF2F3E3582D6E9C291B6496BAFD182D3B,
	DiagnosticsConfigurationHandler__ctor_mCD2A35E58C3715292B4CAC69DCA4DB9FDBCAF8A2,
	DiagnosticsConfigurationHandler_Create_m7C5E9A16FBA52442C7C79E67B2C7991FB51D2740,
	ThrowStub_ThrowNotSupportedException_m3BBB5BF36323ACE28882DF34B149C6734507B574,
};
extern void CFRange__ctor_m47A3FC3DC70D9A9685171D0A666C21E9522EDC49_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__23_MoveNext_m63ACDC7CCB0E43A57BCC0D7BF6D14AADEA88150E_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__23_SetStateMachine_m8A586353421C2670E8208AE140ED5DBEDD4122B8_AdjustorThunk (void);
extern void U3CProcessOperationU3Ed__24_MoveNext_mB0D2D020C1DE94FFD5D78109BC37802780D26A0D_AdjustorThunk (void);
extern void U3CProcessOperationU3Ed__24_SetStateMachine_m19FCCEBF66308F920EF00C2C17E74BC4DE02094D_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__25_MoveNext_mE28E22197DC1A6A515E61B7EB9F17F9B41835B6F_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__25_SetStateMachine_mFF80981E4C6AB1765979F5A653446A0A081E9BAD_AdjustorThunk (void);
extern void U3CProcessAuthenticationU3Ed__47_MoveNext_mF3762B503551276E4B49F05F7413012DF8D1CC84_AdjustorThunk (void);
extern void U3CProcessAuthenticationU3Ed__47_SetStateMachine_mDCBB12DB45E075AC256E54A1DFC35AD4C81912EC_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__58_MoveNext_mA92EABD1F8F3CE91103E228A56D16BE2E7C3FA35_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__58_SetStateMachine_m6896AA6F76C2DD0A407ADDFB40A574290873FFC8_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__66_MoveNext_m36DB7FB663A6047DA5B34FE62490F230C48DD070_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__66_SetStateMachine_m56B57971A776743CEADDCF710EA5777B89642D4D_AdjustorThunk (void);
extern void U3CInnerWriteU3Ed__67_MoveNext_m39FA739B0AE2BDF2EF4122C92A31BE2D016CEEF0_AdjustorThunk (void);
extern void U3CInnerWriteU3Ed__67_SetStateMachine_m614328656FD99E8FC4FCEE4337F2043634F18D6B_AdjustorThunk (void);
extern void LowerCaseMapping__ctor_m0236442CB5098331DEAE7CACFCAC42741945D3E8_AdjustorThunk (void);
extern void X509ChainStatus__ctor_mA41DF127E7EEF7B59204118C5C48F695F2C6DECC_AdjustorThunk (void);
extern void AuthorizationState__ctor_m33AFDC1A78F1C2709F58ADE60766E6DB40B23108_AdjustorThunk (void);
extern void AuthorizationState_ToString_m7A5CA8DDE1302D55B5F3B1F75A5D79387EFF0531_AdjustorThunk (void);
extern void IPv6AddressFormatter__ctor_mEEFF87906A194838D6E4A31AB724A28808E539E5_AdjustorThunk (void);
extern void IPv6AddressFormatter_AsIPv4Int_m875CCBC60A506A331C9D591D5A88D49EBB6730E7_AdjustorThunk (void);
extern void IPv6AddressFormatter_IsIPv4Compatible_m769BBFB4FBB844EC8AB61A635495A7F2925FDD99_AdjustorThunk (void);
extern void IPv6AddressFormatter_IsIPv4Mapped_m46AE9AECC6E77E6A53ACBF60BEF336D45FF236DB_AdjustorThunk (void);
extern void IPv6AddressFormatter_ToString_m5FB0F927F3B0BAA521BC92562A7F5A78460023DC_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[24] = 
{
	{ 0x060000E1, CFRange__ctor_m47A3FC3DC70D9A9685171D0A666C21E9522EDC49_AdjustorThunk },
	{ 0x06000142, U3CStartOperationU3Ed__23_MoveNext_m63ACDC7CCB0E43A57BCC0D7BF6D14AADEA88150E_AdjustorThunk },
	{ 0x06000143, U3CStartOperationU3Ed__23_SetStateMachine_m8A586353421C2670E8208AE140ED5DBEDD4122B8_AdjustorThunk },
	{ 0x06000144, U3CProcessOperationU3Ed__24_MoveNext_mB0D2D020C1DE94FFD5D78109BC37802780D26A0D_AdjustorThunk },
	{ 0x06000145, U3CProcessOperationU3Ed__24_SetStateMachine_m19FCCEBF66308F920EF00C2C17E74BC4DE02094D_AdjustorThunk },
	{ 0x06000146, U3CInnerReadU3Ed__25_MoveNext_mE28E22197DC1A6A515E61B7EB9F17F9B41835B6F_AdjustorThunk },
	{ 0x06000147, U3CInnerReadU3Ed__25_SetStateMachine_mFF80981E4C6AB1765979F5A653446A0A081E9BAD_AdjustorThunk },
	{ 0x06000188, U3CProcessAuthenticationU3Ed__47_MoveNext_mF3762B503551276E4B49F05F7413012DF8D1CC84_AdjustorThunk },
	{ 0x06000189, U3CProcessAuthenticationU3Ed__47_SetStateMachine_mDCBB12DB45E075AC256E54A1DFC35AD4C81912EC_AdjustorThunk },
	{ 0x0600018A, U3CStartOperationU3Ed__58_MoveNext_mA92EABD1F8F3CE91103E228A56D16BE2E7C3FA35_AdjustorThunk },
	{ 0x0600018B, U3CStartOperationU3Ed__58_SetStateMachine_m6896AA6F76C2DD0A407ADDFB40A574290873FFC8_AdjustorThunk },
	{ 0x0600018E, U3CInnerReadU3Ed__66_MoveNext_m36DB7FB663A6047DA5B34FE62490F230C48DD070_AdjustorThunk },
	{ 0x0600018F, U3CInnerReadU3Ed__66_SetStateMachine_m56B57971A776743CEADDCF710EA5777B89642D4D_AdjustorThunk },
	{ 0x06000190, U3CInnerWriteU3Ed__67_MoveNext_m39FA739B0AE2BDF2EF4122C92A31BE2D016CEEF0_AdjustorThunk },
	{ 0x06000191, U3CInnerWriteU3Ed__67_SetStateMachine_m614328656FD99E8FC4FCEE4337F2043634F18D6B_AdjustorThunk },
	{ 0x0600030F, LowerCaseMapping__ctor_m0236442CB5098331DEAE7CACFCAC42741945D3E8_AdjustorThunk },
	{ 0x06000565, X509ChainStatus__ctor_mA41DF127E7EEF7B59204118C5C48F695F2C6DECC_AdjustorThunk },
	{ 0x06000876, AuthorizationState__ctor_m33AFDC1A78F1C2709F58ADE60766E6DB40B23108_AdjustorThunk },
	{ 0x06000877, AuthorizationState_ToString_m7A5CA8DDE1302D55B5F3B1F75A5D79387EFF0531_AdjustorThunk },
	{ 0x06000878, IPv6AddressFormatter__ctor_mEEFF87906A194838D6E4A31AB724A28808E539E5_AdjustorThunk },
	{ 0x0600087A, IPv6AddressFormatter_AsIPv4Int_m875CCBC60A506A331C9D591D5A88D49EBB6730E7_AdjustorThunk },
	{ 0x0600087B, IPv6AddressFormatter_IsIPv4Compatible_m769BBFB4FBB844EC8AB61A635495A7F2925FDD99_AdjustorThunk },
	{ 0x0600087C, IPv6AddressFormatter_IsIPv4Mapped_m46AE9AECC6E77E6A53ACBF60BEF336D45FF236DB_AdjustorThunk },
	{ 0x0600087D, IPv6AddressFormatter_ToString_m5FB0F927F3B0BAA521BC92562A7F5A78460023DC_AdjustorThunk },
};
static const int32_t s_InvokerIndices[2582] = 
{
	7147,
	6645,
	7732,
	4467,
	6765,
	6765,
	6850,
	6440,
	8042,
	8019,
	8052,
	2522,
	840,
	137,
	4120,
	2522,
	659,
	135,
	3848,
	2522,
	659,
	135,
	3848,
	2522,
	851,
	134,
	4467,
	2522,
	23,
	7,
	4467,
	2522,
	1307,
	255,
	4120,
	5479,
	2522,
	5584,
	2030,
	4796,
	2522,
	2104,
	713,
	4467,
	2522,
	2658,
	711,
	4797,
	2522,
	225,
	73,
	2840,
	2522,
	225,
	73,
	2840,
	2522,
	4341,
	1155,
	4467,
	2522,
	661,
	166,
	3848,
	2522,
	2659,
	711,
	4799,
	2522,
	1494,
	294,
	4798,
	2522,
	2837,
	1155,
	2840,
	2522,
	1338,
	254,
	4467,
	2522,
	852,
	135,
	4467,
	2522,
	4341,
	1155,
	4467,
	2522,
	167,
	40,
	4120,
	2522,
	86,
	22,
	4120,
	2522,
	227,
	83,
	2840,
	2522,
	226,
	82,
	2840,
	2522,
	1339,
	255,
	4467,
	2522,
	863,
	136,
	4467,
	2522,
	863,
	136,
	4467,
	2522,
	863,
	136,
	4467,
	2522,
	852,
	135,
	4467,
	2522,
	2078,
	711,
	4120,
	2522,
	2078,
	711,
	4120,
	2522,
	2078,
	711,
	4120,
	2522,
	659,
	135,
	3848,
	2522,
	659,
	135,
	3848,
	2522,
	2096,
	711,
	4467,
	2522,
	4341,
	1155,
	4467,
	2522,
	1332,
	252,
	4467,
	96,
	6392,
	5274,
	1011,
	1011,
	5479,
	4355,
	5479,
	5274,
	5479,
	6282,
	1140,
	6282,
	1140,
	6693,
	2083,
	5620,
	42,
	7864,
	7864,
	7626,
	6972,
	7626,
	7626,
	5384,
	5318,
	5274,
	5274,
	5274,
	5274,
	5348,
	1212,
	774,
	33,
	5479,
	338,
	139,
	4645,
	5274,
	5585,
	5384,
	4467,
	4431,
	5479,
	4355,
	7095,
	7094,
	7931,
	7094,
	7094,
	2492,
	5479,
	5350,
	4433,
	7656,
	5479,
	7931,
	5479,
	4355,
	5479,
	2492,
	8087,
	7656,
	5348,
	7093,
	3846,
	6483,
	7619,
	2306,
	2492,
	6595,
	7732,
	7656,
	7656,
	6593,
	7730,
	5384,
	8087,
	2492,
	7093,
	3847,
	3847,
	2492,
	6595,
	7732,
	6792,
	6792,
	6562,
	8042,
	7931,
	2492,
	8052,
	2493,
	2493,
	1130,
	5479,
	8087,
	4467,
	7619,
	5350,
	5350,
	5384,
	5384,
	5348,
	5348,
	5384,
	8087,
	4467,
	5384,
	6594,
	6284,
	8087,
	6594,
	7134,
	7134,
	7134,
	7134,
	7093,
	7147,
	7147,
	7147,
	8042,
	8052,
	8052,
	8087,
	5479,
	5479,
	2522,
	1384,
	265,
	4467,
	5479,
	7136,
	6628,
	6628,
	6642,
	3931,
	3171,
	5479,
	1384,
	5348,
	5348,
	1414,
	5384,
	4431,
	5479,
	4431,
	1414,
	5348,
	5384,
	4431,
	4467,
	5384,
	5274,
	5384,
	5348,
	4431,
	2509,
	4431,
	5479,
	3913,
	3913,
	3913,
	3642,
	5384,
	5479,
	4467,
	5479,
	4467,
	5479,
	4467,
	2509,
	3642,
	5384,
	5348,
	4431,
	337,
	5384,
	337,
	3642,
	337,
	3642,
	2522,
	417,
	158,
	3171,
	7147,
	361,
	6327,
	5384,
	237,
	756,
	146,
	145,
	338,
	5384,
	5384,
	2110,
	7732,
	7147,
	3931,
	925,
	74,
	139,
	269,
	3673,
	269,
	4467,
	1133,
	1414,
	763,
	763,
	1193,
	581,
	224,
	1068,
	236,
	1164,
	2006,
	3642,
	2833,
	2833,
	5274,
	4355,
	5479,
	1986,
	4432,
	5274,
	5274,
	5274,
	5349,
	5349,
	4432,
	8087,
	5479,
	5479,
	4467,
	5479,
	4467,
	5479,
	5348,
	5479,
	4467,
	5479,
	4467,
	96,
	5384,
	5384,
	5274,
	5274,
	5384,
	5384,
	5384,
	5479,
	5274,
	5479,
	1011,
	1011,
	5479,
	1665,
	2030,
	5479,
	4355,
	5479,
	8052,
	8087,
	7137,
	8087,
	8052,
	8052,
	8087,
	5384,
	4355,
	7147,
	8052,
	8087,
	7732,
	7521,
	7732,
	7732,
	7732,
	5479,
	417,
	5479,
	417,
	5479,
	780,
	6967,
	6132,
	6968,
	6292,
	5274,
	5274,
	5274,
	5274,
	5467,
	5384,
	5274,
	7521,
	5274,
	1671,
	3171,
	5274,
	5479,
	5465,
	3243,
	3243,
	6980,
	6980,
	5384,
	5479,
	4355,
	4467,
	2520,
	2526,
	1429,
	2526,
	6218,
	7728,
	2531,
	2531,
	2531,
	5384,
	5384,
	5384,
	5384,
	5384,
	5274,
	5274,
	5274,
	5384,
	5274,
	5384,
	7521,
	8052,
	8087,
	5384,
	5348,
	5384,
	5384,
	5384,
	5274,
	5384,
	5384,
	5274,
	5274,
	7529,
	7529,
	7625,
	5348,
	5384,
	6939,
	6939,
	3171,
	6564,
	5384,
	5348,
	2533,
	4544,
	5479,
	5976,
	5479,
	2017,
	3925,
	2017,
	1198,
	3925,
	5479,
	5985,
	6472,
	6557,
	85,
	4,
	24,
	920,
	854,
	433,
	1210,
	5769,
	6331,
	7621,
	6644,
	7529,
	7529,
	7529,
	7529,
	6612,
	1405,
	1364,
	3171,
	3171,
	3171,
	6492,
	2017,
	7732,
	764,
	1477,
	6304,
	5969,
	3925,
	2017,
	4467,
	8087,
	5479,
	5479,
	5479,
	4467,
	2531,
	2531,
	5616,
	5668,
	5608,
	5607,
	5621,
	6841,
	7227,
	7529,
	7529,
	7529,
	7529,
	8087,
	5384,
	5348,
	5384,
	2506,
	1216,
	1214,
	8019,
	8087,
	5348,
	3136,
	3136,
	3136,
	1637,
	4431,
	7732,
	5274,
	5384,
	2506,
	1216,
	1214,
	1414,
	6311,
	5799,
	5799,
	5957,
	5957,
	6935,
	6887,
	6301,
	5957,
	6966,
	6966,
	6311,
	6569,
	5703,
	5795,
	6273,
	6109,
	6109,
	6308,
	7714,
	7425,
	7504,
	6093,
	6467,
	6467,
	6108,
	6311,
	6098,
	2522,
	4467,
	1220,
	4467,
	5479,
	2526,
	2526,
	5384,
	5384,
	5384,
	5274,
	4355,
	5274,
	4355,
	5479,
	1375,
	5479,
	4467,
	5479,
	7316,
	7619,
	8087,
	8019,
	5479,
	3171,
	2522,
	2526,
	780,
	4467,
	5479,
	4378,
	4355,
	5274,
	4355,
	7059,
	5479,
	4467,
	4467,
	5384,
	5479,
	4355,
	5479,
	5479,
	4467,
	4467,
	5384,
	4373,
	5479,
	4467,
	2520,
	948,
	2531,
	2531,
	7942,
	8078,
	7732,
	5348,
	5453,
	5274,
	5384,
	3925,
	3673,
	6939,
	6122,
	3171,
	1663,
	2028,
	6644,
	6323,
	3931,
	2028,
	6645,
	5973,
	2030,
	775,
	5479,
	138,
	7732,
	3931,
	5274,
	5274,
	8087,
	55,
	5384,
	4467,
	5479,
	5384,
	4467,
	5479,
	924,
	1663,
	413,
	583,
	5384,
	1414,
	5348,
	5348,
	5384,
	5384,
	5384,
	5384,
	5384,
	5479,
	4467,
	5384,
	5274,
	5348,
	3925,
	2520,
	5384,
	3925,
	5479,
	4467,
	5274,
	5384,
	5384,
	5479,
	8087,
	5479,
	876,
	5274,
	4355,
	4542,
	4467,
	4467,
	4467,
	2575,
	924,
	4467,
	4467,
	1469,
	2110,
	2110,
	1343,
	7846,
	7521,
	7521,
	7521,
	7521,
	7521,
	7521,
	7529,
	7529,
	6969,
	6518,
	5820,
	5820,
	6131,
	7732,
	7732,
	7142,
	5348,
	5384,
	3925,
	5479,
	6632,
	996,
	1888,
	5479,
	2575,
	27,
	7515,
	7732,
	7732,
	7621,
	7617,
	5479,
	4431,
	5274,
	5348,
	4467,
	5274,
	5384,
	5384,
	3931,
	5479,
	1374,
	4355,
	995,
	1403,
	1659,
	3931,
	5274,
	2509,
	5384,
	5274,
	8052,
	8087,
	963,
	5274,
	5384,
	8087,
	5479,
	2526,
	5384,
	5274,
	5348,
	3925,
	3931,
	3925,
	3925,
	2520,
	5384,
	5479,
	4467,
	5274,
	5384,
	5384,
	5479,
	2526,
	5479,
	5479,
	4431,
	4431,
	4431,
	4431,
	5348,
	5348,
	5348,
	5479,
	4431,
	2306,
	1367,
	4431,
	2306,
	5479,
	4431,
	5479,
	4431,
	5348,
	3642,
	4431,
	2306,
	5479,
	4431,
	5348,
	3642,
	5348,
	3642,
	5348,
	5348,
	5348,
	5348,
	5465,
	3171,
	1637,
	5479,
	4095,
	5274,
	5479,
	8052,
	198,
	363,
	5384,
	5384,
	3925,
	5384,
	1367,
	4431,
	4431,
	3136,
	3642,
	3642,
	4431,
	8087,
	5479,
	105,
	5384,
	363,
	3925,
	5348,
	5384,
	5274,
	3925,
	2520,
	5384,
	8087,
	5479,
	4467,
	5274,
	5384,
	5479,
	1438,
	5479,
	2531,
	2531,
	5479,
	1438,
	2306,
	1370,
	1368,
	1367,
	901,
	5274,
	5384,
	1367,
	5384,
	3925,
	5384,
	5384,
	5384,
	5384,
	5384,
	1165,
	4467,
	3925,
	5348,
	5348,
	7142,
	5971,
	7732,
	4467,
	4467,
	4431,
	5384,
	5384,
	3912,
	2005,
	5384,
	5479,
	5384,
	5384,
	5384,
	5384,
	5465,
	5348,
	4095,
	7625,
	5465,
	3136,
	5479,
	5465,
	5384,
	3725,
	7625,
	5479,
	2306,
	2520,
	1417,
	5479,
	3673,
	3136,
	3171,
	5274,
	5274,
	5274,
	5274,
	5274,
	5274,
	7529,
	7529,
	7529,
	5274,
	7529,
	7529,
	1365,
	5479,
	5479,
	5274,
	4467,
	5479,
	5479,
	1346,
	5384,
	4542,
	4542,
	4467,
	4467,
	4431,
	5479,
	5479,
	5479,
	5274,
	5479,
	3931,
	5348,
	4431,
	5465,
	5479,
	4431,
	5479,
	4095,
	5465,
	4095,
	5348,
	8087,
	1433,
	2526,
	2526,
	5384,
	775,
	5479,
	39,
	5479,
	5479,
	5479,
	5479,
	5274,
	5479,
	5479,
	3912,
	5479,
	1039,
	1039,
	5479,
	5479,
	5479,
	4431,
	5348,
	5348,
	1367,
	901,
	5479,
	3136,
	3642,
	3642,
	5384,
	107,
	7732,
	5479,
	4431,
	5274,
	5348,
	5348,
	2306,
	4431,
	2306,
	1367,
	3673,
	3931,
	3642,
	3931,
	1374,
	8041,
	8052,
	5479,
	5453,
	5349,
	5349,
	5479,
	5479,
	8087,
	5479,
	5479,
	5479,
	4355,
	5274,
	3171,
	5348,
	8087,
	4467,
	5384,
	3171,
	5348,
	3931,
	5479,
	5479,
	5274,
	5274,
	5479,
	4355,
	3931,
	5274,
	5384,
	5479,
	8087,
	4467,
	5479,
	4467,
	5384,
	3171,
	5348,
	8087,
	4467,
	5384,
	3171,
	5348,
	8087,
	4355,
	4467,
	5384,
	3171,
	5348,
	5479,
	4467,
	5384,
	5384,
	4467,
	3171,
	5348,
	8087,
	4355,
	5274,
	3171,
	5348,
	8087,
	2526,
	3171,
	5348,
	5479,
	4467,
	3171,
	5348,
	8087,
	4431,
	5348,
	3171,
	5348,
	8087,
	5479,
	4467,
	5384,
	5384,
	3171,
	5348,
	8087,
	5479,
	4431,
	3171,
	5348,
	4467,
	3931,
	3931,
	4467,
	4467,
	4467,
	5384,
	5274,
	5384,
	5274,
	2030,
	5479,
	5479,
	5479,
	5479,
	4467,
	1417,
	2531,
	4467,
	2522,
	2526,
	780,
	4467,
	4467,
	8087,
	5479,
	5479,
	5479,
	5479,
	5479,
	4467,
	5384,
	3171,
	5348,
	8087,
	5479,
	4431,
	2337,
	2531,
	5348,
	2531,
	7728,
	8087,
	8087,
	8087,
	5479,
	5384,
	1429,
	5479,
	2526,
	2531,
	4431,
	2531,
	5384,
	2531,
	5479,
	4467,
	1412,
	2526,
	4467,
	5384,
	4467,
	5384,
	5479,
	3673,
	3925,
	5348,
	5384,
	2520,
	5274,
	5384,
	4467,
	5384,
	5274,
	5479,
	7142,
	7142,
	5479,
	2526,
	4467,
	5384,
	4467,
	4467,
	3912,
	3912,
	3912,
	3912,
	3912,
	3912,
	3912,
	3912,
	6659,
	6659,
	4467,
	5384,
	5384,
	5384,
	5384,
	7732,
	7147,
	7732,
	8087,
	5479,
	2509,
	869,
	5274,
	5274,
	5348,
	4467,
	3673,
	5384,
	3912,
	5384,
	5479,
	4467,
	4467,
	2531,
	5287,
	5287,
	5384,
	4467,
	5384,
	5384,
	5384,
	5384,
	5348,
	1430,
	1430,
	5479,
	5384,
	3912,
	7359,
	8087,
	5479,
	3673,
	8087,
	5384,
	4467,
	5384,
	5384,
	5348,
	5384,
	1430,
	5479,
	5479,
	5274,
	4467,
	4467,
	5384,
	3912,
	3912,
	5384,
	3912,
	5287,
	5287,
	1658,
	5384,
	5479,
	5384,
	4467,
	5384,
	5384,
	5348,
	2030,
	1430,
	5479,
	5384,
	3912,
	7359,
	5384,
	8087,
	5479,
	4467,
	3925,
	4467,
	5384,
	5348,
	4467,
	5384,
	5384,
	5274,
	5479,
	5274,
	5479,
	4467,
	5348,
	3925,
	2509,
	5384,
	5479,
	4355,
	5479,
	5384,
	5479,
	4355,
	4467,
	5384,
	4467,
	5479,
	4355,
	5479,
	4467,
	5384,
	5479,
	5348,
	5274,
	3925,
	5384,
	2520,
	5384,
	4467,
	5479,
	4467,
	5384,
	5274,
	5479,
	5274,
	5479,
	5384,
	4467,
	5479,
	5479,
	4355,
	5479,
	5479,
	4355,
	5274,
	5384,
	4467,
	5479,
	8087,
	5479,
	4467,
	5479,
	4431,
	7728,
	2509,
	4467,
	3673,
	3912,
	5479,
	5274,
	4355,
	4467,
	3931,
	8087,
	8087,
	7934,
	6319,
	7715,
	7521,
	7934,
	8052,
	5479,
	5479,
	2509,
	2256,
	5348,
	4467,
	3642,
	3673,
	5384,
	3912,
	5479,
	5479,
	2509,
	2509,
	2509,
	2509,
	1412,
	5384,
	4467,
	7529,
	6970,
	7732,
	3673,
	5384,
	3912,
	5479,
	3931,
	2526,
	5384,
	5479,
	5348,
	5274,
	5384,
	2526,
	3171,
	2520,
	5384,
	5384,
	4467,
	4467,
	5479,
	4467,
	3931,
	2526,
	5348,
	5274,
	5384,
	2526,
	3171,
	2520,
	5384,
	5384,
	4467,
	5384,
	5291,
	5384,
	5384,
	5274,
	5479,
	5479,
	5479,
	4467,
	2337,
	4431,
	4467,
	2531,
	2531,
	4467,
	5479,
	4431,
	3931,
	5274,
	2526,
	3931,
	2526,
	3925,
	3925,
	5384,
	5348,
	2520,
	5384,
	5274,
	8087,
	2526,
	4467,
	5274,
	5479,
	5384,
	5384,
	5348,
	2520,
	5384,
	5274,
	5479,
	2526,
	1665,
	3673,
	5384,
	5384,
	8052,
	8052,
	5479,
	4431,
	2337,
	4467,
	2531,
	5479,
	7732,
	7732,
	2526,
	3931,
	2526,
	3931,
	2526,
	3925,
	3925,
	3925,
	4431,
	1374,
	909,
	1374,
	1374,
	1374,
	324,
	2522,
	2526,
	780,
	4467,
	3925,
	2337,
	5348,
	5274,
	5274,
	3673,
	5479,
	3171,
	2520,
	3673,
	2337,
	5274,
	4467,
	4431,
	5384,
	3925,
	2337,
	3673,
	3171,
	3673,
	2337,
	4467,
	2520,
	5384,
	5479,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	7728,
	2522,
	3673,
	1220,
	3673,
	8052,
	5479,
	8087,
	5348,
	5384,
	3931,
	5479,
	8052,
	8052,
	5479,
	2337,
	2531,
	8087,
	370,
	5974,
	5384,
	5479,
	5479,
	7728,
	3673,
	3673,
	3171,
	1665,
	3171,
	7359,
	7732,
	7732,
	7732,
	1433,
	8087,
	417,
	4432,
	2521,
	2534,
	4431,
	6932,
	7732,
	7137,
	5384,
	5348,
	5349,
	5384,
	7521,
	1659,
	3171,
	5348,
	5384,
	8087,
	5348,
	2520,
	5384,
	5348,
	5384,
	5384,
	3931,
	3171,
	5348,
	8087,
	5384,
	4467,
	4467,
	5384,
	4467,
	5479,
	5479,
	7521,
	8052,
	8052,
	8052,
	7521,
	7515,
	8087,
	8052,
	8052,
	2526,
	1433,
	4467,
	4467,
	4467,
	5479,
	4467,
	2531,
	2531,
	2531,
	5348,
	5348,
	3136,
	2306,
	4467,
	2520,
	5384,
	5384,
	3171,
	5348,
	5384,
	5479,
	2526,
	2520,
	963,
	368,
	2531,
	2531,
	2531,
	7728,
	8087,
	5479,
	5384,
	7521,
	2526,
	7137,
	7521,
	4467,
	2526,
	4467,
	2526,
	2526,
	5384,
	6631,
	5479,
	4542,
	2531,
	4467,
	2531,
	2531,
	3931,
	5384,
	5348,
	3925,
	3925,
	3925,
	8087,
	3673,
	1888,
	3673,
	1665,
	5479,
	8087,
	8052,
	5479,
	2531,
	2531,
	2531,
	8052,
	8052,
	8087,
	5479,
	3931,
	3171,
	5384,
	5479,
	2531,
	2531,
	2531,
	5479,
	5479,
	4355,
	7732,
	7359,
	7068,
	8040,
	7147,
	7732,
	7045,
	7625,
	8087,
	5479,
	2337,
	4542,
	4355,
	5384,
	2522,
	3931,
	1220,
	3931,
	334,
	7732,
	7732,
	8087,
	3931,
	5479,
	4431,
	8052,
	5384,
	2522,
	4467,
	4433,
	4467,
	5479,
	5479,
	7142,
	5479,
	8087,
	7728,
	8087,
	7359,
	4431,
	4431,
	5274,
	5479,
	2522,
	1417,
	271,
	4467,
	4431,
	5479,
	5479,
	5384,
	4467,
	5384,
	4467,
	5274,
	5479,
	3931,
	3171,
	5479,
	5384,
	4467,
	5384,
	5384,
	4467,
	3171,
	5384,
	4467,
	5384,
	5274,
	5384,
	4467,
	5384,
	5384,
	4467,
	5348,
	5348,
	4431,
	5384,
	8052,
	3171,
	5348,
	5384,
	8087,
	1888,
	5479,
	5479,
	3925,
	4467,
	5348,
	5274,
	5384,
	2520,
	3673,
	5384,
	4467,
	5384,
	5274,
	5479,
	5479,
	4467,
	2531,
	2531,
	2531,
	4467,
	2531,
	2531,
	2531,
	5274,
	7934,
	7934,
	5479,
	8087,
	5479,
	3931,
	363,
	104,
	4355,
	4431,
	1133,
	1414,
	269,
	3673,
	269,
	4467,
	5479,
	961,
	2531,
	2531,
	2531,
	5479,
	4431,
	3931,
	3171,
	5479,
	934,
	5384,
	5274,
	4355,
	3931,
	4355,
	3171,
	3171,
	3171,
	3171,
	3171,
	2531,
	2531,
	2531,
	5384,
	8052,
	4355,
	5479,
	1658,
	1658,
	6933,
	7732,
	1658,
	1059,
	7732,
	4467,
	4467,
	417,
	968,
	367,
	1133,
	269,
	4467,
	3673,
	5479,
	943,
	5801,
	7504,
	7934,
	6327,
	7732,
	8052,
	961,
	5384,
	6819,
	7934,
	7359,
	4467,
	3171,
	4467,
	2026,
	778,
	2526,
	1665,
	5479,
	5479,
	2526,
	2526,
	7934,
	7359,
	7359,
	6315,
	7359,
	7934,
	7359,
	7359,
	8087,
	3931,
	5479,
	4467,
	8087,
	956,
	5479,
	5348,
	5384,
	5274,
	4467,
	4467,
	5479,
	2008,
	5384,
	7934,
	4467,
	5479,
	3171,
	761,
	2520,
	5479,
	5479,
	5479,
	4355,
	8087,
	417,
	2028,
	1212,
	5479,
	5348,
	5384,
	5274,
	5274,
	8019,
	5384,
	5384,
	5479,
	4355,
	4355,
	2030,
	3931,
	3673,
	5384,
	5479,
	5479,
	5479,
	5479,
	5384,
	4467,
	4467,
	4467,
	4467,
	2522,
	3931,
	1220,
	3931,
	2526,
	4467,
	5348,
	4431,
	5384,
	4467,
	5274,
	5384,
	5384,
	5384,
	4431,
	3931,
	4467,
	5348,
	5274,
	4467,
	5479,
	3171,
	2520,
	5384,
	5384,
	3171,
	4467,
	4467,
	4467,
	7521,
	7521,
	5479,
	7732,
	4467,
	5274,
	5274,
	5384,
	5384,
	5384,
	5274,
	5274,
	5384,
	5384,
	5384,
	5384,
	5384,
	5384,
	8087,
	2522,
	5384,
	2030,
	3931,
	4467,
	5274,
	5384,
	4432,
	4467,
	5384,
	5384,
	5274,
	4355,
	4431,
	5479,
	4355,
	5479,
	2509,
	2113,
	7732,
	7732,
	7147,
	7521,
	8087,
	5479,
	3931,
	4467,
	5479,
	5384,
	5384,
	5274,
	5274,
	5479,
	8087,
	4467,
	2531,
	5479,
	4355,
	5384,
	5384,
	5384,
	5384,
	2531,
	2531,
	5479,
	2509,
	5384,
	2521,
	7850,
	5466,
	5274,
	5274,
	5384,
	2526,
	4467,
	7934,
	4467,
	2509,
	5384,
	5384,
	5384,
	5274,
	5274,
	8087,
	4467,
	5384,
	5274,
	5384,
	5348,
	5384,
	3171,
	5348,
	4467,
	7934,
	4467,
	1133,
	1133,
	1414,
	1399,
	5274,
	5348,
	1127,
	1127,
	7732,
	1127,
	1127,
	7934,
	4467,
	1133,
	962,
	364,
	5274,
	5274,
	5274,
	5349,
	5349,
	4432,
	5479,
	5479,
	1133,
	1133,
	269,
	3673,
	1986,
	4432,
	1414,
	269,
	4467,
	1429,
	5274,
	5274,
	5274,
	5349,
	5349,
	4432,
	5479,
	3912,
	5479,
	7127,
	1414,
	1414,
	269,
	4467,
	1133,
	269,
	3673,
	1986,
	4432,
	8087,
	1414,
	4355,
	4355,
	4355,
	1346,
	4355,
	4355,
	4467,
	8087,
	8052,
	8040,
	8052,
	7147,
	1429,
	5274,
	5348,
	3171,
	1414,
	2526,
	5479,
	4355,
	8087,
	5479,
	3171,
	5479,
	4355,
	5479,
	4355,
	5479,
	5479,
	8040,
	5479,
	2337,
	4431,
	4431,
	2531,
	5384,
	5348,
	2111,
	4355,
	4431,
	2509,
	5274,
	5274,
	5274,
	5349,
	5349,
	4432,
	1986,
	2520,
	1133,
	1414,
	4355,
	5479,
	269,
	3673,
	269,
	4467,
	5479,
	3913,
	4432,
	1367,
	8019,
	8019,
	8019,
	8019,
	5350,
	5348,
	5348,
	5348,
	4355,
	5274,
	4355,
	5274,
	1887,
	583,
	583,
	1887,
	4431,
	150,
	3673,
	150,
	3673,
	8052,
	5274,
	8087,
	5479,
	5479,
	4431,
	903,
	5479,
	660,
	5384,
	6637,
	6624,
	5274,
	4355,
	6802,
	6789,
	5274,
	4355,
	6104,
	5384,
	4467,
	3171,
	3931,
	1153,
	6630,
	6592,
	4467,
	6819,
	6795,
	4431,
	6806,
	6790,
	7934,
	7934,
	4467,
	6408,
	6388,
	4355,
	4467,
	6802,
	6789,
	244,
	1131,
	78,
	1885,
	5730,
	5726,
	5730,
	5726,
	129,
	1885,
	5663,
	5662,
	244,
	1131,
	78,
	7354,
	1885,
	5730,
	5726,
	5730,
	5726,
	3673,
	2017,
	6055,
	6028,
	1367,
	5690,
	5685,
	5479,
	4431,
	7315,
	4431,
	6806,
	6790,
	4355,
	4433,
	5479,
	4467,
	1414,
	5479,
	1220,
	1423,
	968,
	3642,
	3931,
	7934,
	8040,
	7515,
	7515,
	8087,
	8087,
	5479,
	4467,
	4467,
	4467,
	4467,
	4467,
	4467,
	4467,
	4467,
	4467,
	4467,
	4467,
	4467,
	4467,
	4467,
	4467,
	4467,
	5479,
	4467,
	5479,
	4467,
	2492,
	5274,
	5479,
	5479,
	8087,
	5384,
	4467,
	5384,
	4431,
	5348,
	4431,
	4431,
	5348,
	4431,
	5384,
	4467,
	4467,
	4467,
	5479,
	5479,
	4355,
	5479,
	4431,
	5479,
	4467,
	5350,
	5479,
	968,
	968,
	5348,
	5479,
	5479,
	5479,
	4355,
	4431,
	2509,
	4467,
	4467,
	2520,
	8087,
	5479,
	4467,
	2509,
	5384,
	4355,
	5274,
	2522,
	417,
	158,
	3171,
	2522,
	780,
	160,
	3931,
	5384,
	934,
	6307,
	925,
	5274,
	5274,
	5274,
	5274,
	5349,
	5349,
	4432,
	4432,
	1986,
	3913,
	5479,
	5479,
	4355,
	1133,
	1414,
	269,
	3673,
	269,
	4467,
	8019,
	8052,
	8052,
	5384,
	5479,
	5479,
	2531,
	7068,
	5384,
	5479,
	5479,
	5384,
	5479,
	4467,
	8087,
	5384,
	5479,
	7064,
	8088,
	8052,
	8052,
	8052,
	8052,
	5384,
	5479,
	8052,
	5274,
	5479,
	8087,
	7867,
	5479,
	5479,
	5479,
	5384,
	5479,
	5384,
	4467,
	5479,
	5384,
	5479,
	5384,
	5479,
	5384,
	5479,
	5479,
	5384,
	5479,
	5384,
	5479,
	5384,
	5479,
	5384,
	5479,
	5384,
	5479,
	5384,
	5479,
	5479,
	1220,
	8087,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[4] = 
{
	{ 0x060000A7, 11,  (void**)&UnityTlsContext_WriteCallback_mE11815EF2287F4F9D27C94D0E5414DC1E2BCEFD8_RuntimeMethod_var, 0 },
	{ 0x060000A9, 9,  (void**)&UnityTlsContext_ReadCallback_m761A4E7B983E40C8D727C2251158F22F762CD419_RuntimeMethod_var, 0 },
	{ 0x060000AB, 10,  (void**)&UnityTlsContext_VerifyCallback_m8367D8479B3FD1AA41D886446279FEE8246F04B2_RuntimeMethod_var, 0 },
	{ 0x060000AD, 8,  (void**)&UnityTlsContext_CertificateCallback_mCF0B5C35CA9C47C2FA5438BA3BA603911642333B_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[7] = 
{
	{ 0x02000121, { 0, 22 } },
	{ 0x02000124, { 22, 23 } },
	{ 0x02000125, { 45, 2 } },
	{ 0x02000127, { 47, 8 } },
	{ 0x02000128, { 55, 3 } },
	{ 0x0200012A, { 58, 6 } },
	{ 0x0200012B, { 64, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[67] = 
{
	{ (Il2CppRGCTXDataType)2, 10136 },
	{ (Il2CppRGCTXDataType)3, 44486 },
	{ (Il2CppRGCTXDataType)3, 4011 },
	{ (Il2CppRGCTXDataType)2, 1793 },
	{ (Il2CppRGCTXDataType)3, 38201 },
	{ (Il2CppRGCTXDataType)3, 38202 },
	{ (Il2CppRGCTXDataType)3, 38194 },
	{ (Il2CppRGCTXDataType)3, 4014 },
	{ (Il2CppRGCTXDataType)3, 38200 },
	{ (Il2CppRGCTXDataType)3, 38198 },
	{ (Il2CppRGCTXDataType)3, 4040 },
	{ (Il2CppRGCTXDataType)3, 4023 },
	{ (Il2CppRGCTXDataType)2, 798 },
	{ (Il2CppRGCTXDataType)3, 38196 },
	{ (Il2CppRGCTXDataType)3, 4020 },
	{ (Il2CppRGCTXDataType)3, 4024 },
	{ (Il2CppRGCTXDataType)3, 38197 },
	{ (Il2CppRGCTXDataType)3, 38193 },
	{ (Il2CppRGCTXDataType)3, 44487 },
	{ (Il2CppRGCTXDataType)3, 44488 },
	{ (Il2CppRGCTXDataType)3, 38199 },
	{ (Il2CppRGCTXDataType)3, 38195 },
	{ (Il2CppRGCTXDataType)3, 30443 },
	{ (Il2CppRGCTXDataType)2, 8136 },
	{ (Il2CppRGCTXDataType)3, 30418 },
	{ (Il2CppRGCTXDataType)3, 30448 },
	{ (Il2CppRGCTXDataType)3, 30447 },
	{ (Il2CppRGCTXDataType)3, 30450 },
	{ (Il2CppRGCTXDataType)3, 30420 },
	{ (Il2CppRGCTXDataType)3, 30419 },
	{ (Il2CppRGCTXDataType)3, 30445 },
	{ (Il2CppRGCTXDataType)3, 30452 },
	{ (Il2CppRGCTXDataType)3, 16579 },
	{ (Il2CppRGCTXDataType)2, 4069 },
	{ (Il2CppRGCTXDataType)2, 781 },
	{ (Il2CppRGCTXDataType)3, 16578 },
	{ (Il2CppRGCTXDataType)2, 3215 },
	{ (Il2CppRGCTXDataType)3, 14356 },
	{ (Il2CppRGCTXDataType)3, 30446 },
	{ (Il2CppRGCTXDataType)3, 30449 },
	{ (Il2CppRGCTXDataType)3, 30451 },
	{ (Il2CppRGCTXDataType)2, 11819 },
	{ (Il2CppRGCTXDataType)3, 30444 },
	{ (Il2CppRGCTXDataType)1, 11819 },
	{ (Il2CppRGCTXDataType)2, 11819 },
	{ (Il2CppRGCTXDataType)3, 30453 },
	{ (Il2CppRGCTXDataType)2, 963 },
	{ (Il2CppRGCTXDataType)3, 49197 },
	{ (Il2CppRGCTXDataType)3, 55686 },
	{ (Il2CppRGCTXDataType)3, 38986 },
	{ (Il2CppRGCTXDataType)3, 38985 },
	{ (Il2CppRGCTXDataType)2, 3218 },
	{ (Il2CppRGCTXDataType)3, 14359 },
	{ (Il2CppRGCTXDataType)3, 38987 },
	{ (Il2CppRGCTXDataType)2, 11825 },
	{ (Il2CppRGCTXDataType)3, 14374 },
	{ (Il2CppRGCTXDataType)3, 14375 },
	{ (Il2CppRGCTXDataType)2, 989 },
	{ (Il2CppRGCTXDataType)3, 49198 },
	{ (Il2CppRGCTXDataType)3, 55687 },
	{ (Il2CppRGCTXDataType)2, 3220 },
	{ (Il2CppRGCTXDataType)3, 14361 },
	{ (Il2CppRGCTXDataType)3, 44560 },
	{ (Il2CppRGCTXDataType)3, 53022 },
	{ (Il2CppRGCTXDataType)3, 14377 },
	{ (Il2CppRGCTXDataType)3, 14378 },
	{ (Il2CppRGCTXDataType)2, 1000 },
};
extern const CustomAttributesCacheGenerator g_System_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_CodeGenModule;
const Il2CppCodeGenModule g_System_CodeGenModule = 
{
	"System.dll",
	2582,
	s_methodPointers,
	24,
	s_adjustorThunks,
	s_InvokerIndices,
	4,
	s_reversePInvokeIndices,
	7,
	s_rgctxIndices,
	67,
	s_rgctxValues,
	NULL,
	g_System_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
