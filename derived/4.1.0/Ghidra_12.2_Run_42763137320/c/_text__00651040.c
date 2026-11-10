/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00651040; name: FUN_.text__00651040
 */


void FUN__text__00651040(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x3fc);
  puVar1 = (undefined8 *)(param_1 + 0xd0);
  if ((uVar2 & 4) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x100);
  }
  if ((uVar2 & 0x20) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x160);
  }
  if ((uVar2 & 0x40) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x120);
  }
  FUN__text__006599c0(param_2,0x80,0x70ddef,*(undefined8 *)(param_1 + 400),*puVar1);
  return;
}


