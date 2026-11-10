/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cd580; name: FUN_.text__004cd580
 */


undefined8 FUN__text__004cd580(long param_1,uint param_2)

{
  uint uVar1;
  void *__s;
  long lVar2;
  long lVar3;
  uint uVar4;
  size_t __n;
  ulong uVar5;
  
  uVar5 = (ulong)*(ushort *)(param_1 + 0x12) + 7 >> 3;
  __n = uVar5 << 1;
  __s = (void *)FUN__text__00400f80(0,__n);
  *(void **)(param_1 + 0x28) = __s;
  if (__s == (void *)0x0) {
    return 2;
  }
  *(ulong *)(param_1 + 0x30) = (long)__s + uVar5;
  memset(__s,0,__n);
  uVar4 = param_2 & 0xffff;
  if ((param_2 & 0xfffc) != 0) {
    uVar4 = 4;
  }
  if (uVar4 <= *(uint *)(param_1 + 0x24)) {
    return 1;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(uint *)(param_1 + 0x20);
    lVar2 = FUN__text__00400f80(0,((ulong)uVar4 & 0x7fff) << 1);
    if (lVar2 != 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 != 0) && (lVar3 != lVar2)) {
        if (uVar1 != 0) {
          if (uVar1 == 1) {
            uVar5 = 0;
          }
          else {
            uVar5 = 0;
            do {
              lVar3 = uVar5 * 2;
              uVar5 = uVar5 + 2;
              *(undefined2 *)(lVar2 + lVar3) = *(undefined2 *)(*(long *)(param_1 + 0x18) + lVar3);
              ((undefined2 *)(lVar2 + lVar3))[1] =
                   *(undefined2 *)(*(long *)(param_1 + 0x18) + lVar3 + 2);
            } while (((ulong)uVar1 & 0xfffffffe) != uVar5);
          }
          if ((uVar1 & 1) != 0) {
            *(undefined2 *)(lVar2 + uVar5 * 2) =
                 *(undefined2 *)(*(long *)(param_1 + 0x18) + uVar5 * 2);
          }
          lVar3 = *(long *)(param_1 + 0x18);
        }
        FUN__text__00400fc0(0,lVar3);
      }
      goto LAB__text__004cd6e0;
    }
  }
  else {
    lVar2 = FUN__text__00400fa0(0);
    if (lVar2 != 0) {
LAB__text__004cd6e0:
      *(long *)(param_1 + 0x18) = lVar2;
      *(uint *)(param_1 + 0x24) = uVar4;
      return 1;
    }
  }
  return 0x34;
}


