/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00407e80; name: FUN_.text__00407e80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00407e80(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*_DAT_008a4598 == '\0') {
    iVar2 = FUN__text__00407f70(param_1);
    pcVar1 = DAT_00ae9a20;
  }
  else {
    iVar2 = FUN__text__00406cc0(param_1,1);
    pcVar1 = DAT_00ae9a20;
  }
  DAT_00ae9a20 = pcVar1;
  if (iVar2 != 1) {
    (**(code **)(*(long *)(param_1 + 0x158) + 0x28))(param_1 + 0x158);
    (**(code **)(*(long *)(param_1 + 0x1e8) + 0x28))(param_1 + 0x1e8);
    (**(code **)(*(long *)(param_1 + 0x278) + 0x28))(param_1 + 0x278);
    (**(code **)(*(long *)(param_1 + 0x308) + 0x28))(param_1 + 0x308);
    FUN__text__00406cc0(param_1,0);
    return 2;
  }
  if (pcVar1 != (code *)0x0) {
    uVar3 = FUN__text__0040dc30();
    (*pcVar1)(uVar3,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),0,1);
  }
  FUN__text__004af920(DAT_00ae9a40);
  return 1;
}


