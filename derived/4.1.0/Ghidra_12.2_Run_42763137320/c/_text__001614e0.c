/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001614e0; name: FUN_.text__001614e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001614e0(long param_1,undefined8 param_2)

{
  undefined8 *__src;
  undefined8 *puVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  plVar7 = (long *)FUN__text__003e9674(param_2);
  puVar5 = _DAT_0089fa50;
  pbVar4 = _DAT_0089fa48;
  puVar3 = _DAT_0089f8a0;
  pbVar2 = _DAT_0089f898;
  if (plVar7 != (long *)0x0) {
    do {
      if (((*pbVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar4), iVar6 != 0)) {
        if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
          *puVar3 = 0;
          __cxa_guard_release(pbVar2);
        }
        *puVar5 = puVar3;
        __cxa_guard_release(pbVar4);
      }
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7);
      if (puVar8 == puVar5) {
LAB__text__00161584:
        lVar11 = *(long *)(param_1 + 0xaf0);
        puVar1 = *(undefined8 **)(lVar11 + 0x40);
        lVar9 = *(long *)(lVar11 + 0x48);
        puVar8 = puVar1;
        if (lVar9 == 0) {
LAB__text__001615c4:
          puVar1 = puVar1 + lVar9 * 2;
          if (puVar8 != puVar1) {
            if ((puVar8 != (undefined8 *)0x0) && (__src = puVar8 + 2, __src != puVar1)) {
              memmove(puVar8,__src,(long)puVar1 - (long)__src);
              lVar9 = *(long *)(lVar11 + 0x48);
            }
            *(long *)(lVar11 + 0x48) = lVar9 + -1;
          }
        }
        else {
          lVar10 = lVar9 << 4;
          do {
            if (plVar7 == (long *)*puVar8) goto LAB__text__001615c4;
            puVar8 = puVar8 + 2;
            lVar10 = lVar10 + -0x10;
          } while (lVar10 != 0);
        }
      }
      else {
        do {
          puVar8 = (undefined8 *)*puVar8;
        } while (puVar8 != puVar5 && puVar8 != (undefined8 *)0x0);
        if (puVar8 != (undefined8 *)0x0) goto LAB__text__00161584;
      }
      plVar7 = (long *)FUN__text__006c0e70(plVar7);
    } while (plVar7 != (long *)0x0);
  }
  if (*(long *)(*(long *)(param_1 + 0xaf0) + 0x48) == 0) {
    *(undefined1 *)(param_1 + 0xc20) = 1;
    return;
  }
  FUN__text__00162d44(*(undefined8 *)(param_1 + 0x260));
  FUN__text__00162d44(*(undefined8 *)(param_1 + 0x260));
  FUN__text__00162d44(*(undefined8 *)(param_1 + 0x268));
  FUN__text__00162d44(*(undefined8 *)(param_1 + 0x268));
  return;
}


