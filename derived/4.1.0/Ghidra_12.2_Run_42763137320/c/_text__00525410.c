/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00525410; name: FUN_.text__00525410
 */


void FUN__text__00525410(float param_1,long param_2,long param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  if (*(int *)(param_3 + 0x4c) == *(int *)(param_2 + 0xa8)) {
    uVar1 = (ulong)*(uint *)(param_2 + 0x60);
    if (*(uint *)(param_2 + 0x60) != 0) {
      plVar2 = *(long **)(param_2 + 0x58);
      plVar4 = plVar2;
      do {
        lVar6 = *plVar4;
        if (((*(char *)(lVar6 + 0x568) != '\0') &&
            (*(int *)(param_3 + 0x4c) == *(int *)(lVar6 + 0x110))) && (*(int *)(lVar6 + 0x88) != 0))
        {
          lVar5 = *(long *)(lVar6 + 0x80);
          do {
            if (((*(float *)(lVar5 + 0x84) < param_1) &&
                (*(long *)(lVar5 + (ulong)(*(int *)(lVar5 + 0x80) - 1) * 8 + 0x40) != param_2)) &&
               (uVar1 = FUN__text__0052cba0(lVar5), (uVar1 & 1) != 0)) {
              FUN__text__00530380(param_4,lVar5);
            }
            lVar5 = lVar5 + 0x90;
          } while (lVar5 != *(long *)(lVar6 + 0x80) + (ulong)*(uint *)(lVar6 + 0x88) * 0x90);
          plVar2 = *(long **)(param_2 + 0x58);
          uVar1 = (ulong)*(uint *)(param_2 + 0x60);
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar2 + uVar1);
    }
    uVar3 = *(undefined8 *)(*(long *)(param_3 + 8) + 0x38);
    uVar1 = FUN__text__004914d4(uVar3);
    if (((uVar1 & 1) != 0) && ((int)param_4[1] != 0)) {
      plVar4 = (long *)*param_4;
      do {
        fVar9 = *(float *)(plVar4 + 0x11);
        fVar8 = (float)FUN__text__004913e0(uVar3,*(undefined8 *)(*plVar4 + 0x70));
        if (fVar9 <= fVar8) {
          uVar7 = FUN__text__004913e0(uVar3,*(undefined8 *)(*plVar4 + 0x70));
        }
        else {
          uVar7 = (undefined4)plVar4[0x11];
        }
        *(undefined4 *)(plVar4 + 0x11) = uVar7;
        plVar4 = plVar4 + 0x12;
      } while (plVar4 != (long *)(*param_4 + (ulong)*(uint *)(param_4 + 1) * 0x90));
    }
  }
  return;
}


