/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055d7b0; name: FUN_.text__0055d7b0
 */


void FUN__text__0055d7b0(long param_1,long param_2,undefined4 param_3,int param_4)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long alStack_410 [128];
  
  uVar4 = *(uint *)(param_1 + 0xc);
  lVar5 = (long)alStack_410 + (0x400 - ((ulong)uVar4 * 8 + 0xf & 0xffffffff0));
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      uVar6 = 0;
    }
    else {
      uVar7 = 0;
      uVar6 = 0;
      do {
        uVar2 = param_4 + uVar7;
        plVar3 = (long *)(lVar5 + uVar6 * 8);
        uVar6 = uVar6 + 2;
        uVar1 = (ulong)uVar7;
        uVar7 = uVar7 + param_4 * 2;
        *plVar3 = param_2 + uVar1 * 4;
        plVar3[1] = param_2 + (ulong)uVar2 * 4;
      } while (((ulong)uVar4 & 0xfffffffe) != uVar6);
    }
    if ((uVar4 & 1) != 0) {
      *(ulong *)(lVar5 + uVar6 * 8) = param_2 + (ulong)(uint)((int)uVar6 * param_4) * 4;
    }
  }
  FUN__text__0055e170(lVar5,param_3,param_1 + 0x10,param_1);
  return;
}


