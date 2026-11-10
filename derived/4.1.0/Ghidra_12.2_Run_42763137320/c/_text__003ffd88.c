/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ffd88; name: FUN_.text__003ffd88
 */


undefined8 *
FUN__text__003ffd88(long param_1,undefined8 param_2,undefined4 param_3,long param_4,
                   undefined8 param_5,long *param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_6 = 0;
  puVar2 = (undefined8 *)FUN__text__00400f80(7,0xd8);
  if (puVar2 == (undefined8 *)0x0) {
    FUN__text__003f60e0(param_1,*(undefined1 *)(param_4 + 0xd));
    puVar2 = (undefined8 *)FUN__text__00400f80(7,0xd8);
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB__text__003ffe54;
    }
  }
  FUN__text__00400664(puVar2);
  iVar1 = FUN__text__003fbcd4(puVar2,param_1,param_2,param_3,param_4,param_5,
                              *(undefined4 *)(param_1 + 0x618));
  if (iVar1 == 1) {
    puVar3 = puVar2 + 0xe;
  }
  else {
    (**(code **)*puVar2)(puVar2);
    FUN__text__00400fc0(7,puVar2);
    puVar3 = (undefined8 *)0x0;
    puVar2 = (undefined8 *)0x0;
  }
LAB__text__003ffe54:
  *param_6 = (long)puVar3;
  return puVar2;
}


