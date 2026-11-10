/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00475310; name: FUN_.text__00475310
 */


undefined8 FUN__text__00475310(float param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  
  plVar4 = (long *)param_2[0x49];
  uVar8 = *(uint *)(param_2 + 0x4a);
  uVar9 = (ulong)uVar8;
  lVar2 = *param_3;
  lVar5 = param_3[1];
  uVar1 = (uint)lVar5 & 0xff;
  if (param_1 == 1.0) {
    plVar3 = plVar4;
    if (uVar8 == 0) {
joined_r0x00475448:
      if (plVar3 != plVar4 + uVar9 * 3) {
        uVar8 = uVar8 - 1;
        if (plVar3 < plVar4 + (ulong)uVar8 * 3) {
          memmove(plVar3,plVar3 + 3,(ulong)(uint)((int)(plVar4 + (ulong)uVar8 * 3) - (int)plVar3));
          uVar8 = (int)param_2[0x4a] - 1;
        }
        *(uint *)(param_2 + 0x4a) = uVar8;
      }
    }
    else {
      lVar5 = uVar9 * 0x18;
      do {
        if ((*plVar3 == lVar2) && (((*(byte *)(plVar3 + 1) ^ uVar1) & 1) == 0))
        goto joined_r0x00475448;
        plVar3 = plVar3 + 3;
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != 0);
    }
  }
  else {
    plVar3 = plVar4;
    if (uVar8 == 0) {
LAB__text__00475394:
      if (plVar3 != plVar4 + uVar9 * 3) {
        *(float *)(plVar3 + 2) = param_1;
        goto LAB__text__00475478;
      }
    }
    else {
      lVar6 = uVar9 * 0x18;
      do {
        if ((*plVar3 == lVar2) && (((*(byte *)(plVar3 + 1) ^ uVar1) & 1) == 0))
        goto LAB__text__00475394;
        plVar3 = plVar3 + 3;
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != 0);
    }
    if (*(uint *)((long)param_2 + 0x254) <= uVar8) {
      uVar9 = FUN__text__00462990(param_2 + 0x49);
      uVar7 = 2;
      if (((uVar9 & 1) == 0) || (*(uint *)((long)param_2 + 0x254) <= uVar8))
      goto LAB__text__0047547c;
      uVar8 = *(uint *)(param_2 + 0x4a);
      plVar4 = (long *)param_2[0x49];
    }
    *(uint *)(param_2 + 0x4a) = uVar8 + 1;
    if (plVar4 == (long *)0x0) {
      uVar7 = 2;
      goto LAB__text__0047547c;
    }
    plVar4 = plVar4 + (ulong)uVar8 * 3;
    *(float *)(plVar4 + 2) = param_1;
    *plVar4 = lVar2;
    plVar4[1] = lVar5;
  }
LAB__text__00475478:
  uVar7 = 1;
LAB__text__0047547c:
  (**(code **)(*param_2 + 0x70))(param_2);
  return uVar7;
}


