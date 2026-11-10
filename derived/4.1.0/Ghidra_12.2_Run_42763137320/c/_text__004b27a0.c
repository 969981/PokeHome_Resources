/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b27a0; name: FUN_.text__004b27a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004b27a0(long param_1,long param_2,undefined8 param_3,undefined4 param_4,
                        undefined4 param_5,undefined8 *param_6,undefined4 param_7,uint param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  
  puVar1 = _DAT_008a45c0;
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    if (param_2 == 0) {
      do {
        if (((*(ushort *)(lVar5 + 0x34) & 1) == 0) &&
           (lVar2 = FUN__text__00400f80(0,0x48), lVar2 != 0)) {
          FUN__text__004b7a40(lVar2,0);
          *(undefined4 *)(lVar2 + 0x38) = param_5;
          *(long *)(lVar2 + 8) = lVar5;
          *(undefined4 *)(lVar2 + 0x30) = param_4;
          *(undefined8 *)(lVar2 + 0x24) = param_6[1];
          *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(param_6 + 2);
          piVar6 = (int *)*param_6;
          if (*(long *)(lVar2 + 0x1c) != 0) {
            FUN__text__0040c060();
          }
          if (piVar6 != (int *)0x0) {
            *piVar6 = *piVar6 + 1;
          }
          uVar3 = *puVar1;
          *(int **)(lVar2 + 0x1c) = piVar6;
          FUN__text__004b2960(uVar3,lVar2,param_7,param_8 & 1);
        }
        lVar5 = *(long *)(lVar5 + 0x18);
      } while (lVar5 != 0);
    }
    else {
      do {
        if ((*(ushort *)(lVar5 + 0x34) & 1) == 0) {
          lVar2 = FUN__text__00400f80(0,0x48);
          if (lVar2 != 0) {
            lVar4 = 0;
LAB__text__004b2860:
            FUN__text__004b7a40(lVar2,lVar4);
            *(undefined4 *)(lVar2 + 0x38) = param_5;
            *(long *)(lVar2 + 8) = lVar5;
            *(undefined4 *)(lVar2 + 0x30) = param_4;
            *(undefined8 *)(lVar2 + 0x24) = param_6[1];
            *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(param_6 + 2);
            piVar6 = (int *)*param_6;
            if (*(long *)(lVar2 + 0x1c) != 0) {
              FUN__text__0040c060();
            }
            if (piVar6 != (int *)0x0) {
              *piVar6 = *piVar6 + 1;
            }
            *(int **)(lVar2 + 0x1c) = piVar6;
            FUN__text__004b2960(*_DAT_008a45c0,lVar2,param_7,param_8 & 1);
          }
        }
        else if ((*(long *)(param_2 + 8) != 0) && (lVar2 = FUN__text__00400f80(0,0x48), lVar2 != 0))
        {
          lVar4 = param_2;
          goto LAB__text__004b2860;
        }
        lVar5 = *(long *)(lVar5 + 0x18);
      } while (lVar5 != 0);
    }
  }
  return;
}


