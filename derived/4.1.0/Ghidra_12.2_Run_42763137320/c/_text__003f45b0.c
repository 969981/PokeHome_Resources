/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f45b0; name: FUN_.text__003f45b0
 */


undefined4
FUN__text__003f45b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_5[3];
  iVar2 = nn::fs::ReadFile(*(undefined8 *)(param_2 + 0x20),*param_5,param_4,iVar1);
  uVar3 = 1;
  if (iVar2 != 0 || iVar1 == 0) {
    uVar3 = 2;
  }
  return uVar3;
}


