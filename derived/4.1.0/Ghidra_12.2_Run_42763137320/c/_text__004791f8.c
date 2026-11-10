/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004791f8; name: FUN_.text__004791f8
 */


undefined4 FUN__text__004791f8(undefined4 param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 local_28;
  undefined4 local_24;
  
  lVar1 = FUN__text__0045b010();
  local_28 = 0;
  if (((lVar1 != 0) && (uVar3 = (ulong)*(byte *)(lVar1 + 0x1fd), uVar3 != 0xff)) &&
     (plVar2 = (long *)(lVar1 + uVar3 * 0x18 + 0x30), *plVar2 != 0)) {
    lVar1 = lVar1 + uVar3 * 0x18;
    local_24 = *(undefined4 *)(lVar1 + 0x40);
    local_28 = 0;
    FUN__text__0041a060(param_1,plVar2,&local_24,&local_28);
    *(undefined4 *)(lVar1 + 0x40) = local_24;
  }
  return local_28;
}


