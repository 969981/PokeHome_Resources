/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d9080; name: FUN_.text__003d9080
 */


bool FUN__text__003d9080(int *param_1,ulong param_2)

{
  int *__src;
  size_t __n;
  bool bVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_2 == 0) {
    bVar1 = true;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x14);
    bVar1 = false;
    uVar6 = 0;
    __src = param_1 + 0x16;
    do {
      if (param_1 + 0x26 < (int *)(lVar4 + 2)) {
        lVar5 = *(long *)(param_1 + 2);
        __n = lVar4 - (long)__src;
        *(int **)(param_1 + 0x14) = __src;
        if ((long)__n < 0) {
          if (*(int *)(lVar5 + 0x28) == 0) {
            *(undefined4 *)(lVar5 + 0x28) = 0x16;
          }
LAB__text__003d9168:
          puVar3 = (undefined4 *)FUN__text__003d9014(param_1 + 4);
          if (*param_1 == 0) {
            *param_1 = 8;
          }
          *puVar3 = 5;
          return bVar1;
        }
        if (*(ulong *)(lVar5 + 0x20) < *(long *)(lVar5 + 0x10) + __n) {
          uVar2 = FUN__text__003d6a74(lVar5,__src,__n);
          if ((uVar2 & 1) == 0) goto LAB__text__003d9168;
        }
        else {
          memcpy((void *)(*(long *)(lVar5 + 0x18) + *(long *)(lVar5 + 0x10)),__src,__n);
          *(size_t *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + __n;
        }
      }
      uVar6 = uVar6 + 1;
      bVar1 = param_2 <= uVar6;
      **(undefined2 **)(param_1 + 0x14) = 0x2020;
      lVar4 = *(long *)(param_1 + 0x14) + 2;
      *(long *)(param_1 + 0x14) = lVar4;
    } while (param_2 != uVar6);
  }
  return bVar1;
}


