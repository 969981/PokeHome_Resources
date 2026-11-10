/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c4008; name: FUN_.text__003c4008
 */


void FUN__text__003c4008(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  FUN__text__001614e0(DAT_008e1550,*(undefined8 *)(param_1 + 0xc0));
  lVar1 = *(long *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  if (*(long *)(param_1 + 0xf8) == 0) {
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  else {
    FUN__text__005d9290(*(long *)(param_1 + 0xf8),param_1 + 0xf0);
    lVar1 = *(long *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x003c4148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


