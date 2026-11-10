/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00475030; name: FUN_.text__00475030
 */


undefined8 FUN__text__00475030(float param_1,long *param_2,long *param_3,ulong param_4)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  
  if ((param_4 & 1) == 0) {
    uVar8 = (ulong)*(uint *)(param_2 + 1);
    if (param_1 == 1.0) goto LAB__text__004751f0;
  }
  else {
    plVar4 = (long *)*param_2;
    uVar7 = *(uint *)(param_2 + 1);
    uVar8 = (ulong)uVar7;
    bVar1 = *(byte *)(param_3 + 1) & 1 ^ 1;
    plVar3 = plVar4;
    if (uVar7 == 0) {
LAB__text__004750ac:
      if (plVar3 != plVar4 + (ulong)uVar7 * 3) {
        if ((*(byte *)(param_3 + 1) & 1) != 0) {
          return 0;
        }
        plVar3 = plVar4;
        if (uVar7 == 0) {
LAB__text__00475130:
          if (plVar3 != plVar4 + (ulong)uVar7 * 3) {
            uVar8 = (ulong)(uVar7 - 1);
            if (plVar3 < plVar4 + uVar8 * 3) {
              memmove(plVar3,plVar3 + 3,(ulong)(uint)((int)(plVar4 + uVar8 * 3) - (int)plVar3));
              uVar8 = (ulong)((int)param_2[1] - 1);
            }
            *(int *)(param_2 + 1) = (int)uVar8;
          }
        }
        else {
          lVar6 = uVar8 * 0x18;
          do {
            if ((*plVar3 == *param_3) && ((*(byte *)(plVar3 + 1) & 1) == bVar1))
            goto LAB__text__00475130;
            plVar3 = plVar3 + 3;
            lVar6 = lVar6 + -0x18;
          } while (lVar6 != 0);
        }
      }
    }
    else {
      lVar6 = uVar8 * 0x18;
      do {
        if ((*plVar3 == *param_3) && ((*(byte *)(plVar3 + 1) & 1) == bVar1))
        goto LAB__text__004750ac;
        plVar3 = plVar3 + 3;
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != 0);
    }
    if ((param_1 == 1.0) && ((*(byte *)(param_3 + 1) & 1) != 0)) {
LAB__text__004751f0:
      plVar4 = (long *)*param_2;
      plVar3 = plVar4;
      if ((int)uVar8 == 0) {
        if (uVar8 * -0x18 == 0) {
          return 1;
        }
      }
      else {
        lVar6 = uVar8 * 0x18;
        while ((*plVar3 != *param_3 || (((*(byte *)(plVar3 + 1) ^ *(byte *)(param_3 + 1)) & 1) != 0)
               )) {
          plVar3 = plVar3 + 3;
          lVar6 = lVar6 + -0x18;
          if (lVar6 == 0) {
            return 1;
          }
        }
        if (plVar3 == plVar4 + uVar8 * 3) {
          return 1;
        }
      }
      uVar7 = (int)uVar8 - 1;
      if (plVar3 < plVar4 + (ulong)uVar7 * 3) {
        memmove(plVar3,plVar3 + 3,(ulong)(uint)((int)(plVar4 + (ulong)uVar7 * 3) - (int)plVar3));
        uVar7 = (int)param_2[1] - 1;
      }
      *(uint *)(param_2 + 1) = uVar7;
      return 1;
    }
  }
  plVar4 = (long *)*param_2;
  lVar6 = *param_3;
  lVar2 = param_3[1];
  uVar7 = (uint)uVar8;
  plVar3 = plVar4;
  if (uVar7 == 0) {
LAB__text__004751c4:
    if (plVar3 != plVar4 + uVar8 * 3) {
      *(float *)(plVar3 + 2) = param_1;
      return 1;
    }
  }
  else {
    lVar5 = uVar8 * 0x18;
    do {
      if ((*plVar3 == lVar6) && ((((uint)*(byte *)(plVar3 + 1) ^ (uint)lVar2 & 0xff) & 1) == 0))
      goto LAB__text__004751c4;
      plVar3 = plVar3 + 3;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  if (*(uint *)((long)param_2 + 0xc) <= uVar7) {
    uVar8 = FUN__text__00462990(param_2);
    if (((uVar8 & 1) == 0) || (*(uint *)((long)param_2 + 0xc) <= uVar7)) {
      return 1;
    }
    uVar7 = *(uint *)(param_2 + 1);
    plVar4 = (long *)*param_2;
  }
  *(uint *)(param_2 + 1) = uVar7 + 1;
  if (plVar4 == (long *)0x0) {
    return 1;
  }
  plVar4 = plVar4 + (ulong)uVar7 * 3;
  *(float *)(plVar4 + 2) = param_1;
  *plVar4 = lVar6;
  plVar4[1] = lVar2;
  return 1;
}


