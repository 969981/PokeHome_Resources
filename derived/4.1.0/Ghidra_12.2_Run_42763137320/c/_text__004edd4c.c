/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004edd4c; name: FUN_.text__004edd4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004edd4c(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x138);
  if (lVar3 == 0) {
    return;
  }
  uVar1 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar2 = FUN__text__004ec6d4();
    uVar1 = FUN__text__004ed5a0(*(undefined8 *)(param_1 + 0x48));
    if (*(int *)(param_1 + 0x40) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined4 *)(param_1 + 0x10) = uVar1;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined1 *)(param_1 + 0x20) = 0xff;
      *(undefined1 *)(param_1 + 0x28) = 0xff;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    uVar1 = FUN__text__00435b28(*_DAT_008a45f0,param_1 + 8,*(undefined8 *)(lVar3 + 4));
  }
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  FUN__text__00433670(param_1,*(undefined8 *)(lVar3 + 4));
  if (*(int *)(param_1 + 0x68) == 0) {
    uVar1 = FUN__text__004efa5c(*(undefined8 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    FUN__text__004edb70(param_1);
    return;
  }
  FUN__text__004edb70(param_1);
  return;
}


