/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f54e0; name: FUN_.text__006f54e0
 */


void FUN__text__006f54e0(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_2 != 0) {
    uVar1 = (int)*(char *)(param_1 + 0x192);
    if ((int)param_3 <= (int)*(char *)(param_1 + 0x192)) {
      uVar1 = param_3;
    }
    if (0 < (int)uVar1) {
      uVar3 = (ulong)uVar1 & 3;
      if (uVar1 < 4) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        lVar2 = param_1 + 0x420;
        plVar4 = (long *)(param_2 + 0x10);
        do {
          lVar6 = lVar2 + -0x288;
          lVar7 = lVar2 + -0x1b0;
          lVar5 = lVar5 + -4;
          *plVar4 = lVar2 + -0xd8;
          plVar4[1] = lVar2;
          lVar2 = lVar2 + 0x360;
          plVar4[-2] = lVar6;
          plVar4[-1] = lVar7;
          plVar4 = plVar4 + 4;
        } while (-lVar5 != ((ulong)uVar1 & 0xfffffffc));
        lVar5 = -lVar5;
      }
      if ((uVar1 & 3) != 0) {
        lVar2 = param_1 + lVar5 * 0xd8 + 0x198;
        plVar4 = (long *)(param_2 + lVar5 * 8);
        do {
          *plVar4 = lVar2;
          lVar2 = lVar2 + 0xd8;
          uVar3 = uVar3 - 1;
          plVar4 = plVar4 + 1;
        } while (uVar3 != 0);
      }
    }
  }
  return;
}


