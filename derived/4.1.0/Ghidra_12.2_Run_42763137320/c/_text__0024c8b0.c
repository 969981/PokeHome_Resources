/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0024c8b0; name: FUN_.text__0024c8b0
 */


bool FUN__text__0024c8b0(char *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  size_t sVar4;
  char *__s;
  size_t sVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (param_1 != (char *)0x0) {
    uVar3 = FUN__text__003230b0();
    if (uVar3 < 0xb) {
      uVar7 = *(undefined8 *)((long)(int)uVar3 * 8 + 0x874cd8);
    }
    else {
      uVar7 = 0x717425;
    }
    snprintf(&DAT_008e4478,0xc00,(char *)0x70d014,param_1,uVar7);
    sVar4 = strlen(param_1);
    uVar3 = FUN__text__003230b0();
    if (uVar3 < 0xb) {
      __s = *(char **)((long)(int)uVar3 * 8 + 0x874cd8);
    }
    else {
      __s = (char *)0x717425;
    }
    sVar5 = strlen(__s);
    uVar1 = DAT_008aa508;
    if (sVar5 + sVar4 < 0xc00) {
      DAT_008aa508 = 0;
      uVar6 = FUN__text__0024c7f0(&DAT_008e4478);
      bVar2 = false;
      DAT_008aa508 = uVar1;
      if ((uVar6 & 1) != 0) {
        uVar3 = nn::web::WebPageReturnValue::GetWebExitReason();
        bVar2 = uVar3 < 2;
      }
      return bVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


