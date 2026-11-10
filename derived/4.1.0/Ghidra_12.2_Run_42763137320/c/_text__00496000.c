/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00496000; name: FUN_.text__00496000
 */


undefined8 FUN__text__00496000(long *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  
  plVar5 = (long *)param_1[0x1c];
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)FUN__text__00400f80(2,0x10);
    if (plVar5 == (long *)0x0) goto LAB__text__004961b0;
    *plVar5 = 0;
    plVar5[1] = 0;
    param_1[0x1c] = (long)plVar5;
    uVar8 = (ulong)*(uint *)(plVar5 + 1);
    uVar2 = *(uint *)((long)plVar5 + 0xc);
    lVar6 = *plVar5;
    if (*(uint *)(plVar5 + 1) < uVar2) goto LAB__text__00496034;
LAB__text__00496070:
    iVar1 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar1 = 1;
    }
    uVar2 = iVar1 + uVar2;
    uVar7 = (uint)uVar8;
    if (lVar6 == 0) {
      lVar6 = FUN__text__00400f80(0,(ulong)uVar2 << 3);
      if (lVar6 != 0) {
        lVar3 = *plVar5;
        if ((lVar3 != 0) && (lVar3 != lVar6)) {
          if (uVar7 != 0) {
            if (uVar7 == 1) {
              uVar4 = 0;
            }
            else {
              uVar4 = 0;
              do {
                lVar3 = uVar4 * 8;
                uVar4 = uVar4 + 2;
                *(undefined8 *)(lVar6 + lVar3) = *(undefined8 *)(*plVar5 + lVar3);
                ((undefined8 *)(lVar6 + lVar3))[1] = *(undefined8 *)(*plVar5 + lVar3 + 8);
              } while ((uVar8 & 0xfffffffe) != uVar4);
            }
            if ((uVar8 & 1) != 0) {
              *(undefined8 *)(lVar6 + uVar4 * 8) = *(undefined8 *)(*plVar5 + uVar4 * 8);
            }
            lVar3 = *plVar5;
          }
          FUN__text__00400fc0(0,lVar3);
        }
        goto LAB__text__00496130;
      }
    }
    else {
      lVar6 = FUN__text__00400fa0(0,lVar6);
      if (lVar6 != 0) {
LAB__text__00496130:
        *plVar5 = lVar6;
        *(uint *)((long)plVar5 + 0xc) = uVar2;
        if (uVar7 < uVar2) {
          uVar8 = (ulong)*(uint *)(plVar5 + 1);
          *(uint *)(plVar5 + 1) = *(uint *)(plVar5 + 1) + 1;
LAB__text__0049614c:
          *(undefined8 *)(lVar6 + uVar8 * 8) = param_2;
          (**(code **)(*param_1 + 0x188))(param_1,0,0);
          return 1;
        }
      }
    }
  }
  else {
    uVar8 = (ulong)*(uint *)(plVar5 + 1);
    uVar2 = *(uint *)((long)plVar5 + 0xc);
    lVar6 = *plVar5;
    if (uVar2 <= *(uint *)(plVar5 + 1)) goto LAB__text__00496070;
LAB__text__00496034:
    *(int *)(plVar5 + 1) = (int)uVar8 + 1;
    if (lVar6 != 0) goto LAB__text__0049614c;
  }
  if ((param_1[0x1c] == 0) || (*(int *)(param_1[0x1c] + 8) != 0)) {
    return 0x34;
  }
  FUN__text__00400fc0(2);
LAB__text__004961b0:
  param_1[0x1c] = 0;
  return 0x34;
}


