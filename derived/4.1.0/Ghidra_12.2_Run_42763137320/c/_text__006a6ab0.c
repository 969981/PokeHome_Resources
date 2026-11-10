/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a6ab0; name: FUN_.text__006a6ab0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006a6ab0(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  void *__s;
  undefined8 uVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  
  puVar4 = _DAT_008a6970;
  puVar3 = _DAT_008a6960;
  for (lVar13 = *(long *)(param_2 + 8); lVar13 != param_2; lVar13 = *(long *)(lVar13 + 8)) {
    plVar5 = (long *)(*(code *)*puVar3)(0x20,4,*puVar4);
    if (plVar5 != (long *)0x0) {
      plVar5[2] = 0;
      plVar5[3] = 0;
      *plVar5 = (long)plVar5;
      plVar5[1] = (long)plVar5;
    }
    uVar2 = *(uint *)(lVar13 + 0x20);
    pcVar8 = (code *)*puVar3;
    uVar7 = *puVar4;
    *(uint *)(plVar5 + 2) = uVar2;
    lVar6 = (*pcVar8)((long)(int)uVar2 << 4,4,uVar7);
    if ((0 < (int)uVar2) && (lVar6 != 0)) {
      if (uVar2 < 4) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        puVar12 = (undefined4 *)(lVar6 + 0x20);
        do {
          lVar10 = lVar10 + -4;
          puVar12[-8] = 0;
          *(undefined8 *)(puVar12 + -6) = 0;
          puVar12[-4] = 0;
          *(undefined8 *)(puVar12 + -2) = 0;
          *puVar12 = 0;
          *(undefined8 *)(puVar12 + 2) = 0;
          puVar12[4] = 0;
          *(undefined8 *)(puVar12 + 6) = 0;
          puVar12 = puVar12 + 0x10;
        } while (-lVar10 != ((ulong)uVar2 & 0xfffffffc));
        lVar10 = -lVar10;
      }
      if ((uVar2 & 3) != 0) {
        uVar9 = (ulong)uVar2 & 3;
        puVar11 = (undefined8 *)(lVar6 + lVar10 * 0x10 + 8);
        do {
          *(undefined4 *)(puVar11 + -1) = 0;
          uVar9 = uVar9 - 1;
          *puVar11 = 0;
          puVar11 = puVar11 + 2;
        } while (uVar9 != 0);
      }
    }
    plVar5[3] = lVar6;
    if (0 < (int)plVar5[2]) {
      lVar10 = 0;
      lVar6 = 0;
      do {
        uVar2 = *(uint *)(*(long *)(lVar13 + 0x28) + lVar10 + 4);
        *(uint *)(plVar5[3] + lVar10) = uVar2;
        __s = (void *)(*(code *)*puVar3)((long)(int)uVar2 << 2,4,*puVar4);
        if (0 < (int)uVar2 && __s != (void *)0x0) {
          memset(__s,0,(ulong)uVar2 << 2);
        }
        lVar6 = lVar6 + 1;
        lVar1 = plVar5[3] + lVar10;
        lVar10 = lVar10 + 0x10;
        *(void **)(lVar1 + 8) = __s;
      } while (lVar6 < (int)plVar5[2]);
    }
    lVar6 = *plVar5;
    *plVar5 = *param_1;
    *(long **)(lVar6 + 8) = param_1;
    *(long **)(*param_1 + 8) = plVar5;
    *param_1 = lVar6;
  }
  return;
}


