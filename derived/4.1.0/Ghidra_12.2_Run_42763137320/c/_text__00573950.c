/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00573950; name: FUN_.text__00573950
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00573950(long param_1)

{
  int iVar1;
  bool bVar2;
  void *__dest;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  void *__src;
  uint uVar9;
  ulong uVar10;
  
  puVar4 = _DAT_008a3bd8;
  lVar8 = *(long *)(param_1 + 0x28);
  plVar7 = *(long **)*_DAT_008a3bd8;
  if (lVar8 == 0) {
    lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,0x20000,0x70fbe8,0x3b);
    uVar10 = (ulong)*(uint *)(param_1 + 0x18);
    uVar3 = *(uint *)(param_1 + 0x1c);
    __src = *(void **)(param_1 + 0x10);
    if (*(uint *)(param_1 + 0x18) < uVar3) goto LAB__text__00573994;
LAB__text__005739e4:
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar3 = iVar1 + uVar3;
    __dest = (void *)(**(code **)(**(long **)*puVar4 + 0x10))
                               (*(long **)*puVar4,(ulong)uVar3 << 3,0x714889,0x34);
    uVar9 = (uint)uVar10;
    if (__src == (void *)0x0) {
      if (__dest != (void *)0x0) {
        __src = *(void **)(param_1 + 0x10);
        if ((__src != (void *)0x0) && (__src != __dest)) {
          if (uVar9 != 0) {
            if (uVar9 == 1) {
              uVar5 = 0;
            }
            else {
              uVar5 = 0;
              do {
                lVar6 = uVar5 * 8;
                uVar5 = uVar5 + 2;
                *(undefined8 *)((long)__dest + lVar6) =
                     *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar6);
                ((undefined8 *)((long)__dest + lVar6))[1] =
                     *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar6 + 8);
              } while ((uVar10 & 0xfffffffe) != uVar5);
            }
            if ((uVar10 & 1) != 0) {
              *(undefined8 *)((long)__dest + uVar5 * 8) =
                   *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar5 * 8);
            }
            __src = *(void **)(param_1 + 0x10);
          }
          puVar4 = (undefined8 *)*puVar4;
          goto LAB__text__00573abc;
        }
        goto LAB__text__00573acc;
      }
    }
    else if (__dest != (void *)0x0) {
      memcpy(__dest,__src,uVar10 << 3);
      puVar4 = (undefined8 *)*puVar4;
LAB__text__00573abc:
      (**(code **)(*(long *)*puVar4 + 0x18))((long *)*puVar4,__src);
LAB__text__00573acc:
      *(void **)(param_1 + 0x10) = __dest;
      *(uint *)(param_1 + 0x1c) = uVar3;
      if (uVar9 < uVar3) {
        uVar10 = (ulong)*(uint *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) + 1;
        goto joined_r0x005739a8;
      }
    }
    bVar2 = false;
  }
  else {
    uVar10 = (ulong)*(uint *)(param_1 + 0x18);
    uVar3 = *(uint *)(param_1 + 0x1c);
    __src = *(void **)(param_1 + 0x10);
    if (uVar3 <= *(uint *)(param_1 + 0x18)) goto LAB__text__005739e4;
LAB__text__00573994:
    *(int *)(param_1 + 0x18) = (int)uVar10 + 1;
    __dest = __src;
joined_r0x005739a8:
    bVar2 = __dest != (void *)0x0;
    if ((lVar8 != 0) && (__dest != (void *)0x0)) {
      *(long *)((long)__dest + uVar10 * 8) = lVar8;
      *(undefined8 *)(param_1 + 0x28) = 0;
      return 1;
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar8);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (bVar2) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    return 0;
  }
  return 0;
}


