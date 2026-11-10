/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0017a224; name: FUN_.text__0017a224
 */


undefined8 FUN__text__0017a224(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    return 1;
  }
  uVar2 = FUN__text__0016afb0(param_1 + 0x60,0);
  lVar1 = DAT_008e1f08;
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(param_1 + 0x50) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN__text__0011a180(0x717b65);
    }
    (**(code **)**(undefined8 **)(DAT_008e1f08 + 8))();
    *(undefined8 *)(lVar1 + 8) = 0;
    (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
              (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),
               8);
    uVar3 = 1;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return uVar3;
}


