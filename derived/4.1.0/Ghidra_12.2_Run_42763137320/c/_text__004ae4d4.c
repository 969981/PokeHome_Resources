/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ae4d4; name: FUN_.text__004ae4d4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ae4d4(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                        undefined4 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 local_44;
  
  puVar1 = _DAT_008a43d8;
  local_68 = 0;
  local_50 = 1;
  local_60 = 0;
  local_4c = 0xffffffff;
  uStack_64 = param_5;
  local_58 = param_6;
  local_44 = param_3;
  iVar2 = (**(code **)(*(long *)*_DAT_008a43d8 + 0x20))
                    ((long *)*_DAT_008a43d8,param_2,&local_68,0,param_1 + 0x40,1);
  if (iVar2 != 1) {
    local_50 = 0;
    iVar2 = (**(code **)(*(long *)*puVar1 + 0x20))
                      ((long *)*puVar1,param_2,&local_68,0,param_1 + 0x40,1);
    if (iVar2 != 1) {
      return;
    }
  }
  FUN__text__004ae5a0(param_1,param_4);
  return;
}


