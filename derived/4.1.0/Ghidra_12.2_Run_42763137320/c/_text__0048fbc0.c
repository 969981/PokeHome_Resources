/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048fbc0; name: FUN_.text__0048fbc0
 */


void FUN__text__0048fbc0(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint *__dest;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 uStack_21;
  
  uVar4 = *(uint *)(param_1 + 0x60);
  if (uVar4 == param_2) {
    return;
  }
  if ((uVar4 != 0) && (uVar5 = *(uint *)(param_1 + 0x28), uVar5 != 0)) {
    iVar6 = 0;
    do {
      iVar1 = iVar6 + (uVar5 >> 1);
      uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0xc);
      if (uVar7 == uVar4) {
        lVar3 = *(long *)(param_1 + 0x20) + (long)iVar1 * 0xc;
        iVar6 = *(int *)(lVar3 + 4) + -1;
        *(int *)(lVar3 + 4) = iVar6;
        if ((iVar6 == 0) && (uVar4 = *(uint *)(param_1 + 0x28), uVar4 != 0)) {
          uVar5 = *(uint *)(param_1 + 0x60);
          iVar6 = 0;
          uVar7 = uVar4;
          goto LAB__text__0048fcb0;
        }
        break;
      }
      if (uVar7 < uVar4) {
        iVar6 = iVar1 + 1;
      }
      uVar7 = uVar5 - (uVar7 < uVar4);
      uVar5 = uVar7 >> 1;
    } while (1 < uVar7);
  }
  goto LAB__text__0048fc4c;
  while( true ) {
    if (uVar2 < uVar5) {
      iVar6 = iVar1 + 1;
    }
    uVar2 = uVar7 - (uVar2 < uVar5);
    uVar7 = uVar2 >> 1;
    if (uVar2 < 2) break;
LAB__text__0048fcb0:
    iVar1 = iVar6 + (uVar7 >> 1);
    __dest = (uint *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0xc);
    uVar2 = *__dest;
    if (uVar2 == uVar5) {
      uVar4 = uVar4 - 1;
      if ((long)iVar1 < (long)(ulong)uVar4) {
        memmove(__dest,__dest + 3,
                (ulong)(((int)*(long *)(param_1 + 0x20) + uVar4 * 0xc) - (int)__dest));
        uVar4 = *(int *)(param_1 + 0x28) - 1;
      }
      *(uint *)(param_1 + 0x28) = uVar4;
      break;
    }
  }
LAB__text__0048fc4c:
  if ((param_2 != 0) && (lVar3 = FUN__text__00491720(param_1 + 0x20,param_2,&uStack_21), lVar3 != 0)
     ) {
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
    *(undefined1 *)(lVar3 + 8) = 1;
  }
  *(uint *)(param_1 + 0x60) = param_2;
  *(undefined1 *)(param_1 + 0xc4) = 1;
  return;
}


