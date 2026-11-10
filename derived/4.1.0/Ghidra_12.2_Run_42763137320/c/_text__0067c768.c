/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067c768; name: FUN_.text__0067c768
 */


undefined8
FUN__text__0067c768(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*(code **)(param_1 + 0x7f0) == (code *)0x0) ||
     (iVar1 = (**(code **)(param_1 + 0x7f0))
                        (param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x8b8)), iVar1 == 0)) {
    uVar2 = FUN__text__006803b8(param_3);
    uVar3 = FUN__text__00679ef8(param_1,*(undefined4 *)(param_1 + 0x93c),uVar2,param_4);
    return uVar3;
  }
  return 0xfffffc7a;
}


