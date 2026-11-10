/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a9100; name: FUN_.text__006a9100
 */


void FUN__text__006a9100(long *param_1,long param_2,long param_3,undefined8 param_4,uint param_5)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = FUN__text__00699b8c(param_2);
  if (uVar1 != 0) {
    lVar4 = 0;
    do {
      lVar2 = FUN__text__00699ba4(param_2);
      uVar3 = FUN__text__0069e6c0(param_4,lVar2 + lVar4);
      (**(code **)(*param_1 + 0x58))(param_1,uVar3);
      lVar4 = lVar4 + 0x24;
    } while (((ulong)uVar1 + (ulong)uVar1 * 8) * 4 != lVar4);
  }
  lVar4 = *(long *)(param_2 + 0x10);
  param_1[0xb] = param_3;
  param_1[0xc] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x006a91b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_5 & 1);
  return;
}


