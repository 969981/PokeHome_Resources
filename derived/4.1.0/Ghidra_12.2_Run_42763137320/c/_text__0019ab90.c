/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019ab90; name: FUN_.text__0019ab90
 */


void FUN__text__0019ab90(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long local_40 [4];
  
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[4];
    plVar2 = (long *)param_2[4];
    if (plVar1 == param_1) {
      if (plVar2 == param_2) {
        (**(code **)(*param_1 + 0x18))(param_1,local_40);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
        (**(code **)(local_40[0] + 0x18))(local_40,param_2);
        (**(code **)(local_40[0] + 0x20))(local_40);
      }
      else {
        (**(code **)(*param_1 + 0x18))(param_1,param_2);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = param_2[4];
      }
      param_2[4] = (long)param_2;
    }
    else if (plVar2 == param_2) {
      (**(code **)(*param_2 + 0x18))(param_2,param_1);
      (**(code **)(*(long *)param_2[4] + 0x20))();
      param_2[4] = param_1[4];
      param_1[4] = (long)param_1;
    }
    else {
      param_1[4] = (long)plVar2;
      param_2[4] = (long)plVar1;
    }
  }
  return;
}


