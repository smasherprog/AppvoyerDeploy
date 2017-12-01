#pragma once

#if defined(WINDOWS) || defined(WIN32)
#if defined(APPVOYER_DEPLOY_DLL)
#define APPVOYER_DEPLOY_EXTERN __declspec(dllexport)
#else
#define APPVOYER_DEPLOY_EXTERN
#endif
#else
#define APPVOYER_DEPLOY_EXTERN
#endif

namespace SL {
namespace AppVoyer_Deploy{
	APPVOYER_DEPLOY_EXTERN void Somefunction();
    APPVOYER_DEPLOY_EXTERN void Somefunction1();
    APPVOYER_DEPLOY_EXTERN void Somefunction2();
}
} 
