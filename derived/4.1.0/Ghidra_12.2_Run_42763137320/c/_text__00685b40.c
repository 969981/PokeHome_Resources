/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00685b40; name: FUN_.text__00685b40
 */


void FUN__text__00685b40(long param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar5 = *(long *)(param_1 + 0x70);
    do {
      lVar4 = lVar5;
      FUN__text__0068596c(lVar4 + 0x18,param_1 + 0x10);
      uVar2 = *(uint *)(param_1 + 0xd0);
      uVar1 = (ulong)*(uint *)(param_1 + 0xd4) + *(long *)(param_1 + 0xb0) * 0x100;
      uVar3 = 0;
      if ((ulong)uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      *(ulong *)(param_1 + 0x58) = uVar3 + *(long *)(lVar4 + 0x50);
      *(uint *)(param_1 + 0xd4) = (int)uVar1 - (int)uVar3 * uVar2;
      lVar5 = *(long *)(lVar4 + 0x60);
      *(long *)(lVar4 + 0x60) = lVar5 + 1;
      *(long *)(param_1 + 0x68) = lVar5;
      FUN__text__00685764(lVar4 + 0x18,param_1 + 0x10);
      *(undefined8 *)(lVar4 + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
      lVar5 = *(long *)(lVar4 + 0x70);
      param_1 = lVar4;
    } while (*(long *)(lVar4 + 0x70) != 0);
  }
  return;
}


