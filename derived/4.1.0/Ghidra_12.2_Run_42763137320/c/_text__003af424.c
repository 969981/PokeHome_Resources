/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003af424; name: FUN_.text__003af424
 */


undefined8 FUN__text__003af424(long param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(int *)(param_1 + 0x7b4) = param_3;
  uVar2 = FUN__text__003b74cc(*(undefined8 *)(param_1 + 0x800));
  if ((param_3 == 1) && ((uVar2 & 1) != 0)) {
    uVar2 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x820) + 0x38))();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar3 = 3;
  }
  else {
    uVar1 = param_3 - 3;
    uVar2 = FUN__text__003b7434(*(undefined8 *)(param_1 + 0x800),param_2);
    if ((uVar1 < 0xfffffffe) || ((uVar2 & 1) == 0)) {
      uVar2 = FUN__text__003b71a8(*(undefined8 *)(param_1 + 0x800),param_2);
      if ((uVar1 < 0xfffffffe) || ((uVar2 & 1) == 0)) {
        uVar2 = FUN__text__003b7094(*(undefined8 *)(param_1 + 0x800),param_2);
        if (uVar1 < 0xfffffffe) {
          return 0;
        }
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        uVar2 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x820) + 0x38))();
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        uVar3 = 1;
      }
      else {
        uVar2 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x820) + 0x38))();
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        uVar3 = 2;
      }
    }
    else {
      uVar2 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x820) + 0x38))();
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      uVar3 = 4;
    }
  }
  uVar4 = *param_2;
  *(undefined4 *)(param_1 + 0x7a8) = uVar3;
  *(undefined8 *)(param_1 + 0x7ac) = uVar4;
  return 1;
}


