/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004372a0; name: FUN_.text__004372a0
 */


void FUN__text__004372a0(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  if ((int)param_1[1] != 0) {
    plVar7 = (long *)*param_1;
    do {
      plVar2 = (long *)*param_2;
      uVar4 = *(uint *)(param_2 + 1);
      plVar5 = plVar2;
      if (uVar4 == 0) {
LAB__text__00437324:
        if (plVar5 == plVar2 + (ulong)uVar4 * 2) goto LAB__text__00437330;
      }
      else {
        lVar6 = (ulong)uVar4 << 4;
        do {
          if (*plVar5 == *plVar7) goto LAB__text__00437324;
          plVar5 = plVar5 + 2;
          lVar6 = lVar6 + -0x10;
        } while (lVar6 != 0);
LAB__text__00437330:
        *(undefined1 *)(plVar7 + 1) = *(undefined1 *)((long)param_2 + 0x11);
        uVar4 = *(uint *)(param_2 + 1);
        if (*(uint *)((long)param_2 + 0xc) <= uVar4) {
          uVar1 = FUN__text__00438430(param_2);
          if (((uVar1 & 1) == 0) || (*(uint *)((long)param_2 + 0xc) <= uVar4))
          goto LAB__text__004373a4;
          uVar4 = *(uint *)(param_2 + 1);
        }
        *(uint *)(param_2 + 1) = uVar4 + 1;
        if (*param_2 != 0) {
          plVar5 = (long *)(*param_2 + (ulong)uVar4 * 0x10);
          *plVar5 = 0;
          *(undefined1 *)(plVar5 + 1) = 0;
          lVar6 = *plVar7;
          *(char *)(plVar5 + 1) = (char)plVar7[1];
          *plVar5 = lVar6;
          *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfe | 3 < *(byte *)(param_2 + 2);
        }
      }
LAB__text__004373a4:
      lVar3 = *param_1;
      uVar4 = *(uint *)(param_1 + 1);
      lVar6 = lVar3 + (ulong)uVar4 * 0x10;
      plVar5 = (long *)(lVar6 + -0x10);
      if (plVar7 < plVar5) {
        lVar3 = *plVar5;
        *(undefined1 *)(plVar7 + 1) = *(undefined1 *)(lVar6 + -8);
        *plVar7 = lVar3;
        uVar4 = *(uint *)(param_1 + 1);
        lVar3 = *param_1;
      }
      *(uint *)(param_1 + 1) = uVar4 - 1;
    } while (plVar7 != (long *)(lVar3 + (ulong)(uVar4 - 1) * 0x10));
    *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfe | 3 < *(byte *)(param_2 + 2);
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe | 3 < *(byte *)(param_1 + 2);
  }
  return;
}


