/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043219c; name: FUN_.text__0043219c
 */


undefined8 FUN__text__0043219c(long param_1,long param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(ushort *)(param_2 + 4);
  uVar3 = (ulong)uVar1;
  if (uVar3 == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      return 1;
    }
    FUN__text__00400fc0(0);
    puVar2 = (ushort *)0x0;
  }
  else {
    uVar4 = (ulong)((uint)uVar1 * 2 + 5) & 0x3fffc;
    puVar2 = (ushort *)FUN__text__00400fa0(0,*(undefined8 *)(param_1 + 0x18),uVar4 + uVar3 * 4);
    if (puVar2 == (ushort *)0x0) {
      return 0x34;
    }
    *puVar2 = uVar1;
    memcpy(puVar2 + 1,(void *)(param_2 + 6),uVar3 * 2);
    memcpy((void *)((long)puVar2 + uVar4),(void *)(param_2 + 6 + uVar3 * 2),uVar3 * 4);
  }
  *(ushort **)(param_1 + 0x18) = puVar2;
  return 1;
}


