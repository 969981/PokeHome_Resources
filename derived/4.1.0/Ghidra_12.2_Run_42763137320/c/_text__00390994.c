/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00390994; name: FUN_.text__00390994
 */


void FUN__text__00390994(undefined8 param_1,undefined4 param_2,long *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  if (*param_3 != 0) {
    FUN__text__00631008();
    uVar1 = FUN__text__005fdb18();
    if (uVar1 < 0x402) {
      uVar2 = FUN__text__00631010(*param_3);
      uVar3 = FUN__text__005fdad0(uVar1);
      uVar5 = 0;
      if ((1 < (int)uVar3 - 0x298U) && ((int)uVar3 != 0x2e8)) {
        uVar5 = uVar2;
      }
      uVar4 = FUN__text__0038f620(uVar3,param_2,uVar1,uVar5);
      if ((uVar4 & 1) != 0) {
        FUN__text__00390680(param_1,0,param_2,uVar1);
        FUN__text__00390680(param_1,1,param_2,uVar1);
        return;
      }
    }
  }
  return;
}


