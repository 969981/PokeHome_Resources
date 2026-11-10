/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a5788; name: FUN_.text__001a5788
 */


undefined1 FUN__text__001a5788(long param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  lVar3 = FUN__text__00195844(uVar6,*(undefined4 *)(param_1 + 0x24));
  puVar1 = (undefined4 *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x90) != '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x94);
  }
  lVar4 = FUN__text__00195844(uVar6,*puVar1);
  uVar2 = *(int *)(lVar4 + 0xc) != 1;
  uVar5 = 2;
  if ((bool)uVar2) {
    uVar5 = 3;
  }
  if (*(int *)(lVar3 + 0xc) != 1) {
    uVar2 = uVar5;
  }
  return uVar2;
}


