/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00651724; name: FUN_.text__00651724
 */


undefined8 FUN__text__00651724(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  local_28 = 0;
  FUN__text__0065425c(param_1,&local_28);
  do {
    lVar1 = FUN__text__0065426c(&local_28);
    if (lVar1 == 0) {
      return 0;
    }
    puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x18) + 0x10);
  } while (puVar2 == (undefined8 *)0x0);
  return *puVar2;
}


