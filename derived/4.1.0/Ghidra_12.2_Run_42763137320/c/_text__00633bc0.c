/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00633bc0; name: FUN_.text__00633bc0
 */


bool FUN__text__00633bc0(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  
  iVar2 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
  uVar3 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
  uVar4 = FUN__text__005fe794(iVar2,uVar3,*(undefined1 *)(param_1 + 0x54));
  if ((uVar4 & 1) == 0) {
    return false;
  }
  uVar4 = 0;
  bVar1 = true;
  puVar5 = (undefined2 *)&DAT_0075a85a;
  while ((iVar2 != *(int *)(puVar5 + -3) || ((uint)(ushort)puVar5[-1] != (uVar3 & 0xffff)))) {
    bVar1 = uVar4 < 0x7c;
    uVar4 = uVar4 + 1;
    puVar5 = puVar5 + 4;
    if (uVar4 == 0x7d) {
      return bVar1;
    }
  }
  FUN__text__00633c7c(param_1,*puVar5,0);
  return bVar1;
}


