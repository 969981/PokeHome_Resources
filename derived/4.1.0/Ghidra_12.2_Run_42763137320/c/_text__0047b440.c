/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047b440; name: FUN_.text__0047b440
 */


void FUN__text__0047b440(long param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  if ((uVar2 & 0x7fffffff) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      iVar1 = *(int *)(*(long *)(param_1 + 0x28) + lVar3 + 8);
      if (0 < iVar1) {
        *(undefined4 *)
         (*(long *)(*(long *)(param_1 + 0x28) + lVar3) + (ulong)(iVar1 - 1) * 0x10 + 0xc) =
             *(undefined4 *)(param_1 + 0x14);
        uVar2 = *(uint *)(param_1 + 0x30);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < (uVar2 & 0x7fffffff));
  }
  return;
}


