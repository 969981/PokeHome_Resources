/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e1980; name: FUN_.text__005e1980
 */


void FUN__text__005e1980(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = (**(code **)(*(long *)*param_2 + 0x30))();
  uVar2 = (**(code **)(*(long *)*param_1 + 0x30))();
  uVar3 = (**(code **)(*(long *)*param_3 + 0x30))();
  uVar4 = (**(code **)(*(long *)*param_2 + 0x30))();
  if (uVar1 < uVar2) {
    lVar6 = *param_1;
    *param_1 = 0;
    if (uVar3 < uVar4) {
      lVar5 = *param_3;
      *param_3 = 0;
      *param_1 = lVar5;
      if ((long *)*param_3 != (long *)0x0) {
        (**(code **)(*(long *)*param_3 + 0x18))();
      }
      *param_3 = lVar6;
    }
    else {
      lVar5 = *param_2;
      *param_2 = 0;
      *param_1 = lVar5;
      if ((long *)*param_2 != (long *)0x0) {
        (**(code **)(*(long *)*param_2 + 0x18))();
      }
      *param_2 = lVar6;
      uVar1 = (**(code **)(*(long *)*param_3 + 0x30))();
      uVar2 = (**(code **)(*(long *)*param_2 + 0x30))();
      if (uVar1 < uVar2) {
        lVar5 = *param_2;
        *param_2 = 0;
        lVar6 = *param_3;
        *param_3 = 0;
        *param_2 = lVar6;
        if ((long *)*param_3 != (long *)0x0) {
          (**(code **)(*(long *)*param_3 + 0x18))();
        }
        *param_3 = lVar5;
        return;
      }
    }
  }
  else if (uVar3 < uVar4) {
    lVar5 = *param_2;
    *param_2 = 0;
    lVar6 = *param_3;
    *param_3 = 0;
    *param_2 = lVar6;
    if ((long *)*param_3 != (long *)0x0) {
      (**(code **)(*(long *)*param_3 + 0x18))();
    }
    *param_3 = lVar5;
    uVar1 = (**(code **)(*(long *)*param_2 + 0x30))();
    uVar2 = (**(code **)(*(long *)*param_1 + 0x30))();
    if (uVar1 < uVar2) {
      lVar5 = *param_1;
      *param_1 = 0;
      lVar6 = *param_2;
      *param_2 = 0;
      *param_1 = lVar6;
      if ((long *)*param_2 != (long *)0x0) {
        (**(code **)(*(long *)*param_2 + 0x18))();
      }
      *param_2 = lVar5;
      return;
    }
  }
  return;
}


