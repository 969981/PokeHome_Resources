/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c7660; name: FUN_.text__004c7660
 */


undefined8
FUN__text__004c7660(long param_1,uint param_2,uint param_3,int param_4,void *param_5,int param_6)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  uint *puVar6;
  ulong uVar7;
  
  lVar3 = param_1 + (ulong)param_2 * 0x48 + (ulong)param_3 * 0x18;
  uVar7 = (ulong)param_3;
  plVar4 = (long *)(lVar3 + 8);
  if (*plVar4 != 0) {
    FUN__text__00400fc0(0);
  }
  uVar1 = 0x1f;
  puVar2 = (undefined4 *)(param_1 + (ulong)param_2 * 0x48 + uVar7 * 0x18 + 0x18);
  *puVar2 = 1;
  *plVar4 = 0;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  if ((param_4 != 0) && (param_5 != (void *)0x0)) {
    *puVar2 = 1;
    puVar6 = (uint *)(param_1 + (ulong)param_2 * 0x48 + uVar7 * 0x18 + 0x10);
    *puVar6 = param_4 + 2U;
    lVar3 = FUN__text__00400f80(0,(param_4 + 2U) * 0x14);
    *plVar4 = lVar3;
    if (lVar3 == 0) {
      *puVar6 = 0;
      uVar1 = 0x34;
    }
    else {
      piVar5 = (int *)(param_1 + (ulong)param_2 * 0x48 + uVar7 * 0x18 + 0x14);
      *piVar5 = param_6;
      memcpy((void *)(lVar3 + 0xc),param_5,(ulong)(uint)(param_4 * 0xc));
      *(undefined4 *)(*plVar4 + 8) = 9;
      *(undefined4 *)*plVar4 = 0xff7fffff;
      *(undefined4 *)(*plVar4 + 4) = *(undefined4 *)(*plVar4 + 0x10);
      *(undefined4 *)(*plVar4 + (ulong)(*puVar6 - 1) * 0xc + 8) = 9;
      *(undefined4 *)(*plVar4 + (ulong)(*puVar6 - 1) * 0xc) = 0x7f7fffff;
      *(undefined4 *)(*plVar4 + (ulong)(*puVar6 - 1) * 0xc + 4) =
           *(undefined4 *)(*plVar4 + (ulong)(*puVar6 - 2) * 0xc + 4);
      FUN__text__00432e60(plVar4);
      if (param_3 == 0) {
        if (*piVar5 == 0) {
          *piVar5 = 4;
        }
        else if (*piVar5 == 2) {
          if (*puVar6 != 0) {
            uVar7 = 0;
            lVar3 = 4;
            do {
              uVar7 = uVar7 + 1;
              *(float *)(*plVar4 + lVar3) = *(float *)(*plVar4 + lVar3) + 1.0;
              lVar3 = lVar3 + 0xc;
            } while (uVar7 < *puVar6);
          }
          *piVar5 = 0;
          FUN__text__00432e60(plVar4);
        }
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}


