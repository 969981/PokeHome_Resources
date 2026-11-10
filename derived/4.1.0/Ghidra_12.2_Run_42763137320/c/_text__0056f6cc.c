/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0056f6cc; name: FUN_.text__0056f6cc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0056f6cc(long param_1)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x30) & 0xff;
  lVar1 = *(long *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x38) = uVar3;
  uVar4 = uVar3;
  if (*(char *)(lVar1 + 0x20) == '\0' && (*(uint *)(param_1 + 0x30) & 0x8000) != 0) {
    uVar4 = uVar3 - 1;
    *(uint *)(param_1 + 0x38) = uVar4;
  }
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x2c));
  if (*(char *)(lVar1 + 0x21) != '\0') {
    uVar4 = 1;
  }
  *(uint *)(param_1 + 0x3c) = uVar4;
  fVar5 = *(float *)(lVar1 + 0x1c) * fVar5;
  uVar4 = (uint)fVar5;
  *(uint *)(param_1 + 0x40) = uVar4;
  fVar5 = expf(-4.4 / (float)(int)fVar5);
  *(float *)(param_1 + 0x68) = fVar5;
  lVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                    (*(long **)(param_1 + 0x20),(ulong)uVar3 * (ulong)uVar4 * 4,0x71481e,0xf5);
  *(long *)(param_1 + 0x50) = lVar1;
  if (lVar1 == 0) {
    return 0x34;
  }
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x58) = 0;
  pcVar2 = _DAT_008a3c20;
  if ((((*(char *)(lVar1 + 0x21) != '\0') && (*(int *)(param_1 + 0x38) != 1)) &&
      (pcVar2 = FUN__text__005703c0, *(char *)(param_1 + 0x31) < '\0')) &&
     (pcVar2 = FUN__text__005709b0, *(char *)(lVar1 + 0x20) != '\0')) {
    pcVar2 = FUN__text__005703c0;
  }
  *(code **)(param_1 + 8) = pcVar2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(uint *)(param_1 + 0x3c) != 0) {
    lVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                      (*(long **)(param_1 + 0x20),(ulong)*(uint *)(param_1 + 0x3c) << 4,0x71481e,
                       0x10b);
    *(long *)(param_1 + 0x48) = lVar1;
    if (lVar1 == 0) {
      return 0x34;
    }
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(undefined1 *)(lVar1 + 0x22) = 0;
  return 1;
}


