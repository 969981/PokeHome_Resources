/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044f3a0; name: FUN_.text__0044f3a0
 */


void FUN__text__0044f3a0(long param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar4 = *(uint *)(param_1 + 0x68);
  if ((uVar4 <= param_3) && (*(uint *)(param_1 + 0x6c) < param_3)) {
    lVar6 = **(long **)(param_1 + 0x58);
    if (*(long *)(param_1 + 0x60) == 0) {
      lVar6 = (**(code **)(lVar6 + 0x10))
                        (*(long **)(param_1 + 0x58),(ulong)param_3 * 0x18,0x70d345,0xcc);
      if (lVar6 == 0) {
        return;
      }
      lVar5 = *(long *)(param_1 + 0x60);
      if ((lVar5 != 0) && (lVar5 != lVar6)) {
        if (uVar4 != 0) {
          lVar5 = 0;
          do {
            puVar1 = (undefined8 *)(lVar6 + lVar5);
            puVar2 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar5);
            lVar5 = lVar5 + 0x18;
            uVar3 = puVar2[1];
            uVar7 = puVar2[2];
            *puVar1 = *puVar2;
            puVar1[1] = uVar3;
            puVar1[2] = uVar7;
          } while ((ulong)uVar4 * 0x18 != lVar5);
          lVar5 = *(long *)(param_1 + 0x60);
        }
        (**(code **)(**(long **)(param_1 + 0x58) + 0x18))(*(long **)(param_1 + 0x58),lVar5);
      }
    }
    else {
      lVar6 = (**(code **)(lVar6 + 0x28))();
      if (lVar6 == 0) {
        return;
      }
    }
    *(long *)(param_1 + 0x60) = lVar6;
    *(uint *)(param_1 + 0x6c) = param_3;
  }
  *(uint *)(param_1 + 0x68) = param_3;
  if (0 < (int)param_3) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_2 + lVar6);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar6);
      uVar3 = puVar1[1];
      uVar7 = puVar1[2];
      lVar6 = lVar6 + 0x18;
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar7;
    } while ((ulong)param_3 * 0x18 != lVar6);
  }
  return;
}


