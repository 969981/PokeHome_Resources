/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039bb68; name: FUN_.text__0039bb68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0039bb68(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN__text__005da7f0(&local_80,*_DAT_0089f550,param_2,*param_3);
  *(undefined8 *)(param_1 + 0xa8) = local_80;
  *(undefined8 *)(param_1 + 0xb0) = uStack_78;
  *(undefined4 *)(param_1 + 0xb8) = local_70;
  *(undefined8 *)(param_1 + 0xc0) = local_68;
  *(undefined8 *)(param_1 + 200) = uStack_60;
  *(undefined8 *)(param_1 + 0xd0) = local_58;
  if (*(long *)(param_1 + 0xd8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xd8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0xd8) = local_50;
  *(undefined8 *)(param_1 + 0xe0) = uStack_48;
  *(undefined8 *)(param_1 + 0xe8) = local_40;
  *(undefined8 *)(param_1 + 0xf0) = uStack_38;
  FUN__text__005dd648((undefined8 *)(param_1 + 0xa8),*param_3);
  return;
}


