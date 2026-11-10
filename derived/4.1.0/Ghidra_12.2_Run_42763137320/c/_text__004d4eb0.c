/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d4eb0; name: FUN_.text__004d4eb0
 */


void FUN__text__004d4eb0(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long alStack_410 [128];
  
  uVar1 = *(uint *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) {
    iVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    iVar3 = 0;
    do {
      if (((*(byte *)(lVar5 + 0x198) ^ 0xff) & 3) != 0 && (*(byte *)(lVar5 + 0x198) & 4) == 0) {
        iVar2 = *(int *)(lVar5 + 0x148);
        *(long *)((long)alStack_410 + (uVar4 * 8 - ((ulong)uVar1 * 8 + 0xf & 0xffffffff0)) + 0x400)
             = lVar5;
        uVar4 = (ulong)((int)uVar4 + 1);
        iVar3 = iVar2 + iVar3;
      }
      lVar5 = *(long *)(lVar5 + 0x18);
    } while (lVar5 != 0);
  }
  FUN__text__004d4f40(param_1,iVar3,uVar4);
  return;
}


