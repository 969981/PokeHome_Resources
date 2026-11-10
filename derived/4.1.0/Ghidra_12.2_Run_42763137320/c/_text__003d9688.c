/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d9688; name: FUN_.text__003d9688
 */


int FUN__text__003d9688(undefined8 *param_1)

{
  undefined4 *__src;
  size_t __n;
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 == (undefined4 *)0x0) {
    return 0x16;
  }
  lVar4 = *(long *)(puVar3 + 2);
  if (lVar4 == 0) {
    return 0x16;
  }
  __src = puVar3 + 0x16;
  *(undefined8 *)(puVar3 + 2) = 0;
  *puVar3 = 0;
  __n = *(long *)(puVar3 + 0x14) - (long)__src;
  puVar3[5] = 0;
  *(undefined4 **)(puVar3 + 0x14) = __src;
  if ((long)__n < 0) {
    iVar1 = *(int *)(lVar4 + 0x28);
    if (iVar1 == 0) {
      *(undefined4 *)(lVar4 + 0x28) = 0x16;
      return 0x16;
    }
  }
  else {
    if (*(long *)(lVar4 + 0x10) + __n <= *(ulong *)(lVar4 + 0x20)) {
      memcpy((void *)(*(long *)(lVar4 + 0x18) + *(long *)(lVar4 + 0x10)),__src,__n);
      *(size_t *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + __n;
      return 0;
    }
    uVar2 = FUN__text__003d6a74(lVar4,__src,__n);
    if ((uVar2 & 1) == 0) {
      return *(int *)(lVar4 + 0x28);
    }
    iVar1 = 0;
  }
  return iVar1;
}


