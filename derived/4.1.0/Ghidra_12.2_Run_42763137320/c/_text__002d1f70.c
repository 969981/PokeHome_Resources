/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d1f70; name: FUN_.text__002d1f70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__002d1f70(undefined8 param_1,undefined2 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ushort uVar12;
  uint uVar13;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  byte local_64 [4];
  
  local_64[0] = 0;
  local_a0 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN__text__005ffbe4(&local_a0,local_64,param_2,7);
  bVar6 = local_64[0];
  puVar5 = _DAT_008a27a8;
  pbVar4 = _DAT_008a27a0;
  plVar3 = _DAT_008a2790;
  uVar12 = (ushort)local_64[0];
  if (uVar12 != 0) {
    uVar13 = 0;
    do {
      uVar7 = FUN__text__005fdb18(param_2);
      if (*plVar3 != 0) {
        plVar2 = *(long **)(*_DAT_008a2580 + 0x1f0);
        for (plVar1 = *(long **)(*_DAT_008a2580 + 0x1e8); plVar1 != plVar2; plVar1 = plVar1 + 1) {
          lVar11 = *plVar1;
          puVar10 = (undefined8 *)(*(code *)**(undefined8 **)(lVar11 + 0x50))();
          if (((*pbVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar4), iVar8 != 0)) {
            if (((*_DAT_008a25a8 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(_DAT_008a25a8), iVar8 != 0)) {
              if (((*_DAT_0089f790 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(_DAT_0089f790), iVar8 != 0)) {
                if (((*_DAT_0089f498 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(_DAT_0089f498), iVar8 != 0)) {
                  *_DAT_0089f4a0 = 0;
                  __cxa_guard_release(_DAT_0089f498);
                }
                *_DAT_0089f798 = _DAT_0089f4a0;
                __cxa_guard_release(_DAT_0089f790);
              }
              *_DAT_008a25b0 = _DAT_0089f798;
              __cxa_guard_release(_DAT_008a25a8);
            }
            *puVar5 = _DAT_008a25b0;
            __cxa_guard_release(pbVar4);
          }
          if (puVar10 == puVar5) {
LAB__text__002d1fe8:
            puVar9 = (uint *)FUN__text__002d4f10(lVar11,uVar7);
            if ((*puVar9 >> (ulong)(uVar13 & 0x1f) & 1) != 0) {
              return 1;
            }
            break;
          }
          do {
            puVar10 = (undefined8 *)*puVar10;
          } while (puVar10 != puVar5 && puVar10 != (undefined8 *)0x0);
          if (puVar10 != (undefined8 *)0x0) {
            if (lVar11 != 0) goto LAB__text__002d1fe8;
            break;
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while ((ushort)uVar13 <= uVar12 && (ushort)bVar6 != (ushort)uVar13);
  }
  return 0;
}


