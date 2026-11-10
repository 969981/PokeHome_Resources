/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027a640; name: FUN_.text__0027a640
 */


void FUN__text__0027a640(long param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  
  uVar3 = (ulong)*(uint *)(param_1 + (long)param_2 * 0x18 + 0x698d8);
  uVar2 = *(uint *)(param_1 + uVar3 * 0x10 + 0x7b238);
  if (uVar2 != 0) {
    uVar4 = 0;
    iVar5 = 0;
    do {
      if ((*(ulong *)(param_1 + (long)param_2 * 0x18 + 0x698e0 +
                     (ulong)((uint)uVar4 >> 6 & 0x3ff) * 8) >> (uVar4 & 0x3f) & 1) != 0) {
        if (iVar5 == param_3) {
          FUN__text__0027a380(param_1,uVar3,uVar4,param_4 & 1,param_5 & 1);
          return;
        }
        iVar5 = iVar5 + 1;
      }
      uVar1 = (uint)uVar4 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar2 != uVar1);
  }
  FUN__text__0027a380(param_1,uVar3,0,param_4 & 1,param_5 & 1);
  return;
}


