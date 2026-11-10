/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00591358; name: FUN_.text__00591358
 */


undefined8 FUN__text__00591358(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(param_1 + 0xe0);
  uVar5 = *(uint *)(param_1 + 200);
  uVar3 = uVar5 - uVar4;
  if (uVar4 <= uVar5 && uVar3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x68);
    if (uVar3 <= *(uint *)(param_1 + 0x68)) {
      uVar2 = uVar3;
    }
    if (uVar2 != 0) {
      memcpy((void *)(*(long *)(param_1 + 0xc0) + (ulong)uVar4),*(void **)(param_1 + 0x60),
             (ulong)uVar2);
      uVar4 = *(int *)(param_1 + 0xe0) + uVar2;
      *(ulong *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + (ulong)uVar2;
      uVar5 = *(uint *)(param_1 + 200);
      *(uint *)(param_1 + 0xe0) = uVar4;
      *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - uVar2;
      *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar2;
    }
  }
  if (uVar4 != uVar5) {
    return 0x3f;
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  iVar1 = *(int *)(param_1 + 0x30) + uVar5;
  *(int *)(param_1 + 0x78) = iVar1;
  if (*(short *)(param_1 + 0x54) == 1) {
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xb0) + -1;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x98);
    uVar4 = 0;
    if (uVar5 != 0) {
      uVar4 = *(uint *)(param_1 + 0x34) / uVar5;
    }
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x9c) + iVar1;
    uVar3 = *(int *)(param_1 + 0xb0) - 1;
    if (uVar3 <= uVar4) {
      uVar4 = uVar3;
    }
    *(uint *)(param_1 + 0xa8) = uVar4;
    if (*(uint *)(param_1 + 0x38) != *(int *)(param_1 + 0x24) - 1U) {
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar4 = *(uint *)(param_1 + 0x38) / uVar5;
      }
      if (uVar3 <= uVar4) {
        uVar4 = uVar3;
      }
      *(uint *)(param_1 + 0xac) = uVar4;
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0xa0) + iVar1;
      return 1;
    }
    *(uint *)(param_1 + 0xac) = uVar3;
  }
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30);
  return 1;
}


