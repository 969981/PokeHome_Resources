/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d9590; name: FUN_.text__003d9590
 */


void FUN__text__003d9590(undefined8 *param_1)

{
  undefined4 *__src;
  size_t __n;
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    lVar3 = *(long *)(puVar2 + 2);
    if (lVar3 != 0) {
      __src = puVar2 + 0x16;
      *(undefined8 *)(puVar2 + 2) = 0;
      *puVar2 = 0;
      __n = *(long *)(puVar2 + 0x14) - (long)__src;
      puVar2[5] = 0;
      *(undefined4 **)(puVar2 + 0x14) = __src;
      if ((long)__n < 0) {
        if (*(int *)(lVar3 + 0x28) == 0) {
          *(undefined4 *)(lVar3 + 0x28) = 0x16;
        }
      }
      else if (*(ulong *)(lVar3 + 0x20) < *(long *)(lVar3 + 0x10) + __n) {
        FUN__text__003d6a74(lVar3,__src,__n);
      }
      else {
        memcpy((void *)(*(long *)(lVar3 + 0x18) + *(long *)(lVar3 + 0x10)),__src,__n);
        *(size_t *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + __n;
      }
    }
    pvVar4 = (void *)*param_1;
    if (pvVar4 != (void *)0x0) {
      plVar1 = *(long **)((long)pvVar4 + 0x20);
      if (plVar1 != (long *)0x0) {
        lVar3 = *plVar1;
        if (lVar3 != 0) {
          do {
            lVar5 = lVar3 * 8;
            lVar3 = lVar3 + -1;
            operator_delete(*(void **)(*(long *)((long)pvVar4 + 0x20) + lVar5));
            *(undefined8 *)(*(long *)((long)pvVar4 + 0x20) + lVar5) = 0;
          } while (lVar3 != 0);
          plVar1 = *(long **)((long)pvVar4 + 0x20);
        }
        operator_delete(plVar1);
      }
      operator_delete(pvVar4);
    }
  }
  *param_1 = 0;
  return;
}


