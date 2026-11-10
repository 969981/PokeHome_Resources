/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055d720; name: FUN_.text__0055d720
 */


void FUN__text__0055d720(long *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*(ushort *)((long)param_1 + 0xc);
  if (*(ushort *)((long)param_1 + 0xc) != 0) {
    uVar1 = *(undefined2 *)((long)param_2 + 0x12);
    lVar3 = 0;
    uVar4 = 0;
    do {
      if ((*(uint *)(param_1 + 1) >> (ulong)((uint)uVar4 & 0x1f) & 1) != 0) {
        FUN__text__0055d7b0(*param_1 + lVar3,*param_2,uVar1,*(undefined2 *)(param_2 + 2));
        uVar2 = (ulong)*(ushort *)((long)param_1 + 0xc);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x20;
    } while (uVar4 < uVar2);
  }
  return;
}


