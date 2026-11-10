/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f79fc; name: FUN_.text__003f79fc
 */


undefined8 *
FUN__text__003f79fc(undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  *param_4 = 0;
  puVar2 = (undefined8 *)FUN__text__00400f80(7,200);
  if (puVar2 == (undefined8 *)0x0) {
    FUN__text__003f60e0(param_1,100);
    puVar2 = (undefined8 *)FUN__text__00400f80(7,200);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  FUN__text__003f83a4(puVar2);
  iVar1 = FUN__text__003faf34(puVar2,param_1,param_2,param_3);
  if (iVar1 == 1) {
    *param_4 = (long)(puVar2 + 0xe);
    return puVar2;
  }
  (**(code **)*puVar2)(puVar2);
  FUN__text__00400fc0(7,puVar2);
  return (undefined8 *)0x0;
}


