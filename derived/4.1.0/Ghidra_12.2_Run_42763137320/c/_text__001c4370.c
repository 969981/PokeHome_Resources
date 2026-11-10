/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c4370; name: FUN_.text__001c4370
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001c4370(undefined8 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x178,8);
  lVar1 = _DAT_008a0e98;
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  *plVar2 = lVar1 + 0x10;
  plVar2[1] = *param_3;
  plVar2[2] = param_3[1];
  lVar3 = param_3[2];
  *(undefined1 *)(plVar2 + 4) = 1;
  lVar1 = _DAT_008a0fb8;
  plVar2[5] = 0;
  plVar2[6] = 0;
  plVar2[0xb] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  *(undefined8 *)((long)plVar2 + 0x5e) = 0;
  plVar2[9] = 0;
  plVar2[10] = 0;
  plVar2[3] = lVar3;
  *plVar2 = lVar1 + 0x10;
  FUN__text__005e927c(plVar2 + 0xd,0x86de38);
  FUN__text__005e927c(plVar2 + 0x11,0x86de38);
  *(undefined8 *)((long)plVar2 + 0xce) = 0;
  plVar2[0x18] = 0;
  plVar2[0x19] = 0;
  plVar2[0x15] = 0;
  plVar2[0x16] = 0;
  plVar2[0x17] = 0;
  FUN__text__005e927c(plVar2 + 0x1b,0x86de38);
  FUN__text__005e927c(plVar2 + 0x1f,0x86de38);
  plVar2[0x2d] = 0;
  plVar2[0x2e] = 0;
  plVar2[0x2b] = 0;
  plVar2[0x2c] = 0;
  plVar2[0x29] = 0;
  plVar2[0x2a] = 0;
  plVar2[0x27] = 0;
  plVar2[0x28] = 0;
  plVar2[0x25] = 0;
  plVar2[0x26] = 0;
  plVar2[0x23] = 0;
  plVar2[0x24] = 0;
  param_1[2] = 0x178;
  param_1[3] = 8;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  *param_1 = plVar2;
  param_1[1] = param_2;
  return;
}


