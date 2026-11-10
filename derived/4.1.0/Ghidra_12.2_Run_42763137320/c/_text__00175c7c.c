/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00175c7c; name: FUN_.text__00175c7c
 */


undefined8 FUN__text__00175c7c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    return 1;
  }
  uVar2 = FUN__text__0016afb0(param_1 + 0xe0,0);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    if (4 < *(uint *)(param_1 + 0xd0)) {
                    /* WARNING: Subroutine does not return */
      FUN__text__0011a180(0x717b65);
    }
    lVar1 = DAT_008e1e98 + (ulong)*(uint *)(param_1 + 0xd0) * 0x20;
    (**(code **)**(undefined8 **)(lVar1 + 8))();
    *(undefined8 *)(lVar1 + 8) = 0;
    (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
              (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),
               8);
    uVar3 = 1;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  return uVar3;
}


