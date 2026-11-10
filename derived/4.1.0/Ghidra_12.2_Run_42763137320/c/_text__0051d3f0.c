/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051d3f0; name: FUN_.text__0051d3f0
 */


long * FUN__text__0051d3f0(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *(uint *)(param_2 + 1);
  if (*(uint *)((long)param_1 + 0xc) < uVar1) {
    if (*param_1 == 0) {
      lVar2 = FUN__text__00400f80(0xb,(ulong)uVar1 << 3);
      if (lVar2 == 0) goto LAB__text__0051d4a4;
      if ((*param_1 != 0) && (*param_1 != lVar2)) {
        FUN__text__00400fc0(0xb);
      }
    }
    else {
      lVar2 = FUN__text__00400fa0();
      if (lVar2 == 0) goto LAB__text__0051d4a4;
    }
    *param_1 = lVar2;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  *(uint *)(param_1 + 1) = uVar1;
  if ((int)param_2[1] != 0) {
    uVar3 = 0;
    do {
      lVar2 = uVar3 * 8;
      uVar3 = uVar3 + 1;
      *(undefined8 *)(*param_1 + lVar2) = *(undefined8 *)(*param_2 + lVar2);
    } while (uVar3 < *(uint *)(param_2 + 1));
  }
LAB__text__0051d4a4:
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}


