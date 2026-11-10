/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058f8a8; name: FUN_.text__0058f8a8
 */


void FUN__text__0058f8a8(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = *(short *)(param_1 + 0x54) != 1;
  piVar1 = (int *)(param_1 + 0x2c);
  if (bVar4) {
    piVar1 = (int *)(param_1 + 0xd4);
  }
  iVar3 = 0;
  if (bVar4) {
    iVar3 = *(int *)(param_1 + 0xcc);
  }
  iVar2 = *piVar1;
  *(undefined1 *)(param_1 + 0xc4) = 1;
  *(int *)(param_1 + 0xc0) =
       (*(int *)(param_1 + 0x110) + iVar3 + iVar2) - (int)*(undefined8 *)(param_1 + 0x108);
  FUN__text__0058f2e0(param_1 + 0x58,*(undefined2 *)(param_1 + 0xdc),
                      *(undefined8 *)(param_1 + 0x108),param_1 + 0x118,param_1 + 0x120);
  iVar3 = *(int *)(param_1 + 0x5c);
  *(int *)(param_2 + 0x2c) = iVar3;
  if (iVar3 == 2) {
    return;
  }
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
  *(ulong *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + (ulong)*(uint *)(param_1 + 100);
  FUN__text__004ddbe4(param_1,*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x58),
                      *(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xb8),param_2);
  return;
}


