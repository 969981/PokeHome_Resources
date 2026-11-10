/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00157094; name: FUN_.text__00157094
 */


void FUN__text__00157094(undefined8 *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_4 == 0xb) {
    param_4 = FUN__text__0015ab30();
  }
  FUN__text__005f33f0(*param_1);
  uVar2 = *param_1;
  iVar1 = FUN__text__0016ae34(param_3);
  FUN__text__005f335c(uVar2,iVar1 + 0x11);
  FUN__text__005f3304(*param_1,param_2);
  uVar2 = *param_1;
  iVar1 = FUN__text__0016ae34(param_4);
  FUN__text__005f335c(uVar2,iVar1 + 0x11);
  return;
}


