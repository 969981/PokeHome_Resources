/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cdba8; name: FUN_.text__005cdba8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cdba8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined1 uStack_29;
  undefined8 *local_28;
  
  local_38 = param_3;
  FUN__text__005cde24();
  local_28 = &local_38;
  uVar2 = *param_1;
  lVar1 = FUN__text__005ce6d0(param_2 + 0x120,&local_38,_DAT_008a01d8,&local_28,&uStack_29);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  return;
}


