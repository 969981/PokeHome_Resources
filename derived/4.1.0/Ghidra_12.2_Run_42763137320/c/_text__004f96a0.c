/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f96a0; name: FUN_.text__004f96a0
 */


undefined4 FUN__text__004f96a0(long param_1,void *param_2,long param_3,uint param_4)

{
  char *pcVar1;
  void *__dest;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined1 uVar5;
  
  if (*(long *)(param_1 + 0x170) != 0) {
    FUN__text__00400fc0(2);
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  if (*(long *)(param_1 + 0x178) != 0) {
    FUN__text__00400fc0(2);
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  __dest = (void *)FUN__text__00400f80(2,(ulong)(param_4 << 2));
  *(void **)(param_1 + 0x170) = __dest;
  if (__dest == (void *)0x0) {
    uVar3 = 0x34;
    if (param_4 == 0) {
      uVar3 = 1;
    }
    return uVar3;
  }
  memcpy(__dest,param_2,(ulong)(param_4 << 2));
  lVar2 = FUN__text__00400f80(2,(ulong)param_4);
  *(long *)(param_1 + 0x178) = lVar2;
  if (lVar2 == 0) {
    return 0x34;
  }
  if (param_4 != 0) {
    if (param_4 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        pcVar1 = (char *)(param_3 + uVar4);
        uVar5 = 2;
        if (*pcVar1 == '\x01') {
          uVar5 = 3;
        }
        *(undefined1 *)(*(long *)(param_1 + 0x178) + uVar4) = uVar5;
        lVar2 = *(long *)(param_1 + 0x178) + uVar4;
        uVar4 = uVar4 + 2;
        uVar5 = 2;
        if (pcVar1[1] == '\x01') {
          uVar5 = 3;
        }
        *(undefined1 *)(lVar2 + 1) = uVar5;
      } while (((ulong)param_4 & 0xfffffffe) != uVar4);
    }
    if ((param_4 & 1) != 0) {
      uVar5 = 2;
      if (*(char *)(param_3 + uVar4) == '\x01') {
        uVar5 = 3;
      }
      *(undefined1 *)(*(long *)(param_1 + 0x178) + uVar4) = uVar5;
    }
  }
  return 1;
}


