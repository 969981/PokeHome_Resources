/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ab450; name: FUN_.text__006ab450
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ab450(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ushort *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  
  puVar5 = _DAT_008a6a00;
  pbVar4 = _DAT_008a69f8;
  puVar3 = _DAT_008a68a0;
  uVar2 = *(uint *)(param_1 + 0x14) & 3;
  if (uVar2 != 0) {
    lVar11 = *(long *)(param_1 + 0x18);
    uVar13 = 0;
    do {
      puVar1 = (ushort *)(lVar11 + uVar13 * 0x10);
      if ((*puVar1 >> 8 & 1) != 0) {
        plVar12 = *(long **)(puVar1 + 4);
        puVar7 = (undefined8 *)(**(code **)(*plVar12 + 0x48))(plVar12);
        if (((*_DAT_008a6898 & 1) == 0) && (iVar6 = __cxa_guard_acquire(_DAT_008a6898), iVar6 != 0))
        {
          if (((*_DAT_008a68a8 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(_DAT_008a68a8), iVar6 != 0)) {
            *_DAT_008a68b0 = 0;
            __cxa_guard_release(_DAT_008a68a8);
          }
          *puVar3 = _DAT_008a68b0;
          __cxa_guard_release(_DAT_008a6898);
        }
        if (puVar7 == (undefined8 *)0x0) {
LAB__text__006ab528:
          puVar7 = (undefined8 *)0x0;
        }
        else {
          puVar8 = (undefined8 *)(**(code **)*puVar7)(puVar7);
          if (puVar8 != puVar3) {
            do {
              puVar8 = (undefined8 *)*puVar8;
            } while (puVar8 != puVar3 && puVar8 != (undefined8 *)0x0);
            if (puVar8 == (undefined8 *)0x0) goto LAB__text__006ab528;
          }
        }
        puVar8 = (undefined8 *)(**(code **)(*plVar12 + 0x48))(plVar12);
        if (((*pbVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar4), iVar6 != 0)) {
          if (((*_DAT_008a68a8 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(_DAT_008a68a8), iVar6 != 0)) {
            *_DAT_008a68b0 = 0;
            __cxa_guard_release(_DAT_008a68a8);
          }
          *puVar5 = _DAT_008a68b0;
          __cxa_guard_release(pbVar4);
        }
        if (puVar8 == (undefined8 *)0x0) {
LAB__text__006ab578:
          puVar8 = (undefined8 *)0x0;
        }
        else {
          puVar9 = (undefined8 *)(**(code **)*puVar8)(puVar8);
          if (puVar9 != puVar5) {
            do {
              puVar9 = (undefined8 *)*puVar9;
            } while (puVar9 != puVar5 && puVar9 != (undefined8 *)0x0);
            if (puVar9 == (undefined8 *)0x0) goto LAB__text__006ab578;
          }
        }
        uVar10 = FUN__text__006a4e20(*(undefined8 *)(param_4 + 0xa0),*puVar1 >> 9 & 7);
        if (puVar7 == (undefined8 *)0x0) {
          if (puVar8 != (undefined8 *)0x0) {
            FUN__text__006a4cb0(uVar10,param_2,param_3,*(long *)(param_4 + 0x20),
                                *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x40),puVar8[2]);
          }
        }
        else {
          FUN__text__006a4b70(uVar10,puVar7[2]);
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar2);
  }
  return;
}


