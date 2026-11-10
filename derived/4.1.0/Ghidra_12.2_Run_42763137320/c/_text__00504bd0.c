/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00504bd0; name: FUN_.text__00504bd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00504bd0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  
  if (*(long *)(param_1 + 0x14) == -1) {
    FUN__text__00532470(*param_1,param_1 + 2,*(undefined8 *)(param_1 + 0x16));
  }
  else {
    lVar6 = FUN__text__00447b30(DAT_00ae9a50);
    if (lVar6 != 0) {
      if (*(long *)(lVar6 + 0x38) == 0) {
        plVar7 = (long *)FUN__text__00400f80(4,0xe0);
        if (plVar7 == (long *)0x0) goto LAB__text__00504c44;
        FUN__text__0048fa0c();
        *(long **)(lVar6 + 0x38) = plVar7;
        plVar7[1] = lVar6;
        iVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(lVar6 + 0x58));
        if (iVar5 != 1) {
          (**(code **)*plVar7)(plVar7);
          FUN__text__00400fc0(4,plVar7);
          *(undefined8 *)(lVar6 + 0x38) = 0;
          goto LAB__text__00504c44;
        }
      }
      plVar7 = *(long **)(lVar6 + 0x40);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)FUN__text__00400f80(4,0x88);
        piVar4 = _DAT_008a3f78;
        if (plVar7 == (long *)0x0) goto LAB__text__00504c44;
        plVar7[1] = 0;
        plVar7[2] = 0;
        piVar2 = *(int **)(piVar4 + 2);
        lVar3 = *(long *)(piVar4 + 4);
        *(long **)(piVar4 + 2) = plVar7;
        plVar7[3] = (long)piVar2;
        piVar1 = piVar4;
        if (lVar3 != 0) {
          piVar1 = piVar2;
        }
        *(long **)(piVar1 + 4) = plVar7;
        lVar3 = _DAT_008a41d0;
        iVar5 = *piVar4;
        plVar7[0xf] = 0;
        plVar7[0x10] = 0;
        plVar7[4] = 0;
        plVar7[5] = 0;
        *(undefined4 *)(plVar7 + 0xe) = 0;
        plVar7[6] = 0;
        plVar7[7] = 0;
        plVar7[8] = 0;
        plVar7[9] = 0;
        *piVar4 = iVar5 + 1;
        plVar7[10] = 0;
        plVar7[0xb] = 0;
        *plVar7 = lVar3 + 0x10;
        plVar7[0xc] = 0;
        plVar7[0xd] = 0;
        *(long **)(lVar6 + 0x40) = plVar7;
        plVar7[1] = lVar6;
        iVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(lVar6 + 0x58));
        if (iVar5 != 1) {
          (**(code **)*plVar7)(plVar7);
          FUN__text__00400fc0(4,plVar7);
          *(undefined8 *)(lVar6 + 0x40) = 0;
          goto LAB__text__00504c44;
        }
      }
      FUN__text__005092cc(plVar7,param_1[0x12],*param_1,param_1 + 2,*(undefined8 *)(param_1 + 0x16))
      ;
    }
  }
LAB__text__00504c44:
  if ((*(long *)(param_1 + 0x16) != 0) && (*(char *)(param_1 + 0x18) != '\0')) {
    FUN__text__00400fc0(9);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  *(undefined8 *)(param_1 + 0x16) = 0;
  return;
}


