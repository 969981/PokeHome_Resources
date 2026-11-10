/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003028c4; name: FUN_.text__003028c4
 */


bool FUN__text__003028c4(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x700fdc);
  if ((int)uVar2 < 1) {
    return false;
  }
  lVar4 = *param_2;
  if (lVar4 == *(long *)(param_1 + 0x2f0)) {
    return true;
  }
  lVar5 = 0;
  uVar6 = 1;
  bVar3 = true;
  while( true ) {
    lVar1 = param_1 + lVar5;
    if (lVar4 == *(long *)(lVar1 + 0x620)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x950)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0xc80)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0xfb0)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x12e0)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x1610)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x1940)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x1c70)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x1fa0)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x22d0)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x2600)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x2930)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x2c60)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x2f90)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x32c0)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x35f0)) break;
    if (lVar4 == *(long *)(lVar1 + 0x3920)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x3c50)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x3f80)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x42b0)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x45e0)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x4910)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x4c40)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x4f70)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x52a0)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x55d0)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x5900)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x5c30)) {
      return bVar3;
    }
    if (lVar4 == *(long *)(lVar1 + 0x5f60)) {
      return bVar3;
    }
    bVar3 = uVar6 < uVar2;
    if ((ulong)uVar2 * 0x5fa0 + -0x5fa0 == lVar5) {
      return bVar3;
    }
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 0x5fa0;
    if (lVar4 == *(long *)(lVar1 + 0x6290)) {
      return bVar3;
    }
  }
  return bVar3;
}


