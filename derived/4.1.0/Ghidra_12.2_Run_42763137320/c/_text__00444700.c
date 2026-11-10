/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00444700; name: FUN_.text__00444700
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00444700(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_48;
  
  puVar2 = _DAT_008a45c0;
  if (*(int *)(param_1 + 0x88) != 0) {
    lVar4 = *(long *)(param_1 + 0xa0);
    if (lVar4 == 0) {
      puVar8 = *(undefined8 **)(param_1 + 0x80);
      do {
        puVar9 = puVar8 + 1;
        uVar6 = *puVar8;
        uVar7 = *(undefined8 *)(param_1 + 8);
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        FUN__text__004b4b80(*puVar2,uVar6,uVar7,uVar1);
        FUN__text__0046469c(uVar6,uVar7,uVar1,0,4);
        puVar8 = puVar9;
      } while (puVar9 != (undefined8 *)
                         (*(long *)(param_1 + 0x80) + (ulong)*(uint *)(param_1 + 0x88) * 8));
    }
    else {
      plVar5 = *(long **)(lVar4 + 0x48);
      if (plVar5 != (long *)0x0) {
        do {
          if ((*(long *)(plVar5[2] + 0x90) != 0) &&
             (uVar3 = FUN__text__00458780(*(long *)(plVar5[2] + 0x90),param_1), (uVar3 & 1) != 0)) {
            local_48 = 0x400000000;
            FUN__text__00474488(plVar5[2],&local_48,1);
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
        lVar4 = *(long *)(param_1 + 0xa0);
      }
      puVar2 = _DAT_008a45c0;
      plVar5 = *(long **)(lVar4 + 0x70);
      if (plVar5 != (long *)0x0) {
        uVar3 = (ulong)*(uint *)(param_1 + 0x88);
        do {
          if ((int)uVar3 != 0) {
            puVar8 = *(undefined8 **)(param_1 + 0x80);
            do {
              uVar3 = FUN__text__004b9344(plVar5[2],param_1);
              if ((uVar3 & 1) != 0) {
                FUN__text__004b6220(*puVar2,plVar5[2],*puVar8,3);
              }
              puVar8 = puVar8 + 1;
              uVar3 = (ulong)*(uint *)(param_1 + 0x88);
            } while (puVar8 != (undefined8 *)(*(long *)(param_1 + 0x80) + uVar3 * 8));
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  return;
}


