/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0031dab0; name: FUN_.text__0031dab0
 */


void FUN__text__0031dab0(undefined1 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  void *__src;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = FUN__text__00304b90();
  *param_1 = 0;
  memset(param_1 + 4,0,0x8d0);
  if (*(uint *)(param_2 + 0x3138a00) != 0) {
    uVar3 = 0;
    do {
      iVar1 = FUN__text__00305b40(lVar2,*(undefined8 *)(param_2 + 0x3138a08 + uVar3 * 8));
      if (iVar1 != 9000) {
        FUN__text__00305c80(param_1,iVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_2 + 0x3138a00));
  }
  uVar3 = FUN__text__00305a80(lVar2,0);
  if (*(int *)(param_2 + 0x3138a04) != 0) {
    uVar3 = uVar3 & 0xffffffff;
    uVar4 = 0;
    __src = (void *)(param_2 + 0x314a348);
    do {
      while (iVar1 = FUN__text__00305ad0(lVar2,__src), iVar1 == 9000) {
        if (0x464 < (uint)(uVar3 >> 3)) {
          return;
        }
        memcpy((void *)(lVar2 + uVar3 * 0x3a0 + 0x30),__src,0x3a0);
        FUN__text__00305c0c(param_1,uVar3);
        uVar3 = FUN__text__00305a80(lVar2,(int)uVar3 + 1);
        uVar3 = uVar3 & 0xffffffff;
        uVar4 = uVar4 + 1;
        __src = (void *)((long)__src + 0x3a0);
        if (*(uint *)(param_2 + 0x3138a04) <= uVar4) goto LAB__text__0031dc08;
      }
      FUN__text__00305c0c(param_1,iVar1);
      uVar4 = uVar4 + 1;
      __src = (void *)((long)__src + 0x3a0);
    } while (uVar4 < *(uint *)(param_2 + 0x3138a04));
  }
LAB__text__0031dc08:
  FUN__text__00305cb8(param_1,1);
  return;
}


