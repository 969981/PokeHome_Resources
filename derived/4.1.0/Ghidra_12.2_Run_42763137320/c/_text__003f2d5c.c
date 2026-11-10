/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f2d5c; name: FUN_.text__003f2d5c
 */


bool FUN__text__003f2d5c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                        long param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 local_40;
  float local_38;
  undefined8 local_34;
  float local_2c;
  double local_28;
  double dStack_20;
  double local_18;
  
  local_34 = param_3._0_8_;
  local_40 = param_2._0_8_;
  local_28 = (double)param_1._0_4_;
  dStack_20 = (double)param_1._4_4_;
  local_38 = -param_2._8_4_;
  local_2c = -param_3._8_4_;
  local_18 = (double)-param_1._8_4_;
  iVar1 = (**(code **)(**(long **)(param_4 + 0x60) + 0x70))
                    (*(long **)(param_4 + 0x60),param_5,&local_40);
  return iVar1 == 1;
}


