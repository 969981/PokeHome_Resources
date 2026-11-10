/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005316e8; name: FUN_.text__005316e8
 */


void FUN__text__005316e8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,char *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  size_t sVar4;
  void *__dest;
  undefined8 uVar5;
  ulong __n;
  undefined1 uStack_11;
  
  lVar3 = FUN__text__00532630(param_1,param_2,&uStack_11);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 8) = *param_3;
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(lVar3 + 0x26) = *(undefined8 *)((long)param_3 + 0x1e);
    *(undefined8 *)(lVar3 + 0x18) = uVar2;
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    *(undefined8 *)(lVar3 + 0x10) = uVar1;
    uVar1 = param_3[5];
    uVar2 = param_3[6];
    *(undefined4 *)(lVar3 + 0x40) = *(undefined4 *)(param_3 + 7);
    *(undefined8 *)(lVar3 + 0x30) = uVar1;
    *(undefined8 *)(lVar3 + 0x38) = uVar2;
    if ((*(long *)(lVar3 + 0x48) != 0) && (*(char *)(lVar3 + 0x50) != '\0')) {
      FUN__text__00400fc0(9);
      *(undefined1 *)(lVar3 + 0x50) = 0;
    }
    *(char **)(lVar3 + 0x48) = param_4;
    if ((param_4 != (char *)0x0) && (*(char *)(lVar3 + 0x50) == '\0')) {
      sVar4 = strlen(param_4);
      if ((int)sVar4 == 0) {
        *(undefined8 *)(lVar3 + 0x48) = 0;
        return;
      }
      __n = (ulong)((int)sVar4 + 1);
      __dest = (void *)FUN__text__00400f80(9,__n);
      *(void **)(lVar3 + 0x48) = __dest;
      if (__dest != (void *)0x0) {
        memcpy(__dest,param_4,__n);
        *(undefined1 *)(lVar3 + 0x50) = 1;
        return;
      }
    }
  }
  return;
}


