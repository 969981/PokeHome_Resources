/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dc04c; name: FUN_.text__005dc04c
 */


void FUN__text__005dc04c(long param_1,ulong param_2,int param_3)

{
  long lVar1;
  long lVar2;
  size_t __n;
  int iVar3;
  void *__s;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 local_24;
  
  uVar6 = *(ulong *)(param_1 + 0xa0);
  if (param_3 != 0) {
    if (param_3 == 2) {
      param_2 = *(long *)(param_1 + 0x98) + param_2;
    }
    else {
      uVar4 = uVar6;
      if (param_3 != 1) goto LAB__text__005dc098;
      param_2 = uVar6 + param_2;
    }
  }
  *(ulong *)(param_1 + 0xa0) = param_2;
  uVar4 = param_2;
LAB__text__005dc098:
  uVar5 = *(ulong *)(param_1 + 0x98);
  if (*(char *)(param_1 + 0xa8) == '\0') {
    uVar4 = uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU);
    if ((long)uVar4 <= (long)uVar5) {
      uVar5 = uVar4;
    }
    *(ulong *)(param_1 + 0xa0) = uVar5;
    return;
  }
  __n = uVar4 - uVar5;
  if (__n != 0 && (long)uVar5 <= (long)uVar4) {
    plVar7 = *(long **)(param_1 + 8);
    __s = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,__n,8);
    memset(__s,0,__n);
    *(ulong *)(param_1 + 0xa0) = uVar6;
    local_24 = 0;
    iVar3 = nn::fs::WriteFile(*(undefined8 *)(param_1 + 0x90),uVar6,__s,__n,&local_24);
    if (iVar3 == 0) {
      lVar1 = *(long *)(param_1 + 0xa0) + __n;
      if (*(char *)(param_1 + 0xa8) == '\0') {
        lVar2 = *(long *)(param_1 + 0x98);
        if (lVar1 <= *(long *)(param_1 + 0x98)) {
          lVar2 = lVar1;
        }
        *(long *)(param_1 + 0xa0) = lVar2;
      }
      else {
        *(long *)(param_1 + 0xa0) = lVar1;
        if (*(long *)(param_1 + 0x98) < lVar1) {
          *(long *)(param_1 + 0x98) = lVar1;
        }
      }
    }
    if (__s != (void *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7,__s,__n,8);
    }
  }
  return;
}


