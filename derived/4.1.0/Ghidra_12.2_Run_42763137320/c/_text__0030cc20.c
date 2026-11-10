/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030cc20; name: FUN_.text__0030cc20
 */


undefined8 FUN__text__0030cc20(undefined4 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = DAT_008e55f8;
  if (*(long *)(DAT_008e55f8 + 0x58) != 0) {
    if ((*(byte *)(*(long *)(DAT_008e55f8 + 0x58) + 0x25a) & 1) == 0) {
      return 1;
    }
    FUN__text__005e8af0(*(undefined8 *)(DAT_008e55f8 + 0x58));
    lVar2 = *(long *)(lVar1 + 0x58);
    *(undefined8 *)(lVar1 + 0x58) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *(undefined4 *)(lVar1 + 0x60);
    }
  }
  plVar3 = *(long **)(DAT_008e5608 + 0x50);
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[10] + 0x10))();
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,0);
  (**(code **)(plVar3[10] + 0x18))(plVar3 + 10);
  return 0;
}


