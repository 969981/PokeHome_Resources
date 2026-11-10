/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064b8a0; name: FUN_.text__0064b8a0
 */


undefined8 FUN__text__0064b8a0(undefined8 *param_1,char *param_2)

{
  int iVar1;
  Context *pCVar2;
  long *plVar3;
  ulong uVar4;
  Context *this;
  
  if ((param_2 == (char *)0x0) || (iVar1 = strncmp(param_2,(char *)0x7205eb,5), iVar1 != 0)) {
    FUN__text__00667b2c(*param_1,0xb5,1);
    return 1;
  }
  FUN__text__00667b2c(*param_1,0xb5,2);
  plVar3 = (long *)param_1[0x11];
  pCVar2 = (Context *)(**(code **)(*plVar3 + 0x10))(plVar3,8,8);
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = plVar3;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  nn::ssl::Context::Context(pCVar2);
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  this = (Context *)param_1[0x12];
  param_1[0x12] = pCVar2;
  if (this != (Context *)0x0) {
    nn::ssl::Context::~Context(this);
    (**(code **)(*(long *)param_1[0x13] + 0x18))
              ((long *)param_1[0x13],this,param_1[0x14],param_1[0x15]);
    pCVar2 = (Context *)param_1[0x12];
  }
  param_1[0x13] = plVar3;
  param_1[0x14] = 8;
  param_1[0x15] = 8;
  if (pCVar2 == (Context *)0x0) {
    return 0;
  }
  iVar1 = nn::ssl::Context::Create(pCVar2,0x5000001);
  pCVar2 = (Context *)param_1[0x12];
  *(int *)(param_1 + 0x16) = iVar1;
  if (iVar1 == 0) {
    iVar1 = FUN__text__00667b2c(*param_1,0x2906,pCVar2);
    if (iVar1 == 0) {
      return 1;
    }
    if (param_1[0x12] == 0) {
      return 0;
    }
    nn::ssl::Context::Destroy();
    pCVar2 = (Context *)param_1[0x12];
    param_1[0x12] = 0;
    if (pCVar2 == (Context *)0x0) {
      return 0;
    }
  }
  else {
    if (pCVar2 == (Context *)0x0) {
      return 0;
    }
    param_1[0x12] = 0;
  }
  nn::ssl::Context::~Context(pCVar2);
  (**(code **)(*(long *)param_1[0x13] + 0x18))
            ((long *)param_1[0x13],pCVar2,param_1[0x14],param_1[0x15]);
  return 0;
}


