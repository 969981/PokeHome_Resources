/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00680340; name: FUN_.text__00680340
 */


undefined8
FUN__text__00680340(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN__text__006803b8(param_4);
  uVar3 = FUN__text__0067ad9c(param_1,param_2,uVar1);
  if ((int)uVar3 == 0) {
    if ((*(code **)(param_1 + 0x7f0) == (code *)0x0) ||
       (iVar2 = (**(code **)(param_1 + 0x7f0))
                          (param_1,param_3,param_4,*(undefined8 *)(param_1 + 0x8b8)), iVar2 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xfffffc7a;
    }
  }
  return uVar3;
}


