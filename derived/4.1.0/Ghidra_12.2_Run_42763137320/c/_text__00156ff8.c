/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00156ff8; name: FUN_.text__00156ff8
 */


void FUN__text__00156ff8(long param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_4 == 0xb) {
    param_4 = FUN__text__0015ab30();
  }
  FUN__text__005f33f0(lVar2);
  iVar1 = FUN__text__0016ae34(param_3);
  FUN__text__005f335c(lVar2,iVar1 + 0x11);
  FUN__text__005f3304(lVar2,param_2);
  iVar1 = FUN__text__0016ae34(param_4);
  FUN__text__005f335c(lVar2,iVar1 + 0x11);
                    /* WARNING: Could not recover jumptable at 0x00157090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


