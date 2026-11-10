/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f4638; name: FUN_.text__003f4638
 */


undefined4
FUN__text__003f4638(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14;
  
  local_14 = 0;
  iVar1 = nn::fs::WriteFile(*(undefined8 *)(param_2 + 0x20),*param_5,param_4,param_5[3],&local_14);
  uVar2 = 1;
  if (iVar1 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}


