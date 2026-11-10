/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016c208; name: FUN_.text__0016c208
 */


undefined8 FUN__text__0016c208(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN__text__00321ac0();
  if ((*(char *)(lVar1 + 0x934d4) != '\0') &&
     (uVar2 = FUN__text__0010fca4(param_2), (uVar2 & 1) != 0)) {
    lVar1 = *(long *)(param_2 + 0x60);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    *(undefined1 *)(lVar1 + 99) = 1;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  lVar1 = *(long *)(DAT_008e1d98 + 0x50);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    uVar2 = FUN__text__0064db70(lVar1);
    if ((uVar2 & 1) == 0) goto LAB__text__0016ca78;
  }
  if (*(uint *)(param_1 + 0x68) < 0x2f) {
                    /* WARNING: Could not emulate address calculation at 0x0016c2c0 */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(&UNK__text__0016c2cc +
                      (ulong)*(ushort *)((ulong)*(uint *)(param_1 + 0x68) * 2 + 0x725638) * 4))();
    return uVar3;
  }
  if (lVar1 == 0) {
    return 0;
  }
LAB__text__0016ca78:
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return 0;
}


